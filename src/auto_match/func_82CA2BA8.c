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
extern int fn_82C45138();
extern unsigned int lbl_820FDE80;
extern unsigned int lbl_820FDEA0;
extern unsigned int lbl_8317756C;
extern unsigned int lbl_8317757C;
extern unsigned int lbl_8329F0A0;
extern unsigned int lbl_8329F0EC;


undefined8 fn_82CA2BA8(int param_1,longlong param_2)

{
  int iVar1;
  ushort uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  undefined **ppuVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  code *pcStack_90;
  
  if ((((*(int *)(param_1 + 0x5580) == 1) && (0 < *(int *)(param_1 + 0x39f4))) &&
      (1 < *(longlong *)(param_1 + 0xe30))) && (iVar5 = fn_82C45138(), iVar5 == 0)) {
    uVar18 = (ulonglong)*(uint *)(param_1 + 0x56b4) +
             ((ulonglong)*(uint *)(param_1 + 0x4fb4) & 0x7fffffff) * 2;
    puVar3 = *(uint **)(param_1 + 0xebc);
    uVar24 = *(int *)(param_1 + 0x24) * (int)uVar18;
    uVar16 = *(uint *)(param_1 + 0x20);
    uVar14 = ((ulonglong)*(uint *)(param_1 + 0x4fb0) & 0x7fffffff) * 2 +
             (ulonglong)*(uint *)(param_1 + 0x56ac);
    lVar13 = (longlong)((int)uVar24 >> 1) + (ulonglong)((int)uVar24 < 0 && (uVar24 & 1) != 0);
    lVar9 = (longlong)((int)uVar16 >> 1) + (ulonglong)((int)uVar16 < 0 && (uVar16 & 1) != 0);
    lVar10 = (longlong)((int)uVar18 + 1) * (longlong)(int)*(uint *)(param_1 + 0x4fb4);
    lVar6 = (longlong)((int)uVar14 + 1) * (longlong)(int)*(uint *)(param_1 + 0x4fb0) +
            (longlong)*(int *)(param_1 + 0x24) * (longlong)(int)uVar14 + (ulonglong)*puVar3 +
            (ulonglong)uVar16;
    lVar7 = (ulonglong)puVar3[1] + lVar9 + lVar13 + lVar10;
    lVar10 = (ulonglong)puVar3[2] + lVar9 + lVar13 + lVar10;
  }
  else {
    iVar5 = fn_82C45138(param_1);
    if (iVar5 == 0) {
      uVar14 = ((ulonglong)*(uint *)(param_1 + 0x4fb0) & 0x7fffffff) * 2 +
               (ulonglong)*(uint *)(param_1 + 0xb4);
      uVar18 = ((ulonglong)*(uint *)(param_1 + 0x4fb4) & 0x7fffffff) * 2 +
               (ulonglong)*(uint *)(param_1 + 0xc0);
    }
    else {
      uVar14 = (ulonglong)*(uint *)(param_1 + 0x60);
      uVar18 = (ulonglong)*(uint *)(param_1 + 0x6c);
    }
    puVar3 = *(uint **)(param_1 + 0xebc);
    uVar24 = *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x24);
    uVar16 = *(uint *)(param_1 + 0x20);
    lVar10 = (longlong)((int)uVar24 >> 1) + (ulonglong)((int)uVar24 < 0 && (uVar24 & 1) != 0);
    lVar9 = (longlong)((int)uVar16 >> 1) + (ulonglong)((int)uVar16 < 0 && (uVar16 & 1) != 0);
    lVar6 = (longlong)*(int *)(param_1 + 0x60) * (longlong)*(int *)(param_1 + 0x24) +
            (ulonglong)*(uint *)(param_1 + 0xdc) + (ulonglong)uVar16 + (ulonglong)*puVar3;
    lVar7 = (ulonglong)puVar3[1] + (ulonglong)*(uint *)(param_1 + 0xe0) + lVar9 + lVar10;
    lVar10 = (ulonglong)puVar3[2] + (ulonglong)*(uint *)(param_1 + 0xe0) + lVar9 + lVar10;
  }
  uVar16 = *(uint *)(param_1 + 0x30);
  uVar22 = (ulonglong)uVar16;
  uVar24 = *(uint *)(param_1 + 0x34);
  uVar23 = (ulonglong)uVar24;
  uVar2 = *(ushort *)(param_1 + 0x3cc4) >> 3;
  uVar25 = (ulonglong)uVar2;
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x28) - (ulonglong)*(uint *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x44);
  param_2 = (ulonglong)*(uint *)(param_1 + 0x3d4c) + param_2;
  uVar11 = (ulonglong)*(uint *)(param_1 + 0x2c) - (ulonglong)*(uint *)(param_1 + 0x24);
  iVar20 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40);
  trapWord(5,uVar25 & ~((((ulonglong)uVar24 & 0x7fffffff) << 1 | (ulonglong)(uVar24 >> 0x1f)) - 1),
           0xffff);
  iVar19 = *(int *)(param_1 + 0x4c) - iVar4;
  iVar5 = (int)uVar24 / (int)(uint)uVar2;
  trapWord(6,uVar25,0);
  iVar1 = (int)uVar16 / (int)(uint)uVar2;
  trapWord(6,uVar25,0);
  trapWord(5,uVar25 & ~((((ulonglong)uVar16 & 0x7fffffff) << 1 | (ulonglong)(uVar16 >> 0x1f)) - 1),
           0xffff);
  if ((*(int *)(param_1 + 0x40) != 0) || (iVar4 != 0)) {
    if (iVar5 == 1) {
      param_2 = (longlong)(*(int *)(param_1 + 0x40) * iVar1 + iVar4) *
                (longlong)(int)(uint)(*(ushort *)(param_1 + 0x3cc4) >> 3) + param_2;
    }
    else {
      if (iVar5 == -1) {
        uVar2 = *(ushort *)(param_1 + 0x3cc4);
        iVar15 = iVar4 - *(int *)(param_1 + 0x40) * iVar1;
      }
      else {
        if (iVar1 == 1) {
          param_2 = (longlong)(iVar4 * iVar5 + *(int *)(param_1 + 0x40)) *
                    (longlong)(int)(uint)(*(ushort *)(param_1 + 0x3cc4) >> 3) + param_2;
          goto LAB_82ca2e34;
        }
        uVar2 = *(ushort *)(param_1 + 0x3cc4);
        iVar15 = *(int *)(param_1 + 0x40) - iVar4 * iVar5;
      }
      param_2 = param_2 - (longlong)iVar15 * (longlong)(int)(uint)(uVar2 >> 3);
    }
  }
