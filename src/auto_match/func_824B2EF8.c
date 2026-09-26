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
extern unsigned int lbl_821CC160;


undefined8 fn_824B2EF8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar4 = 0;
  if (*(int *)(iVar1 + 0x14) != 0) {
    do {
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(iVar1 + 0xc) + 400;
      *(int *)(iVar1 + 0xc) = iVar3;
      if (iVar3 == *(int *)(iVar1 + 8)) {
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 4);
      }
    } while (uVar4 < *(uint *)(iVar1 + 0x14));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  uVar2 = lbl_821CC160;
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x1c) = lbl_821CC160;
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x24) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x28) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x68) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x6c) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x70) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x74) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x78) = 0;
  return 0;
}

