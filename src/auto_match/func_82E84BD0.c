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
extern unsigned int uRam83188cec;
extern unsigned int uRam83188cf0;
extern unsigned int uRam83188cf4;


void fn_82E84BD0(undefined8 param_1,uint *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if (param_2 == (uint *)0x0) {
    *param_3 = 0;
    return;
  }
  uVar3 = *param_2;
  *param_3 = 1;
  uVar1 = (ulonglong)uVar3 & 0x3fffffff;
  lVar4 = uVar1 << 2;
  uVar3 = (uRam83188cf0 & uVar3) >> 0x1e;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      param_3[1] = 1;
      goto LAB_82e84c54;
    }
    if (uVar3 != 2) goto LAB_82e84c54;
  }
  param_3[1] = uVar3;
LAB_82e84c54:
  uVar3 = (uint)lVar4;
  param_3[2] = (uRam83188cec & uVar3) >> 0x1f;
  param_3[4] = uRam83188cec >> 0x1f & uVar3 >> 0x1e & 1;
  param_3[5] = uRam83188cec >> 0x1f & uVar3 >> 0x15 & 1;
  param_3[6] = uRam83188cec >> 0x1f & uVar3 >> 0x14 & 1;
  param_3[7] = uRam83188cec >> 0x1f & uVar3 >> 0x13 & 1;
  param_3[8] = uRam83188cec >> 0x1f & uVar3 >> 0x12 & 1;
  param_3[9] = uVar3 >> 0x11 & 1 & uRam83188cec >> 0x1f;
  param_3[10] = (ushort)((ulonglong)lVar4 >> 0x10) & 1 & uRam83188cec >> 0x1f;
  param_3[0xb] = uVar3 >> 0xe & 3 & uRam83188cf0 >> 0x1e;
  param_3[0xc] = uVar3 >> 0xd & 1 & uRam83188cec >> 0x1f;
  param_3[0xd] = uVar3 >> 0xc & 1 & uRam83188cec >> 0x1f;
  param_3[0xe] = uVar3 >> 0xb & 1 & uRam83188cec >> 0x1f;
  param_3[0xf] = uVar3 >> 10 & 1 & uRam83188cec >> 0x1f;
  param_3[0x10] = uVar3 >> 9 & 1 & uRam83188cec >> 0x1f;
  param_3[0x11] = uVar3 >> 6 & 7 & uRam83188cf4 >> 0x1d;
  uVar3 = uVar3 >> 5 & 1 & uRam83188cec >> 0x1f;
  param_3[0x13] = uVar3;
  uVar2 = ((uint)(uVar1 << 0x1d) & uRam83188cec) >> 0x1f;
  if (uVar3 == 0) {
    param_3[0x15] = uVar2;
  }
  else {
    param_3[0x14] = uVar2;
  }
  if ((param_3[0x13] != 0) || (uVar5 = 0, param_3[0x15] != 0)) {
    uVar5 = 1;
  }
  param_3[0x12] = uVar5;
  return;
}

