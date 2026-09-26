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
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005758;


undefined8 fn_829658F8(int param_1,int param_2,int *param_3,double *param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar5;
  uint uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  int aiStack_70 [2];
  double dStack_68;
  double dStack_60;
  double adStack_58 [11];
  
  iVar2 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
  dVar12 = lbl_82005758;
  iVar8 = param_2;
  if (param_2 != *param_3) {
    if (*(int *)(iVar2 + 0x40) == -1) {
      iVar8 = param_2;
      if ((*(int *)(iVar2 + 8) == -1) &&
         (iVar8 = param_2,
         (*(uint *)(*(int *)(*(int *)(iVar2 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 2) != 0)) {
        uVar9 = 0;
        puVar3 = *(uint **)(*(int *)(iVar2 + 0x48) * 4 + *(int *)(param_1 + 0x18));
        uVar1 = puVar3[3];
        if (uVar1 != 0) {
          iVar8 = 0;
          do {
            if (*(int *)(iVar8 + puVar3[4]) == param_2) break;
            uVar9 = uVar9 + 1;
            iVar8 = iVar8 + 4;
          } while (uVar9 < uVar1);
        }
        iVar8 = param_2;
        if (uVar9 != uVar1) {
          uVar4 = *puVar3 & 0xfff00000;
          if (uVar4 == 0x10000000) {
            aiStack_70[0] = -1;
            iVar6 = fn_829658F8(param_1,*(undefined4 *)(uVar9 * 4 + puVar3[2]),aiStack_70,
                                  &dStack_68);
            dVar12 = lbl_82005758;
            iVar8 = param_2;
            if (-1 < iVar6) goto LAB_82965c1c;
          }
          else if (uVar4 == 0x10100000) {
            aiStack_70[0] = -1;
            iVar6 = fn_829658F8(param_1,*(undefined4 *)(uVar9 * 4 + puVar3[2]),aiStack_70,
                                  &dStack_68);
            dVar12 = lbl_82005758;
            iVar8 = param_2;
            if (-1 < iVar6) {
              dVar12 = -dStack_68;
              iVar8 = aiStack_70[0];
            }
          }
          else if (uVar4 == 0x20400000) {
            iVar6 = *(int *)(uVar9 * 4 + puVar3[2]);
            iVar8 = *(int *)((uVar1 + uVar9) * 4 + puVar3[2]);
            if (iVar6 == iVar8) {
              aiStack_70[0] = -1;
              iVar6 = fn_829658F8(param_1,iVar6,aiStack_70,&dStack_68);
              dVar11 = lbl_82002C40;
              dVar12 = lbl_82005758;
              iVar8 = param_2;
              if (-1 < iVar6) {
LAB_82965a9c:
                dVar12 = dStack_68 * dVar11;
                iVar8 = aiStack_70[0];
              }
            }
            else {
              aiStack_70[0] = -1;
              iVar7 = fn_829658F8(param_1,iVar6,aiStack_70,&dStack_60);
              if ((iVar7 < 0) ||
                 (iVar7 = fn_829658F8(param_1,iVar8,aiStack_70,adStack_58), iVar7 < 0)) {
                aiStack_70[0] = -1;
                iVar7 = fn_829658F8(param_1,iVar8,aiStack_70,adStack_58);
                dVar12 = lbl_82005758;
                iVar8 = param_2;
                if ((iVar7 < 0) ||
                   (iVar6 = fn_829658F8(param_1,iVar6,aiStack_70,&dStack_60),
                   dVar12 = lbl_82005758, iVar8 = param_2, iVar6 < 0)) goto LAB_82965c18;
              }
              dVar12 = adStack_58[0] + dStack_60;
              iVar8 = aiStack_70[0];
            }
          }
          else {
            iVar8 = param_2;
            if (uVar4 == 0x20500000) {
              iVar6 = *(int *)(uVar9 * 4 + puVar3[2]);
              iVar7 = *(int *)((uVar1 + uVar9) * 4 + puVar3[2]);
              iVar8 = param_2;
              if (iVar6 != iVar7) {
                iVar10 = iVar7 * 4;
                iVar8 = *(int *)(iVar10 + *(int *)(param_1 + 0x14));
                if (((*(uint *)(*(int *)(*(int *)(iVar8 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                     0x100) != 0) && (*(int *)(iVar8 + 8) == -1)) {
                  aiStack_70[0] = -1;
                  iVar8 = fn_829658F8(param_1,iVar6,aiStack_70,&dStack_68);
                  if (iVar8 < 0) goto LAB_82965bb8;
LAB_82965ba4:
                  dVar11 = dStack_68;
                  dStack_68 = *(double *)(*(int *)(iVar10 + *(int *)(param_1 + 0x14)) + 0x20);
                  goto LAB_82965a9c;
                }
LAB_82965bb8:
                iVar10 = iVar6 * 4;
                iVar6 = *(int *)(iVar10 + *(int *)(param_1 + 0x14));
                dVar12 = lbl_82005758;
                iVar8 = param_2;
                if (((*(uint *)(*(int *)(*(int *)(iVar6 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                     0x100) != 0) && (iVar8 = param_2, *(int *)(iVar6 + 8) == -1)) {
                  aiStack_70[0] = -1;
                  iVar6 = fn_829658F8(param_1,iVar7,aiStack_70,&dStack_68);
                  dVar12 = lbl_82005758;
                  iVar8 = param_2;
                  if (-1 < iVar6) goto LAB_82965ba4;
                }
              }
            }
          }
        }
      }
    }
    else {
      dVar12 = *(double *)(iVar2 + 0x28);
      iVar8 = *(int *)(iVar2 + 0x40);
    }
  }
LAB_82965c18:
  aiStack_70[0] = iVar8;
  dStack_68 = dVar12;
LAB_82965c1c:
  if ((*param_3 == -1) || (aiStack_70[0] == *param_3)) {
    uVar5 = 0;
    *(int *)(iVar2 + 0x40) = aiStack_70[0];
    *param_3 = aiStack_70[0];
    *(double *)(iVar2 + 0x28) = dStack_68;
    *param_4 = dStack_68;
  }
  else {
    uVar5 = 0xffffffff80004005;
  }
  return uVar5;
}

