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
extern unsigned int *auStack_240;
extern unsigned int *auStack_280;
extern int fn_822A3E40();
extern int fn_822A3EC0();
extern int fn_822A4830();
extern int fn_822A4920();
extern int fn_822A4C18();
extern int fn_822ABA88();
extern int fn_82340BD8();
extern int fn_82340CC8();
extern int fn_82358FD8();
extern int fn_8243B938();
extern int fn_8243D2D8();
extern int fn_8243E578();


void fn_8243A6D0(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  undefined1 auStack_280 [64];
  undefined1 auStack_240 [576];
  
  if (param_3 == 4) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x1d8);
    piVar14 = (int *)(*(int *)(iVar6 + 0xd4) + 0x48);
    fn_8243D2D8((ulonglong)*(uint *)(iVar6 + 0x174) + 8,0xffffffff821b9420,0,0);
    fn_82358FD8(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1d8),auStack_280,0x20,
                      0xffffffff821b9300);
    uVar10 = *(uint *)(param_1 + 0x40);
    if (1 < (uint)(*(int *)(uVar10 + 0x1c8) - *(int *)(uVar10 + 0x1c4) >> 2)) {
      piVar1 = *(int **)(uVar10 + 0x1c4);
      uVar2 = *(undefined4 *)(*(int *)(piVar1[1] + 0x40) + 0x114);
      uVar3 = *(undefined4 *)(*(int *)(piVar1[2] + 0x40) + 0x114);
      uVar4 = *(undefined4 *)(*(int *)(piVar1[4] + 0x40) + 0x114);
      uVar5 = *(undefined4 *)(*(int *)(piVar1[3] + 0x40) + 0x114);
      *(undefined4 *)*piVar14 = *(undefined4 *)(*(int *)(*piVar1 + 0x40) + 0x114);
      *(undefined4 *)(*piVar14 + 8) = uVar2;
      *(undefined4 *)(*piVar14 + 0x10) = uVar3;
      *(undefined4 *)(*piVar14 + 0x18) = uVar5;
      *(undefined4 *)(*piVar14 + 0x20) = uVar4;
      *(int *)(*piVar14 + 0xbc) = *(int *)(*(int *)(param_1 + 0x40) + 0x1d4) + 2;
      fn_822A4920(piVar14,*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1d8));
      uVar10 = *(uint *)(param_1 + 0x40);
      iVar6 = *(int *)(uVar10 + 0x1d8);
      iVar11 = 0;
      if (0 < *(int *)(*(int *)(iVar6 + 0x174) + 0xbc)) {
        iVar12 = 0;
        do {
          uVar9 = (ulonglong)uVar10;
          piVar1 = *(int **)(**(int **)(iVar6 + 8) + iVar12);
          iVar6 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
          iVar7 = fn_8243E578(uVar9 + 0x1f0,*(undefined4 *)(iVar6 + 0x2c));
          if (iVar7 != 0) {
            uVar10 = *(uint *)(iVar7 + 0x44);
            uVar8 = fn_82340CC8((ulonglong)*(uint *)(iVar6 + 0x1a0) + 0x194,0x1e);
            if (uVar8 < uVar10) {
              lVar13 = (ulonglong)*(uint *)(iVar6 + 0x1a0) + 0x194;
              uVar8 = fn_82340CC8(lVar13,0x1e);
              if (uVar8 < uVar10) {
                fn_82340BD8(lVar13,0x1e,uVar10);
              }
            }
          }
          uVar10 = *(uint *)(param_1 + 0x40);
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
          iVar6 = *(int *)(uVar10 + 0x1d8);
        } while (iVar11 < *(int *)(*(int *)(iVar6 + 0x174) + 0xbc));
      }
    }
    if ((*(int *)(uVar10 + 0x1f8) - *(int *)(uVar10 + 500)) / 0x5c != 0) {
      iVar6 = *(int *)(param_1 + 0x40);
      if (*(int *)(iVar6 + 0x1d4) == (*(int *)(iVar6 + 0x1c8) - *(int *)(iVar6 + 0x1c4) >> 2) + -1)
      {
        fn_82358FD8(*(undefined4 *)(uVar10 + 0x1d8),auStack_240,0x100,0xffffffff821b9434);
        fn_822A4830(piVar14,3,1);
        fn_8243B938(param_1);
      }
      else {
        fn_82358FD8(*(undefined4 *)(uVar10 + 0x1d8),auStack_240,0x100,0xffffffff821b9450);
        fn_822A4830(piVar14,3,1);
        fn_822A4C18(piVar14,1);
        fn_822A3E40(piVar14,auStack_240);
        iVar6 = *(int *)(param_1 + 0x40) + 0x1f0;
        fn_822A3EC0(piVar14,*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1d8),iVar6,iVar6,0,0,1)
        ;
      }
    }
  }
  return;
}

