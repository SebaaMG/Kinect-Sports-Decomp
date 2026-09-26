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


bool fn_82B43A78(uint *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_1;
  if ((~(uint)piVar1 & 1) == 0) {
    return (int *)*param_2 == piVar1;
  }
  piVar3 = piVar1 + 1;
  if (piVar1 + 1 < piVar1 + *piVar1 + 1) {
    iVar2 = (*param_2 + 4) - (int)piVar3;
    do {
      if (*piVar3 != *(int *)(iVar2 + (int)piVar3)) {
        return false;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 < piVar1 + *piVar1 + 1);
  }
  return true;
}

