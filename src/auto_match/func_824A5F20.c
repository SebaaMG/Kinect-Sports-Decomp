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


undefined8 fn_824A5F20(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar3 = 0;
  if (*(int *)(iVar1 + 0x14) != 0) {
    do {
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(iVar1 + 0xc) + 0x60;
      *(int *)(iVar1 + 0xc) = iVar2;
      if (iVar2 == *(int *)(iVar1 + 8)) {
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 4);
      }
    } while (uVar3 < *(uint *)(iVar1 + 0x14));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return 0;
}

