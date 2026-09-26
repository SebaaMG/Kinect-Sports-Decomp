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


void fn_829AFFF0(uint *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar9;
  longlong lVar8;
  undefined1 uVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  
  uVar2 = *param_1;
  uVar11 = (ulonglong)uVar2;
  if (*(char *)(param_1 + 2) == '\x03') {
    bVar1 = *(byte *)((int)param_1 + 9);
    if (bVar1 < 8) {
      if (bVar1 == 1) {
        lVar7 = uVar11 + param_2;
        lVar6 = ((uVar11 - 1 & 0xffffffff) >> 3) + param_2;
        lVar8 = 7 - (uVar11 - 1 & 7);
        for (uVar13 = uVar11; uVar13 != 0; uVar13 = uVar13 - 1) {
          lVar7 = lVar7 + -1;
          *(byte *)lVar7 = *(byte *)lVar6 >> ((uint)lVar8 & 0x3f) & 1;
          if ((uint)lVar8 == 7) {
            lVar8 = 0;
            lVar6 = lVar6 + -1;
          }
          else {
            lVar8 = lVar8 + 1;
          }
        }
      }
      else if (bVar1 == 2) {
        lVar7 = uVar11 + param_2;
        lVar6 = ((uVar11 - 1 & 0xffffffff) >> 2) + param_2;
        lVar8 = (3 - (uVar11 - 1 & 3) & 0x7fffffff) << 1;
        for (uVar13 = uVar11; uVar13 != 0; uVar13 = uVar13 - 1) {
          lVar7 = lVar7 + -1;
          *(byte *)lVar7 = *(byte *)lVar6 >> ((uint)lVar8 & 0x3f) & 3;
          if ((uint)lVar8 == 6) {
            lVar8 = 0;
            lVar6 = lVar6 + -1;
          }
          else {
            lVar8 = lVar8 + 2;
          }
        }
      }
      else if (bVar1 == 4) {
        lVar7 = uVar11 + param_2;
        lVar6 = ((uVar11 - 1 & 0xffffffff) >> 1) + param_2;
        uVar9 = (uVar2 & 1) << 2;
        for (uVar13 = uVar11; uVar13 != 0; uVar13 = uVar13 - 1) {
          lVar7 = lVar7 + -1;
          *(byte *)lVar7 = *(byte *)lVar6 >> (uVar9 & 0x3f) & 0xf;
          if (uVar9 == 4) {
            uVar9 = 0;
            lVar6 = lVar6 + -1;
          }
          else {
            uVar9 = uVar9 + 4;
          }
        }
      }
      param_1[1] = uVar2;
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 8;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      lVar7 = uVar11 + param_2;
      if (param_4 == 0) {
        lVar6 = uVar11 * 3;
        param_2 = lVar6 + param_2;
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)((int)param_2 + -1) =
               *(undefined1 *)((uint)*(byte *)((int)lVar7 + -1) * 3 + param_3 + 2);
          *(undefined1 *)((int)param_2 + -2) =
               *(undefined1 *)((uint)*(byte *)((int)lVar7 + -1) * 3 + param_3 + 1);
          lVar7 = lVar7 + -1;
          param_2 = param_2 + -3;
          *(undefined1 *)param_2 = *(undefined1 *)((uint)*(byte *)lVar7 * 3 + param_3);
        }
        uVar12 = 0x18;
        param_1[1] = (uint)lVar6;
        uVar10 = 2;
        uVar5 = 3;
      }
      else {
        lVar6 = ((ulonglong)uVar2 & 0x3fffffff) * 4;
        param_2 = lVar6 + param_2;
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
          iVar4 = (int)param_2;
          iVar3 = (int)lVar7;
          uVar5 = 0xff;
          if ((int)(uint)*(byte *)(iVar3 + -1) < param_5) {
            uVar5 = *(undefined1 *)((uint)*(byte *)(iVar3 + -1) + param_4);
          }
          *(undefined1 *)(iVar4 + -1) = uVar5;
          *(undefined1 *)(iVar4 + -2) =
               *(undefined1 *)((uint)*(byte *)(iVar3 + -1) * 3 + param_3 + 2);
          *(undefined1 *)(iVar4 + -3) =
               *(undefined1 *)((uint)*(byte *)(iVar3 + -1) * 3 + param_3 + 1);
          lVar7 = lVar7 + -1;
          param_2 = param_2 + -4;
          *(undefined1 *)param_2 = *(undefined1 *)((uint)*(byte *)lVar7 * 3 + param_3);
        }
        uVar12 = 0x20;
        param_1[1] = (uint)lVar6;
        uVar10 = 6;
        uVar5 = 4;
      }
      *(undefined1 *)((int)param_1 + 10) = uVar5;
      *(undefined1 *)(param_1 + 2) = uVar10;
      *(undefined1 *)((int)param_1 + 0xb) = uVar12;
      *(undefined1 *)((int)param_1 + 9) = 8;
    }
  }
  return;
}

