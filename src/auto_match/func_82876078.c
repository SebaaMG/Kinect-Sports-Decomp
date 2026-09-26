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
extern int fn_82868F50();
extern int fn_82869010();
extern int fn_82875D70();


void fn_82876078(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined1 *)(param_2 + 0x29) = 0;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  *(undefined1 *)(param_2 + 0x2b) = 0;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  iVar1 = fn_82875D70(param_2);
  if (iVar1 < 0) {
    piVar2 = (int *)fn_82869010();
  }
  else {
    piVar2 = (int *)fn_82868F50();
  }
  if (*(int **)(param_2 + 0x30) != piVar2) {
    *(int **)(param_2 + 0x30) = piVar2;
    (**(code **)(*piVar2 + 8))(piVar2,param_2);
  }
  return;
}

