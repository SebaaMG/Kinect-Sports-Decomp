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


void fn_826341A0(char param_1,char param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
                  uint *param_6)

{
  uint uVar1;
  
  if (param_1 != '\0') {
    return;
  }
  if (param_2 != '\0') {
    return;
  }
  if ((*param_5 & 0x8000) != 0) {
    uVar1 = *param_5 & 0x3f;
    if (uVar1 < 4) {
      uVar1 = *param_6 & 0xfffffff0 | (1 << uVar1 | *param_6) & 0xf;
    }
    else {
      if (uVar1 != 0x3d) goto code_r0x826341f4;
      uVar1 = *param_6 | 0x10;
    }
    *param_6 = uVar1;
  }
code_r0x826341f4:
  if (((*(byte *)(param_5 + 2) & 0x1f) < 0x18) || (0x1b < (*(byte *)(param_5 + 2) & 0x1f))) {
    if (*param_5 >> 0x1a < 0x23) {
      return;
    }
    if (0x27 < *param_5 >> 0x1a) {
      return;
    }
  }
  *param_6 = *param_6 | 0x20;
  return;
}

