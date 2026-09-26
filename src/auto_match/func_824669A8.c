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
extern unsigned int *auStack_2c;
extern int fn_82467D80();
extern int fn_82468470();
extern int fn_8259BDA8();
extern int fn_8265CA20();


void fn_824669A8(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piStack_30;
  undefined1 auStack_2c [44];
  
  piVar1 = *(int **)(param_1 + 4);
  piStack_30 = (int *)*piVar1;
  if (piStack_30 == (int *)*piVar1) {
    fn_82467D80();
  }
  else {
    while (piVar2 = piStack_30, piStack_30 != piVar1) {
      fn_8259BDA8(&piStack_30);
      fn_82468470(auStack_2c,param_1,piVar2);
    }
  }
  fn_8265CA20(*(undefined4 *)(param_1 + 4));
  return;
}

