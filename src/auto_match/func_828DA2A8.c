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
extern int fn_822315A0();
extern int fn_825089A0();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_8289F2E0();
extern int fn_828A17A0();
extern int fn_828AECA8();
extern int fn_828AECB0();
extern int fn_828BE158();
extern int fn_828D0148();
extern int fn_828D0D98();
extern int fn_828D8A98();
extern int fn_828D9D58();
extern int fn_828DA230();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_82026E10;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83213FC8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_828DA2A8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int *piVar6;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  int iStack_50;
  int iStack_4c;
  
  lVar9 = 1;
  bVar3 = true;
  piVar6 = (int *)fn_825089A0();
  dVar10 = (double)(**(code **)(*piVar6 + 8))();
  piVar6 = (int *)fn_8289F2E0(param_1,param_2);
  uVar4 = (**(code **)(*piVar6 + 0xc))();
  dVar11 = (double)fn_828AECA8();
  if ((dVar11 != (double)lbl_821AAD20) && (bVar3 = false, (float)(dVar10 - dVar11) < lbl_82026E10))
  {
    lVar9 = 0;
  }
  if (lVar9 == 0) {
    return 0;
  }
  fn_828AECB0(dVar10,uVar4);
  uVar5 = fn_8265C9E0(0x98);
  if ((uVar5 & 0xffffffff) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = fn_828D9D58(uVar5,1);
  }
  fn_828DA230(iVar7,param_1);
  uVar5 = (ulonglong)lbl_83213FC8;
  if (uVar5 == 0) {
    uVar5 = fn_828A17A0();
  }
  fn_828D0D98(&iStack_50,uVar5);
  if (iStack_50 != 0) {
    iVar1 = *(int *)(iStack_50 + 0x7c);
    if ((((iVar1 - 1U < 5) && (iVar1 != 1)) && (iVar1 != 2)) && ((iVar1 != 3 && (iVar1 == 4)))) {
      bVar2 = *(int *)(iStack_50 + 0x80) == 1;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar4 = fn_828D0148();
      goto LAB_828da400;
    }
  }
  uVar4 = 0x20000;
LAB_828da400:
  uVar8 = fn_828D8A98(uVar4);
  *(uint *)(iVar7 + 0x94) = uVar8;
  if (0x7f < uVar8) {
    *(undefined4 *)(iVar7 + 0x94) = 0x7f;
  }
  if (bVar3) {
    fn_82886518(iVar7,0xffffffffffffffff,0xffffffffffffffff);
  }
  fn_828BE158(param_1,iVar7,param_2,!bVar3);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  return lVar9;
}

