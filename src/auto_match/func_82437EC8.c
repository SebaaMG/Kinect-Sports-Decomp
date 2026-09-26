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


bool fn_82437EC8(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 8);
  if (piVar1 == (int *)0x0) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = (**(code **)(*piVar1 + 8))();
  }
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x18) = param_2;
  }
  return cVar2 != '\0';
}

