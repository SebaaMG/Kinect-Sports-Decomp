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


ulonglong fn_82CEACC8(int param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xc);
  if (iVar3 == 0) {
    return uVar2;
  }
  do {
    puVar1 = (uint *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 4);
    uVar2 = *puVar1 + uVar2;
  } while (iVar3 != 0);
  return uVar2;
}

