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


int fn_829D36D8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x96c);
  uVar3 = 0;
  piVar2 = piVar4;
  do {
    if (*piVar2 == param_2) {
      return 0;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 0x18;
  } while (uVar3 < 2);
  uVar3 = 0;
  do {
    if (*piVar4 == 0) {
      param_1 = uVar3 * 0x60 + param_1;
      iVar1 = param_1 + 0x950;
      if (iVar1 == 0) {
        return 0;
      }
      *(int *)(param_1 + 0x96c) = param_2;
      return iVar1;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x18;
  } while (uVar3 < 2);
  return 0;
}

