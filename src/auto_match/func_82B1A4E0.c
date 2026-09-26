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


void fn_82B1A4E0(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  if ((param_2[1] & 1) != 0) {
    return;
  }
  param_1 = param_1 & 0xfffffffe;
  uVar1 = *param_2;
  piVar3 = (int *)(param_2[1] & 0xfffffffe);
  uVar2 = *(uint *)(param_1 + 4);
  *piVar3 = param_1 + 4;
  *(int **)(param_1 + 4) = piVar3;
  *(uint *)(uVar1 & 0xfffffffe) = uVar2;
  *(uint **)(uVar2 & 0xfffffffe) = (uint *)(uVar1 & 0xfffffffe);
  param_2[1] = (uint)param_2 | 1;
  *param_2 = (uint)(param_2 + 1) | 1;
  return;
}

