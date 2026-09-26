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


ulonglong fn_826C86D8(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xa0) + 0xa9c);
  if ((*(int *)(param_1 + 0x1c0) != 0) && (uVar2 = 0, uVar1 != 0)) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + *(int *)(*(int *)(param_1 + 0xa0) + 0xa98)) == param_1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while ((uVar2 & 0xffffffff) < (ulonglong)uVar1);
  }
  return 0xffffffffffffffff;
}

