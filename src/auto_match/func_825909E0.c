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
extern int fn_825A23C0();


void fn_825909E0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) * 0xc + param_1);
  if (iVar1 == 0) {
    uVar2 = fn_825A23C0(8,8);
    *(undefined4 *)(*(int *)(param_1 + 0x30) * 0xc + param_1) = uVar2;
  }
  else {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 4);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) * 0xc + param_1 + 4);
  if (iVar1 == 0) {
    uVar2 = fn_825A23C0(0x1c,8);
    *(undefined4 *)(*(int *)(param_1 + 0x30) * 0xc + param_1 + 4) = uVar2;
  }
  else {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 4);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x30) * 0xc + param_1 + 8) = param_2;
  return;
}

