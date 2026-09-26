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
extern int fn_82BD51F0();
extern int fn_82BD62B8();
extern int fn_8314228C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_94;
extern unsigned int uStack_98;


undefined8 fn_82BD9BA0(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  int aiStack_100 [4];
  float afStack_f0 [12];
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  float afStack_a0 [2];
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  dVar11 = (double)lbl_821AAD20;
  uVar5 = 0;
  afStack_a0[0] = lbl_821AAD20;
  uStack_98 = 0;
  bVar4 = false;
  uStack_94 = 0;
  bVar3 = false;
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar6 = *(int *)(param_1 + 0x44);
    aiStack_b0[0] = 1;
    uVar9 = 0x50;
    aiStack_b0[1] = 1;
    aiStack_b0[2] = 1;
    aiStack_b0[3] = 1;
    do {
      iVar1 = *(int *)(uVar9 + *(int *)(param_1 + 8));
      if (iVar1 == 0) break;
      uVar10 = *(uint *)(iVar1 + 0xd0);
      if ((uVar10 & 0xf0000) == 0) {
        bVar3 = true;
LAB_82bd9c80:
        *(undefined4 *)((int)aiStack_100 + uVar9) = 0;
      }
      else if (((uVar10 & 0xf0000) == 0x10000) || (iVar6 != 0)) {
        aiStack_c0[0] = 0;
        fn_8314228C(**(undefined4 **)(uVar9 + *(int *)(param_1 + 8)),param_1,1,aiStack_c0,0);
        if (aiStack_c0[0] == 0) goto LAB_82bd9c80;
      }
      if (0xffff < *(uint *)(param_1 + -0x2c + uVar9)) {
        bVar4 = true;
      }
      uVar9 = uVar9 + 4;
    } while (uVar9 < 0x60);
    uVar9 = 0;
    uVar10 = 0x50;
    dVar12 = (double)lbl_82002AE0;
    do {
      iVar6 = *(int *)(uVar10 + *(int *)(param_1 + 8));
      if (((iVar6 == 0) || (*(int *)(iVar6 + 4) != 0)) ||
         (bVar2 = true, *(int *)(iVar6 + 0xcc) == 0)) {
        bVar2 = false;
      }
      if (iVar6 != 0) {
        iVar6 = *(int *)(uVar10 + *(int *)(param_1 + 8));
        if ((*(int *)(iVar6 + 4) == 0) &&
           ((((*(uint *)(iVar6 + 0xd0) & 2) != 0 || (iVar6 = fn_82BD62B8(), iVar6 == 0x70000000))
            || (!bVar2)))) {
          uVar8 = 0;
          piVar7 = aiStack_b0;
          do {
            if ((uVar8 != uVar9) && (*piVar7 == 0)) {
              if (((*(uint *)(*(int *)(uVar10 + *(int *)(param_1 + 8)) + 0xd0) & 4) != 0) &&
                 ((iVar6 = fn_82BD62B8(), iVar6 != 0x70000000 && (bVar2)))) {
                iVar6 = *(int *)(uVar10 + *(int *)(param_1 + 8));
                *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffd;
                fn_82BD51F0(*(int *)(param_1 + 8),
                                  *(undefined4 *)(uVar10 + *(int *)(param_1 + 8)));
              }
            }
            uVar8 = uVar8 + 1;
            piVar7 = piVar7 + 1;
          } while (uVar8 < 4);
        }
      }
      if ((((!bVar3) && (*(int *)((int)aiStack_100 + uVar10) != 0)) &&
          (*(uint *)(uVar10 + param_1 + -0x2c) < 0x10000)) &&
         ((iVar6 = *(int *)(uVar10 + *(int *)(param_1 + 8)), iVar6 == 0 ||
          (*(int *)(iVar6 + 4) == 0)))) {
        *(float *)((int)afStack_f0 + uVar10) = (float)dVar12;
      }
      if (bVar4) {
        iVar6 = *(int *)(uVar10 + *(int *)(param_1 + 8));
        if (iVar6 != 0) {
          if ((((*(uint *)(iVar6 + 0xd0) & 2) != 0) ||
              (iVar6 = fn_82BD62B8(), iVar6 == 0x70000000)) || (!bVar2)) {
            *(float *)((int)afStack_f0 + uVar10) = (float)dVar11;
          }
        }
      }
      uVar10 = uVar10 + 4;
      uVar9 = uVar9 + 1;
    } while (uVar10 < 0x60);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x48) + 0x40))
                      (*(int **)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),1,4,afStack_a0,0);
  }
  return uVar5;
}

