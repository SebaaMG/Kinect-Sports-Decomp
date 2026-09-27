typedef unsigned char undefined1, byte, undefined, bool;
#define true 1
#define false 0
typedef unsigned short undefined2, ushort, word;
typedef unsigned int undefined4, uint, dword, ulong;
typedef unsigned __int64 undefined8, ulonglong, qword;
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


void fn_8256EA58(double param_1,int *param_2,int param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  int iVar2;

  param_2 = (int *)*param_2;
  uVar1 = 0;
  if (param_2[1] - *param_2 >> 2 == 0) {
    return;
  }
  iVar2 = 0;
  do {
    if (**(int **)(*param_2 + iVar2) == param_3) {
      (*(int **)(*param_2 + iVar2))[param_5 + 0x1d] = (int)(float)param_1;
    }
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (uVar1 < (uint)(param_2[1] - *param_2 >> 2));
  return;
}
