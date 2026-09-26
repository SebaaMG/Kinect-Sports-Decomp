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


undefined8 fn_82996728(int *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint auStack_100 [20];
  uint auStack_b0 [44];
  
  if (param_2 == (uint *)0x0) {
LAB_82996748:
    uVar6 = 1;
  }
  else {
    uVar8 = *param_2;
    if (((uVar8 & 0xfff00000) != 0) && ((uVar8 & 0xfff00000) != 0x20700000)) {
      uVar4 = (ulonglong)uVar8 & 0xfffff;
      uVar12 = param_2[1] / uVar4;
      trapWord(6,uVar4,0);
      if (1 < uVar12) {
        iVar1 = param_1[0x20];
        iVar2 = param_1[0x22];
        iVar7 = param_1[0x1f];
        iVar3 = param_1[0x25];
        auStack_100[iVar1] = 0;
        auStack_100[iVar2] = 0;
        auStack_100[iVar7] = 0;
        auStack_b0[iVar1] = 1;
        uVar11 = 0;
        auStack_b0[iVar2] = 3;
        auStack_b0[iVar7] = 1;
        uVar14 = 0;
        auStack_100[iVar3] = 0;
        auStack_b0[iVar3] = 1;
        if (uVar12 != 0) {
          lVar5 = ((ulonglong)uVar8 & 0xfffff) * 4;
          lVar13 = 0;
          do {
            iVar1 = *(int *)(*(int *)(param_2[2] + (int)lVar13) * 4 + param_1[5]);
            iVar2 = *(int *)(*(int *)(iVar1 + 4) * 4 + param_1[4]);
            uVar8 = *(uint *)(iVar2 + 4);
            if (((uVar8 & 0x200) == 0) || ((uVar8 & 0x80) != 0)) {
              if ((uVar8 & 0x80) == 0) {
                if ((((uVar8 & 0x10) == 0) || ((uVar8 & 0x200) != 0)) ||
                   (iVar7 = (**(code **)(*param_1 + 0x70))(param_1,*(undefined4 *)(iVar1 + 0x6c)),
                   iVar7 == 0xffff)) {
                  uVar8 = param_1[0x22];
                }
                else {
                  uVar8 = param_1[0x20];
                }
              }
              else {
                uVar8 = param_1[0x25];
              }
            }
            else {
              uVar8 = param_1[0x1f];
            }
            uVar9 = 0;
            if (uVar14 != 0) {
              lVar10 = 0;
              do {
                iVar7 = *(int *)(*(int *)((int)lVar10 + param_2[2]) * 4 + param_1[5]);
                if (((*(int *)(iVar1 + 4) == *(int *)(iVar7 + 4)) &&
                    (*(int *)(iVar1 + 8) == *(int *)(iVar7 + 8))) &&
                   (*(int *)(iVar1 + 0xc) == *(int *)(iVar7 + 0xc))) break;
                uVar9 = uVar9 + 1;
                lVar10 = lVar5 + lVar10;
              } while (uVar9 < uVar14);
            }
            if ((uVar9 == uVar14) && (uVar8 < 0x12)) {
              uVar9 = auStack_100[uVar8];
              auStack_100[uVar8] = uVar9 + 1;
              if (uVar9 + 1 <= auStack_b0[uVar8]) goto LAB_82996928;
LAB_8299695c:
              if (param_3 != (uint *)0x0) {
                *param_3 = uVar14;
              }
              goto LAB_82996748;
            }
LAB_82996928:
            if (((*(uint *)(iVar2 + 4) & 0x200) != 0) && (uVar11 = uVar11 + 1, 2 < uVar11))
            goto LAB_8299695c;
            uVar14 = uVar14 + 1;
            lVar13 = lVar5 + lVar13;
          } while (uVar14 < uVar12);
        }
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}

