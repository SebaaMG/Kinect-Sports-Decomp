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
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_7c;
extern unsigned int *auStack_84;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_828C4360();
extern int fn_828CBA80();
extern int fn_828CCCC0();
extern int fn_828DF3F0();
extern int fn_828E0268();
extern int fn_828E0270();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA268();
extern int fn_828EA790();
extern int fn_82F69290();
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int lbl_832143E4;
extern unsigned int stack0x00000000;


/* WARNING: Removing unreachable block (ram,0x828e011c) */

undefined4 * fn_828DFF48(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar8;
  int iVar9;
  ulonglong uVar7;
  char cVar11;
  undefined4 *puVar10;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined4 auStack_90 [2];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  int iStack_74;
  undefined1 auStack_70 [4];
  int iStack_6c;
  
  piVar13 = (int *)0x0;
  iVar3 = 0;
  while( true ) {
    if (param_4 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      fn_828CCCC0(param_1,piVar13,iVar3,0);
      if (iVar3 != 0) {
        fn_822315A0(iVar3);
      }
      return param_1;
    }
    lVar5 = (ulonglong)*(uint *)(param_4 + 8) - 1;
    if ((ulonglong)*(uint *)(param_4 + 8) == 0) {
      lVar5 = 0;
    }
    uVar6 = fn_828EA268(lVar5);
    iVar8 = fn_828E9DA8(param_2);
    iVar9 = fn_828E9D90(param_2);
    if (iVar8 - iVar9 < (int)uVar6) {
      uVar7 = 0;
    }
    else {
      uVar7 = fn_828E9FF8(param_2,uVar6);
    }
    uVar1 = **(uint **)(param_4 + 4);
    uVar4 = uVar7 & 0xffffffff;
    while (uVar4 != 0) {
      fn_828EA790(&stack0x00000000 + -0x90);
      uVar7 = uVar7 - 1;
      uVar4 = uVar7;
    }
    uVar6 = fn_828C4360((ulonglong)uVar1 + 0xc);
    fn_828E0268(&stack0x00000000 + -0x88,uVar6);
    iVar8 = lbl_832143E4;
    if (lbl_832143E4 == 0) {
      iVar8 = fn_828CBA80();
    }
    iVar12 = iVar8 + 4;
    iVar9 = *(int *)(iVar8 + 4);
    iVar8 = iVar12;
    while (iVar2 = iVar9, iVar2 != 0) {
      cVar11 = fn_828E0270(iVar2 + 0x10,&stack0x00000000 + -0x88);
      if (cVar11 == '\0') {
        iVar9 = *(int *)(iVar2 + 4);
        iVar8 = iVar2;
      }
      else {
        iVar9 = *(int *)(iVar2 + 8);
      }
    }
    if ((iVar8 == iVar12) ||
       (cVar11 = fn_828E0270(&stack0x00000000 + -0x88,iVar8 + 0x10), cVar11 != '\0')) {
      iVar8 = iVar12;
    }
    if (iVar8 == iVar12) break;
    puVar10 = (undefined4 *)(**(code **)(iVar8 + 0x14))(&stack0x00000000 + -0x70,param_4,param_3);
    piVar14 = (int *)0x0;
    iVar8 = 0;
    if ((undefined4 *)(&stack0x00000000 + -0x90) != puVar10) {
      iVar8 = puVar10[1];
      puVar10[1] = 0;
      piVar14 = (int *)*puVar10;
      *puVar10 = 0;
    }
    if (iStack_6c != 0) {
      fn_822315A0();
    }
    if (piVar13 != (int *)0x0) {
      iStack_74 = 0;
      if ((iVar3 != 0) && (cVar11 = fn_8223AAC0(iVar3), cVar11 != '\0')) {
        iStack_74 = iVar3;
      }
      (**(code **)(*piVar14 + 0x18))(piVar14,&stack0x00000000 + -0x78);
      if (iStack_74 != 0) {
        fn_822315A0();
      }
    }
    (**(code **)(*piVar14 + 0x14))(piVar14,param_2);
    iVar9 = 0;
    piVar13 = (int *)0x0;
    if ((iVar8 != 0) && (cVar11 = fn_8223AAC0(iVar8), cVar11 != '\0')) {
      iVar9 = iVar8;
      piVar13 = piVar14;
    }
    if (iVar3 != 0) {
      fn_822315A0();
    }
    fn_828E0268(&stack0x00000000 + -0x84,uVar6);
    uVar7 = fn_828DF3F0(param_4,&stack0x00000000 + -0x84);
    if (((uVar7 & 0xffffffff) == (ulonglong)*(uint *)(param_4 + 4)) ||
       (cVar11 = fn_828E0270(&stack0x00000000 + -0x84,uVar7 + 0xc), cVar11 != '\0')) {
      iVar3 = -0x80;
    }
    else {
      iVar3 = -0x90;
    }
    param_4 = *(int *)(*(int *)(&stack0x00000000 + iVar3) + 0x10);
    iVar3 = iVar9;
    if (iVar8 != 0) {
      fn_822315A0(iVar8);
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F69290(&stack0x00000000 + -0x7c,0xffffffff821ddb04);
}

