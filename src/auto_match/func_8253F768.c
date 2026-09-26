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
extern unsigned int *auStack_30;
extern int fn_8251E530();
extern int fn_8253D5A0();
extern int fn_825715B8();
extern int fn_825A80A8();
extern int fn_825A8320();
extern int fn_82CE4118();
extern int fn_82D81240();
extern int fn_82D88AE0();
extern int fn_82DEDC40();


void fn_8253F768(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_30 [48];
  
  fn_825715B8(param_1 + 0x380,*(undefined4 *)(param_1 + 0x7c0),*(undefined4 *)(param_1 + 0x4c)
                   );
  fn_825A8320(param_1);
  iVar1 = *(int *)(param_1 + 0x4e0);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x4c);
    for (piVar4 = *(int **)(iVar2 + 0x268); piVar4 < *(int **)(iVar2 + 0x26c); piVar4 = piVar4 + 1)
    {
      if (*piVar4 == iVar1) {
        fn_8251E530(iVar2 + 0x268);
        goto LAB_8253f7e4;
      }
    }
    if (*(int *)(iVar1 + 8) != 0) {
      fn_82D88AE0(*(undefined4 *)(iVar2 + 0x1f8),iVar1);
    }
LAB_8253f7e4:
    fn_82CE4118(iVar1);
    *(undefined4 *)(param_1 + 0x4e0) = 0;
  }
  fn_825A80A8(param_1 + 0x600,param_1);
  iVar1 = *(int *)(param_1 + 0x7c0);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0xe8) != '\a')) && (*(int *)(iVar1 + 8) != 0)) {
    fn_8253D5A0((ulonglong)*(uint *)(param_1 + 0x4c) + 0x1f0);
  }
  piVar4 = *(int **)(param_1 + 0x7b0);
  if (piVar4 != (int *)0x0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x1f8);
    fn_82DEDC40(uVar3,piVar4[3]);
    lVar6 = (ulonglong)*(uint *)(*piVar4 + 4) - 1;
    if (-1 < lVar6) {
      lVar5 = lVar6 * 0x90;
      do {
        fn_82D81240(auStack_30,uVar3,*(undefined4 *)(piVar4[1] + (int)lVar5));
        lVar6 = lVar6 + -1;
        lVar5 = lVar5 + -0x90;
      } while (-1 < lVar6);
    }
  }
  return;
}

