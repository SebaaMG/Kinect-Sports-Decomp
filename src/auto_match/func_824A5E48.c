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


undefined8 fn_824A5E48(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar3 + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x14) + -1;
    if ((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 0xc)) / 0x60 <= iVar1) {
      iVar1 = iVar1 - (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x60;
    }
    iVar1 = iVar1 * 0x60 + *(int *)(iVar3 + 0xc);
  }
  if (*(uint *)(iVar3 + 0x14) < 2) {
    iVar3 = 0;
  }
  else {
    iVar2 = *(uint *)(iVar3 + 0x14) - 2;
    if ((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 0xc)) / 0x60 <= iVar2) {
      iVar2 = iVar2 - (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x60;
    }
    iVar3 = iVar2 * 0x60 + *(int *)(iVar3 + 0xc);
  }
  if ((((iVar1 != 0) && (iVar3 != 0)) && (*(int *)(iVar1 + 0x54) != 0)) &&
     (*(int *)(iVar3 + 0x54) == 0)) {
    return 1;
  }
  return 0;
}

