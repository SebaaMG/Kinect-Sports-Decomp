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
extern unsigned int *auStack_50;
extern int fn_82F68CC0();
extern unsigned int lbl_82054B40;


void fn_829B9380(uint *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_50 [80];
  
  if ((param_2 != 0) && (param_1 != (uint *)0x0)) {
    uVar2 = *param_1;
    bVar1 = *(byte *)((int)param_1 + 0xb);
    uVar3 = *(uint *)(&lbl_82054B40 + param_3 * 4);
    uVar8 = (ulonglong)uVar3;
    uVar9 = uVar2 * uVar3;
    if (bVar1 == 1) {
      uVar11 = 7 - (uVar2 - 1 & 7);
      pbVar5 = (byte *)((uVar2 - 1 >> 3) + param_2);
      pbVar6 = (byte *)((uVar9 - 1 >> 3) + param_2);
      uVar7 = 7 - (uVar9 - 1 & 7);
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          bVar1 = *pbVar5;
          if (0 < (int)uVar3) {
            uVar10 = uVar8;
            do {
              *pbVar6 = (byte)(0x7f7f >> (7 - uVar7 & 0x3f)) & *pbVar6 |
                        (byte)((bVar1 >> (uVar11 & 0x3f) & 1) << (uVar7 & 0x3f));
              if (uVar7 == 7) {
                uVar7 = 0;
                pbVar6 = pbVar6 + -1;
              }
              else {
                uVar7 = uVar7 + 1;
              }
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          if (uVar11 == 7) {
            uVar11 = 0;
            pbVar5 = pbVar5 + -1;
          }
          else {
            uVar11 = uVar11 + 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *param_1);
      }
    }
    else if (bVar1 == 2) {
      pbVar5 = (byte *)((uVar2 - 1 >> 2) + param_2);
      pbVar6 = (byte *)((uVar9 - 1 >> 2) + param_2);
      uVar7 = (3 - (uVar9 - 1 & 3)) * 2;
      uVar11 = (3 - (uVar2 - 1 & 3)) * 2;
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          bVar1 = *pbVar5;
          if (0 < (int)uVar3) {
            uVar10 = uVar8;
            do {
              *pbVar6 = (byte)(0x3f3f >> (6 - uVar7 & 0x3f)) & *pbVar6 |
                        (byte)((bVar1 >> (uVar11 & 0x3f) & 3) << (uVar7 & 0x3f));
              if (uVar7 == 6) {
                uVar7 = 0;
                pbVar6 = pbVar6 + -1;
              }
              else {
                uVar7 = uVar7 + 2;
              }
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          if (uVar11 == 6) {
            uVar11 = 0;
            pbVar5 = pbVar5 + -1;
          }
          else {
            uVar11 = uVar11 + 2;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *param_1);
      }
    }
    else if (bVar1 == 4) {
      uVar11 = 4 - ((uVar2 - 1) * 4 & 4);
      pbVar5 = (byte *)((uVar2 - 1 >> 1) + param_2);
      pbVar6 = (byte *)((uVar9 - 1 >> 1) + param_2);
      uVar7 = 4 - ((uVar9 - 1) * 4 & 4);
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          bVar1 = *pbVar5;
          if (0 < (int)uVar3) {
            uVar10 = uVar8;
            do {
              *pbVar6 = (byte)(0xf0f >> (4 - uVar7 & 0x3f)) & *pbVar6 |
                        (byte)((bVar1 >> (uVar11 & 0x3f) & 0xf) << (uVar7 & 0x3f));
              if (uVar7 == 4) {
                uVar7 = 0;
                pbVar6 = pbVar6 + -1;
              }
              else {
                uVar7 = uVar7 + 4;
              }
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          if (uVar11 == 4) {
            uVar11 = 0;
            pbVar5 = pbVar5 + -1;
          }
          else {
            uVar11 = uVar11 + 4;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *param_1);
      }
    }
    else {
      bVar1 = bVar1 >> 3;
      uVar4 = (uint)bVar1;
      iVar12 = (uVar2 - 1) * (uint)bVar1 + param_2;
      param_2 = (uVar9 - 1) * (uint)bVar1 + param_2;
      uVar11 = 0;
      if (uVar2 != 0) {
        do {
          fn_82F68CC0(auStack_50,iVar12,uVar4);
          uVar10 = uVar8;
          if (0 < (int)uVar3) {
            do {
              fn_82F68CC0(param_2,auStack_50,uVar4);
              uVar10 = uVar10 - 1;
              param_2 = param_2 - uVar4;
            } while (uVar10 != 0);
          }
          uVar11 = uVar11 + 1;
          iVar12 = iVar12 - uVar4;
        } while (uVar11 < *param_1);
      }
    }
    *param_1 = uVar9;
    param_1[1] = *(byte *)((int)param_1 + 0xb) * uVar9 + 7 >> 3;
  }
  return;
}

