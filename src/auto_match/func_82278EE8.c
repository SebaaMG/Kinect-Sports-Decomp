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
extern unsigned int *auStack_a0;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82526C10();
extern int fn_82526C70();
extern int fn_82528EE0();
extern int fn_82672C20();
extern int fn_82F63108();
extern unsigned int iStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_82278EE8(int param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined1 auStack_a0 [160];
  
  uStack_b0 = 0;
  uStack_ac = 0;
  fn_82526C70(auStack_a0,0x80,param_1 + 0x18);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x270) == 0) {
      fn_82528EE0(param_1 + 0xa4,0x40,0xffffffff821a7c80,param_3);
    }
    else {
      if (*(int *)(param_1 + 0x270) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(**(int **)(param_1 + 0x270) + 4))
                (*(int **)(param_1 + 0x270),0,param_3,param_1 + 0xa4,0x40);
    }
    iVar2 = param_1 + 0xa4;
    fn_82273CD8(&uStack_b0,5);
    uVar1 = 0xffffffff821a818c;
  }
  else if (param_2 == 1) {
    if (*(int *)(param_1 + 0x270) == 0) {
      fn_82528EE0(param_1 + 0x124,0x40,0xffffffff821a7c80,param_3);
    }
    else {
      if (*(int *)(param_1 + 0x270) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(**(int **)(param_1 + 0x270) + 4))
                (*(int **)(param_1 + 0x270),0,param_3,param_1 + 0x124,0x40);
    }
    iVar2 = param_1 + 0x124;
    fn_82273CD8(&uStack_b0,5);
    uVar1 = 0xffffffff821a8198;
  }
  else {
    if (2 < param_2) goto LAB_822790bc;
    if (*(int *)(param_1 + 0x270) == 0) {
      fn_82528EE0(param_1 + 0x1a4,0x40,0xffffffff821a7c80,param_3);
    }
    else {
      if (*(int *)(param_1 + 0x270) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(**(int **)(param_1 + 0x270) + 4))
                (*(int **)(param_1 + 0x270),0,param_3,param_1 + 0x1a4,0x40);
    }
    iVar2 = param_1 + 0x1a4;
    fn_82273CD8(&uStack_b0,5);
    uVar1 = 0xffffffff821a81a8;
  }
  iStack_a8 = iVar2;
  fn_82526C10(auStack_a0,0x80,uVar1);
LAB_822790bc:
  fn_82672C20(*(undefined4 *)(param_1 + 8),auStack_a0,&uStack_b0,1);
  fn_82273C88(&uStack_b0);
  return;
}

