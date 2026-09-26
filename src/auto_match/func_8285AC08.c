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
extern unsigned int lbl_83156E70;


void fn_8285AC08(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x68) + *(int *)(param_3 + 8) + 0x2c);
  uVar2 = *(uint *)(param_1 + 0x4c) >> 3;
  *(byte *)(uVar2 + iVar1) =
       (&lbl_83156E70)[*(uint *)(param_1 + 0x4c) & 7] | *(byte *)(uVar2 + iVar1);
  return;
}

