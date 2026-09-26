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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_260;
extern unsigned int *auStack_2e4;
extern unsigned int *auStack_308;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEDC88();
extern int fn_82CEE578();
extern int fn_82D2D320();
extern unsigned int iStack_32c;
extern unsigned int iStack_330;
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_2e8;
extern unsigned int uStack_2ec;


longlong fn_82D26480(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  int iVar7;
  undefined8 uVar5;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
  int iStack_330;
  int iStack_32c;
  undefined1 auStack_308 [24];
  undefined1 *puStack_2f0;
  uint uStack_2ec;
  uint uStack_2e8;
  undefined1 auStack_2e4 [132];
  undefined1 auStack_260 [608];
  
  lVar9 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x14); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[0x10] = 0;
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x2c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    *(int *)(puVar1[2] + 0x40) = *(int *)(puVar1[2] + 0x40) + 1;
    *(int *)(puVar1[3] + 0x40) = *(int *)(puVar1[3] + 0x40) + 1;
    *(int *)(puVar1[4] + 0x40) = *(int *)(puVar1[4] + 0x40) + 1;
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  do {
    iVar11 = 0;
    puVar10 = (uint *)(piVar2 + 5);
    do {
      puStack_2f0 = auStack_2e4;
      uVar3 = puVar10[-3];
      uVar12 = CONCAT44(piVar2,iVar11);
      uStack_2ec = 0;
      uStack_2e8 = 0x80000010;
      while( true ) {
        uVar6 = fn_82CE5410();
        if (uStack_2ec == (uStack_2e8 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(uVar6 + 0x10),&puStack_2f0,8);
        }
        if ((ulonglong *)(puStack_2f0 + uStack_2ec * 8) != (ulonglong *)0x0) {
          *(ulonglong *)(puStack_2f0 + uStack_2ec * 8) = uVar12;
        }
        iStack_32c = (int)uVar12;
        uStack_2ec = uStack_2ec + 1;
        if (iStack_32c == 0) {
          iStack_32c = 2;
        }
        else {
          iStack_32c = iStack_32c + -1;
        }
        iStack_330 = (int)(uVar12 >> 0x20);
        uVar4 = *(uint *)((iStack_32c + 5) * 4 + iStack_330);
        uVar12 = CONCAT44(uVar4,uVar4) & 0xfffffffc00000003;
        if ((uVar4 & 0xfffffffc) == 0) break;
        if ((uVar4 & 3) + (uVar4 & 0xfffffffc) == iVar11 + (int)piVar2) goto LAB_82d266b8;
      }
      uVar4 = *puVar10;
      uVar6 = -(uint)((uVar4 & 3) != 2) & (uVar4 & 3) + 1;
      uVar12 = CONCAT44(uVar4,uVar6);
      while (uVar12 = uVar12 & 0xfffffffcffffffff, (uVar4 & 0xfffffffc) != 0) {
        iVar7 = fn_82CE5410(uVar6);
        if (uStack_2ec == (uStack_2e8 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),&puStack_2f0,8);
        }
        if ((ulonglong *)(puStack_2f0 + uStack_2ec * 8) != (ulonglong *)0x0) {
          *(ulonglong *)(puStack_2f0 + uStack_2ec * 8) = uVar12;
        }
        iStack_32c = (int)uVar12;
        iStack_330 = (int)(uVar12 >> 0x20);
        uStack_2ec = uStack_2ec + 1;
        uVar4 = *(uint *)((iStack_32c + 5) * 4 + iStack_330);
        iVar7 = (uVar4 & 3) - 2;
        uVar6 = -iVar7;
        uVar12 = CONCAT44(uVar4,-(uint)(iVar7 != 0) & (uVar4 & 3) + 1);
      }
LAB_82d266b8:
      if ((int)uStack_2ec < *(int *)(uVar3 + 0x40)) {
        uVar6 = fn_82D2D320(param_1 + 8,uVar3);
        iVar7 = 0;
        *(undefined4 *)(uVar3 + 0x44) = param_2;
        *(uint *)(uVar3 + 0x40) = *(int *)(uVar3 + 0x40) - uStack_2ec;
        *(uint *)(uVar6 + 0x40) = uStack_2ec;
        *(undefined4 *)(uVar6 + 0x44) = param_2;
        if (0 < (int)uStack_2ec) {
          iVar8 = 0;
          do {
            iVar7 = iVar7 + 1;
            *(uint *)((*(int *)(puStack_2f0 + iVar8 + 4) + 2) * 4 + *(int *)(puStack_2f0 + iVar8)) =
                 uVar6;
            iVar8 = iVar8 + 8;
          } while (iVar7 < (int)uStack_2ec);
        }
        lVar9 = lVar9 + 1;
      }
      iVar7 = fn_82CE5410(uVar6);
      uStack_2ec = 0;
      if ((uStack_2e8 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
                  (*(int **)(iVar7 + 0x10),puStack_2f0,uStack_2e8 & 0x3fffffff,8);
      }
      iVar11 = iVar11 + 1;
      puStack_2f0 = (undefined1 *)0x0;
      puVar10 = puVar10 + 1;
      uStack_2e8 = 0x80000000;
    } while (iVar11 < 3);
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
      if ((int)lVar9 == 0) {
        return lVar9;
      }
      fn_82CEE578(auStack_308,auStack_260,0x200);
      uVar5 = fn_82CEDB38(auStack_308,0xffffffff82134ae0);
      fn_82CEDC88(uVar5,lVar9);
      (**(code **)(*lbl_8323B464 + 0xc))
                (lbl_8323B464,0,0xffffffffffffffff,auStack_260,0xffffffff8213492c,0x971);
                    /* WARNING: Subroutine does not return */
      fn_82CED958(auStack_308);
    }
  } while( true );
}

