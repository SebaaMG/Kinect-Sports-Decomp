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
extern unsigned int lbl_820FC060;
extern unsigned int lbl_820FC070;


void fn_82C531B8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x198) = param_2;
  iVar1 = *(int *)(&lbl_820FC060 + param_2 * 4);
  *(int *)(param_1 + 0x19c) = iVar1;
  iVar2 = *(int *)(&lbl_820FC070 + param_2 * 4);
  *(int *)(param_1 + 0x1a0) = iVar2;
  iVar1 = 1 << (iVar1 - 1U & 0x3f);
  iVar2 = 1 << (iVar2 - 1U & 0x3f);
  *(int *)(param_1 + 0x1a4) = iVar1;
  *(int *)(param_1 + 0x1a8) = iVar2;
  *(int *)(param_1 + 0x1ac) = iVar1 * 2 + -1;
  *(int *)(param_1 + 0x1b0) = iVar2 * 2 + -1;
  return;
}

