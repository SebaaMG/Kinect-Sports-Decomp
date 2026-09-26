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
extern int fn_825279F8();


bool fn_822B6FF0(int param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  
  if (*(int *)(*(int *)(**(int **)(param_1 + 0x11c) + 0x8c0) + 0x90) == 0) {
    lVar1 = fn_825279F8(param_2);
    bVar4 = lVar1 != 0;
  }
  else {
    uVar2 = 0;
    piVar3 = *(int **)(param_1 + 0x11c) + 4;
    do {
      if (*piVar3 == (int)param_2) {
        return true;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x10;
    } while (uVar2 < 2);
    bVar4 = false;
  }
  return bVar4;
}

