// MICR(Magnetic Ink Character Recognition) like font
// not an original MICR

const unsigned char bmp_MICRlike6x6[] = {
    //
    0b000000,
    0b000000,
    0b000000,
    0b000000,
    0b000000,
    0b000000,
    //!
    0b000000,
    0b010111,
    0b010110,
    0b000000,
    0b000000,
    0b000000,
    // "
    0b000000,
    0b000011,
    0b000000,
    0b000011,
    0b000000,
    0b000000,
    // #
    0b001010,
    0b011111,
    0b001010,
    0b011111,
    0b001010,
    0b000000,
    // $
    0b010111,
    0b010101,
    0b010111,
    0b011101,
    0b011101,
    0b000000,
    // %
    0b010011,
    0b001011,
    0b000100,
    0b011010,
    0b011001,
    0b000000,
    // &
    0b011100,
    0b011111,
    0b010101,
    0b011101,
    0b000100,
    0b000000,
    // '
    0b000000,
    0b000000,
    0b000011,
    0b000000,
    0b000000,
    0b000000,
    // (
    0b000000,
    0b001110,
    0b010001,
    0b010001,
    0b000000,
    0b000000,
    // )
    0b000000,
    0b010001,
    0b010001,
    0b001110,
    0b000000,
    0b000000,
    // *
    0b010101,
    0b001110,
    0b011111,
    0b001110,
    0b010101,
    0b000000,
    // +
    0b000100,
    0b000100,
    0b011111,
    0b000100,
    0b000100,
    0b000000,
    // ,
    0b000000,
    0b010100,
    0b001100,
    0b000000,
    0b000000,
    0b000000,
    // -
    0b000000,
    0b000100,
    0b000100,
    0b000100,
    0b000000,
    0b000000,
    // .
    0b000000,
    0b000000,
    0b011000,
    0b011000,
    0b000000,
    0b000000,
    // /
    0b010000,
    0b001000,
    0b000100,
    0b000010,
    0b000001,
    0b000000,
    // 0
    0b001110,
    0b010001,
    0b010001,
    0b010001,
    0b001110,
    0b000000,
    // 1
    0b000000,
    0b011001,
    0b011111,
    0b011000,
    0b000000,
    0b000000,
    // 2
    0b011101,
    0b010101,
    0b010101,
    0b010111,
    0b000000,
    0b000000,
    // 3
    0b010101,
    0b010101,
    0b010101,
    0b011111,
    0b011100,
    0b000000,
    // 4
    0b001111,
    0b001111,
    0b001000,
    0b011100,
    0b011100,
    0b000000,
    // 5
    0b010111,
    0b010101,
    0b010101,
    0b010101,
    0b011101,
    0b000000,
    // 6
    0b011111,
    0b010101,
    0b010101,
    0b010101,
    0b011100,
    0b000000,
    // 7
    0b000011,
    0b000001,
    0b011101,
    0b000101,
    0b000011,
    0b000000,
    // 8
    0b011000,
    0b011111,
    0b010101,
    0b011111,
    0b011000,
    0b000000,
    // 9
    0b000111,
    0b000101,
    0b000101,
    0b011101,
    0b011111,
    0b000000,
    // :
    0b000000,
    0b000000,
    0b001010,
    0b001010,
    0b000000,
    0b000000,
    // ;
    0b000000,
    0b000000,
    0b001010,
    0b011010,
    0b000000,
    0b000000,
    // <
    0b000000,
    0b000100,
    0b001010,
    0b010001,
    0b000000,
    0b000000,
    // =
    0b000000,
    0b001010,
    0b001010,
    0b001010,
    0b000000,
    0b000000,
    // >
    0b000000,
    0b010001,
    0b001010,
    0b000100,
    0b000000,
    0b000000,
    // ?
    0b000011,
    0b000001,
    0b010101,
    0b000111,
    0b000111,
    0b000000,
    // @
    0b011101,
    0b010101,
    0b011101,
    0b011101,
    0b011111,
    0b000000,
    // A
    0b011111,
    0b011101,
    0b000101,
    0b000101,
    0b011111,
    0b000000,
    // B
    0b011111,
    0b011101,
    0b010101,
    0b010111,
    0b011100,
    0b000000,
    // C
    0b011111,
    0b011101,
    0b010001,
    0b010001,
    0b011011,
    0b000000,
    // D
    0b011111,
    0b011101,
    0b010001,
    0b010001,
    0b001110,
    0b000000,
    // E
    0b011111,
    0b011101,
    0b010101,
    0b010101,
    0b010001,
    0b000000,
    // F
    0b011111,
    0b011101,
    0b000101,
    0b000101,
    0b000001,
    0b000000,
    // G
    0b011111,
    0b011101,
    0b010001,
    0b010101,
    0b011101,
    0b000000,
    // H
    0b011111,
    0b011100,
    0b000100,
    0b000100,
    0b011111,
    0b000000,
    // I
    0b000000,
    0b011111,
    0b011100,
    0b000000,
    0b000000,
    0b000000,
    // J
    0b011000,
    0b010000,
    0b010000,
    0b011111,
    0b011100,
    0b000000,
    // K
    0b011111,
    0b011100,
    0b000100,
    0b000111,
    0b011100,
    0b000000,
    // L
    0b011111,
    0b011100,
    0b010000,
    0b010000,
    0b010000,
    0b000000,
    // M
    0b011111,
    0b000111,
    0b011111,
    0b000001,
    0b011111,
    0b000000,
    // N
    0b011111,
    0b011101,
    0b000001,
    0b000001,
    0b011111,
    0b000000,
    // O
    0b011111,
    0b010001,
    0b010001,
    0b010011,
    0b011111,
    0b000000,
    // P
    0b011111,
    0b011101,
    0b000101,
    0b000101,
    0b000111,
    0b000000,
    // Q
    0b011111,
    0b010001,
    0b011001,
    0b011001,
    0b011111,
    0b000000,
    // R
    0b011111,
    0b011101,
    0b000101,
    0b000111,
    0b011100,
    0b000000,
    // S
    0b010111,
    0b010101,
    0b010101,
    0b011101,
    0b011101,
    0b000000,
    // T
    0b000001,
    0b000001,
    0b011111,
    0b011101,
    0b000001,
    0b000000,
    // U
    0b011111,
    0b011100,
    0b010000,
    0b010000,
    0b011111,
    0b000000,
    // V
    0b000111,
    0b011111,
    0b010000,
    0b011100,
    0b000111,
    0b000000,
    // W
    0b011111,
    0b011100,
    0b011111,
    0b010000,
    0b011111,
    0b000000,
    // X
    0b011011,
    0b011100,
    0b000100,
    0b000100,
    0b011011,
    0b000000,
    // Y
    0b000111,
    0b000100,
    0b011100,
    0b011100,
    0b000111,
    0b000000,
    // Z
    0b011101,
    0b011101,
    0b010101,
    0b010101,
    0b010111,
    0b000000,
    // [
    0b000000,
    0b011111,
    0b010001,
    0b010001,
    0b000000,
    0b000000,
    // "\"
    0b000001,
    0b000010,
    0b000100,
    0b001000,
    0b010000,
    0b000000,
    // ]
    0b000000,
    0b010001,
    0b010001,
    0b011111,
    0b000000,
    0b000000,
    // ^
    0b000100,
    0b000010,
    0b000001,
    0b000010,
    0b000100,
    0b000000,
    // _
    0b000000,
    0b010000,
    0b010000,
    0b010000,
    0b000000,
    0b000000,
    // `
    0b000011,
    0b000101,
    0b000000,
    0b000000,
    0b000000,
    0b000000,
    // a
    0b011101,
    0b011101,
    0b010101,
    0b011111,
    0b000000,
    0b000000,
    // b
    0b011111,
    0b011100,
    0b010100,
    0b011100,
    0b000000,
    0b000000,
    // c
    0b011111,
    0b011001,
    0b010001,
    0b010001,
    0b000000,
    0b000000,
    // d
    0b011100,
    0b010100,
    0b011100,
    0b011111,
    0b000000,
    0b000000,
    // e
    0b011111,
    0b011101,
    0b010101,
    0b010111,
    0b000000,
    0b000000,
    // f
    0b000100,
    0b011111,
    0b011101,
    0b000101,
    0b000000,
    0b000000,
    // g
    0b010111,
    0b010101,
    0b011101,
    0b011111,
    0b000000,
    0b000000,
    // h
    0b011111,
    0b011100,
    0b000100,
    0b011100,
    0b000000,
    0b000000,
    // i
    0b000000,
    0b011101,
    0b011000,
    0b000000,
    0b000000,
    0b000000,
    // j
    0b011000,
    0b010000,
    0b011101,
    0b011000,
    0b000000,
    0b000000,
    // k
    0b011111,
    0b011100,
    0b000111,
    0b011100,
    0b000000,
    0b000000,
    // l
    0b000000,
    0b000001,
    0b011111,
    0b011100,
    0b000000,
    0b000000,
    // m
    0b011111,
    0b000011,
    0b011111,
    0b000001,
    0b011111,
    0b000000,
    // n
    0b011111,
    0b011001,
    0b000001,
    0b011111,
    0b000000,
    0b000000,
    // o
    0b011111,
    0b010001,
    0b010011,
    0b011111,
    0b000000,
    0b000000,
    // p
    0b011111,
    0b011101,
    0b000101,
    0b000111,
    0b000000,
    0b000000,
    // q
    0b000111,
    0b000101,
    0b011101,
    0b011111,
    0b000000,
    0b000000,
    // r
    0b011111,
    0b011001,
    0b000001,
    0b000001,
    0b000000,
    0b000000,
    // s
    0b010111,
    0b010101,
    0b011101,
    0b011101,
    0b000000,
    0b000000,
    // t
    0b000010,
    0b011111,
    0b010010,
    0b011010,
    0b011000,
    0b000000,
    // u
    0b011111,
    0b011100,
    0b010000,
    0b011111,
    0b000000,
    0b000000,
    // v
    0b000011,
    0b011111,
    0b010000,
    0b011100,
    0b000111,
    0b000000,
    // w
    0b011111,
    0b011000,
    0b011111,
    0b010000,
    0b011111,
    0b000000,
    // x
    0b011011,
    0b011100,
    0b000100,
    0b011011,
    0b000000,
    0b000000,
    // y
    0b010111,
    0b010100,
    0b011100,
    0b011111,
    0b000000,
    0b000000,
    // z
    0b011101,
    0b011101,
    0b010101,
    0b010111,
    0b000000,
    0b000000,
    // {
    0b000000,
    0b000100,
    0b011011,
    0b010001,
    0b010001,
    0b000000,
    // |
    0b000000,
    0b000000,
    0b011111,
    0b000000,
    0b000000,
    0b000000,
    // }
    0b000000,
    0b010001,
    0b010001,
    0b011011,
    0b000100,
    0b000000,
    // ~
    0b000010,
    0b000001,
    0b000010,
    0b000001,
    0b000000,
    0b000000,
    //  (0x7f)
    0b111111,
    0b100001,
    0b100001,
    0b100001,
    0b100001,
    0b111111,
};

Font font_MICRlike6x6 = {
    bmp_MICRlike6x6,
    "MICRlike6x6",
    6,  // width
    6,  // height
    0,  // xspacing
    0,  // yspacing
    32, // first code
    127 // last code
};
