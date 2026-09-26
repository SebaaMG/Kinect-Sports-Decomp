typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;


longlong fn_82F81328(ulonglong param_1)

{
  param_1 = param_1 & 0xffff;
  if (0x2f < param_1) {
    if (param_1 < 0x3a) {
      return param_1 - 0x30;
    }
    if (param_1 < 0xff10) {
      if (0x65f < param_1) {
        if (param_1 < 0x66a) {
          return param_1 - 0x660;
        }
        if (0x6ef < param_1) {
          if (param_1 < 0x6fa) {
            return param_1 - 0x6f0;
          }
          if (0x965 < param_1) {
            if (param_1 < 0x970) {
              return param_1 - 0x966;
            }
            if (0x9e5 < param_1) {
              if (param_1 < 0x9f0) {
                return param_1 - 0x9e6;
              }
              if (0xa65 < param_1) {
                if (param_1 < 0xa70) {
                  return param_1 - 0xa66;
                }
                if (0xae5 < param_1) {
                  if (param_1 < 0xaf0) {
                    return param_1 - 0xae6;
                  }
                  if (0xb65 < param_1) {
                    if (param_1 < 0xb70) {
                      return param_1 - 0xb66;
                    }
                    if (0xc65 < param_1) {
                      if (param_1 < 0xc70) {
                        return param_1 - 0xc66;
                      }
                      if (0xce5 < param_1) {
                        if (param_1 < 0xcf0) {
                          return param_1 - 0xce6;
                        }
                        if (0xd65 < param_1) {
                          if (param_1 < 0xd70) {
                            return param_1 - 0xd66;
                          }
                          if (0xe4f < param_1) {
                            if (param_1 < 0xe5a) {
                              return param_1 - 0xe50;
                            }
                            if (0xecf < param_1) {
                              if (param_1 < 0xeda) {
                                return param_1 - 0xed0;
                              }
                              if (0xf1f < param_1) {
                                if (param_1 < 0xf2a) {
                                  return param_1 - 0xf20;
                                }
                                if (0x103f < param_1) {
                                  if (param_1 < 0x104a) {
                                    return param_1 - 0x1040;
                                  }
                                  if (0x17df < param_1) {
                                    if (param_1 < 0x17ea) {
                                      return param_1 - 0x17e0;
                                    }
                                    if ((0x180f < param_1) && (param_1 < 0x181a)) {
                                      return param_1 - 0x1810;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (param_1 < 0xff1a) {
      return param_1 - 0xff10;
    }
  }
  return -1;
}

