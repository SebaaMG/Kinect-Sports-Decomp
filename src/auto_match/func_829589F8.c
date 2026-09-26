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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82964628();
extern int fn_82F691F0();
extern unsigned int lbl_82005710;


undefined8
fn_829589F8(int param_1,uint param_2,int *param_3,ulonglong param_4,int *param_5,ulonglong param_6
             )

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  undefined8 uVar9;
  
  bVar4 = false;
  if ((param_6 & 0xffffffff) != 0) {
    do {
      if (*(int *)(param_1 + 0x154) == *param_5) {
        bVar4 = true;
      }
      param_5 = param_5 + 1;
      param_6 = param_6 - 1;
    } while (param_6 != 0);
  }
  if ((*(uint *)(param_1 + 0x150) <= param_2) || (bVar4)) {
    *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
    lVar2 = fn_8265C940(*(int *)(param_1 + 0x2c) << 2,0x24810000);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar2,0xff,*(int *)(param_1 + 0x2c) << 2);
    }
LAB_82958d30:
    uVar9 = 0xffffffff8007000e;
  }
  else {
    uVar5 = 0;
    uVar7 = -(uint)(param_4 == 1) & 3;
    if ((param_4 & 0xffffffff) != 0) {
      piVar8 = (int *)((uVar7 + 0x50) * 4 + param_1);
      uVar9 = lbl_82005710;
      piVar6 = param_3;
      do {
        if (*piVar8 != -1) {
          *(uint *)(*(int *)(*piVar8 * 4 + *(int *)(param_1 + 0x14)) + 0x50) = param_2;
        }
        iVar3 = fn_82964628(uVar9,param_1,*(undefined4 *)(param_1 + 0x88),
                                  *(undefined4 *)(param_1 + 0x154),uVar7);
        *piVar8 = iVar3;
        if (iVar3 == -1) goto LAB_82958d30;
        iVar3 = *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14));
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        *(undefined4 *)(iVar3 + 0x30) = 0;
        *(uint *)(iVar3 + 0x48) = param_2;
        *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(param_1 + 0x150);
        *(uint *)(iVar3 + 0x54) = param_2;
        *(uint *)(iVar3 + 0x58) = param_2;
        *(undefined4 *)(iVar3 + 0x5c) = 1;
        iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x18));
        if (*(int *)(iVar1 + 0xc) != 0) {
          *(undefined4 *)(iVar3 + 0x18) =
               *(undefined4 *)
                (*(int *)(**(int **)(iVar1 + 0x10) * 4 + *(int *)(param_1 + 0x14)) + 0x18);
          *(undefined4 *)(iVar3 + 0x14) =
               *(undefined4 *)
                (*(int *)(**(int **)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0x18)) + 0x10) * 4 +
                         *(int *)(param_1 + 0x14)) + 0x14);
        }
        if (param_3 != (int *)0x0) {
          *piVar6 = *piVar8;
        }
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 1;
        piVar6 = piVar6 + 1;
      } while ((uVar5 & 0xffffffff) < (param_4 & 0xffffffff));
    }
    uVar9 = 0;
  }
  fn_8265C990(0,0x24810000);
  return uVar9;
}

