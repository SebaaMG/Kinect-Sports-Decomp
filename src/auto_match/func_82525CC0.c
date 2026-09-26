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
extern int fn_82522838();
extern int fn_82522CF8();
extern int fn_82532AD0();
extern int fn_82549798();
extern int fn_8259A230();
extern int fn_8259C458();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern unsigned int lbl_8326B7D0;
extern unsigned int *lbl_832767CC;


void fn_82525CC0(int *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar9;
  ulonglong uVar8;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  
  lVar10 = (param_2 & 0x3fffffff) * 4;
  lVar12 = 0;
  do {
    if (lbl_832767CC == (int *)0x0) {
      fn_82522838();
      if (lbl_832767CC == (int *)0x0) {
        fn_82522838();
      }
    }
    piVar3 = lbl_832767CC;
    if (*lbl_832767CC == 0) {
      fn_82522838();
    }
    lVar4 = fn_82A1BB18();
    fn_8259C5D8(piVar3 + 2,1,lVar4 + 1);
    fn_82A1BB18();
    iVar5 = fn_8259A230();
    iVar5 = fn_8259C458(*(undefined4 *)(&lbl_8326B7D0 + iVar5 * 4));
    uVar9 = *(uint *)(iVar5 + 0x28);
    *(undefined4 *)(iVar5 + 0x28) = 0x10;
    uVar6 = fn_82522CF8(iVar5,0x94);
    if (0x10 < uVar9) {
      uVar9 = 0x10;
    }
    *(uint *)(iVar5 + 0x28) = uVar9;
    fn_82A1BB18();
    fn_8259C738(piVar3 + 2);
    iVar5 = (int)((lVar10 + lVar12 + 0x291U & 0xffffffff) << 2);
    *(undefined4 *)(iVar5 + (int)param_1) = uVar6;
    iVar1 = (int)((lVar10 + lVar12 + 0x2a1U & 0xffffffff) << 2);
    uVar6 = fn_82549798(0x11c0,0x10,4,0);
    *(undefined4 *)(iVar1 + (int)param_1) = uVar6;
    iVar7 = (**(code **)(*param_1 + 0xac))(param_1);
    iVar2 = (int)((lVar10 + lVar12 + 0x2c9U & 0xffffffff) << 2);
    puVar11 = (undefined4 *)(iVar2 + (int)param_1);
    if (iVar7 == 0) {
      *(undefined4 *)(iVar2 + (int)param_1) = 0;
    }
    else {
      uVar6 = fn_82549798(0x11c0,0x10,4,0);
      *puVar11 = uVar6;
    }
    uVar6 = fn_82532AD0(0x47,*(undefined4 *)(iVar5 + (int)param_1),
                              *(undefined4 *)(iVar1 + (int)param_1),*puVar11);
    uVar8 = lVar10 + 0x2b1 + lVar12;
    lVar12 = lVar12 + 1;
    *(undefined4 *)((int)((uVar8 & 0xffffffff) << 2) + (int)param_1) = uVar6;
  } while ((int)lVar12 < 4);
  return;
}

