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


void fn_82486E90(int param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)(*(int *)(param_1 + 4) + 0x838);
  lVar2 = 4;
  do {
    if (((*piVar1 == 0) || (*piVar1 == 1)) && (piVar1[1] == param_2)) {
      *piVar1 = 4;
    }
    piVar1 = piVar1 + 0x108;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

