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
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern unsigned int iStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_58;


void fn_82241450(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_1c;
  int iStack_18;
  
  uStack_1c = 0;
  iStack_18 = 0;
  uStack_58 = 2;
  (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,auStack_60);
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1,auStack_60);
  }
  if (iStack_18 != 0) {
    fn_822315A0();
  }
  return;
}

