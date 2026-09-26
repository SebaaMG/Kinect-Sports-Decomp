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
extern int fn_82292AE8();
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_823545A8();
extern int fn_82535298();
extern int fn_8254EDB0();
extern int fn_825604A0();
extern int fn_82672C20();
extern unsigned int lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_832765BC;


void fn_82355ED8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  int aiStack_40 [16];
  
  if (*(int *)(param_1 + 0x350) != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    for (piVar4 = *(int **)(iVar2 + 0x30); piVar4 != *(int **)(iVar2 + 0x34); piVar4 = piVar4 + 2) {
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x22c) != 0) {
        fn_825604A0(iVar1 + 0x20);
        *(undefined4 *)(iVar1 + 0x22c) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x350) = 0;
  }
  fn_823545A8(param_1);
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x24))();
  }
  iVar2 = fn_82292AE8();
  if ((*(int *)(iVar2 + 0x20) == 0) && (lbl_832765BC == 0)) {
    fn_82292BC0(0,0,0);
    fn_82292C30(5);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x8c8);
  if (iVar2 != 0) {
    fn_8254EDB0((double)lbl_82192604,(double)lbl_821CA460,iVar2,0);
  }
  piVar4 = (int *)(param_1 + 0x3a8);
  if (piVar4 == (int *)0x0) {
    bVar5 = false;
  }
  else {
    bVar5 = *piVar4 != 0;
  }
  if (bVar5) {
    aiStack_40[0] = *piVar4;
    uVar3 = fn_82535298(aiStack_40,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x84c),
                              0xffffffff83296bc0,0xffffffff83296bd0);
    *(undefined4 *)(param_1 + 0x3ac) = uVar3;
  }
  piVar4 = *(int **)(param_1 + 0x2ac);
  if ((piVar4 != (int *)0x0) && (*piVar4 != 1)) {
    *piVar4 = 1;
    fn_82672C20(piVar4[2],0xffffffff821ab560,0,0);
  }
  return;
}