LAB_82ca2e34:
  uVar25 = (ulonglong)*(uint *)(param_1 + 0x3cc0);
  iVar15 = (int)uVar8;
  iVar12 = (int)uVar11;
  if (uVar25 < 0x3231564f) {
    if (uVar25 != 0x3231564e) {
      if ((uVar25 == 0) || (uVar25 == 3)) {
        puVar26 = (undefined4 *)0x0;
        if (*(short *)(param_1 + 0x3cc4) == 0x10) {
          puVar26 = &lbl_8329F0A0;
        }
        else if (*(short *)(param_1 + 0x3cc4) == 0x20) {
          puVar26 = &lbl_8329F0EC;
        }
        if ((iVar15 == iVar20) && (iVar12 == iVar19)) {
          if (iVar1 == 1) {
            pcStack_90 = (code *)*puVar26;
          }
          else if (iVar5 == 1) {
            pcStack_90 = (code *)puVar26[1];
          }
          else if (iVar5 == -1) {
            pcStack_90 = (code *)puVar26[3];
          }
          else {
            pcStack_90 = (code *)puVar26[2];
          }
        }
        else if ((iVar12 == iVar19 * 2) && (iVar15 == iVar20 * 2)) {
          if (iVar5 == 1) {
            pcStack_90 = (code *)puVar26[5];
          }
          else if (iVar5 == -1) {
            pcStack_90 = (code *)puVar26[7];
          }
          else if (iVar1 == 1) {
            pcStack_90 = (code *)puVar26[4];
          }
          else {
            pcStack_90 = (code *)puVar26[6];
          }
        }
        else {
          iVar4 = (int)((uVar11 & 0xffffffff) << 1);
          if ((iVar4 == iVar19) && ((int)((uVar8 & 0xffffffff) << 1) == iVar20)) {
            if (iVar5 == 1) {
              pcStack_90 = (code *)puVar26[9];
            }
            else if (iVar5 == -1) {
              pcStack_90 = (code *)puVar26[0xb];
            }
            else if (iVar1 == 1) {
              pcStack_90 = (code *)puVar26[8];
            }
            else {
              pcStack_90 = (code *)puVar26[10];
            }
          }
          else if ((iVar19 < iVar12) || (iVar20 < iVar15)) {
            if (iVar19 < iVar4 / 3) {
              pcStack_90 = (code *)puVar26[0x12];
            }
            else {
              uVar16 = iVar15 + (int)((uVar8 & 0xffffffff) << 1);
              if (iVar20 < (int)(((int)uVar16 >> 1) + (uint)((int)uVar16 < 0 && (uVar16 & 1) != 0)))
              {
                pcStack_90 = (code *)puVar26[0x11];
              }
              else {
                pcStack_90 = (code *)puVar26[0x10];
              }
            }
          }
          else if (iVar5 == 1) {
            pcStack_90 = (code *)puVar26[0xd];
          }
          else if (iVar5 == -1) {
            pcStack_90 = (code *)puVar26[0xf];
          }
          else if (iVar1 == 1) {
            pcStack_90 = (code *)puVar26[0xc];
          }
          else {
            pcStack_90 = (code *)puVar26[0xe];
          }
        }
        goto LAB_82ca2e70;
      }
      if (uVar25 != 0x30323449) goto LAB_82ca2e70;
    }
  }
  else if (uVar25 != 0x32315659) {
    if (uVar25 == 0x32595559) {
      pcStack_90 = (code *)(&lbl_8317756C)
                           [((uint)((-uVar23 & ~uVar23 & 0xffffffff) >> 0x1e) & 2) +
                            (int)((-uVar22 & ~uVar22 & 0xffffffff) >> 0x1f)];
    }
    else if (uVar25 == 0x59565955) {
      pcStack_90 = (code *)(&lbl_8317757C)
                           [((uint)((-uVar23 & ~uVar23 & 0xffffffff) >> 0x1e) & 2) +
                            (int)((-uVar22 & ~uVar22 & 0xffffffff) >> 0x1f)];
    }
    goto LAB_82ca2e70;
  }
  ppuVar21 = (undefined **)0x0;
  if (uVar25 == 0x30323449) {
LAB_82ca313c:
    ppuVar21 = &lbl_820FDE80;
  }
  else if (uVar25 - 0x3231564e == 0) {
    ppuVar21 = &lbl_820FDEA0;
  }
  else if ((uVar25 - 0x3231564e & 0xffffffff) == 0xb) goto LAB_82ca313c;
  if ((*(int *)(param_1 + 0x40) != 0) || (iVar4 != 0)) {
    uVar25 = ((ulonglong)(*(uint *)(param_1 + 0x3cc0) == 0x3231564e) ^ 1) + 1;
    if (uVar24 == 1) {
      uVar17 = *(uint *)(param_1 + 0x40);
      trapWord(6,uVar25,0);
      uVar17 = (((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0)) * uVar16;
      trapWord(5,uVar25 & ~((((ulonglong)uVar17 & 0x7fffffff) << 1 | (ulonglong)(uVar17 >> 0x1f)) -
                           1),0xffff);
    }
    else {
      if (uVar24 == 0xffffffff) {
        uVar17 = *(uint *)(param_1 + 0x40);
        uVar17 = (((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0)) * uVar16;
      }
      else {
        uVar17 = *(uint *)(param_1 + 0x44);
        uVar17 = (((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0)) * uVar24;
        if (uVar16 == 1) {
          trapWord(6,uVar25,0);
          trapWord(5,uVar25 & ~((((ulonglong)uVar17 & 0x7fffffff) << 1 | (ulonglong)(uVar17 >> 0x1f)
                                ) - 1),0xffff);
          goto LAB_82ca3200;
        }
      }
      trapWord(6,uVar25,0);
      trapWord(5,uVar25 & ~((((ulonglong)uVar17 & 0x7fffffff) << 1 | (ulonglong)(uVar17 >> 0x1f)) -
                           1),0xffff);
    }
  }
LAB_82ca3200:
  if ((iVar15 == iVar20) && (iVar12 == iVar19)) {
    if (uVar24 == 1) {
      pcStack_90 = (code *)ppuVar21[1];
    }
    else if (uVar24 == 0xffffffff) {
      pcStack_90 = (code *)ppuVar21[3];
    }
    else if (uVar16 == 1) {
      pcStack_90 = (code *)*ppuVar21;
    }
    else {
      pcStack_90 = (code *)ppuVar21[2];
    }
  }
  else if (uVar24 == 1) {
    pcStack_90 = (code *)ppuVar21[5];
  }
  else if (uVar24 == 0xffffffff) {
    pcStack_90 = (code *)ppuVar21[7];
  }
  else if (uVar16 == 1) {
    pcStack_90 = (code *)ppuVar21[4];
  }
  else {
    pcStack_90 = (code *)ppuVar21[6];
  }
LAB_82ca2e70:
  (*pcStack_90)(param_2,lVar6,lVar7,lVar10,uVar8,uVar11,uVar14,uVar18);
  return 0;
}

