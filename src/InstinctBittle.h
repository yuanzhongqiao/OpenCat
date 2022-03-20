#define BITTLE
//#define NUM_SKILLS 34

const int8_t bdF[] PROGMEM = { 
15, 0, 0, 1,
  56,  56,  72,  72, -21, -21, -35, -35,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   5,   5,   9,   9,
  50,  50,  56,  56,  -4,  -4,  -1,  -1,
  53,  53,  60,  60, -12, -12,  -9,  -9,
  55,  55,  64,  64, -19, -19, -17, -17,
  58,  58,  67,  67, -26, -26, -25, -25,
  60,  60,  70,  70, -33, -33, -32, -32,
  61,  61,  72,  72, -35, -35, -35, -35,
  61,  61,  72,  72, -35, -35, -35, -35,
  61,  61,  72,  72, -35, -35, -35, -35,
};
const int8_t bk[] PROGMEM = { 
35, 0, 0, 1,
  46,  54,  46,  54,  -5, -23,  -5, -23,
  43,  58,  43,  58,  -5, -24,  -5, -24,
  40,  63,  40,  63,  -4, -24,  -4, -24,
  37,  67,  37,  67,  -3, -23,  -3, -23,
  34,  71,  34,  71,  -2, -22,  -2, -22,
  31,  74,  31,  74,  -1, -21,  -1, -21,
  28,  75,  28,  75,   1, -16,   1, -16,
  24,  72,  24,  72,   3,  -9,   3,  -9,
  21,  67,  21,  67,   5,  -1,   5,  -1,
  18,  64,  18,  64,   7,   0,   7,   0,
  19,  63,  19,  63,   1,  -2,   1,  -2,
  23,  61,  23,  61,  -7,  -3,  -7,  -3,
  29,  58,  29,  58, -14,  -4, -14,  -4,
  34,  56,  34,  56, -18,  -4, -18,  -4,
  38,  54,  38,  54, -19,  -5, -19,  -5,
  43,  52,  43,  52, -21,  -5, -21,  -5,
  48,  49,  48,  49, -22,  -5, -22,  -5,
  53,  46,  53,  46, -23,  -5, -23,  -5,
  57,  43,  57,  43, -24,  -5, -24,  -5,
  62,  40,  62,  40, -24,  -4, -24,  -4,
  66,  37,  66,  37, -23,  -3, -23,  -3,
  70,  34,  70,  34, -22,  -2, -22,  -2,
  72,  31,  72,  31, -22,  -1, -22,  -1,
  74,  28,  74,  28, -18,   1, -18,   1,
  74,  24,  74,  24, -12,   3, -12,   3,
  69,  21,  69,  21,  -4,   5,  -4,   5,
  65,  18,  65,  18,   0,   7,   0,   7,
  63,  19,  63,  19,  -1,   1,  -1,   1,
  61,  23,  61,  23,  -3,  -7,  -3,  -7,
  59,  29,  59,  29,  -4, -14,  -4, -14,
  57,  34,  57,  34,  -4, -18,  -4, -18,
  55,  38,  55,  38,  -5, -19,  -5, -19,
  52,  43,  52,  43,  -5, -21,  -5, -21,
  50,  48,  50,  48,  -5, -22,  -5, -22,
  47,  53,  47,  53,  -5, -23,  -5, -23,
};
const int8_t bkL[] PROGMEM = { 
26, 0, 0, 1,
  51,  58,  51,  53,  -7, -24,  -5, -13,
  51,  65,  47,  55,  -7, -23,  -5, -13,
  49,  70,  43,  57,  -7, -22,  -5, -13,
  48,  74,  39,  58,  -7, -21,  -4, -13,
  47,  77,  35,  60,  -7, -16,  -3, -13,
  45,  76,  31,  60,  -6, -10,  -1, -11,
  44,  69,  26,  58,  -6,   2,   2,  -6,
  42,  66,  22,  58,  -6,   2,   2,  -6,
  44,  64,  28,  57,  -9,   0,  -8,  -6,
  47,  62,  34,  56, -13,  -2, -16,  -6,
  48,  59,  41,  55, -13,  -4, -20,  -6,
  50,  56,  47,  53, -13,  -4, -22,  -7,
  51,  53,  53,  52, -13,  -5, -23,  -7,
  53,  50,  58,  51, -13,  -5, -24,  -7,
  55,  46,  65,  50, -13,  -5, -23,  -7,
  57,  42,  70,  49, -13,  -4, -22,  -7,
  58,  38,  74,  48, -13,  -3, -21,  -7,
  60,  34,  77,  46, -13,  -2, -16,  -6,
  60,  30,  76,  45, -11,  -1, -10,  -6,
  58,  25,  69,  44,  -6,   2,   2,  -6,
  58,  23,  66,  42,  -6,  -1,   2,  -8,
  57,  29,  64,  45,  -6, -10,   0, -11,
  56,  37,  62,  48,  -6, -19,  -2, -13,
  55,  42,  59,  48,  -6, -21,  -4, -13,
  53,  48,  56,  50,  -7, -22,  -4, -13,
  52,  54,  53,  52,  -7, -23,  -5, -13,
};
const int8_t bkR[] PROGMEM = { 
26, 0, 0, 1,
  51,  53,  51,  58,  -5, -13,  -7, -24,
  47,  55,  51,  65,  -5, -13,  -7, -23,
  43,  57,  49,  70,  -5, -13,  -7, -22,
  39,  58,  48,  74,  -4, -13,  -7, -21,
  35,  60,  47,  77,  -3, -13,  -7, -16,
  31,  60,  45,  76,  -1, -11,  -6, -10,
  26,  58,  44,  69,   2,  -6,  -6,   2,
  22,  58,  42,  66,   2,  -6,  -6,   2,
  28,  57,  44,  64,  -8,  -6,  -9,   0,
  34,  56,  47,  62, -16,  -6, -13,  -2,
  41,  55,  48,  59, -20,  -6, -13,  -4,
  47,  53,  50,  56, -22,  -7, -13,  -4,
  53,  52,  51,  53, -23,  -7, -13,  -5,
  58,  51,  53,  50, -24,  -7, -13,  -5,
  65,  50,  55,  46, -23,  -7, -13,  -5,
  70,  49,  57,  42, -22,  -7, -13,  -4,
  74,  48,  58,  38, -21,  -7, -13,  -3,
  77,  46,  60,  34, -16,  -6, -13,  -2,
  76,  45,  60,  30, -10,  -6, -11,  -1,
  69,  44,  58,  25,   2,  -6,  -6,   2,
  66,  42,  58,  23,   2,  -8,  -6,  -1,
  64,  45,  57,  29,   0, -11,  -6, -10,
  62,  48,  56,  37,  -2, -13,  -6, -19,
  59,  48,  55,  42,  -4, -13,  -6, -21,
  56,  50,  53,  48,  -4, -13,  -7, -22,
  53,  52,  52,  54,  -5, -13,  -7, -23,
};
const int8_t crF[] PROGMEM = { 
36, 0, -3, 1,
  55,  57,  51,  56, -15, -19,  -7, -16,
  59,  51,  54,  49, -15, -19,  -7, -16,
  62,  45,  57,  44, -14, -18,  -6, -15,
  65,  38,  60,  38, -13, -15,  -5, -13,
  68,  31,  63,  31, -11, -12,  -4, -10,
  71,  24,  65,  25, -10,  -9,  -2,  -7,
  73,  19,  68,  20,  -8,  -5,   0,  -4,
  75,  16,  69,  16,  -5,  -2,   3,   2,
  77,  14,  71,  13,  -2,   1,   6,   8,
  78,  15,  71,  14,   2,   1,  10,   8,
  79,  20,  75,  19,   0,  -3,   4,   5,
  80,  25,  77,  24,  -3,  -5,  -1,   2,
  81,  30,  77,  28,  -5,  -8,  -5,  -1,
  78,  34,  75,  32, -10, -10,  -8,  -3,
  76,  39,  72,  36, -13, -12, -11,  -4,
  72,  43,  68,  41, -16, -13, -14,  -6,
  67,  48,  64,  45, -18, -14, -15,  -6,
  61,  52,  59,  49, -19, -15, -16,  -7,
  56,  57,  54,  52, -19, -15, -16,  -7,
  50,  61,  48,  56, -19, -15, -16,  -6,
  42,  64,  43,  59, -17, -13, -14,  -6,
  35,  67,  36,  62, -15, -12, -12,  -4,
  29,  70,  30,  64, -12, -11,  -9,  -3,
  22,  72,  24,  67,  -8,  -9,  -6,  -1,
  17,  74,  19,  68,  -4,  -6,  -3,   1,
  16,  76,  15,  70,  -2,  -3,   2,   5,
  14,  77,  12,  71,   1,   0,   9,   8,
  16,  78,  15,  73,   0,   2,   7,   8,
  21,  80,  20,  76,  -3,  -2,   3,   1,
  26,  81,  25,  78,  -6,  -4,   1,  -3,
  31,  79,  29,  76,  -9,  -8,  -2,  -6,
  35,  77,  34,  73, -11, -12,  -3, -10,
  40,  74,  38,  70, -12, -15,  -5, -12,
  44,  69,  42,  67, -13, -17,  -6, -15,
  49,  64,  46,  61, -14, -18,  -6, -16,
  53,  58,  50,  57, -15, -19,  -7, -16,
};
const int8_t crL[] PROGMEM = { 
29, 0, -3, 1,
  55,  57,  51,  52, -15, -19,  -7, -10,
  56,  50,  55,  51, -15, -19,  -6, -10,
  57,  41,  59,  49, -15, -17,  -6, -10,
  58,  33,  62,  48, -15, -13,  -4, -10,
  60,  24,  65,  45, -14,  -9,  -2, -10,
  61,  17,  68,  44, -15,  -4,   1,  -9,
  61,  14,  70,  42, -14,   0,   5,  -8,
  63,  14,  71,  42, -14,   1,   9,  -6,
  63,  20,  75,  43, -14,  -3,   4,  -6,
  63,  26,  78,  44, -16,  -6,  -3,  -6,
  62,  32,  76,  45, -16,  -9,  -6,  -6,
  61,  37,  73,  47, -16, -11, -11,  -7,
  59,  43,  68,  48, -16, -13, -14,  -7,
  58,  49,  63,  49, -17, -14, -16,  -7,
  57,  55,  57,  51, -16, -15, -16,  -7,
  55,  60,  49,  51, -16, -14, -16,  -7,
  52,  64,  43,  52, -16, -13, -14,  -7,
  51,  67,  35,  53, -16, -12, -12,  -7,
  49,  71,  26,  55, -16, -10,  -8,  -6,
  47,  74,  20,  56, -15,  -7,  -4,  -6,
  45,  76,  15,  57, -14,  -3,   2,  -6,
  45,  78,  12,  58, -14,   2,   9,  -6,
  46,  79,  18,  59, -14,   0,   6,  -8,
  48,  81,  24,  59, -14,  -4,   2,  -9,
  49,  79,  29,  59, -14,  -8,  -2, -10,
  50,  76,  35,  58, -14, -12,  -4, -10,
  52,  72,  40,  56, -15, -16,  -5, -10,
  53,  66,  45,  54, -15, -18,  -6, -10,
  54,  58,  50,  53, -15, -19,  -7, -10,
};
const int8_t crR[] PROGMEM = { 
29, 0, -3, 1,
  55,  56,  51,  56, -15, -16,  -7, -16,
  60,  55,  51,  48, -14, -16,  -7, -16,
  64,  52,  52,  40, -13, -16,  -7, -14,
  67,  51,  53,  34, -12, -16,  -7, -11,
  71,  48,  55,  25, -10, -16,  -6,  -7,
  74,  47,  56,  19,  -7, -15,  -6,  -3,
  76,  45,  57,  15,  -3, -14,  -6,   4,
  78,  45,  58,  13,   2, -14,  -6,   9,
  79,  46,  59,  19,   0, -14,  -8,   5,
  81,  48,  59,  25,  -4, -14,  -9,   1,
  79,  49,  59,  30,  -8, -14, -10,  -2,
  76,  51,  58,  35, -12, -15, -10,  -4,
  72,  52,  56,  41, -16, -15, -10,  -6,
  66,  53,  54,  46, -18, -15, -10,  -6,
  58,  55,  53,  51, -19, -15, -10,  -7,
  51,  56,  51,  55, -19, -15, -10,  -6,
  42,  57,  49,  59, -17, -15, -10,  -6,
  34,  58,  48,  62, -14, -15, -10,  -4,
  26,  60,  46,  65, -10, -14, -10,  -2,
  19,  61,  44,  68,  -5, -15,  -9,   1,
  16,  61,  42,  70,  -2, -14,  -8,   5,
  14,  63,  42,  71,   1, -14,  -6,   9,
  19,  63,  43,  75,  -2, -14,  -6,   4,
  25,  63,  44,  78,  -5, -16,  -6,  -3,
  31,  62,  45,  76,  -9, -16,  -6,  -6,
  36,  61,  46,  73, -11, -16,  -6, -11,
  42,  59,  48,  68, -13, -16,  -7, -14,
  48,  58,  49,  63, -14, -17,  -7, -16,
  53,  57,  50,  57, -15, -16,  -7, -16,
};
const int8_t mhF[] PROGMEM = { 
35, 0, 10, 1,
  45,  54,  69,  81,   9,  -7,   7,  -8,
  48,  51,  71,  79,   9,  -7,   9, -11,
  51,  46,  72,  77,  10,  -6,  12, -15,
  53,  41,  72,  72,  12,  -6,  17, -16,
  55,  35,  72,  69,  14,  -4,  21, -18,
  57,  30,  73,  64,  16,  -2,  25, -18,
  58,  24,  72,  59,  19,   3,  31, -18,
  59,  19,  70,  52,  22,   9,  38, -13,
  60,  13,  68,  46,  26,  19,  47,  -5,
  60,  15,  64,  47,  30,  19,  58,  -4,
  67,  19,  73,  51,  19,  17,  43,  -4,
  71,  23,  81,  54,   9,  14,  28,  -3,
  70,  27,  83,  57,   6,  12,  21,  -2,
  68,  31,  84,  60,   1,  11,  14,  -1,
  67,  35,  85,  63,  -1,  10,   9,  -1,
  64,  38,  85,  65,  -3,   9,   3,   1,
  60,  41,  83,  67,  -5,   9,  -1,   3,
  57,  45,  82,  69,  -6,   9,  -6,   6,
  52,  47,  80,  71,  -7,   9, -10,   8,
  48,  50,  78,  72,  -7,  10, -13,  12,
  43,  52,  74,  72,  -6,  11, -15,  16,
  38,  55,  70,  72,  -5,  13, -17,  20,
  34,  57,  67,  73,  -3,  15, -18,  24,
  28,  58,  62,  72,  -1,  18, -19,  30,
  21,  59,  55,  71,   5,  21, -16,  37,
  15,  60,  48,  68,  15,  24, -10,  45,
  12,  60,  44,  65,  23,  29,  -2,  55,
  17,  65,  49,  71,  18,  22,  -4,  48,
  21,  70,  52,  80,  15,  12,  -3,  32,
  25,  71,  55,  83,  13,   6,  -3,  23,
  29,  69,  58,  84,  11,   3,  -2,  17,
  33,  67,  62,  85,  10,   0,  -2,  10,
  36,  64,  64,  85,   9,  -3,   0,   4,
  40,  61,  66,  83,   9,  -5,   2,   0,
  43,  57,  68,  82,   9,  -6,   5,  -5,
};
const int8_t mhL[] PROGMEM = { 
36, 0, 10, 1,
  42,  51,  69,  76,   9,  -7,   7,  -1,
  43,  46,  71,  75,   9,  -6,   9,  -2,
  44,  41,  72,  74,   9,  -6,  12,  -3,
  45,  35,  72,  74,   9,  -4,  17,  -4,
  46,  30,  72,  73,   9,  -2,  21,  -5,
  47,  26,  73,  72,   9,   1,  25,  -6,
  48,  19,  72,  70,   9,   5,  31,  -5,
  49,  13,  70,  68,  10,  13,  38,  -5,
  49,   8,  68,  65,  10,  24,  47,  -2,
  51,   9,  64,  64,  10,  24,  58,   0,
  53,  13,  73,  66,   7,  20,  43,  -1,
  52,  18,  80,  67,   5,  17,  32,  -1,
  52,  22,  83,  68,   4,  15,  21,   0,
  51,  26,  84,  68,   4,  13,  14,   1,
  50,  30,  85,  68,   4,  11,   9,   1,
  48,  34,  85,  69,   4,  10,   3,   3,
  48,  37,  83,  70,   3,   9,  -1,   3,
  46,  41,  82,  70,   3,   9,  -6,   5,
  45,  44,  80,  72,   3,   9, -10,   5,
  43,  47,  78,  72,   3,   9, -12,   5,
  42,  49,  74,  72,   3,  10, -14,   6,
  41,  52,  71,  73,   3,  11, -16,   8,
  40,  54,  67,  73,   3,  13, -18,   9,
  38,  56,  62,  73,   4,  15, -19,  10,
  36,  58,  58,  73,   5,  17, -18,  12,
  34,  59,  51,  73,   7,  20, -13,  13,
  32,  60,  46,  74,  10,  24,  -5,  14,
  32,  62,  47,  74,  10,  22,  -4,  15,
  34,  68,  51,  76,  10,  10,  -4,  12,
  35,  69,  54,  77,  10,   3,  -3,   9,
  36,  68,  57,  77,   9,   1,  -2,   7,
  37,  65,  60,  77,   9,  -2,  -1,   6,
  38,  62,  63,  77,   9,  -4,  -1,   5,
  39,  59,  65,  76,   9,  -6,   1,   2,
  41,  56,  67,  76,   9,  -6,   3,   1,
  41,  51,  69,  76,   9,  -7,   6,  -1,
};
const int8_t mhR[] PROGMEM = { 
36, 0, 10, 1,
  42,  45,  70,  81,   9,   3,   6,  -8,
  45,  44,  72,  79,   9,   3,   5, -12,
  48,  42,  72,  75,   9,   3,   6, -13,
  51,  42,  73,  72,  10,   3,   7, -16,
  53,  40,  73,  68,  12,   3,   8, -18,
  55,  39,  73,  64,  14,   3,  10, -18,
  57,  37,  73,  59,  16,   4,  11, -18,
  58,  34,  73,  52,  19,   7,  12, -13,
  59,  33,  74,  47,  22,   9,  14,  -7,
  60,  32,  74,  45,  26,  10,  15,  -2,
  66,  33,  75,  50,  15,  10,  13,  -4,
  69,  35,  76,  53,   7,  10,  11,  -3,
  69,  36,  77,  56,   2,   9,   9,  -3,
  67,  36,  77,  59,  -1,   9,   6,  -2,
  64,  38,  77,  63,  -3,   9,   5,  -2,
  61,  39,  76,  65,  -5,   9,   3,   0,
  57,  40,  76,  67,  -6,   9,   2,   2,
  53,  41,  75,  68,  -7,   9,   1,   5,
  49,  42,  75,  71,  -7,   9,  -1,   7,
  45,  44,  75,  72,  -6,   9,  -2,  11,
  40,  45,  74,  72,  -5,   9,  -3,  15,
  35,  45,  73,  72,  -4,   9,  -4,  19,
  29,  47,  73,  73,  -2,   9,  -5,  22,
  24,  47,  72,  72,   2,   9,  -6,  28,
  18,  48,  70,  71,   7,   9,  -5,  35,
  12,  49,  68,  69,  14,  10,  -5,  43,
   6,  50,  65,  66,  26,  10,  -2,  52,
  11,  52,  64,  68,  22,   9,   0,  52,
  15,  54,  66,  77,  19,   5,  -1,  38,
  19,  52,  67,  82,  17,   4,   0,  25,
  23,  51,  68,  84,  14,   4,   0,  18,
  27,  51,  68,  85,  12,   3,   1,  11,
  31,  49,  69,  85,  11,   3,   2,   5,
  35,  48,  69,  85,  10,   4,   3,   0,
  38,  47,  70,  83,   9,   3,   3,  -3,
  41,  46,  70,  81,   9,   3,   6,  -8,
};
const int8_t trF[] PROGMEM = { 
21, 0, 0, 1,
  49,  56,  56,  63,   6,  -4,   8,  -2,
  55,  46,  59,  54,   8,  -5,  12,  -5,
  59,  35,  62,  44,  12,  -3,  18,  -5,
  62,  25,  63,  35,  17,   2,  26,  -3,
  63,  21,  62,  31,  25,   5,  37,   1,
  63,  19,  61,  29,  30,  10,  43,   4,
  67,  17,  66,  26,  23,  15,  34,  10,
  70,  25,  69,  34,  17,  10,  28,   7,
  70,  32,  71,  41,  12,   7,  22,   5,
  67,  40,  70,  47,   2,   5,   9,   5,
  61,  47,  66,  53,  -3,   5,   1,   7,
  52,  52,  58,  58,  -5,   7,  -4,  10,
  41,  57,  50,  61,  -4,  10,  -5,  15,
  28,  60,  38,  62,   0,  14,  -3,  22,
  23,  63,  33,  63,   3,  20,  -2,  31,
  20,  61,  29,  60,   8,  31,   2,  44,
  17,  64,  26,  62,  14,  28,   8,  41,
  20,  68,  30,  67,  13,  20,   8,  31,
  28,  69,  37,  69,   9,  16,   6,  27,
  36,  69,  44,  71,   6,   7,   5,  15,
  44,  64,  50,  68,   5,   0,   6,   5,
};
const int8_t trL[] PROGMEM = { 
18, 0, 0, 1,
  44,  56,  54,  58,   3,  -5,   7,   5,
  47,  40,  58,  54,   3,  -4,  11,   2,
  49,  22,  61,  50,   3,   4,  16,   1,
  51,  13,  62,  48,   3,  11,  23,   2,
  52,   8,  63,  47,   5,  22,  32,   3,
  53,  16,  62,  48,   7,  16,  39,   4,
  54,  25,  67,  50,   5,  10,  30,   4,
  54,  32,  70,  52,   3,   7,  23,   4,
  52,  40,  69,  54,   2,   5,   8,   5,
  47,  47,  61,  55,   1,   5,  -3,   6,
  42,  52,  47,  57,   1,   7,  -5,   7,
  37,  57,  32,  58,   2,  10,  -1,   8,
  35,  60,  26,  60,   5,  14,   6,   9,
  35,  61,  26,  60,   5,  23,  10,  13,
  37,  65,  34,  61,   4,  18,   7,  11,
  40,  68,  41,  62,   3,  10,   5,  10,
  42,  67,  47,  61,   3,   4,   5,   8,
  44,  58,  53,  58,   3,  -4,   7,   5,
};
const int8_t trR[] PROGMEM = { 
18, 0, 0, 1,
  44,  49,  55,  65,   5,   1,   5,   0,
  49,  44,  56,  53,   6,   1,   6,  -5,
  55,  39,  58,  37,   8,   2,   8,  -3,
  59,  36,  59,  28,  12,   3,   9,   2,
  62,  35,  60,  24,  17,   5,  10,  11,
  62,  36,  60,  31,  22,   5,  13,   8,
  66,  39,  61,  38,  15,   3,  11,   6,
  68,  41,  62,  45,  10,   3,   9,   5,
  63,  43,  60,  51,  -1,   3,   7,   6,
  51,  46,  57,  56,  -5,   3,   3,   9,
  33,  48,  52,  60,  -2,   3,   2,  13,
  18,  50,  49,  62,   7,   4,   1,  19,
  11,  52,  47,  63,  16,   4,   3,  27,
  10,  53,  47,  60,  20,   7,   3,  41,
  19,  54,  49,  65,  13,   5,   3,  33,
  28,  54,  51,  70,   9,   3,   3,  25,
  35,  54,  52,  71,   6,   2,   5,  16,
  43,  49,  55,  66,   5,   1,   5,   2,
};
const int8_t vt[] PROGMEM = { 
21, 0, 0, 1,
  57,  43,  60,  47, -18,   7, -17,   7,
  50,  43,  53,  47,  -5,   7,  -5,   7,
  43,  43,  47,  47,   7,   7,   7,   7,
  43,  43,  47,  47,   7,   7,   7,   7,
  43,  43,  47,  47,   7,   7,   7,   7,
  43,  47,  47,  50,   7,   0,   7,   0,
  43,  54,  47,  58,   7, -13,   7, -13,
  43,  60,  47,  65,   7, -25,   7, -25,
  43,  66,  47,  71,   7, -35,   7, -35,
  43,  63,  47,  67,   7, -30,   7, -29,
  43,  57,  47,  60,   7, -18,   7, -17,
  43,  50,  47,  53,   7,  -5,   7,  -5,
  43,  43,  47,  47,   7,   7,   7,   7,
  43,  43,  47,  47,   7,   7,   7,   7,
  43,  43,  47,  47,   7,   7,   7,   7,
  43,  43,  47,  47,   7,   7,   7,   7,
  47,  43,  50,  47,   0,   7,   0,   7,
  54,  43,  58,  47, -13,   7, -13,   7,
  60,  43,  65,  47, -25,   7, -25,   7,
  66,  43,  71,  47, -35,   7, -35,   7,
  63,  43,  67,  47, -30,   7, -29,   7,
};
const int8_t wkF[] PROGMEM = { 
54, 0, 0, 1,
   9,  49,  53,  45,  24,  20,  -2,  15,
   8,  50,  41,  46,  28,  21,  -1,  15,
  10,  51,  26,  47,  26,  22,   6,  16,
  12,  52,  23,  48,  24,  24,   9,  17,
  14,  52,  20,  49,  22,  26,  12,  18,
  16,  53,  17,  51,  21,  27,  17,  18,
  18,  53,  14,  52,  20,  29,  22,  19,
  21,  54,  11,  54,  18,  30,  27,  19,
  22,  54,  11,  54,  18,  32,  29,  20,
  25,  54,  13,  55,  16,  34,  27,  21,
  26,  54,  16,  56,  16,  37,  24,  23,
  28,  54,  18,  56,  15,  39,  23,  24,
  30,  52,  20,  57,  14,  45,  22,  26,
  32,  54,  22,  57,  14,  44,  21,  28,
  33,  58,  24,  57,  15,  36,  20,  30,
  34,  61,  26,  57,  15,  31,  19,  32,
  36,  64,  28,  57,  14,  24,  18,  35,
  38,  66,  29,  57,  14,  20,  18,  38,
  39,  67,  31,  57,  14,  16,  17,  40,
  41,  64,  32,  56,  14,   5,  17,  43,
  42,  55,  35,  57,  14,  -1,  16,  44,
  44,  44,  37,  62,  15,  -3,  14,  35,
  45,  30,  39,  66,  15,   1,  14,  29,
  46,  21,  40,  68,  15,   5,  14,  23,
  47,  19,  42,  70,  16,   9,  14,  19,
  48,  16,  43,  70,  17,  12,  15,  17,
  49,  12,  44,  67,  18,  17,  15,   5,
  49,   9,  46,  59,  20,  24,  15,  -2,
  50,   8,  47,  47,  21,  28,  16,  -2,
  51,  10,  48,  34,  22,  26,  16,   1,
  52,  12,  49,  24,  24,  24,  17,   6,
  52,  14,  50,  21,  26,  22,  18,  10,
  53,  16,  51,  19,  27,  21,  19,  12,
  53,  18,  52,  15,  29,  20,  20,  19,
  54,  21,  54,  12,  30,  18,  19,  24,
  54,  22,  55,  12,  32,  18,  20,  27,
  54,  25,  55,  11,  34,  16,  22,  29,
  54,  26,  56,  14,  37,  16,  24,  26,
  54,  28,  56,  17,  39,  15,  25,  24,
  52,  30,  57,  18,  45,  14,  27,  23,
  54,  32,  57,  21,  44,  14,  29,  21,
  58,  33,  57,  23,  36,  15,  31,  20,
  61,  34,  57,  24,  31,  15,  33,  20,
  64,  36,  57,  26,  24,  14,  36,  19,
  66,  38,  57,  28,  20,  14,  39,  18,
  67,  39,  56,  30,  16,  14,  42,  17,
  64,  41,  56,  32,   5,  14,  45,  17,
  55,  42,  59,  33,  -1,  14,  41,  17,
  44,  44,  64,  35,  -3,  15,  33,  16,
  30,  45,  67,  38,   1,  15,  27,  14,
  21,  46,  68,  39,   5,  15,  22,  14,
  19,  47,  70,  41,   9,  16,  18,  14,
  16,  48,  69,  42,  12,  17,  11,  14,
  12,  49,  63,  44,  17,  18,   1,  15,
};
const int8_t wkL[] PROGMEM = { 
40, 0, 0, 1,
  34,  52,  57,  46,  13,  24,  -6,  13,
  34,  53,  47,  47,  13,  27,  -7,  13,
  35,  54,  35,  47,  13,  29,  -4,  14,
  35,  54,  27,  48,  13,  32,   3,  14,
  36,  54,  23,  49,  13,  36,   6,  14,
  37,  54,  18,  49,  12,  39,  13,  15,
  38,  54,  14,  49,  12,  44,  22,  15,
  39,  60,  10,  50,  12,  33,  30,  15,
  40,  64,  14,  51,  12,  26,  26,  16,
  41,  68,  18,  51,  12,  17,  23,  16,
  41,  69,  21,  52,  12,  11,  21,  17,
  42,  68,  24,  52,  12,   1,  20,  17,
  42,  62,  26,  53,  12,  -4,  19,  17,
  43,  54,  29,  54,  12,  -9,  18,  19,
  44,  44,  32,  55,  13,  -8,  17,  16,
  45,  32,  35,  57,  13,  -4,  16,  12,
  45,  25,  37,  56,  13,   1,  16,  12,
  46,  19,  39,  57,  13,   5,  16,   9,
  47,  14,  41,  56,  13,  13,  16,   8,
  47,  10,  43,  53,  14,  20,  17,   7,
  48,   8,  46,  51,  14,  28,  15,   6,
  49,  10,  48,  48,  14,  27,  16,   5,
  49,  13,  49,  45,  15,  25,  18,   5,
  49,  16,  51,  42,  15,  22,  19,   7,
  50,  20,  52,  41,  15,  20,  20,   9,
  50,  22,  54,  39,  18,  19,  22,  11,
  50,  26,  54,  37,  18,  17,  24,  12,
  52,  28,  55,  36,  14,  16,  28,  14,
  53,  31,  55,  36,  12,  16,  30,  14,
  54,  34,  56,  38,  10,  15,  33,  12,
  53,  36,  56,  39,   9,  14,  37,  12,
  52,  39,  55,  40,   7,  14,  41,  12,
  49,  41,  54,  41,   6,  14,  46,  12,
  47,  42,  59,  41,   5,  16,  41,  12,
  44,  44,  66,  42,   5,  17,  29,  12,
  40,  45,  70,  42,   5,  18,  21,  12,
  39,  47,  72,  43,   6,  19,  13,  12,
  37,  49,  73,  44,   8,  20,   9,  13,
  36,  50,  69,  45,   9,  21,   0,  13,
  34,  51,  64,  45,  13,  23,  -6,  13,
};
const int8_t wkR[] PROGMEM = { 
40, 0, 0, 1,
   8,  48,  51,  45,  28,  14,   6,  17,
  10,  49,  48,  47,  27,  14,   5,  16,
  13,  49,  45,  49,  25,  15,   5,  17,
  16,  49,  42,  51,  22,  15,   7,  18,
  20,  50,  41,  52,  20,  15,   9,  20,
  22,  51,  39,  53,  19,  16,  11,  22,
  26,  50,  37,  54,  17,  18,  12,  24,
  28,  51,  36,  55,  16,  16,  14,  27,
  31,  54,  36,  55,  16,  12,  14,  29,
  34,  54,  38,  56,  15,  10,  12,  32,
  36,  53,  39,  56,  14,   9,  12,  36,
  39,  53,  40,  55,  14,   7,  12,  40,
  41,  50,  41,  55,  14,   6,  12,  44,
  42,  47,  41,  57,  16,   5,  12,  44,
  44,  44,  42,  64,  17,   5,  12,  33,
  45,  42,  42,  68,  18,   5,  12,  24,
  47,  40,  43,  71,  19,   5,  12,  17,
  49,  37,  44,  73,  20,   8,  13,  10,
  50,  36,  45,  71,  21,   9,  13,   3,
  51,  35,  45,  66,  23,  11,  13,  -4,
  52,  34,  46,  57,  26,  13,  13,  -6,
  53,  34,  47,  47,  28,  13,  13,  -7,
  54,  35,  47,  35,  30,  13,  14,  -4,
  54,  35,  48,  27,  33,  13,  14,   3,
  54,  36,  49,  23,  37,  13,  14,   6,
  52,  37,  49,  18,  43,  12,  15,  13,
  55,  38,  49,  14,  41,  12,  15,  22,
  61,  39,  50,  10,  31,  12,  15,  30,
  67,  40,  51,  14,  20,  12,  16,  26,
  69,  41,  51,  18,  14,  12,  16,  23,
  70,  41,  52,  21,   9,  12,  17,  21,
  67,  42,  52,  24,  -1,  12,  17,  20,
  60,  42,  53,  26,  -5,  12,  18,  19,
  51,  43,  54,  29,  -9,  12,  19,  18,
  39,  44,  56,  32,  -7,  13,  15,  17,
  27,  45,  57,  35,  -2,  13,  12,  16,
  22,  45,  57,  37,   2,  13,  10,  16,
  18,  46,  57,  39,   8,  13,   9,  16,
  13,  47,  55,  41,  15,  13,   8,  16,
   9,  47,  52,  43,  24,  14,   7,  17,
};

