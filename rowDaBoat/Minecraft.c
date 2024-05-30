/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --no-compress --font Minecraft.ttf --symbols ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz --range 32-127 --format lvgl -o Minecraft.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef MINECRAFT
#define MINECRAFT 1
#endif

#if MINECRAFT

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xcf,

    /* U+0022 "\"" */
    0x33, 0x33, 0x33, 0x33, 0xcc, 0xcc,

    /* U+0023 "#" */
    0x33, 0xc, 0xc3, 0x33, 0xff, 0xff, 0xcc, 0xc3,
    0x33, 0xff, 0xff, 0xcc, 0xc3, 0x30, 0xcc,

    /* U+0024 "$" */
    0xc, 0xc, 0x3f, 0x3f, 0xc0, 0xc0, 0x30, 0x30,
    0xc, 0xc, 0xff, 0xff, 0xc, 0xc,

    /* U+0025 "%" */
    0x60, 0x49, 0x4, 0x90, 0x89, 0x10, 0x91, 0x6,
    0x20, 0x4, 0x60, 0x49, 0x8, 0x91, 0x9, 0x10,
    0x92, 0x6,

    /* U+0026 "&" */
    0xc, 0x3, 0x3, 0x30, 0xcc, 0x3c, 0xcf, 0x3c,
    0x33, 0xc, 0xc3, 0x30, 0xc3, 0xcc, 0xf3,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x3c, 0xfc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0x3,
    0xcf,

    /* U+0029 ")" */
    0xf3, 0xc0, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x3f,
    0x3c,

    /* U+002A "*" */
    0xcf, 0x37, 0x9e, 0xcf, 0x30,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0xf6,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x1, 0x1, 0x2, 0x4, 0x4, 0x8, 0x10, 0x10,
    0x20, 0x40, 0x40, 0x80,

    /* U+0030 "0" */
    0x3c, 0x3c, 0xc3, 0xc7, 0xc7, 0xdb, 0xdb, 0xe3,
    0xe3, 0xc3, 0x3c, 0x3c,

    /* U+0031 "1" */
    0x30, 0xcf, 0x3c, 0x30, 0xc3, 0xc, 0x30, 0xcf,
    0xff,

    /* U+0032 "2" */
    0x3c, 0x3c, 0xc3, 0xc3, 0xc, 0xc, 0x30, 0x30,
    0xc0, 0xc0, 0xff, 0xff,

    /* U+0033 "3" */
    0x3c, 0x3c, 0xc3, 0xc3, 0x3, 0xc, 0xc, 0x3,
    0xc3, 0xc3, 0x3c, 0x3c,

    /* U+0034 "4" */
    0x3, 0x1, 0x83, 0xc1, 0xe3, 0x31, 0x9b, 0xd,
    0x86, 0xff, 0xff, 0xc0, 0xc0, 0x60,

    /* U+0035 "5" */
    0xff, 0x3f, 0xcc, 0x3, 0x0, 0xc0, 0x30, 0x3,
    0xf0, 0xfc, 0x80, 0xe0, 0x37, 0xf1, 0xfc,

    /* U+0036 "6" */
    0xf, 0x7, 0x8c, 0x6, 0xc, 0x6, 0x3, 0xf9,
    0xfc, 0xc1, 0xe0, 0xcf, 0x87, 0xc0,

    /* U+0037 "7" */
    0xff, 0xff, 0xc3, 0xc3, 0xc, 0xc, 0x30, 0x30,
    0x30, 0x30, 0x30, 0x30,

    /* U+0038 "8" */
    0x3c, 0x3c, 0xc3, 0xc3, 0xc3, 0x3c, 0x3c, 0xc3,
    0xc3, 0xc3, 0x3c, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x3c, 0xc3, 0xc3, 0xc3, 0xc3, 0x3f, 0x3f,
    0x3, 0x3, 0x3c, 0x3c,

    /* U+003A ":" */
    0xf0, 0x3, 0xc0,

    /* U+003B ";" */
    0xf0, 0x3, 0xd8,

    /* U+003C "<" */
    0xc, 0x33, 0x30, 0xc0, 0xc0, 0xc3,

    /* U+003D "=" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+003E ">" */
    0xc3, 0x3, 0x3, 0xc, 0xcc, 0x30,

    /* U+003F "?" */
    0x3c, 0x3c, 0xc3, 0xc3, 0x3, 0xc, 0xc, 0x30,
    0x30, 0x0, 0x30, 0x30,

    /* U+0040 "@" */
    0x3f, 0xf1, 0xff, 0xec, 0x0, 0xf0, 0x3, 0xc3,
    0xef, 0xf, 0xbc, 0xc6, 0xf3, 0x1b, 0xcc, 0x6f,
    0x31, 0xbc, 0xff, 0xf3, 0xfc, 0xc0, 0xd, 0xff,
    0xe3, 0xff, 0x0,

    /* U+0041 "A" */
    0x3e, 0x1f, 0x30, 0x78, 0x3f, 0xff, 0xff, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x30,

    /* U+0042 "B" */
    0xff, 0x3f, 0xcc, 0xf, 0x3, 0xc0, 0xff, 0xcf,
    0xf3, 0x3, 0xc0, 0xf0, 0x3f, 0xf3, 0xfc,

    /* U+0043 "C" */
    0x3f, 0xc7, 0xfb, 0x1, 0xe0, 0x3c, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x78, 0xc, 0xff, 0x1f,
    0xe0,

    /* U+0044 "D" */
    0xff, 0x3f, 0xcc, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3f, 0xf3, 0xfc,

    /* U+0045 "E" */
    0xff, 0xff, 0xfc, 0x3, 0x0, 0xf8, 0x3e, 0xc,
    0x3, 0x0, 0xc0, 0x30, 0xf, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xf0, 0x18, 0xf, 0xc7, 0xe3, 0x1,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0x0,

    /* U+0047 "G" */
    0x3f, 0xe7, 0xff, 0x0, 0x60, 0xc, 0x1f, 0x83,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xc, 0xfe, 0x1f,
    0xc0,

    /* U+0048 "H" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xff, 0xff,
    0xff, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3,

    /* U+0049 "I" */
    0xff, 0x66, 0x66, 0x66, 0x66, 0xff,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0xc7,
    0x8c, 0xe1, 0xc0,

    /* U+004B "K" */
    0xc0, 0x60, 0xf0, 0x78, 0xcc, 0x67, 0xc3, 0xe1,
    0x8c, 0xc6, 0x60, 0xf0, 0x78, 0x30,

    /* U+004C "L" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x3f, 0xff, 0xf0,

    /* U+004D "M" */
    0xc0, 0xf0, 0x3f, 0x3f, 0xcf, 0xcc, 0xf3, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3,

    /* U+004E "N" */
    0xc0, 0xfc, 0x3f, 0xf, 0x33, 0xcc, 0xf0, 0xfc,
    0x3f, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3,

    /* U+004F "O" */
    0x3f, 0xc3, 0xfc, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0x3f,
    0xc3, 0xfc,

    /* U+0050 "P" */
    0xff, 0x3f, 0xcc, 0xf, 0x3, 0xff, 0x3f, 0xcc,
    0x3, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,

    /* U+0051 "Q" */
    0x3f, 0xc3, 0xfc, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x33, 0x3f,
    0xc3, 0xff,

    /* U+0052 "R" */
    0xff, 0x8f, 0xf8, 0xc0, 0x6c, 0x6, 0xff, 0x8f,
    0xf8, 0xc3, 0xc, 0x30, 0xc0, 0xcc, 0xc, 0xc0,
    0x3c, 0x3,

    /* U+0053 "S" */
    0x3f, 0x9f, 0xf0, 0x18, 0x3, 0xe1, 0xf0, 0x6,
    0x3, 0x1, 0x80, 0xff, 0x9f, 0xc0,

    /* U+0054 "T" */
    0xff, 0xff, 0xf0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xcf, 0x87, 0xc0,

    /* U+0056 "V" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xcc, 0xc3,
    0x30, 0xcc, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+0057 "W" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xcf, 0x33, 0xf3, 0xfc, 0xfc, 0xf, 0x3,

    /* U+0058 "X" */
    0xc0, 0xf0, 0x33, 0x30, 0xcc, 0xc, 0x3, 0x3,
    0x30, 0xcc, 0xc0, 0xf0, 0x3c, 0xf, 0x3,

    /* U+0059 "Y" */
    0xc0, 0xf0, 0x33, 0x30, 0xcc, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+005A "Z" */
    0xff, 0xff, 0xf0, 0xc, 0x3, 0x3, 0x0, 0xc0,
    0xc0, 0x30, 0x30, 0xc, 0xf, 0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcf, 0xf0,

    /* U+005C "\\" */
    0x80, 0x80, 0x40, 0x20, 0x20, 0x10, 0x8, 0x8,
    0x4, 0x2, 0x2, 0x1,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f, 0xf0,

    /* U+005E "^" */
    0x18, 0x18, 0x66, 0x66, 0x81, 0x81,

    /* U+005F "_" */
    0xff, 0x80,

    /* U+0060 "`" */
    0x88, 0x80,

    /* U+0061 "a" */
    0xfe, 0x7f, 0x0, 0x67, 0xf3, 0xfe, 0xf, 0x6,
    0x7f, 0x3f, 0x80,

    /* U+0062 "b" */
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xcf, 0x33, 0xcf,
    0xf, 0xc3, 0xc0, 0xf0, 0x3f, 0xf3, 0xfc,

    /* U+0063 "c" */
    0x3e, 0x1f, 0x30, 0x78, 0x3c, 0x6, 0xf, 0x6,
    0x7c, 0x3e, 0x0,

    /* U+0064 "d" */
    0x3, 0x3, 0x3, 0x3f, 0x3f, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xff, 0xff,

    /* U+0065 "e" */
    0x3f, 0x3f, 0xc3, 0xff, 0xfc, 0xc0, 0xc3, 0x3f,
    0x3f,

    /* U+0066 "f" */
    0x3e, 0x3e, 0x30, 0xff, 0xff, 0x30, 0x30, 0x30,
    0x30, 0x30, 0x30, 0x30,

    /* U+0067 "g" */
    0x3f, 0x3f, 0xc3, 0xc3, 0x3f, 0x3f, 0x3, 0x3,
    0x3, 0xc3, 0xc3, 0x3c, 0x3c,

    /* U+0068 "h" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xcc, 0xcc, 0xf3, 0xf3,
    0xc3, 0xc3, 0xc3, 0xc3,

    /* U+0069 "i" */
    0xf3, 0xff, 0xff,

    /* U+006A "j" */
    0x6, 0xc, 0x0, 0x30, 0x60, 0xc1, 0x83, 0xc7,
    0x8c, 0xe1, 0xc0,

    /* U+006B "k" */
    0xc0, 0xc0, 0xc3, 0xc3, 0xcc, 0xcc, 0xf0, 0xf0,
    0xcc, 0xcc, 0xc3, 0xc3,

    /* U+006C "l" */
    0xff, 0xff, 0xff,

    /* U+006D "m" */
    0xfc, 0xf3, 0xf3, 0xcc, 0x30, 0xf0, 0xc3, 0xc3,
    0xf, 0xc, 0x3c, 0x30, 0xf0, 0xc3, 0xc3, 0xc,

    /* U+006E "n" */
    0xfe, 0x7f, 0x30, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0x80,

    /* U+006F "o" */
    0x3c, 0x3c, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x3c,
    0x3c,

    /* U+0070 "p" */
    0xce, 0x67, 0x3c, 0x7e, 0x3c, 0x1e, 0xf, 0xf9,
    0xfc, 0xc0, 0x60, 0x30, 0x18, 0x0,

    /* U+0071 "q" */
    0x3b, 0x3f, 0xc7, 0xc3, 0xc3, 0xc3, 0xc3, 0x3f,
    0x3f, 0x3, 0x3, 0x3,

    /* U+0072 "r" */
    0xdd, 0xff, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xc0,

    /* U+0073 "s" */
    0x3e, 0x7f, 0x6, 0x3, 0x87, 0x1, 0x83, 0xf9,
    0xf0,

    /* U+0074 "t" */
    0x63, 0x3d, 0xe6, 0x31, 0x8c, 0x60, 0xc6,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x3f,
    0x3f,

    /* U+0076 "v" */
    0xc0, 0xf0, 0x3c, 0xc, 0xcc, 0x33, 0x3, 0x0,
    0xc0,

    /* U+0077 "w" */
    0xc0, 0x78, 0xf, 0x1, 0xe3, 0x3c, 0x67, 0x8c,
    0xcf, 0xf9, 0xff,

    /* U+0078 "x" */
    0xc0, 0xf0, 0x33, 0x30, 0xcc, 0xc, 0x3, 0x3,
    0x30, 0xcc, 0xc0, 0xf0, 0x30,

    /* U+0079 "y" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x3f, 0x3f, 0x3,
    0x3, 0xfc, 0xfc,

    /* U+007A "z" */
    0xff, 0xff, 0x6, 0x6, 0x18, 0x18, 0x60, 0x60,
    0xff, 0xff,

    /* U+007B "{" */
    0x18, 0xd8, 0xc6, 0x31, 0x98, 0x63, 0x18, 0xc6,
    0x30, 0x63,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xc6, 0xc, 0x63, 0x18, 0xc3, 0x31, 0x8c, 0x63,
    0x1b, 0x18,

    /* U+007E "~" */
    0x38, 0xf1, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 80, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 48, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 144, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 144, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 39, .adv_w = 224, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 48, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 73, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 96, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 104, .adv_w = 48, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 105, .adv_w = 96, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 107, .adv_w = 48, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 64, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 64, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 250, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 256, .adv_w = 144, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 262, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 268, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 240, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 307, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 96, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 474, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 208, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 208, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 208, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 587, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 176, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 80, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 699, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 80, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 719, .adv_w = 144, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 725, .adv_w = 160, .box_w = 9, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 80, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 729, .adv_w = 160, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 740, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 160, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 144, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 799, .adv_w = 144, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 812, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 824, .adv_w = 48, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 827, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 838, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 850, .adv_w = 48, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 853, .adv_w = 240, .box_w = 14, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 160, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 880, .adv_w = 144, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 903, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 915, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 932, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 939, .adv_w = 144, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 948, .adv_w = 176, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 957, .adv_w = 192, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 968, .adv_w = 176, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 981, .adv_w = 144, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 992, .adv_w = 144, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1002, .adv_w = 96, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1012, .adv_w = 48, .box_w = 2, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1016, .adv_w = 96, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1026, .adv_w = 176, .box_w = 10, .box_h = 2, .ofs_x = 0, .ofs_y = 5}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};

extern const lv_font_t Minecrafts;


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t Minecraft = {
#else
lv_font_t Minecraft = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = &Minecrafts,
#endif
    .user_data = NULL,
};



#endif /*#if MINECRAFT*/
