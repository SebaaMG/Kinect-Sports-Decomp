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


undefined8 fn_82FB2520(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 == 0) {
    return 0x1f;
  }
  for (piVar1 = *(int **)(param_1 + 0xb8);
      (piVar1 != *(int **)(param_1 + 0xbc) && (*piVar1 != param_2)); piVar1 = piVar1 + 2) {
  }
  piVar1 = (int *)(-(uint)(*(int **)(param_1 + 0xbc) != piVar1) & (uint)(piVar1 + 1));
  if (piVar1 == (int *)0x0) {
    return 0x39;
  }
  *piVar1 = param_3;
  return 1;
}

