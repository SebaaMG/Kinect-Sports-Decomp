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
extern unsigned int *auStack_25e;
extern unsigned int *auStack_290;
extern unsigned int *auStack_298;
extern unsigned int *auStack_2a0;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82274A10();
extern int fn_82279FA0();
extern int fn_8227A140();
extern int fn_8227A218();
extern int fn_822C5B18();
extern int fn_823F2E20();
extern int fn_82517978();
extern int fn_8251F720();
extern int fn_8265C9E0();
extern int fn_8266EC60();
extern int fn_8266ECF0();
extern int fn_8266EF20();
extern int fn_82672C20();
extern int fn_82673A28();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern int fn_82F691F0();
extern unsigned int iStack_294;
extern unsigned int iStack_29c;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_820E975C;
extern unsigned int lbl_821A82B8;
extern unsigned int lbl_821A8C90;
extern unsigned int uStack_260;
extern unsigned int uStack_2a4;
extern unsigned int uStack_2ac;
extern unsigned int uStack_2b0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82279768(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar3;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 in_stack_00000054;
  undefined4 *in_stack_0000005c;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined **ppuStack_2a8;
  undefined4 uStack_2a4;
  undefined1 auStack_2a0 [4];
  int iStack_29c;
  undefined1 auStack_298 [4];
  int iStack_294;
  undefined1 auStack_290 [48];
  undefined2 uStack_260;
  undefined1 auStack_25e [606];
  
  puVar9 = param_1 + 2;
  *param_1 = &lbl_821A82B8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  iVar4 = fn_8265C9E0(0xc);
  if (iVar4 != 0) {
    param_1[4] = iVar4;
    *(int *)iVar4 = iVar4;
    *(undefined4 *)(param_1[4] + 4) = param_1[4];
    param_1[7] = *param_2;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x29] = param_3;
    param_1[0x2a] = &lbl_821A8C90;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 1;
    param_1[0x38] = param_4;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = param_8;
    param_1[0x3c] = param_7;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    fn_822C5B18(param_1 + 0x44,param_6);
    *(undefined1 *)(param_1 + 0x4a) = 0;
    piVar5 = (int *)fn_8251F720(param_2,0);
    param_1[8] = piVar5;
    param_1[9] = (int)piVar5 + *piVar5;
    uVar6 = fn_82274A10(param_5,param_1[0x3b],in_stack_00000054,1);
    param_1[0x27] = uVar6;
    param_1[0x2b] = param_1;
    param_1[0x2c] = fn_82279FA0;
    param_1[0x2d] = fn_8227A140;
    param_1[0x2e] = fn_8227A218;
    uVar1 = param_1[8];
    if (param_1[0x38] == 0) {
      uVar3 = fn_8266EC60();
      uVar3 = fn_8266ECF0(auStack_298,uVar3,(ulonglong)uVar1 + 4,param_5,0,0xffffffffffffffff,
                                0,0x18280143);
      fn_823F2E20(puVar9,uVar3);
      iStack_29c = iStack_294;
    }
    else {
      uVar3 = fn_8266EC60();
      uVar3 = fn_8266EF20(auStack_2a0,uVar3,(ulonglong)uVar1 + 4,0,1,0x18280143);
      fn_823F2E20(puVar9,uVar3);
    }
    if (iStack_29c != 0) {
      fn_822315A0();
    }
    if (in_stack_0000005c != (undefined4 *)0x0) {
      uStack_2b0 = 0;
      uStack_2ac = 0;
      fn_82517978(&uStack_2b0,*puVar9,param_1[3],0);
      (**(code **)*in_stack_0000005c)(in_stack_0000005c,&uStack_2b0);
    }
    fn_82864988(auStack_290,0xffffffff821a7cd8);
    uVar6 = fn_828647D8();
    param_1[0x42] = uVar6;
    fn_82864898(auStack_290);
    fn_82864988(auStack_290,0xffffffff821a7cfc);
    uVar6 = fn_828647D8();
    param_1[0x43] = uVar6;
    fn_82864898(auStack_290);
    fn_82673A28(*puVar9,0xffffffff8227a358,param_1);
    iVar4 = param_1[0x3c];
    if (iVar4 != 0) {
      iVar7 = 0;
      if (0 < *(int *)(iVar4 + 0x44)) {
        iVar8 = 0;
        do {
          iVar7 = iVar7 + 1;
          iVar2 = iVar8 + *(int *)(iVar4 + 0x40);
          iVar8 = iVar8 + 0xf0;
          *(undefined4 *)(iVar2 + 0xe4) = 0x80000000;
        } while (iVar7 < *(int *)(iVar4 + 0x44));
      }
      iVar7 = 0;
      lVar10 = 0x20;
      do {
        iVar8 = iVar7 + *(int *)(iVar4 + 0x54);
        iVar7 = iVar7 + 0x14;
        *(undefined1 *)(iVar8 + 0x10) = 0;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    fn_82672C20(*puVar9,0xffffffff821a8244,0,0);
    fn_82672C20(*puVar9,0xffffffff821a822c,0,0);
    uStack_260 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_25e,0,0x1fe);
  }
  uStack_2a4 = 0;
  ppuStack_2a8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_2a8);
}

