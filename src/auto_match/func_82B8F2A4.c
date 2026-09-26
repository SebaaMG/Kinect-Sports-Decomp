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


void fn_82B8F2A4(int param_1)

{
  uint uVar1;
  int iVar2;
  byte in_cr6;
  
  while (!(bool)(in_cr6 >> 1 & 1)) {
    uVar1 = *(uint *)(**(int **)(param_1 + 8) + 0x30);
    if (((uVar1 >> 0x16 & 1) == 0) && ((uVar1 >> 0x14 & 1) != 0)) break;
    iVar2 = (*(int **)(param_1 + 8))[1];
    *(int *)(param_1 + 8) = iVar2;
    in_cr6 = (iVar2 == 0) << 1;
  }
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_1 + 0x18);
  return;
}

