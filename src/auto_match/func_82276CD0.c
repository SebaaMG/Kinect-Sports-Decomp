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
extern unsigned int *auStack_10d0;
extern unsigned int *auStack_10e0;
extern int fn_822315A0();
extern int fn_8226D2A8();
extern int fn_8226D388();
extern int fn_8226D6A0();
extern int fn_82276E10();
extern int fn_82284B08();
extern int fn_823F2E20();
extern unsigned int iStack_10cc;
extern unsigned int iStack_10dc;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_10c8;


void fn_82276CD0(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_10e0 [4];
  int iStack_10dc;
  undefined1 auStack_10d0 [4];
  int iStack_10cc;
  undefined4 uStack_10c8;
  
  fVar1 = (float)((double)*(float *)(param_2 + 0x3c) - param_1);
  *(float *)(param_2 + 0x3c) = fVar1;
  if (fVar1 <= lbl_821CC160) {
    if (*(uint *)(param_2 + 0x28) < *(uint *)(param_2 + 0x2c)) {
      fn_8226D2A8(auStack_10d0);
      uVar4 = fn_82276E10(auStack_10e0,param_2);
      fn_823F2E20(auStack_10d0,uVar4);
      if (iStack_10dc != 0) {
        fn_822315A0();
      }
      uStack_10c8 = 0;
      uVar5 = fn_8226D388(auStack_10d0);
      if (*(int *)(param_2 + 0x30) != 0) {
        fn_8226D6A0();
      }
      piVar3 = *(int **)(param_2 + 0x24);
      *(undefined4 *)(param_2 + 0x30) = uVar5;
      iVar2 = piVar3[10];
      *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
      *(int *)(param_2 + 0x3c) = iVar2;
      *(int *)(param_2 + 0x24) = *piVar3 + (int)piVar3;
      if (iStack_10cc != 0) {
        fn_822315A0();
      }
    }
    else if (*(int *)(param_2 + 0x1c) == 0) {
      if (*(int **)(param_2 + 0x10) != (int *)0x0) {
        (**(code **)(**(int **)(param_2 + 0x10) + 4))();
      }
      *(undefined4 *)(param_2 + 0x1c) = 1;
    }
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    fn_82284B08(param_1);
  }
  return;
}

