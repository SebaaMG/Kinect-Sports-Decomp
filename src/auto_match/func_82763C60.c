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
extern int fn_827622E0();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_50;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;


void fn_82763C60(int param_1,ulonglong param_2,uint param_3,ulonglong param_4,ulonglong param_5,
                  uint param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar6;
  ulonglong uVar5;
  ulonglong uVar7;
  undefined4 *puVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  uint uVar11;
  byte bVar12;
  longlong lVar13;
  undefined4 uStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 uStack_40;
  
  iVar2 = (int)param_2;
  iVar3 = (int)param_4;
  iVar4 = (int)param_5;
  uStack_40 = 0;
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x20)) {
    puVar6 = (undefined4 *)(*(uint *)(param_1 + 0x28) * 0x14 + *(int *)(param_1 + 0x1c) + -4);
    puVar9 = &uStack_54;
    lVar13 = 5;
    do {
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar9;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  else {
    iStack_50 = iVar2;
    uStack_4c = param_3;
    iStack_48 = iVar3;
    iStack_44 = iVar4;
    fn_827622E0(param_1 + 0x1c,&iStack_50);
  }
  bVar1 = *(byte *)(param_1 + 0x34);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (bVar1 < param_6) {
    *(char *)(param_1 + 0x34) = (char)param_6;
  }
  else if (param_6 == 0) {
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = ((param_2 ^ (longlong)(iVar2 >> 0x1f)) - (longlong)(iVar2 >> 0x1f) & 0x7fffffff) << 1;
    }
    if (param_3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (((ulonglong)param_3 ^ (longlong)((int)param_3 >> 0x1f)) -
               (longlong)((int)param_3 >> 0x1f) & 0x7fffffff) << 1;
    }
    if (iVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = ((param_4 ^ (longlong)(iVar3 >> 0x1f)) - (longlong)(iVar3 >> 0x1f) & 0x7fffffff) << 1;
    }
    if (iVar4 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = ((param_5 ^ (longlong)(iVar4 >> 0x1f)) - (longlong)(iVar4 >> 0x1f) & 0x7fffffff) << 1
      ;
    }
    uVar5 = uVar10 | uVar8 | uVar7 | uVar5;
    if (uVar5 < 0x8000) {
      if (uVar5 < 0x80) {
        if (uVar5 < 8) {
          if (uVar5 < 2) {
            uVar11 = -((uVar5 == 0) - 1);
          }
          else {
            uVar11 = 3 - (uVar5 < 4);
          }
        }
        else if (uVar5 < 0x20) {
          uVar11 = 5 - (uVar5 < 0x10);
        }
        else {
          uVar11 = 7 - (uVar5 < 0x40);
        }
      }
      else if (uVar5 < 0x800) {
        if (uVar5 < 0x200) {
          uVar11 = 9 - (uVar5 < 0x100);
        }
        else {
          uVar11 = 0xb - (uVar5 < 0x400);
        }
      }
      else if (uVar5 < 0x2000) {
        uVar11 = 0xd - (uVar5 < 0x1000);
      }
      else {
        uVar11 = 0xf - (uVar5 < 0x4000);
      }
    }
    else if (uVar5 < 0x800000) {
      if (uVar5 < 0x80000) {
        if (uVar5 < 0x20000) {
          uVar11 = 0x11 - (uVar5 < 0x10000);
        }
        else {
          uVar11 = 0x13 - (uVar5 < 0x40000);
        }
      }
      else if (uVar5 < 0x200000) {
        uVar11 = 0x15 - (uVar5 < 0x100000);
      }
      else {
        uVar11 = 0x17 - (uVar5 < 0x400000);
      }
    }
    else if (uVar5 < 0x8000000) {
      if (uVar5 < 0x2000000) {
        uVar11 = 0x19 - (uVar5 < 0x1000000);
      }
      else {
        uVar11 = 0x1b - (uVar5 < 0x4000000);
      }
    }
    else if (uVar5 < 0x20000000) {
      uVar11 = 0x1d - (uVar5 < 0x10000000);
    }
    else if (uVar5 < 0x40000000) {
      uVar11 = 0x1e;
    }
    else {
      uVar11 = 0x20 - (uVar5 < 0xffffffff80000000);
    }
    bVar12 = (byte)uVar11;
    if ((uVar11 & 0xff) <= (uint)bVar1) {
      bVar12 = bVar1;
    }
    *(byte *)(param_1 + 0x34) = bVar12;
  }
  *(int *)(param_1 + 0x14) = iVar2 + iVar3 + *(int *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3 + iVar4;
  return;
}

