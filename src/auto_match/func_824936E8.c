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
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821CA460;


void fn_824936E8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x194);
  *(int *)(iVar2 + 0x208) = iVar1;
  if ((iVar1 != 0) && (iVar1 = *(int *)(*(int *)(iVar2 + 0x2c4) + 0x94), iVar1 != 0)) {
    iVar1 = *(int *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x24) = lbl_8218E8E8;
    uVar3 = lbl_821CA460;
    *(undefined4 *)(iVar1 + 0x28) = lbl_821917B0;
    *(undefined4 *)(iVar1 + 0x2c) = uVar3;
  }
  *(undefined4 *)(iVar2 + 0x2a4) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

