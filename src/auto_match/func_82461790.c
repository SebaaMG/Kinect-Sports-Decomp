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


void fn_82461790(int param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (*param_2 != 0x44) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x1d8);
  lVar2 = 2;
  do {
    if ((piVar1[-2] != 0) && (piVar1[-2] == param_2[2])) {
      piVar1[-2] = 0;
    }
    if ((*piVar1 != 0) && (*piVar1 == param_2[2])) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

