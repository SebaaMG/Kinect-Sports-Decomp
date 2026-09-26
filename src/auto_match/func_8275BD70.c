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
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_82687270();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826CE3B0();
extern int fn_826CE4B0();
extern int fn_826DB990();
extern int fn_8275BB38();
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern U64 storeWordConditionalIndexed();


void fn_8275BD70(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  char in_RESERVE;
  byte bVar11;
  undefined4 *puStack_40;
  uint uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  
  iVar10 = *(int *)(param_1 + 8) + -0x10;
  if (*(int *)(param_1 + 8) == 0) {
    iVar10 = 0;
  }
  if (iVar10 == 0) {
    return;
  }
  lVar3 = fn_8275BB38();
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) < 1) {
    fn_826CE3B0(lVar3);
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = fn_826957D0(param_1,0);
  fn_82696D38(&puStack_40,uVar4,uVar1,0xffffffffffffffff,0);
  iVar10 = *(int *)(param_1 + 8) + -0x10;
  if (*(int *)(param_1 + 8) == 0) {
    iVar10 = 0;
  }
  uVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x74) + 0x48))();
  bVar11 = (uVar5 == 0) << 1;
  if (uVar5 != 0) {
    fn_8267C4C8(uVar5);
  }
  if (iVar10 == 0) {
LAB_8275bf00:
    if ((uVar5 & 0xffffffff) == 0) goto LAB_8275bf10;
  }
  else {
    if ((uVar5 & 0xffffffff) == 0) goto LAB_8275bf10;
    piStack_38 = (int *)0x0;
    uStack_34 = 0;
    fn_8268C510(&uStack_3c,*puStack_40);
    cVar6 = fn_826DB990(uVar5,&piStack_38,&uStack_3c);
    lVar8 = ((ulonglong)uStack_3c & 0xfffffffc) + 4;
    do {
      puVar9 = (uint *)lVar8;
      uVar7 = (ulonglong)*puVar9;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar8);
        *puVar9 = uVar2;
        bVar11 = 2;
      }
    } while (!(bool)(bVar11 >> 1 & 1));
    if (uVar7 == 1) {
      fn_8267BE38();
    }
    if ((cVar6 != '\0') && (uVar7 = (**(code **)(*piStack_38 + 8))(), (uVar7 & 0xff00) == 0x400)) {
      if ((piStack_38 != (int *)0x0) && (fn_826CE4B0(lVar3), piStack_38 != (int *)0x0)) {
        fn_82687270();
      }
      goto LAB_8275bf00;
    }
    if (piStack_38 != (int *)0x0) {
      fn_82687270();
    }
  }
  fn_82687270(uVar5);
LAB_8275bf10:
  uVar2 = puStack_40[2];
  puStack_40[2] = (int)((ulonglong)uVar2 - 1);
  if ((ulonglong)uVar2 - 1 == 0) {
    fn_826944C8(puStack_40);
  }
  return;
}

