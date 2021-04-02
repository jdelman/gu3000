#include <gu3000graphic.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXBUFSIZE 1024

int main(int argc, char *argv[]) {
  VFD vfd;
  char linebuf[MAXBUFSIZE];

  for (int i = 0; vfd.fontList[i] != NULL; i++) {
    Font *font = vfd.fontList[i];
    for (int p = 0; p < 2; p++) {
      vfd.clear();
      vfd.setFontDefault();
      if (p == 1) {
        sprintf(
            linebuf,
            "Name:%s(proportional)\nSize:%d(max)x%ddots(%d(min)x%d lines)\n",
            font->name, font->width + font->xspace, font->height + font->yspace,
            vfd.xsize / (font->width + font->xspace),
            vfd.ysize / (font->height + font->yspace));
      } else {
        sprintf(linebuf, "Name:%s(fixed width)\nSize:%dx%ddots(%dx%d lines)\n",
                font->name, font->width + font->xspace,
                font->height + font->yspace,
                vfd.xsize / (font->width + font->xspace),
                vfd.ysize / (font->height + font->yspace));
      }
      vfd.puts(linebuf);
      sprintf(linebuf, "Code:0x%02X-0x%02X(%dcodes)\n\n", font->firstcode,
              font->lastcode, font->lastcode - font->firstcode + 1);
      vfd.puts(linebuf);

      vfd.setFont(font);
      if (p == 1) {
        vfd.setFontProportional();
      } else {
        vfd.setFontFixedWidth();
      }
      for (int c = font->firstcode; c <= font->lastcode; c++) {
        if (font->firstcode >= 0x20) {
          if (c == '0' || c == 'A' || c == 'a') {
            vfd.putchar('\n');
          }
        }
        if (font->width > 8) {
          if (c == 'R' || c == 'r') {
            vfd.putchar('\n');
          }
        }
        vfd.putchar(c);
      }
      vfd.show();
      // getchar();
      delay(1000);
    }
  }
  exit(EXIT_SUCCESS);
}
