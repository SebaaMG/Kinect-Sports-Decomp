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
extern int fn_82FF5D28();


undefined8 fn_8301B8C0(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int *piVar2;
  
  uVar1 = 2;
  if ((uint)(*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24) >> 2) < 8) {
    for (piVar2 = *(int **)(param_2 + 0x24);
        (piVar2 != *(int **)(param_2 + 0x28) && (*piVar2 != param_3)); piVar2 = piVar2 + 1) {
    }
    if (((-(uint)(*(int **)(param_2 + 0x28) != piVar2) & (uint)piVar2) == 0) &&
       (piVar2 = (int *)fn_82FF5D28((undefined4 *)(param_2 + 0x24)), piVar2 != (int *)0x0)) {
      *piVar2 = param_3;
      uVar1 = 1;
      *(char *)(param_2 + 0x31) = *(char *)(param_2 + 0x31) + '\x01';
    }
    else {
      uVar1 = 0x28;
    }
  }
  return uVar1;
}

