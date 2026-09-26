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


void fn_829B0290(uint *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort uVar10;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar11;
  
  uVar2 = *param_1;
  uVar6 = (ulonglong)uVar2;
  if (*(char *)(param_1 + 2) == '\0') {
    if (param_3 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(ushort *)(param_3 + 8);
    }
    bVar1 = *(byte *)((int)param_1 + 9);
    if (bVar1 < 8) {
      if (bVar1 == 1) {
        uVar10 = uVar10 * 0xff;
        lVar8 = uVar6 + param_2;
        lVar7 = ((uVar6 - 1 & 0xffffffff) >> 3) + param_2;
        lVar9 = 7 - (uVar6 - 1 & 7);
        for (uVar11 = uVar6; uVar11 != 0; uVar11 = uVar11 - 1) {
          lVar8 = lVar8 + -1;
          *(char *)lVar8 = -((*(byte *)lVar7 >> ((uint)lVar9 & 0x3f) & 1) != 0);
          if ((uint)lVar9 == 7) {
            lVar9 = 0;
            lVar7 = lVar7 + -1;
          }
          else {
            lVar9 = lVar9 + 1;
          }
        }
      }
      else if (bVar1 == 2) {
        uVar10 = uVar10 * 0x55;
        lVar8 = uVar6 + param_2;
        lVar7 = ((uVar6 - 1 & 0xffffffff) >> 2) + param_2;
        lVar9 = (3 - (uVar6 - 1 & 3) & 0x7fffffff) << 1;
        for (uVar11 = uVar6; uVar11 != 0; uVar11 = uVar11 - 1) {
          lVar8 = lVar8 + -1;
          bVar1 = *(byte *)lVar7 >> ((uint)lVar9 & 0x3f);
          bVar4 = bVar1 & 3;
          *(byte *)lVar8 = (((bVar1 & 3) << 2 | bVar4) << 2 | bVar4) << 2 | bVar4;
          if ((uint)lVar9 == 6) {
            lVar9 = 0;
            lVar7 = lVar7 + -1;
          }
          else {
            lVar9 = lVar9 + 2;
          }
        }
      }
      else if (bVar1 == 4) {
        uVar10 = uVar10 * 0x11;
        lVar8 = uVar6 + param_2;
        lVar7 = ((uVar6 - 1 & 0xffffffff) >> 1) + param_2;
        lVar9 = (uVar6 - 1 & 1) * -4 + 4;
        for (uVar11 = uVar6; uVar11 != 0; uVar11 = uVar11 - 1) {
          lVar8 = lVar8 + -1;
          bVar1 = *(byte *)lVar7 >> ((uint)lVar9 & 0x3f);
          *(byte *)lVar8 = bVar1 << 4 | bVar1 & 0xf;
          if ((uint)lVar9 == 4) {
            lVar9 = 0;
            lVar7 = lVar7 + -1;
          }
          else {
            lVar9 = 4;
          }
        }
      }
      param_1[1] = uVar2;
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 8;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      lVar8 = uVar6 + param_2;
      param_2 = ((ulonglong)uVar2 & 0x7fffffff) * 2 + param_2;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (*(byte *)((int)lVar8 + -1) == uVar10) {
          *(undefined1 *)((int)param_2 + -1) = 0;
        }
        else {
          *(undefined1 *)((int)param_2 + -1) = 0xff;
        }
        lVar8 = lVar8 + -1;
        param_2 = param_2 + -2;
        *(undefined1 *)param_2 = *(undefined1 *)lVar8;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      lVar8 = (ulonglong)param_1[1] + param_2;
      param_2 = ((ulonglong)param_1[1] & 0x7fffffff) * 2 + param_2;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        iVar3 = (int)param_2;
        iVar5 = (int)lVar8;
        lVar8 = lVar8 + -2;
        if (*(ushort *)(iVar5 + -2) == uVar10) {
          *(undefined1 *)(iVar3 + -1) = 0;
          *(undefined1 *)(iVar3 + -2) = 0;
        }
        else {
          *(undefined1 *)(iVar3 + -1) = 0xff;
          *(undefined1 *)(iVar3 + -2) = 0xff;
        }
        *(undefined1 *)(iVar3 + -3) = *(undefined1 *)(iVar5 + -1);
        param_2 = param_2 + -4;
        *(undefined1 *)param_2 = *(undefined1 *)lVar8;
      }
    }
    iVar3 = (*(byte *)((int)param_1 + 9) & 0x7f) << 1;
    *(undefined1 *)((int)param_1 + 10) = 2;
    *(undefined1 *)(param_1 + 2) = 4;
  }
  else {
    if (*(char *)(param_1 + 2) != '\x02') {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      lVar8 = (ulonglong)param_1[1] + param_2;
      param_2 = ((ulonglong)uVar2 & 0x3fffffff) * 4 + param_2;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        iVar5 = (int)lVar8;
        iVar3 = (int)param_2;
        if ((((ushort)*(byte *)(iVar5 + -3) == *(ushort *)(param_3 + 2)) &&
            ((ushort)*(byte *)(iVar5 + -2) == *(ushort *)(param_3 + 4))) &&
           ((ushort)*(byte *)(iVar5 + -1) == *(ushort *)(param_3 + 6))) {
          *(undefined1 *)(iVar3 + -1) = 0;
        }
        else {
          *(undefined1 *)(iVar3 + -1) = 0xff;
        }
        *(byte *)(iVar3 + -2) = *(byte *)(iVar5 + -1);
        *(undefined1 *)(iVar3 + -3) = *(undefined1 *)(iVar5 + -2);
        lVar8 = lVar8 + -3;
        param_2 = param_2 + -4;
        *(undefined1 *)param_2 = *(undefined1 *)lVar8;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      lVar8 = (ulonglong)param_1[1] + param_2;
      param_2 = ((ulonglong)uVar2 & 0x1fffffff) * 8 + param_2;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        iVar5 = (int)lVar8;
        iVar3 = (int)param_2;
        if (((*(short *)(iVar5 + -6) == *(short *)(param_3 + 2)) &&
            (*(short *)(iVar5 + -4) == *(short *)(param_3 + 4))) &&
           (*(short *)(iVar5 + -2) == *(short *)(param_3 + 6))) {
          *(undefined1 *)(iVar3 + -1) = 0;
          *(undefined1 *)(iVar3 + -2) = 0;
        }
        else {
          *(undefined1 *)(iVar3 + -1) = 0xff;
          *(undefined1 *)(iVar3 + -2) = 0xff;
        }
        *(undefined1 *)(iVar3 + -3) = *(undefined1 *)(iVar5 + -1);
        *(undefined1 *)(iVar3 + -4) = *(undefined1 *)(iVar5 + -2);
        *(undefined1 *)(iVar3 + -5) = *(undefined1 *)(iVar5 + -3);
        *(undefined1 *)(iVar3 + -6) = *(undefined1 *)(iVar5 + -4);
        *(undefined1 *)(iVar3 + -7) = *(undefined1 *)(iVar5 + -5);
        lVar8 = lVar8 + -6;
        param_2 = param_2 + -8;
        *(undefined1 *)param_2 = *(undefined1 *)lVar8;
      }
    }
    iVar3 = (*(byte *)((int)param_1 + 9) & 0x3f) << 2;
    *(undefined1 *)(param_1 + 2) = 6;
    *(undefined1 *)((int)param_1 + 10) = 4;
  }
  *(char *)((int)param_1 + 0xb) = (char)iVar3;
  param_1[1] = iVar3 * uVar2 >> 3;
  return;
}

