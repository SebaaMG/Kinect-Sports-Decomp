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


longlong fn_824235C0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar4;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x20)) {
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar1 = (int)(*(int *)(param_1 + 0x10) - uVar2) / 0x1f0;
    uVar3 = (ulonglong)*(uint *)(param_2 + 0x40) -
            (longlong)(int)(*(uint *)(param_2 + 0x40) / uVar1) * (longlong)(int)uVar1;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_2 + 0x44) * 0x10 + *(int *)(param_1 + 0x1c)) * 0x10 +
            *(int *)(param_1 + 0x2c);
    uVar3 = (ulonglong)*(uint *)(iVar4 + 8);
    uVar2 = **(uint **)(iVar4 + 4);
  }
  return uVar3 * 0x1f0 + (ulonglong)uVar2;
}