const int8_t balance[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,};
const int8_t buttUp[] PROGMEM = { 
1, 0, 15, 1,
   20,  40,   0,   0,   5,   5,   3,   3,  90,  90,  45,  45, -60, -60,   5,   5,};
const int8_t calib[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,};
const int8_t dropped[] PROGMEM = { 
1, 0, -75, 1,
    0,  30,   0,   0,  -5,  -5,  15,  15, -75, -75,  45,  45,  60,  60, -30, -30,};
const int8_t lifted[] PROGMEM = { 
1, 0, 75, 1,
    0, -20,   0,   0,   0,   0,   0,   0,  60,  60,  75,  75,  45,  45,  75,  75,};
const int8_t rest[] PROGMEM = { 
1, 0, 0, 1,
  -30, -80, -45,   0,  -3,  -3,   3,   3,  75,  75,  75,  75, -55, -55, -55, -55,};
const int8_t sit[] PROGMEM = { 
1, 0, -30, 1,
    0,   0, -45,   0,  -5,  -5,  20,  20,  45,  45, 105, 105,  45,  45, -45, -45,};
const int8_t str[] PROGMEM = { 
1, 0, 20, 1,
    0,  30,   0,   0,  -5,  -5,   0,   0, -75, -75,  30,  30,  60,  60,   0,   0,};
