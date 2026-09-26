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
extern unsigned int lbl_8215F67C;
extern unsigned int lbl_8215F68C;


void fn_82E86EF8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&lbl_8215F68C + param_2 * 4);
  *(int *)(param_1 + 0xa24) = iVar1;
  iVar2 = 1 << (iVar1 - 1U & 0x3f);
  iVar1 = *(int *)(&lbl_8215F67C + param_2 * 4);
  *(int *)(param_1 + 0xa2c) = iVar2;
  *(int *)(param_1 + 0x1aec) = iVar2 >> 2;
  *(int *)(param_1 + 0xa34) = iVar2 * 2 + -1;
  *(int *)(param_1 + 0xa28) = iVar1;
  iVar1 = 1 << (iVar1 - 1U & 0x3f);
  *(int *)(param_1 + 0xa30) = iVar1;
  *(int *)(param_1 + 0x1af0) = iVar1 >> 2;
  *(int *)(param_1 + 0x1af4) = iVar2 >> 3;
  *(int *)(param_1 + 0xa38) = iVar1 * 2 + -1;
  *(int *)(param_1 + 0x1af8) = iVar1 >> 3;
  return;
}

