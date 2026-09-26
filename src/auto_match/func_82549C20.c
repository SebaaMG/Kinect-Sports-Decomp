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
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82555938();
extern int fn_82575818();
extern int fn_825B15C0();
extern int fn_8265CA20();
extern int fn_82A1F238();
extern unsigned int lbl_8329618C;


void fn_82549C20(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)(param_1 + 0x1c4);
  if (*piVar1 != 0) {
    fn_825B15C0(*piVar1,piVar1[1],piVar1[6],piVar1[7]);
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x7c);
    lVar3 = 4;
    do {
      iVar2 = puVar4[1];
      if (*(int *)(iVar2 + 0x4c) != 0) {
        fn_82A1F238();
        *(undefined4 *)(iVar2 + 0x4c) = 0;
      }
      if (*(int *)(iVar2 + 0x50) != 0) {
        fn_82A1F238();
        *(undefined4 *)(iVar2 + 0x50) = 0;
      }
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
    } while (lVar3 != 0);
  }
  fn_82555938(param_1 + 0x98);
  if (lbl_8329618C == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lbl_8329618C + 4);
  }
  if (iVar2 == 0) goto LAB_82549d44;
  if ((*(int *)(iVar2 + 0x93c) == 0) || (*(int *)(param_1 + 0x138) == 0)) {
    if (*(uint *)(param_1 + 0x130) != 0) {
      if (0x1000 < *(uint *)(param_1 + 0x130)) {
        fn_82522ED8();
      }
      goto LAB_82549d24;
    }
  }
  else {
    fn_82575818(*(int *)(iVar2 + 0x93c),*(undefined4 *)(param_1 + 0x130));
LAB_82549d24:
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  *(undefined4 *)(param_1 + 0x128) = 0xd00dd00d;
  *(undefined4 *)(param_1 + 300) = 0xd00dd00d;
  *(undefined4 *)(param_1 + 0x134) = 0xd00dd00d;
  *(undefined4 *)(param_1 + 0x13c) = 0xd00dd00d;
LAB_82549d44:
  (**(code **)**(undefined4 **)(param_1 + 0x1a8))();
  fn_8265CA20(*(undefined4 *)(param_1 + 0x1a8));
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  fn_8251FA58(*(undefined4 *)(param_1 + 0x1c0));
  if (*(int **)(param_1 + 0x1fc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1fc) + 8))();
    puVar4 = *(undefined4 **)(param_1 + 0x1fc);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    *(undefined4 *)(param_1 + 0x1fc) = 0;
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    fn_82A1F238();
  }
  if (*(int *)(param_1 + 0x1cc) != 0) {
    fn_82A1F238();
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    fn_82522ED8();
  }
  return;
}

