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
extern unsigned int fStack_8c;
extern unsigned int fStack_98;
extern unsigned int fStack_cc;
extern unsigned int fStack_d8;
extern int fn_8268CEC0();
extern int fn_826EB3A8();
extern int fn_826EC678();
extern int fn_8270DF10();
extern int fn_8277B700();
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int lbl_8200D8C4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_ec;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_826ED8F0(int param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  undefined4 *puStack_f0;
  undefined1 uStack_ec;
  int iStack_e0;
  int iStack_dc;
  float fStack_d8;
  int iStack_d4;
  int iStack_d0;
  float fStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a0;
  int iStack_9c;
  float fStack_98;
  int iStack_94;
  int iStack_90;
  float fStack_8c;
  
  uStack_c0 = *(undefined4 *)(param_1 + 0x10);
  iStack_e0 = param_2[3];
  iStack_dc = param_2[4];
  fStack_d8 = (float)param_2[5];
  iStack_d4 = param_2[6];
  piVar1 = *(int **)(*(int *)*param_2 + 0xc);
  iStack_d0 = param_2[7];
  fStack_cc = (float)param_2[8];
  uStack_bc = lbl_821AAD20;
  uStack_b8 = lbl_821AAD20;
  uStack_b4 = lbl_821AAD20;
  uStack_ac = lbl_821AAD20;
  uStack_b0 = uStack_c0;
  fn_8268CEC0(&iStack_e0,&uStack_c0);
  (**(code **)(*piVar1 + 0x28))(piVar1,param_2 + 9);
  bVar2 = true;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  dVar12 = (double)(lbl_8200D8C4 / *(float *)(*param_2 + 0x24));
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar9 = 0;
    do {
      iVar4 = *(int *)(iVar9 + *(int *)(param_1 + 0x50) + 0x10);
      if (iVar4 == -1) {
        if (bVar2) {
          puStack_f0 = (undefined4 *)(param_1 + 0x48);
          uStack_ec = 0;
          if (*(int *)(param_1 + 0x34) == 0) {
            if ((-(uint)((int *)*puStack_f0 == piVar1) & (uint)puStack_f0) != 0) {
              (**(code **)(*piVar1 + 0x3c))(piVar1,0,0,0,&puStack_f0);
            }
          }
          else {
            fn_8277B700(param_1 + 0x34,piVar1,&puStack_f0);
          }
          (**(code **)(*piVar1 + 0x20))(piVar1,&iStack_e0);
          bVar2 = false;
        }
        uVar8 = 0;
        if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
          uVar8 = **(undefined4 **)(param_1 + 0x6c);
        }
        iVar4 = *(int *)(param_1 + 0x50);
        uVar11 = 0;
        if (*(int *)(iVar9 + iVar4) != 0) {
          lVar10 = uVar6 * 0x28;
          do {
            if ((ulonglong)*(uint *)(param_1 + 0x20) <= (uVar6 & 0xffffffff)) break;
            if (param_2[0x12] == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = param_2[1];
            }
            iVar3 = iVar9 + *(int *)(param_1 + 0x50);
            fn_826EB3A8((double)*(float *)(param_1 + 0x10),
                          (ulonglong)*(uint *)(param_1 + 0x1c) + lVar10,*param_2,iVar4,param_2[0x12]
                          ,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                          (ulonglong)*(uint *)(param_1 + 0x1c),uVar8);
            iVar4 = *(int *)(param_1 + 0x50);
            uVar11 = uVar11 + 1;
            uVar6 = uVar6 + 1;
            lVar10 = lVar10 + 0x28;
          } while (uVar11 < *(uint *)(iVar9 + iVar4));
        }
        if (*(int *)(iVar9 + iVar4 + 4) != 0) {
          fStack_8c = (float)((double)fStack_cc + dVar12);
          fStack_98 = (float)((double)fStack_d8 + dVar12);
          iStack_a0 = iStack_e0;
          iStack_9c = iStack_dc;
          iStack_94 = iStack_d4;
          iStack_90 = iStack_d0;
          (**(code **)(*piVar1 + 0x20))(piVar1,&iStack_a0);
          uVar11 = 0;
          if (*(int *)(iVar9 + *(int *)(param_1 + 0x50) + 4) != 0) {
            iVar4 = uVar7 * 0x58;
            do {
              if (*(uint *)(param_1 + 0x2c) <= uVar7) break;
              fn_826EC678((double)*(float *)(param_1 + 0xc),(double)*(float *)(param_1 + 8),
                            *(int *)(param_1 + 0x28) + iVar4,*param_2,
                            (ulonglong)*(uint *)(*(int *)(param_1 + 0x28) + iVar4) * 0x18 +
                            (ulonglong)(uint)param_2[2],param_2 + 3);
              uVar11 = uVar11 + 1;
              uVar7 = uVar7 + 1;
              iVar4 = iVar4 + 0x58;
            } while (uVar11 < *(uint *)(iVar9 + *(int *)(param_1 + 0x50) + 4));
          }
          goto LAB_826edc44;
        }
      }
      else {
        iVar4 = **(int **)(param_1 + 0x68) + iVar4 * 0x154;
        fn_8270DF10(iVar4,*param_2,
                          (ulonglong)*(uint *)(iVar4 + 0x14c) * 0x28 + (ulonglong)(uint)param_2[1],
                          &iStack_e0);
LAB_826edc44:
        bVar2 = true;
      }
      uVar5 = uVar5 + 1;
      iVar9 = iVar9 + 0x14;
    } while (uVar5 < *(uint *)(param_1 + 0x54));
  }
  (**(code **)(*piVar1 + 0x3c))(piVar1,0,0,0,0);
  (**(code **)(*piVar1 + 0x40))(piVar1,0,0,0,0);
  return;
}

