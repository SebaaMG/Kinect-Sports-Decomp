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
extern unsigned int uRam83217b80;
extern unsigned int uRam83217b84;


undefined8 fn_829E08A8(uint *param_1,int param_2,uint param_3,ulonglong param_4,uint param_5)

{
  uint uVar1;
  
  if (param_3 < *param_1 >> 0xe) {
    param_3 = *param_1 >> 0xe;
  }
  uVar1 = *param_1;
  *param_1 = param_3 << 0xe | uVar1 & 0x3fff;
  if ((param_4 & 0xffffffff) < ((ulonglong)uVar1 & 0x3ff0) >> 4) {
    param_4 = ((ulonglong)uVar1 & 0x3ff0) >> 4;
  }
  *param_1 = (uint)((param_4 & 0xffffffff) << 4) & 0x3ff0 | *param_1 & 0xffffc00f;
  if ((param_1[1] & 0xfffe0000) == 0) {
    if ((uRam83217b84 & 1) == 0) {
      uRam83217b84 = uRam83217b84 | 1;
      param_1[1] = param_1[1] | 0xfffe0000;
      uRam83217b80 = 0x7fff;
    }
    if (uRam83217b80 < *(ushort *)(param_2 + 0xe)) {
      return 0xffffffff80004005;
    }
    param_1[1] = (uint)*(ushort *)(param_2 + 0xe) << 0x11 | param_1[1] & 0x1ffff;
    *(short *)(param_2 + 0xe) = *(short *)(param_2 + 0xe) + 1;
  }
  param_1[1] = (param_5 & 0x1ff) << 8 | param_1[1] & 0xfffe00ff;
  *param_1 = *param_1 & 0xfffffff0;
  *(undefined1 *)((int)param_1 + 7) = 1;
  return 0;
}

