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


undefined8 fn_82FF5750(undefined8 param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 0x28);
  if (piVar2 == *(int **)(param_2 + 0x2c)) {
    return 0x1d;
  }
  while (*piVar2 != param_3) {
    piVar2 = piVar2 + 1;
    if (piVar2 == *(int **)(param_2 + 0x2c)) {
      return 0x1d;
    }
  }
  if (1 < (uint)(*(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x28) >> 2)) {
    *piVar2 = *(int *)(*(int *)(param_2 + 0x2c) + -4);
  }
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + -4;
  cVar1 = *(char *)(param_2 + 0x39) + -1;
  *(char *)(param_2 + 0x39) = cVar1;
  if (cVar1 != '\0') {
    return 1;
  }
  *(undefined4 *)(param_2 + 0x34) = 6;
  return 1;
}

