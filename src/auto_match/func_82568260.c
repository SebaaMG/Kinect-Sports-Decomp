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
extern int fn_825BCB58();


void fn_82568260(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 **)(param_1 + 0x60) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)(param_1 + 0x60);
  }
  uVar1 = fn_825BCB58(uVar1,*(undefined4 *)(param_2 + 0x18));
  iVar2 = *(int *)(param_1 + 0xd4) * 0x30;
  *(undefined4 *)(iVar2 + *(int *)(param_1 + 0xd8) + 0x20) = 1;
  *(undefined4 *)(iVar2 + *(int *)(param_1 + 0xd8) + 0x24) = 1;
  *(undefined4 *)(iVar2 + *(int *)(param_1 + 0xd8) + 0x10) = uVar1;
  *(undefined4 *)(iVar2 + *(int *)(param_1 + 0xd8) + 0x14) = 0;
  *(undefined4 *)(iVar2 + *(int *)(param_1 + 0xd8) + 0x18) = 0;
  *(undefined4 *)(iVar2 + *(int *)(param_1 + 0xd8) + 0x1c) = 0;
  return;
}

