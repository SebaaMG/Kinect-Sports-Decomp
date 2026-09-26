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
extern int fn_829632F0();
extern int fn_82963318();
extern int fn_829640A0();
extern int fn_82964628();
extern int fn_829646C8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200E890;


undefined8 fn_829616A8(int *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined8 uVar17;
  int aiStack_80 [32];
  
  iVar11 = 0;
  uVar6 = 0xffffffff;
  iVar4 = -1;
  uVar13 = 0;
  if (param_1[3] != 0) {
    iVar5 = 0;
    uVar17 = lbl_82005710;
    do {
      param_1[0x40] = uVar13;
      puVar1 = *(uint **)(param_1[6] + iVar5);
      param_1[0x41] = (int)puVar1;
      if ((*puVar1 & 0xfff00000) != 0) {
        uVar14 = 0;
        uVar12 = (ulonglong)puVar1[1] / ((ulonglong)*puVar1 & 0xfffff);
        trapWord(6,(ulonglong)*puVar1 & 0xfffff,0);
        if ((int)uVar12 != 0) {
          do {
            uVar2 = fn_82963318(param_1[0x41],uVar14,aiStack_80);
            uVar15 = 0;
            if (uVar2 != 0) {
              iVar16 = 0;
              do {
                iVar3 = *(int *)(*(int *)(iVar16 + aiStack_80[0]) * 4 + param_1[5]);
                uVar8 = *(uint *)(*(int *)(*(int *)(iVar3 + 4) * 4 + param_1[4]) + 4);
                if (((((uVar8 & 0x10) == 0) || ((uVar8 & 0x200) != 0)) ||
                    (iVar3 = (**(code **)(*param_1 + 0x70))(param_1,*(undefined4 *)(iVar3 + 0x6c)),
                    iVar3 != 0x11)) ||
                   (((uVar14 & 0xffffffff) == 0 &&
                    ((*(uint *)param_1[0x41] & 0xfff00000) == 0x30000000)))) break;
                if (iVar4 == -1) {
                  uVar7 = 0;
                  uVar8 = 0;
                  if (param_1[2] != 0) {
                    iVar11 = 0;
                    do {
                      if ((param_1[0x22] == *(int *)(*(int *)(iVar11 + param_1[5]) + 4)) &&
                         (uVar9 = (ulonglong)*(uint *)(*(int *)(iVar11 + param_1[5]) + 0xc),
                         (uVar7 & 0xffffffff) <= uVar9)) {
                        uVar7 = uVar9 + 1;
                      }
                      uVar8 = uVar8 + 1;
                      iVar11 = iVar11 + 4;
                    } while (uVar8 < (uint)param_1[2]);
                  }
                  iVar4 = fn_82964628(uVar17,param_1,param_1[0x22],uVar7,0);
                  if (iVar4 == -1) {
                    return 0xffffffff8007000e;
                  }
                  fn_829640A0(*(undefined4 *)(iVar4 * 4 + param_1[5]),
                               *(undefined4 *)(*(int *)(iVar16 + aiStack_80[0]) * 4 + param_1[5]));
                  *(undefined4 *)(*(int *)(iVar4 * 4 + param_1[5]) + 0x6c) = 0xffffffff;
                  iVar11 = param_1[0x41];
                  uVar6 = *(undefined4 *)(iVar16 + aiStack_80[0]);
                }
                uVar15 = uVar15 + 1;
                *(int *)(iVar16 + aiStack_80[0]) = iVar4;
                iVar16 = iVar16 + 4;
              } while ((uVar15 & 0xffffffff) < (uVar2 & 0xffffffff));
            }
            uVar14 = uVar14 + 1;
          } while ((uVar14 & 0xffffffff) < uVar12);
        }
      }
      uVar13 = uVar13 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar13 < (uint)param_1[3]);
    if (iVar4 != -1) {
      iVar5 = fn_829646C8(param_1,0x30000001,3,1);
      if (iVar5 != -1) {
        iVar5 = *(int *)(iVar5 * 4 + param_1[6]);
        fn_829632F0(iVar5,iVar11);
        uVar17 = lbl_82005758;
        **(int **)(iVar5 + 0x10) = iVar4;
        **(undefined4 **)(iVar5 + 8) = uVar6;
        uVar6 = fn_82964628(uVar17,param_1,param_1[0x1e],0,0);
        *(undefined4 *)(*(int *)(iVar5 + 8) + 4) = uVar6;
        uVar6 = fn_82964628(lbl_8200E890,param_1,param_1[0x1e],0,0);
        *(undefined4 *)(*(int *)(iVar5 + 8) + 8) = uVar6;
        if ((*(int *)(*(int *)(iVar5 + 8) + 4) != -1) && (*(int *)(*(int *)(iVar5 + 8) + 8) != -1))
        {
          uVar13 = param_1[3];
          if (1 < (ulonglong)uVar13) {
            lVar10 = (ulonglong)uVar13 - 1;
            iVar11 = uVar13 << 2;
            do {
              iVar11 = iVar11 + -4;
              *(undefined4 *)(param_1[6] + iVar11) = ((undefined4 *)(param_1[6] + iVar11))[-1];
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          *(int *)param_1[6] = iVar5;
          return 0;
        }
      }
      return 0xffffffff8007000e;
    }
  }
  return 0;
}

