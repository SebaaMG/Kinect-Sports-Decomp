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


undefined8 fn_82493760(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x3c) = iVar2;
  if (iVar2 < *(int *)(*(int *)(param_1 + 0x40) + 0x2b44)) {
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_2 + 0x18) = 1;
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x44) = 1;
    return 0;
  }
  return 1;
}

