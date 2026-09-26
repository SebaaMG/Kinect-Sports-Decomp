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
extern int fn_82549798();
extern int fn_8259A230();
extern int fn_8259C458();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int fn_82A1EFC0();
extern unsigned int lbl_8326B7D0;
extern unsigned int *lbl_832767CC;


void fn_825A2688(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar5;
  longlong lVar3;
  int iVar6;
  undefined8 uVar4;
  uint uVar7;
  
  if (param_1[6] != 0) {
    uVar5 = fn_82549798(param_1[6],param_1[0xc],4,0);
    param_1[3] = uVar5;
    *param_1 = uVar5;
  }
  if (param_1[7] != 0) {
    uVar5 = fn_82549798(param_1[7],param_1[0xd],0x404,0);
    param_1[4] = uVar5;
    param_1[1] = uVar5;
  }
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    if (lbl_832767CC == (int *)0x0) {
      fn_82522838();
      if (lbl_832767CC == (int *)0x0) {
        fn_82522838();
      }
    }
    piVar2 = lbl_832767CC;
    if (*lbl_832767CC == 0) {
      fn_82522838();
    }
    lVar3 = fn_82A1BB18();
    fn_8259C5D8(piVar2 + 2,1,lVar3 + 1);
    fn_82A1BB18();
    iVar6 = fn_8259A230();
    iVar6 = fn_8259C458(*(undefined4 *)(&lbl_8326B7D0 + iVar6 * 4));
    uVar7 = *(uint *)(iVar6 + 0x28);
    *(undefined4 *)(iVar6 + 0x28) = 0x10;
    uVar4 = fn_82522CF8(iVar6,iVar1);
    if (0x10 < uVar7) {
      uVar7 = 0x10;
    }
    *(uint *)(iVar6 + 0x28) = uVar7;
    fn_82A1BB18();
    fn_8259C738(piVar2 + 2);
    param_1[5] = (int)uVar4;
    param_1[2] = (int)uVar4;
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(uVar4,0,param_1[8]);
  }
  return;
}

