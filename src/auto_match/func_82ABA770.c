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
extern int fn_82A29A38();


uint * fn_82ABA770(uint *param_1,ulonglong param_2,ulonglong param_3,int *param_4,int param_5)

{
  bool bVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar2 = param_2 & 0x7ff;
  uVar9 = (uint)uVar2;
  uVar5 = ((uint)((param_2 & 0xffffffff) >> 0x14) & 0x700 | (uint)param_2 & 0x1800) >> 8;
  bVar1 = false;
  uVar8 = 0;
  if (uVar5 == 3) {
    uVar10 = 3;
LAB_82aba8c8:
    uVar9 = 0;
  }
  else {
    if (uVar5 == 4) {
      if (uVar2 == 1) {
        uVar10 = 0x10;
      }
      else {
        if (uVar2 == 2) {
          uVar10 = 4;
          uVar9 = 0x32;
          *(uint *)(param_5 + 4) = *(uint *)(param_5 + 4) | 0x40;
          goto LAB_82aba8cc;
        }
        uVar10 = 0xe;
      }
      goto LAB_82aba8c8;
    }
    if (uVar5 == 5) {
      uVar10 = ((ulonglong)(uVar9 == 0) ^ 1) + 0x12;
      goto LAB_82aba8c8;
    }
    if (uVar5 == 6) {
      if (*(uint *)(param_5 + 0x10) < 0x300) {
        uVar10 = 0x11;
        if (*(uint *)(param_5 + 0x640) < uVar2) {
          *(uint *)(param_5 + 0x640) = uVar9;
        }
      }
      else {
        uVar10 = 0xb;
        uVar5 = 0;
        puVar3 = (uint *)(param_5 + 0x644);
        do {
          if (((ulonglong)(*puVar3 >> 5) & 0x7ff) == uVar2) {
            uVar9 = (uint)*(byte *)(uVar5 * 4 + param_5 + 0x645);
            break;
          }
          uVar5 = uVar5 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar5 < 0x40);
        if ((param_2 & 0x2000) == 0x2000) {
          bVar1 = true;
          if (((param_3 & 0xffffffff) >> 0x14 & 0x700 | param_3 & 0x1800) == 0xf00) {
            uVar8 = 0x10000;
          }
          else {
            fn_82A29A38();
          }
        }
      }
    }
    else {
      uVar10 = 4;
      if (uVar5 == 0x13) {
        uVar9 = 0x20;
      }
    }
  }
LAB_82aba8cc:
  if ((param_2 & 0xf0000) == 0xf0000) {
    uVar5 = 0x55;
  }
  else {
    uVar5 = (uint)((param_2 & 0x10000) != 0);
    if ((param_2 & 0x20000) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((param_2 & 0x40000) != 0) {
      uVar5 = uVar5 | 0x10;
    }
    if ((param_2 & 0x80000) != 0) {
      uVar5 = uVar5 | 0x40;
    }
  }
  uVar4 = 0;
  if ((param_2 & 0x100000) == 0x100000) {
    uVar4 = 0x100;
  }
  if (uVar10 == 0xd) {
LAB_82aba954:
    uVar5 = 0xa9;
    uVar6 = uVar4 | 0xa9;
  }
  else if (uVar10 == 0x10) {
    uVar4 = 0x100;
    uVar5 = 1;
    uVar6 = 0x101;
  }
  else {
    if (0x11 < uVar10) {
      if (uVar10 < 0x14) {
        if (*(uint *)(param_5 + 0x10) < 0x300) {
          uVar4 = 0x100;
        }
      }
      else if (uVar10 == 0x32) goto LAB_82aba954;
    }
    uVar6 = uVar4 | uVar5;
  }
  if (bVar1) {
    if ((uVar5 != 0x55) || (uVar4 != 0)) {
      *param_1 = (uint)(uVar10 << 0x10) | 0xc00000 | uVar9;
      param_1[1] = uVar6;
      param_1 = param_1 + 2;
      *param_1 = (uint)param_3 & 0x7ff | uVar8;
      iVar7 = *param_4 + 3;
      goto LAB_82abaa40;
    }
    *param_1 = (uint)(uVar10 << 0x10) | 0x800000 | uVar9;
    param_1[1] = (uint)param_3 & 0x7ff | uVar8;
  }
  else {
    if ((uVar5 == 0x55) && (uVar4 == 0)) {
      *param_1 = (uint)(uVar10 << 0x10) | uVar9;
      iVar7 = *param_4 + 1;
      goto LAB_82abaa40;
    }
    *param_1 = (uint)(uVar10 << 0x10) | 0x400000 | uVar9;
    param_1[1] = uVar6;
  }
  param_1 = param_1 + 1;
  iVar7 = *param_4 + 2;
LAB_82abaa40:
  *param_4 = iVar7;
  return param_1 + 1;
}

