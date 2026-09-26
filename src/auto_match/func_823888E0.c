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


ulonglong fn_823888E0(int param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar4;
  ulonglong uVar3;
  
  uVar3 = param_2 + 1U;
  if (((param_3 & 0xffffffff) < (param_2 + 1U & 0xffffffff)) &&
     (uVar3 = param_3, *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x260) + 0x1d0) != 0)) {
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar4 = iVar1 + 1;
    *(int *)(param_1 + 0x4c) = iVar4;
    uVar2 = *(uint *)((iVar4 + ((iVar1 + 1U) / 5) * -5 + 0x78) * 4 +
                     *(int *)(*(int *)(param_1 + 8) + 0x260));
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

