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
extern int fn_82868FB0();
extern int fn_82869010();
extern int fn_82FE79D0();


void fn_82875A50(undefined8 param_1,int param_2)

{
  int *piVar1;
  
  if (*(char *)(param_2 + 0x28) == '\0') {
    if (*(char *)(param_2 + 0x29) == '\0') {
      return;
    }
    fn_82FE79D0();
    piVar1 = (int *)fn_82869010();
  }
  else {
    fn_82FE79D0();
    piVar1 = (int *)fn_82868FB0();
  }
  if (*(int **)(param_2 + 0x30) != piVar1) {
    *(int **)(param_2 + 0x30) = piVar1;
    (**(code **)(*piVar1 + 8))(piVar1,param_2);
  }
  return;
}

