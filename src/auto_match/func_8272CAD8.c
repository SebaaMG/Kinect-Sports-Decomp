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


byte fn_8272CAD8(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  if ((*(ushort *)(param_1 + 200) >> 5 & 1) != 0) {
    return 1;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + 0x114);
  if (iVar1 == 0) {
    uVar2 = *(ushort *)(*(int *)(param_1 + 0x9c) + 0x50) >> 5;
  }
  else {
    uVar2 = *(ushort *)(iVar1 + 0x68) >> 1;
  }
  return -((uVar2 & 1) != 0) & 2;
}

