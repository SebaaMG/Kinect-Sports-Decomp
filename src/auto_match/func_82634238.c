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
extern unsigned int lbl_831BEB3C;
extern unsigned int lbl_831BF120;


void fn_82634238(char param_1,char param_2,char param_3,undefined8 param_4,uint *param_5,
                  uint *param_6)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (param_1 != '\0') {
    uVar6 = param_5[1];
    uVar4 = *param_6;
    switch(uVar6 >> 0xc & 0xf) {
    case 7:
    case 8:
      uVar4 = uVar4 & 0xffff0000 | (1 << (0xf - (*param_5 >> 0x11 & 0xf) & 0x3f) | uVar4) & 0xffff;
      break;
    case 9:
    case 0xb:
      if (((*param_5 & 0x2000) != 0) || ((*param_5 & 0x4000) != 0)) break;
    case 3:
    case 4:
    case 0xd:
    case 0xe:
      uVar4 = uVar4 & 0xfff0ffff | ((1 << (3 - (uVar6 >> 8 & 3) & 0x3f)) << 0x10 | uVar4) & 0xf0000;
      break;
    case 0xc:
      if ((uVar6 & 0x600) == 0x600) {
        param_6[6] = 1;
      }
    }
    *param_6 = uVar4;
    return;
  }
  if (param_6[3] == 0) {
    param_6[3] = 1;
    param_6[4] = (uint)(param_2 != '\0');
    if ((param_2 == '\0') || (uVar6 = 1, param_3 != '\0')) {
      uVar6 = 0;
    }
    param_6[5] = uVar6;
  }
  uVar6 = param_6[1];
  uVar5 = (ulonglong)uVar6;
  if (param_2 == '\0') {
    uVar4 = param_5[2];
    uVar2 = *param_5;
    bVar1 = (&lbl_831BF120)[uVar4 >> 0x18 & 0x1f];
    if (((bVar1 != 0) && ((uVar4 & 0x80000000) != 0)) &&
       ((uVar3 = (ulonglong)*(byte *)((int)param_5 + 9) & 0x3f, uVar6 == 0xffffffff ||
        (uVar6 < uVar3)))) {
      uVar5 = uVar3;
    }
    if (((1 < bVar1) && ((uVar4 & 0x40000000) != 0)) &&
       ((uVar3 = (ulonglong)*(byte *)((int)param_5 + 10) & 0x3f, (int)uVar5 == -1 || (uVar5 < uVar3)
        ))) {
      uVar5 = uVar3;
    }
    if ((((2 < bVar1) || ((&lbl_831BEB3C)[uVar2 >> 0x1a] == '\x01')) && ((uVar4 & 0x20000000) != 0))
       && (((int)uVar5 == -1 || (uVar5 < ((ulonglong)uVar4 & 0x3f))))) {
      uVar5 = (ulonglong)uVar4 & 0x3f;
    }
    if (((&lbl_831BEB3C)[uVar2 >> 0x1a] == '\x02') &&
       ((uVar3 = ((ulonglong)(uVar4 >> 2) & 0x8000000 | (ulonglong)uVar2 & 0x4000000) >> 0x1a |
                 (ulonglong)param_5[1] & 0x3c, (int)uVar5 == -1 || (uVar5 < uVar3)))) {
      uVar5 = uVar3;
    }
    uVar6 = (uint)uVar5;
    uVar3 = (ulonglong)uVar2 & 0x3f;
    if ((uVar2 & 0x8000) != 0) {
      if ((0x1f < uVar3) && (uVar3 < 0x26)) {
        param_6[6] = 1;
      }
      goto LAB_82634498;
    }
    if ((uVar6 == 0xffffffff) || (uVar5 < uVar3)) {
      uVar5 = uVar3;
    }
    uVar2 = uVar2 >> 8;
  }
  else {
    uVar3 = (ulonglong)(*param_5 >> 0xc) & 0x3f;
    if ((uVar6 == 0xffffffff) || (uVar6 < uVar3)) {
      uVar5 = uVar3;
    }
    uVar2 = *param_5 >> 5;
  }
  uVar6 = (uint)uVar5;
  if ((uVar6 == 0xffffffff) || (uVar5 < ((ulonglong)uVar2 & 0x3f))) {
    uVar6 = (uint)((ulonglong)uVar2 & 0x3f);
  }
LAB_82634498:
  param_6[1] = uVar6;
  return;
}

