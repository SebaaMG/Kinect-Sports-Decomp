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
extern int fn_82AC6560();


void fn_82ACA920(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  iVar1 = fn_82AC6560(param_1,0x14,0x1a);
  puVar3 = (undefined4 *)(param_2 + -4);
  puVar2 = (undefined4 *)(iVar1 + -4);
  lVar4 = 5;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(int *)(iVar1 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_3 + 4);
  *(int *)(param_3 + 4) = iVar1;
  return;
}

