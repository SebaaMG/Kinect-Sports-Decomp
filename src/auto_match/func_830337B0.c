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
extern int fn_82FAB9C0();
extern int fn_8301B338();
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642F8;


void fn_830337B0(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*param_2 != 0) {
    fn_8301B338(lbl_832642F8);
  }
  *(int *)(param_1 + 0x2c) = *param_2;
  *(int *)(param_1 + 0x30) = param_2[1];
  if (*(int **)(param_1 + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa0) + 8))();
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  uVar1 = fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,param_2[1]);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  return;
}

