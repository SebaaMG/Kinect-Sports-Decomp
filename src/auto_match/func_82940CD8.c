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
extern unsigned int *auStack_100;
extern unsigned int *auStack_b0;


undefined8 fn_82940CD8(int *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint auStack_100 [20];
  uint auStack_b0 [44];
  
  if (param_2 == (uint *)0x0) {
LAB_82940cf8:
    uVar6 = 1;
  }
  else {
    uVar13 = *param_2;
    uVar11 = uVar13 & 0xfff00000;
    if (((uVar13 & 0xfff00000) != 0) && (uVar11 != 0x20700000)) {
      uVar4 = (ulonglong)uVar13;
      uVar10 = (ulonglong)param_2[1] / (uVar4 & 0xfffff);
      trapWord(6,uVar4 & 0xfffff,0);
      if ((uVar11 == 0x70500000) || ((uVar11 == 0x70600000 || (uVar11 == 0x70700000)))) {
        uVar10 = 2;
      }
      if (1 < uVar10) {
        iVar1 = param_1[0x20];
        iVar7 = param_1[0x22];
        iVar2 = param_1[0x1f];
        iVar3 = param_1[0x25];
        lVar14 = 0;
        auStack_100[iVar1] = 0;
        auStack_100[iVar7] = 0;
        auStack_100[iVar2] = 0;
        auStack_b0[iVar1] = 1;
        uVar13 = 0;
        auStack_b0[iVar7] = 3;
        auStack_b0[iVar2] = 1;
        uVar11 = 0;
        auStack_100[iVar3] = 0;
        auStack_b0[iVar3] = 1;
        if (uVar10 != 0) {
          lVar5 = (uVar4 & 0xfffff) * 4;
          lVar12 = 0;
          do {
            iVar1 = *(int *)(*(int *)((int)lVar12 + param_2[2]) * 4 + param_1[5]);
            iVar7 = *(int *)(*(int *)(iVar1 + 4) * 4 + param_1[4]);
            if ((*(int *)(iVar1 + 0x6c) != 0x11) || ((*(uint *)(iVar7 + 4) & 0x10) == 0)) {
              uVar8 = *(uint *)(iVar7 + 4);
              if (((uVar8 & 0x200) == 0) || ((uVar8 & 0x80) != 0)) {
                if ((uVar8 & 0x80) == 0) {
                  if ((((uVar8 & 0x10) == 0) || ((uVar8 & 0x200) != 0)) ||
                     (iVar7 = (**(code **)(*param_1 + 0x70))(param_1), iVar7 == 0xffff)) {
                    iVar7 = param_1[0x22];
                  }
                  else {
                    iVar7 = param_1[0x20];
                  }
                }
                else {
                  iVar7 = param_1[0x25];
                }
              }
              else {
                iVar7 = param_1[0x1f];
              }
              uVar8 = 0;
              if (uVar11 != 0) {
                lVar9 = 0;
                do {
                  iVar2 = *(int *)(*(int *)((int)lVar9 + param_2[2]) * 4 + param_1[5]);
                  if (((*(int *)(iVar1 + 4) == *(int *)(iVar2 + 4)) &&
                      (*(int *)(iVar1 + 8) == *(int *)(iVar2 + 8))) &&
                     (*(int *)(iVar1 + 0xc) == *(int *)(iVar2 + 0xc))) break;
                  uVar8 = uVar8 + 1;
                  lVar9 = lVar5 + lVar9;
                } while (uVar8 < uVar11);
              }
              if (uVar8 == uVar11) {
                uVar8 = auStack_100[iVar7];
                auStack_100[iVar7] = uVar8 + 1;
                if (uVar8 + 1 <= auStack_b0[iVar7]) goto LAB_82940f0c;
              }
              else {
LAB_82940f0c:
                if ((param_1[0x1f] != iVar7) || (uVar13 = uVar13 + 1, uVar13 < 3))
                goto LAB_82940f24;
              }
              if (param_3 != (uint *)0x0) {
                *param_3 = uVar11;
              }
              goto LAB_82940cf8;
            }
LAB_82940f24:
            uVar11 = uVar11 + 1;
            lVar12 = lVar5 + lVar12;
          } while (uVar11 < uVar10);
        }
        uVar13 = 0;
        if (uVar10 != 0) {
          do {
            if ((*param_2 & 0xf0000000) == 0x60000000) {
              iVar1 = *(int *)(*(int *)(param_2[2] + (int)lVar14) * 4 + param_1[5]);
              iVar7 = (**(code **)(*param_1 + 0x70))(param_1,*(undefined4 *)(iVar1 + 0x6c));
              if ((iVar7 == 0x12) && (*(int *)(iVar1 + 4) == param_1[0x20])) {
                if (param_3 != (uint *)0x0) {
                  *param_3 = uVar13;
                }
                goto LAB_82940cf8;
              }
            }
            uVar13 = uVar13 + 1;
            lVar14 = lVar14 + (uVar4 & 0xfffff) * 4;
          } while (uVar13 < uVar10);
        }
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}

