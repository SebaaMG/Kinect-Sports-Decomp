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


bool fn_825709D8(int param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;

  piVar1 = *(int **)(param_1 + 0xc);
  for (piVar2 = *(int **)(param_1 + 8); (piVar2 != piVar1 && (*piVar2 != param_2));
      piVar2 = piVar2 + 0xc) {
  }
  if (piVar2 != piVar1) {
    Function_825697C0(piVar2[1],param_3);
  }
  return piVar2 != piVar1;
}
