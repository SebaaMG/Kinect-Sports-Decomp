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


undefined8 fn_8281C5B0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x30);
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) {
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0x1c) + 0x21;
    *(int *)(param_1 + 0x1c) = iVar2;
    if ((int)(uint)*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 0x51) <=
        (iVar2 - *(int *)(*(int *)(param_1 + 0xc) + 0x30)) / 0x21) {
      return 0;
    }
  }
  uVar1 = *(undefined4 *)(iVar2 + 9);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return 1;
}

