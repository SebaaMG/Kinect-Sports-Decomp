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


void fn_82DFC048(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  *(undefined1 *)(param_3 + 0xc) = *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0x20);
  *(undefined1 *)(param_3 + 0xd) = *(undefined1 *)(param_1 + 0xcc);
  *(undefined1 *)(param_3 + 0xe) = *(undefined1 *)(param_1 + 0xcd);
  *(undefined1 *)(param_3 + 0xf) = *(undefined1 *)(param_1 + 0xce);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0xd0);
  iVar1 = **(int **)(param_1 + 0x2c);
  (**(code **)(iVar1 + 0xc))(*(int **)(param_1 + 0x2c),iVar1,param_1);
  *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_3 + 0xd);
  *(undefined1 *)(param_1 + 0xcd) = *(undefined1 *)(param_3 + 0xe);
  *(undefined1 *)(param_1 + 0xce) = *(undefined1 *)(param_3 + 0xf);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_3 + 0x10);
  return;
}

