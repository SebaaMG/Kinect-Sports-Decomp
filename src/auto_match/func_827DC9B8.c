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


void fn_827DC9B8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  param_4 = param_4 * 8;
  piVar2 = (int *)(param_4 + *(int *)(param_1 + 0x44));
  if (*piVar2 == *(int *)(param_1 + 4)) {
    *piVar2 = param_2;
    *(int *)(param_4 + *(int *)(param_1 + 0x44) + 4) = param_2;
    return;
  }
  if (*piVar2 == param_3) {
    *piVar2 = param_2;
    return;
  }
  iVar1 = *(int *)piVar2[1];
  piVar2[1] = iVar1;
  if (iVar1 == param_2) {
    return;
  }
  param_4 = param_4 + *(int *)(param_1 + 0x44);
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(*(int *)(param_4 + 4) + 4);
  return;
}

