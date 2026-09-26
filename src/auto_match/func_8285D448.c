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


void fn_8285D448(int param_1,int param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x34);
  if (iVar2 == param_1) {
    uVar1 = *(undefined4 *)(param_2 + 0x4c);
    iVar2 = *(int *)(param_2 + 0x38);
    *param_4 = param_2 + 0x1c;
    *param_5 = uVar1;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x48);
    *param_4 = param_2 + 0x28;
    *param_5 = uVar1;
  }
  *param_3 = iVar2;
  return;
}