const int8_t zero[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,};

const int8_t bf[] PROGMEM = { 
-8, 0, 0, 1,
 5, 8, 1, 
    0,   0,   0,   0,   0,   0,   0,   0,  75,  75,  75,  75, -55, -55, -40, -40,	10, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30, -20, -20, -55, -55,  60,  60,	 0, 4, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,   5,   5,  60,  60,  40,  40,	 0, 2, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  25,  25,  45,  45,  60,  60,  35,  35,	 0, 1, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  60,  60,  45,  45,  60,  60,  30,  30,	 0, 0, 1,-10,
    0,   0,   0,   0,   0,   0,   0,   0,  60,  60, 110, 110, -55, -55, 100, 100,	 0, 3, 0,127,
    0,   0,   0,   0,   0,   0,   0,   0, -20, -20, 100, 100, -75, -75, -60, -60,	 0, 3, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  45,  45, 127, 127,   0,   0, -70, -70,	 0, 3, 0, 0,
};
const int8_t ck[] PROGMEM = { 
-2, 0, 5, 1,
 0, 1, 2, 
   45,   0,   0,   0,   0,   0,   0,   0,  45,  35,  38,  50, -30, -10,   0, -20,	 6, 1, 0, 0,
  -45,   0,   0,   0,   0,   0,   0,   0,  35,  45,  50,  38, -10, -30, -20,   0,	 6, 1, 0, 0,
};
const int8_t climbCeiling[] PROGMEM = {
-21,  0,  0,  1,
0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  30, 30, 30, 30, 30, 30, 30, 30, 8,  2,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, 45, 45, 105,  105,  45, 45, -45,  -45,  8,  4,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, -90,  20, 105,  75, 45, 90, -45,  -30,  8,  1,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, -100, 20, 105,  75, 30, 90, -45,  -30,  8,  1,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, -128, 20, 105,  75, 30, 90, -45,  -30,  8,  2,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, -128, 20, 105,  75, 85, 90, -45,  -30,  8,  2,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, -128, -100, 105,  75, 85, 90, -45,  -30,  8,  1,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, -128, -100, 105,  75, 85, 45, -45,  -30,  8,  1,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, -128, -128, 70, 75, 85, 85, -20,  -20,  8,  2,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, -80,  -80,  127,  127,  10, 10, -80,  -80,  8,  1,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, -80,  -80,  -15,  -15,  10, 10, 70, 70, 8,  3,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, -70,  -70,  30, 30, -10,  -10,  70, 70, 8,  1,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, 50, 50, 127,  127,  -50,  -50,  90, 90, 8,  2,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, 50, 50, 127,  -20,  -50,  -50,  90, 90, 8,  2,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, 50, 50, 127,  -20,  -50,  -50,  90, 40, 8,  2,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, 50, 50, 127,  -20,  -50,  -50,  90, 90, 8,  2,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, 50, 50, 127,  -20,  -50,  -50,  0,  90, 8,  2,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, 50, 50, -20,  -20,  -50,  -50,  0,  90, 8,  2,  0,  0,
0,  0,  -45,  0,  -5, -5, 20, 20, 50, 50, -20,  -20,  -50,  -50,  90, 90, 8,  2,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  30, 30, 30, 30, 30, 30, 30, 30, 8,  4,  0,  0,
-80,  20, 0,  0,  0,  0,  0,  0,  30, 30, 30, 30, 30, 30, 30, 30, 8,  4,  0,  0,
};
const int8_t hi[] PROGMEM = { 
-3, 0, -30, 1,
 1, 2, 3, 
    0, -20, -60,   0,   0,   0,   0,   0,  30,  30,  100,  90,  60,  60, -40, -30,	 4, 1, 0, 0,
   35,  -5, -60,   0,   0,   0,   0,   0, -75,  30,  85,  70,  40,  75, -30, -15,	10, 0, 0, 0,
   40,   0, -35,   0,   0,   0,   0,   0, -60,  30,  85,  70,  60,  75, -30, -15,	10, 0, 0, 0,
};
const int8_t jy[] PROGMEM = { 
-3, 0, -30, 1,
 1, 2, 2, 
    0, -20, -60,   0,   0,   0,   0,   0,  30,  30,    110, 125, 60,  60,   -40, -50,  4, 1, 0, 0,
   40,   0, -35,   0,   0,   0,   0,   0,  30,  -60,   110, 125, 60,  -10,  -30, -45, 16, 0, 0, 0,
   65,  -5, -60,   0,   0,   0,   0,   0,  30,  10,    110, 125, 60,  -60,  -30, -40, 16, 0, 0, 0,

};
const int8_t pd[] PROGMEM = { 
-7, 0, 0, 1,
 4, 5, 2, 
    0,   0, -45,   0,  -5,  -5,  20,  20,  45,  45, 105, 105,  45,  45, -45, -45,	 8, 0, 0, 0,
    0,   0,   0,   0,  -5,  -5,  20,  20,  30, -80, 105,  15,  45,  80, -45,  80,	 8, 0, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  25, -60,  30,  30,  45,	 8, 0, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  45, -75,  90,  25, -60,   0, -60,  45,	 8,20, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  45, -75,  90,  25, -60,   0, -60,  45,	30, 0, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  45, -75,  90,  25, -60,   0, -60,  30,	30, 0, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  45, -75,  90,  25, -60,   0, -60,  45,	16,20, 0, 0,
};
const int8_t pee[] PROGMEM = { 
-4, 0, 10, 1,
 2, 3, 3, 
   30,  20,   0,   0,  15, -10,  60, -10,  40,  40,  90,  45,  10,  60,  70,  45,	 6, 0, 0, 0,
   45,  20,   0,   0,  15, -10,  60, -10,  60,  53, 115,  60, -30,  40,  50,  21,	 2,10, 0, 0,
   30,  20,   0,   0,  15, -10,  60, -10,  40,  40,  90,  45,  10,  50,  70,  45,	16, 0, 0, 0,
   30,  20,   0,   0,  15, -10,  60, -10,  40,  40, 103,  45,  10,  50,  80,  45,	16, 0, 0, 0,
};
const int8_t pu[] PROGMEM = { 
-8, 0, -15, 1,
 6, 7, 3, 
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 5, 0, 0, 0,
   15,   0,   0,   0,   0,   0,   0,   0,  30,  35,  40,  29,  50,  15,  15,  15,	 5, 0, 0, 0,
   30,   0,   0,   0,   0,   0,   0,   0,  27,  35,  40,  60,  50,  15,  20,  45,	 5, 0, 0, 0,
   15,   0,   0,   0,   0,   0,   0,   0,  45,  35,  40,  60,  25,  20,  20,  60,	 5, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  50,  35,  75,  60,  20,  30,  20,  60,	 6, 0, 0, 0,
  -15,   0,   0,   0,   0,   0,   0,   0,  60,  60,  70,  70,  15,  15,  60,  60,	 6, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  95,  95,  60,  60,  60,  60,	 6, 1, 0, 0,
   30,   0,   0,   0,   0,   0,   0,   0,  75,  70,  80,  80, -50, -50,  60,  60,	 8, 0, 0, 0,
};
const int8_t rc[] PROGMEM = { 
-3, 0, 0, 2,
 0, 0, 0, 
    0,   0,   0,   0,   0,   0,   0,   0, -88, -43,  67,  100,  42, -35,  42,  42,	15, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -83, -88,  100,  60,  42,  42,  42,  50,	15, 0, 0, 0,
   -8, -20, -11,   0,  -1,  -1,   0,   0,  18,  18,  18,  18, -14, -14, -14, -14,	10, 0, 0, 0,
};
const int8_t stp[] PROGMEM = { 
-22, 0, 0, 1,
 0, 0, 0, 
    0,   0,   0,   0,   0,   0,   0,   0,  25,  40,  30,  40,  40,  20,  30,  20,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  25,  35,  35,  -5,  40,  25,  25,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  45,  25,  35,  -5, -70,  35,  25,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -70,  25,  35,  -5,  45,  35,  25,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -50,  25,  30,  30,  70,  35,  30,  30,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -50,  45,  25,  30,  70,   0,  35,  30,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -40,  60,  20,  25,  70, -75,  50,  35,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -45, -60,  35,  35,  50,  35,  50,  35,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -45, -40,  35,  35,  50,  65,  50,  35,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  40,  40,  50,  50,  60,  60,  90,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  40,  50,  65,  15,  60,  30,  40,  75,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  40,  60,  80,  10,  60,  20,  60,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  60,  80,  15,  60,  30,  65,  80,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -15,  60,  80,  35,  50,  70,  65,  55,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  55, 125,  40,  30,  55,  65,  60,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  55, 115,  40,  30,  55, -85,  60,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   5,  55,  60,  40,  35,  55, -60,  60,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   5,  70,  60,  35,  35, -30, -20,  75,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   5, -15,  60,  35,  35,  35, -20,  75,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  65, -10,  80,  90,  35,  30, -60,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  65, -10,  70, 125,  45,  30, -45,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  65, -10,  70,  60,  45,  30, -45, -45,	 8, 0, 0, 0,
};
  const char* skillNameWithType[]={"bdFI","bkI","bkLI","crFI","crLI",
//  "mhFI","mhLI","mhRI",
  "trFI","trLI","vtI","wkFI","wkLI","balanceI","buttUpI","calibI","droppedI","liftedI","restI","sitI","strI","zeroN","bfI","ckI","ccI","hiI","jyI","pdI","peeI","puI","rcI","stpI",};
#if !defined(MAIN_SKETCH) || !defined(I2C_EEPROM)
		//if it's not the main sketch to save data or there's no external EEPROM, 
		//the list should always contain all information.
  const int8_t* progmemPointer[] = {bdF, bk, bkL, crF, crL, 
//  mhF, mhL, mhR, 
  trF, trL, vt, wkF, wkL, balance, buttUp, calib, dropped, lifted, rest, sit, str, zero, bf, ck, climbCeiling, hi,jy, pd, pee, pu, rc, stp, };
#else	//only need to know the pointers to newbilities, because the intuitions have been saved onto external EEPROM,
	//while the newbilities on progmem are assigned to new addresses
  const int8_t* progmemPointer[] = {zero};
#endif
//the total byte of instincts is 5564
//the maximal array size is 437 bytes of wkF. 
//Make sure to leave enough memory for SRAM to work properly. Any single skill should be smaller than 400 bytes for safety.
