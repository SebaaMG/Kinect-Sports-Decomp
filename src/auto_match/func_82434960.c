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
extern int fn_82273C88();
extern int fn_82292268();
extern int fn_8229A000();
extern int fn_8229AAF8();
extern int fn_8229F618();
extern int fn_822ABA88();
extern int fn_822AF138();
extern int fn_82340AF0();
extern int fn_82359928();
extern int fn_8242C410();
extern int fn_8242D0B8();
extern int fn_8242D468();
extern int fn_824329A8();
extern int fn_82435F38();
extern int fn_82437EC8();
extern int fn_8249ABC0();
extern int fn_8249D128();
extern int fn_8249D980();
extern int fn_82672C20();
extern unsigned int lbl_821CA460;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5c;


void fn_82434960(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if ((*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x14)) ||
     (bVar1 = true, *(int *)(param_1 + 0x18) == 0)) {
    bVar1 = false;
  }
  if (!bVar1) {
    fn_82437EC8(param_1,1);
  }
  iVar4 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
  fn_8229A000(*(undefined4 *)(iVar4 + 0x4c));
  fn_8229A000(*(undefined4 *)(iVar4 + 0x58));
  iVar4 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
  fn_8229A000(*(undefined4 *)(iVar4 + 0x50));
  fn_8229A000(*(undefined4 *)(iVar4 + 0x5c));
  iVar4 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
  fn_8229A000(*(undefined4 *)(iVar4 + 0x54));
  fn_8229A000(*(undefined4 *)(iVar4 + 0x60));
  fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 100));
  fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x6c));
  fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x70));
  fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x68));
  fn_8229F618(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc));
  fn_82292268(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0xd4));
  fn_8229AAF8(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0xd4));
  fn_8242D468(**(undefined4 **)(param_1 + 0x40));
  uVar2 = lbl_821CA460;
  lVar7 = 2;
  puVar6 = (undefined4 *)
           (*(int *)(*(int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 0x9c) + 0x1a8) + 0xc);
  do {
    puVar6 = puVar6 + 0x7c;
    *puVar6 = uVar2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if (*(int *)(*(int *)(param_1 + 0x40) + 0xf0) != 0) {
    fn_82435F38(param_1);
  }
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x40);
  (**(code **)(*(int *)(iVar4 + 0x1dc) + 8))(iVar4 + 0x1dc);
  fn_8242D0B8(**(undefined4 **)(param_1 + 0x40),0);
  piVar5 = *(int **)(param_1 + 0x40);
  iVar4 = *piVar5;
  iVar3 = fn_8242C410(iVar4);
  if (0 < iVar3) {
    iVar4 = fn_822ABA88(*(undefined4 *)
                          ((*(int **)**(undefined4 **)(iVar4 + 8))[4] * 4 +
                          **(int **)**(undefined4 **)(iVar4 + 8)),0);
    uStack_5c = (undefined4)(longlong)(float)piVar5[99];
    fn_82340AF0((ulonglong)*(uint *)(iVar4 + 0x1a0) + 0x194,0x23,uStack_5c);
                    /* WARNING: Subroutine does not return */
    fn_822AF138(*(undefined4 *)(iVar4 + 0x110),1);
  }
  if (piVar5[0x3e] == 0) {
    fn_8229A000(*(undefined4 *)(*(int *)(iVar4 + 0xd4) + 0x20));
  }
  iVar4 = **(int **)(param_1 + 0x40);
  if (*(int *)(iVar4 + 0xac) != 1) {
    iVar3 = fn_8249ABC0();
    if (*(int *)(iVar4 + 0xb4) != -1) {
      fn_8249D980(*(undefined4 *)(iVar3 + 0x110));
      *(undefined4 *)(iVar4 + 0xb4) = 0xffffffff;
    }
    *(undefined4 *)(iVar4 + 0xac) = 1;
  }
  fn_82359928(**(undefined4 **)(param_1 + 0x40),1);
  *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0x90) + 0x510) = 0;
  if (*(int *)(*(int *)(param_1 + 0x40) + 0x1ac) != -1) {
    iVar4 = *(int *)(param_1 + 0x40);
    iVar3 = fn_8249ABC0();
    fn_8249D128(*(undefined4 *)(iVar3 + 0xec),*(undefined4 *)(iVar4 + 0x1ac));
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1ac) = 0xffffffff;
  }
  if (*(int *)(**(int **)(param_1 + 0x40) + 0x178) == 0) {
    fn_824329A8((ulonglong)*(uint *)(**(int **)(param_1 + 0x40) + 0x174) + 0x60,1);
  }
  iVar4 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
  if ((*(int *)(*(int *)(iVar4 + 0x48) + 0x54) != 0) &&
     (*(int *)(*(int *)(iVar4 + 0x48) + 0x28) != 0)) {
    uStack_50 = 0;
    uStack_4c = 0;
    fn_82672C20(*(undefined4 *)(*(int *)(iVar4 + 0x48) + 0x28),0xffffffff821ac32c,0,0);
    *(undefined4 *)(*(int *)(iVar4 + 0x48) + 0x54) = 0;
    fn_82273C88(&uStack_50);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1c0) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x40) + 8) = 0;
  return;
}

