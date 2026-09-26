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
extern unsigned int *auStack_a0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8291CAB8();
extern int fn_8291CB98();
extern int fn_8291CFA0();
extern int fn_8291D9A8();
extern int fn_8291E560();
extern int fn_8291E8E0();
extern int fn_8291EFD8();
extern int fn_8291F2D0();
extern int fn_8291FB38();
extern int fn_8291FFD8();
extern int fn_82AA8098();
extern int fn_82F691F0();
extern unsigned int iStack_b0;


undefined8
fn_82920050(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iStack_b0;
  uint auStack_a0 [40];
  
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    uVar5 = 0xffffffff8876086c;
  }
  else {
    if (((param_4 & 0xffffffff) != 0) || (param_5 != 0)) {
      auStack_a0[1] = 5;
      auStack_a0[2] = 4;
      auStack_a0[5] = 8;
      auStack_a0[0] = 0;
      auStack_a0[3] = 1;
      auStack_a0[4] = 3;
      auStack_a0[6] = 7;
      auStack_a0[7] = 2;
      uVar7 = 0;
      auStack_a0[8] = 6;
      puVar8 = auStack_a0;
      do {
        uVar1 = *puVar8;
        bVar3 = true;
        *(int *)(param_1 + 0x40) = param_5;
        *(undefined4 *)(param_1 + 0x44) = 3;
        *(uint *)(param_1 + 0x48) = uVar1;
        bVar2 = true;
        if (uVar1 < 9) {
          if (uVar1 == 1) {
            iStack_b0 = fn_8291E560(param_1,param_2,param_3);
LAB_82920154:
            bVar2 = false;
          }
          else {
            bVar2 = bVar3;
            if (uVar1 == 2) {
              iStack_b0 = fn_8291E8E0(param_1,param_2,param_3);
            }
            else if (uVar1 == 3) {
              iStack_b0 = fn_8291F2D0(param_1,param_2,param_3);
            }
            else if (uVar1 == 4) {
              iStack_b0 = fn_8291FB38(param_1,param_2,param_3);
            }
            else {
              if (uVar1 == 5) {
                iStack_b0 = fn_8291EFD8(param_1,param_2,param_3);
                goto LAB_82920154;
              }
              if (uVar1 == 6) {
                iStack_b0 = fn_8291D9A8(param_1,param_2,param_3);
              }
              else if (uVar1 == 7) {
                iStack_b0 = fn_8291CFA0(param_1,param_2,param_3);
              }
              else if (uVar1 == 0) {
                iStack_b0 = fn_8291FFD8(param_1,param_2,param_3);
              }
              else {
                iStack_b0 = fn_8291CB98(param_1,param_2,param_3);
              }
            }
          }
        }
        if (-1 < iStack_b0) break;
        if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x38) != 0)) {
          fn_8265C990(*(int *)(param_1 + 4),0x24810000);
        }
        if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x3c) != 0)) {
          fn_8265C990(*(int *)(param_1 + 8),0x24810000);
        }
        iVar9 = *(int *)(param_1 + 0x4c);
        if (iVar9 != 0) {
          fn_8291CAB8(iVar9);
          fn_8265C990(iVar9,0x24810000);
        }
        iVar9 = *(int *)(param_1 + 0x50);
        if (iVar9 != 0) {
          fn_8291CAB8(iVar9);
          fn_8265C990(iVar9,0x24810000);
        }
        uVar7 = uVar7 + 1;
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        puVar8 = puVar8 + 1;
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
      } while (uVar7 < 9);
      if (uVar7 == 9) {
        return 0xffffffff88760b59;
      }
      iVar9 = param_1;
      if (bVar2) {
        while (iVar4 = iVar9, param_5 != 0) {
          while (iVar4 != 0) {
            lVar6 = fn_8265C940((longlong)(*(int *)(iVar4 + 0x30) * *(int *)(iVar4 + 0x10)) *
                                      (longlong)*(int *)(iVar4 + 0x14),0x24810000);
            if (lVar6 == 0) {
              return 0xffffffff8007000e;
            }
            fn_82AA8098(lVar6,*(undefined4 *)(iVar4 + 0x30),*(undefined4 *)(iVar4 + 0x34),
                            *(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 0x30),
                            *(undefined4 *)(iVar4 + 0x34),*(undefined4 *)(iVar4 + 0xc),
                            *(undefined4 *)(iVar4 + 0x10));
            if (*(int *)(iVar4 + 0x38) != 0) {
              fn_8265C990(*(undefined4 *)(iVar4 + 4),0x24810000);
            }
            *(undefined4 *)(iVar4 + 4) = (int)lVar6;
            *(undefined4 *)(iVar4 + 0x38) = 1;
            iVar4 = *(int *)(iVar4 + 0x4c);
          }
          param_5 = *(int *)(iVar9 + 0x50);
          iVar9 = param_5;
        }
      }
      iVar9 = param_1;
      if ((param_4 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_4,0,0x1c);
      }
      do {
        for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x4c)) {
          *(undefined4 *)(param_1 + 0x18) = 0;
          *(undefined4 *)(param_1 + 0x1c) = 0;
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xc);
          *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x14);
        }
        param_1 = *(int *)(iVar9 + 0x50);
        iVar9 = param_1;
      } while (param_1 != 0);
    }
    uVar5 = 0;
  }
  return uVar5;
}

