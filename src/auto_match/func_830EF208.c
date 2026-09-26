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
extern unsigned int iStack00000034;
extern unsigned int iStack_c0;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_bc;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;


void fn_830EF208(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uStack00000024;
  uint uStack0000002c;
  int iStack00000034;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  int iStack_c0;
  uint uStack_bc;
  
  uVar3 = *(uint *)(param_1 + 0x88);
  uVar4 = *(uint *)(param_1 + 0xcc);
  iVar5 = *(int *)(param_1 + 0xd0);
  pbVar13 = *(byte **)(param_1 + 0xf88);
  iVar6 = uVar3 * 6;
  iVar7 = iVar5 << 1;
  iVar19 = uVar4 << 1;
  lVar11 = ((ulonglong)uVar4 & 0x1fffffff) * 8;
  lVar9 = ((ulonglong)uVar4 & 0xfffffff) * 0x10;
  lVar10 = ((ulonglong)uVar4 + ((ulonglong)uVar4 & 0x3fffffff) * 4 & 0x3fffffff) * 4;
  if (param_5 == 0) {
    uVar22 = 0;
    uStack_cc = 0;
    uStack_c8 = 1;
  }
  else {
    uStack_cc = *(uint *)(param_1 + 0xd0);
    uVar22 = (ulonglong)*(uint *)(param_1 + 0xcc);
    uStack_c8 = 0x11;
  }
  uVar21 = *(uint *)(param_1 + 0x8c);
  uVar8 = 0;
  uStack_c4 = 0;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  iStack00000034 = param_5;
  if (uVar21 != 0) {
    iStack_c0 = 0;
    uStack_bc = param_2;
    do {
      if (*(int *)(param_1 + 0x55b4) == 0) {
        iVar12 = -((uVar8 < (ulonglong)*(uint *)(param_1 + 0x8c) - 1) - 1);
      }
      else if ((uVar8 < ((ulonglong)*(uint *)(param_1 + 0x8c) - 1 & 0xffffffff)) &&
              (*(int *)(*(int *)(param_1 + 0x55d4) + iStack_c0 + 4) == 0)) {
        iVar12 = 0;
      }
      else {
        iVar12 = 1;
      }
      uVar23 = (ulonglong)uStack_bc;
      uVar14 = 0;
      if (uVar3 != 0) {
        do {
          uVar20 = (ulonglong)(char)pbVar13[1];
          uVar17 = (uint)(char)pbVar13[2];
          bVar1 = pbVar13[param_5];
          uVar15 = (uint)(char)pbVar13[3];
          bVar2 = pbVar13[iVar6];
          uVar8 = (ulonglong)bVar2;
          if ((*pbVar13 & 0x80) == 0) {
            (**(code **)(param_1 + 0x3e38))
                      (uVar23 + uVar22 + lVar11,iVar19,*(undefined4 *)(param_1 + 0xf8),0x10);
            if (iVar12 == 0) {
              if ((uVar20 & 0xffffffff) != 0) {
                (**(code **)(param_1 + 0x3e38))
                          (((uVar20 & 0xffffffff) >> 1 & 0x7ffffff8) + uVar23 + uVar22 +
                           ((ulonglong)uVar4 + ((ulonglong)uVar4 & 0x7fffffff) * 2 & 0x3fffffff) * 4
                           ,iVar19,*(undefined4 *)(param_1 + 0xf8),(uVar20 & 0xf) << 3);
              }
              (**(code **)(param_1 + 0x3e38))
                        (uVar23 + uVar22 + lVar9,iVar19,*(undefined4 *)(param_1 + 0xf8),0x10);
              if (((bVar2 & 0x80) == 0) && ((bVar2 & 0x7f) != 0)) {
                (**(code **)(param_1 + 0x3e38))
                          (((uVar8 & 0x7f) >> 1 & 0x7ffffff8) + uVar23 + uVar22 + lVar10,iVar19,
                           *(undefined4 *)(param_1 + 0xf8),(uVar8 & 0xf) << 3);
              }
            }
            if (uVar14 != 0) {
              (**(code **)(param_1 + 0x3e3c))
                        (uVar23 + uVar22 + -5,iVar19,*(undefined4 *)(param_1 + 0xf8),8);
            }
            if (uVar17 != 0) {
              (**(code **)(param_1 + 0x3e3c))
                        ((longlong)(int)(uVar17 >> 4) * (longlong)(int)lVar11 + uVar23 + uVar22 + -1
                         ,iVar19,*(undefined4 *)(param_1 + 0xf8),(uVar17 & 0xf) << 2);
            }
            (**(code **)(param_1 + 0x3e3c))
                      (uVar22 + 3 + uVar23,iVar19,*(undefined4 *)(param_1 + 0xf8),8);
            if (uVar15 != 0) {
              iVar16 = (uVar15 & 0xf) << 2;
              uVar8 = (longlong)(int)(uVar15 >> 4) * (longlong)(int)lVar11 + uVar23;
LAB_830ef614:
              (**(code **)(param_1 + 0x3e3c))
                        (uVar8 + uVar22 + 7,iVar19,*(undefined4 *)(param_1 + 0xf8),iVar16);
            }
          }
          else {
            if ((bVar1 & 0x7f) != 0) {
              (**(code **)(param_1 + 0x3e38))
                        ((((ulonglong)bVar1 & 0x7f) >> 1 & 0x7ffffff8) + uVar23 + uVar22 + lVar11,
                         iVar19,*(undefined4 *)(param_1 + 0xf8),((ulonglong)bVar1 & 0xf) << 3);
            }
            if (((iVar12 == 0) &&
                ((**(code **)(param_1 + 0x3e38))
                           (uVar23 + uVar22 + lVar9,iVar19,*(undefined4 *)(param_1 + 0xf8),0x10),
                (bVar2 & 0x80) == 0)) && ((bVar2 & 0x7f) != 0)) {
              (**(code **)(param_1 + 0x3e38))
                        (((uVar8 & 0x7f) >> 1 & 0x7ffffff8) + uVar23 + uVar22 + lVar10,iVar19,
                         *(undefined4 *)(param_1 + 0xf8),(uVar8 & 0xf) << 3);
            }
            if (uVar14 != 0) {
              (**(code **)(param_1 + 0x3e3c))
                        (uVar23 + uVar22 + -5,iVar19,*(undefined4 *)(param_1 + 0xf8),8);
            }
            if ((uVar17 == uStack_c8) || (uVar17 == 2)) {
              (**(code **)(param_1 + 0x3e3c))
                        (uVar23 + uVar22 + -1,iVar19,*(undefined4 *)(param_1 + 0xf8),8);
            }
            (**(code **)(param_1 + 0x3e3c))
                      (uVar22 + 3 + uVar23,iVar19,*(undefined4 *)(param_1 + 0xf8),8);
            if ((uVar15 == uStack_c8) || (uVar15 == 2)) {
              iVar16 = 8;
              uVar8 = uVar23;
              goto LAB_830ef614;
            }
          }
          uVar14 = uVar14 + 1;
          pbVar13 = pbVar13 + 6;
          uVar23 = uVar23 + 0x10;
        } while (uVar14 < uVar3);
        uVar8 = (ulonglong)uStack_c4;
        param_5 = iStack00000034;
      }
      uStack_c4 = (int)uVar8 + 1;
      iStack_c0 = iStack_c0 + 4;
      uStack_bc = *(int *)(param_1 + 0xe4) + uStack_bc;
      if (uVar21 <= uStack_c4) break;
      uVar8 = (ulonglong)uStack_c4;
    } while( true );
  }
  uVar3 = *(uint *)(param_1 + 0x8c);
  uVar23 = 0;
  uVar8 = (ulonglong)uStack00000024;
  iVar19 = *(int *)(param_1 + 0xf88);
  uVar22 = (ulonglong)uStack0000002c;
  uVar4 = *(uint *)(param_1 + 0x88);
  if (uVar3 != 0) {
    iVar12 = 0;
    do {
      if (*(int *)(param_1 + 0x55b4) == 0) {
        iVar16 = -((uVar23 < (ulonglong)*(uint *)(param_1 + 0x8c) - 1) - 1);
        iVar18 = -((uVar23 < (ulonglong)*(uint *)(param_1 + 0x8c) - 2) - 1);
      }
      else {
        if (((uVar23 & 0xffffffff) < (ulonglong)(*(int *)(param_1 + 0x8c) - 1)) &&
           (*(int *)(*(int *)(param_1 + 0x55d4) + iVar12 + 4) == 0)) {
          iVar16 = 0;
          iVar18 = 0;
          if (((uVar23 & 0xffffffff) < (ulonglong)(*(int *)(param_1 + 0x8c) - 2)) &&
             (*(int *)(*(int *)(param_1 + 0x55d4) + iVar12 + 8) == 0)) {
            iVar18 = 0;
            goto LAB_830ef728;
          }
        }
        else {
          iVar18 = 1;
        }
        iVar16 = iVar18;
        iVar18 = 1;
      }
LAB_830ef728:
      uVar21 = 0;
      if (uVar4 != 0) {
        lVar9 = uVar22 - uVar8;
        uVar20 = uVar8;
        do {
          if (iVar16 == 0) {
            lVar10 = (ulonglong)uStack_cc + (ulonglong)(uint)(iVar5 << 3);
            (**(code **)(param_1 + 0x3e38))(lVar10 + uVar20,iVar7,*(undefined4 *)(param_1 + 0xf8),8)
            ;
            (**(code **)(param_1 + 0x3e38))
                      (lVar10 + lVar9 + uVar20,iVar7,*(undefined4 *)(param_1 + 0xf8),8);
          }
          if (iVar18 == 0) {
            if ((*(byte *)(iVar6 + iVar19 + 4) & 0xf0) != 0) {
              (**(code **)(param_1 + 0x3e38))
                        (uVar20 + uStack_cc + (ulonglong)(uint)(iVar5 * 0xc),iVar7,
                         *(undefined4 *)(param_1 + 0xf8),8);
            }
            if ((*(byte *)(iVar6 + iVar19 + 5) & 0xf0) != 0) {
              (**(code **)(param_1 + 0x3e38))
                        (lVar9 + uVar20 + (ulonglong)uStack_cc + (ulonglong)(uint)(iVar5 * 0xc),
                         iVar7,*(undefined4 *)(param_1 + 0xf8),8);
            }
          }
          if (uVar21 != 0) {
            (**(code **)(param_1 + 0x3e3c))
                      (((ulonglong)uStack_cc - 5) + uVar20,iVar7,*(undefined4 *)(param_1 + 0xf8),4);
            (**(code **)(param_1 + 0x3e3c))
                      (((ulonglong)uStack_cc - 5) + lVar9 + uVar20,iVar7,
                       *(undefined4 *)(param_1 + 0xf8),4);
          }
          if ((*(byte *)(iVar19 + 4) & 0xf) != 0) {
            (**(code **)(param_1 + 0x3e3c))
                      (uVar20 + uStack_cc + -1,iVar7,*(undefined4 *)(param_1 + 0xf8),4);
          }
          if ((*(byte *)(iVar19 + 5) & 0xf) != 0) {
            (**(code **)(param_1 + 0x3e3c))
                      (lVar9 + uVar20 + (ulonglong)uStack_cc + -1,iVar7,
                       *(undefined4 *)(param_1 + 0xf8),4);
          }
          uVar21 = uVar21 + 1;
          iVar19 = iVar19 + 6;
          uVar20 = uVar20 + 8;
        } while (uVar21 < uVar4);
      }
      uVar23 = uVar23 + 1;
      iVar12 = iVar12 + 4;
      uVar8 = *(uint *)(param_1 + 0xe8) + uVar8;
      uVar22 = *(uint *)(param_1 + 0xe8) + uVar22;
    } while ((uVar23 & 0xffffffff) < (ulonglong)uVar3);
  }
  return;
}

