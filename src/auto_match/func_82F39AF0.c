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


void fn_82F39AF0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  lVar3 = 3;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  do {
    *(undefined1 *)(param_1 + 0x14 + iVar1) = *(undefined1 *)(param_2 + 0x14 + iVar1);
    iVar1 = iVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar2 = (undefined4 *)(param_1 + 0x18);
  lVar3 = 0x14;
  do {
    lVar3 = lVar3 + -1;
    *puVar2 = *(undefined4 *)((param_2 - param_1) + (int)puVar2);
    puVar2[1] = *(undefined4 *)((int)puVar2 + (param_2 - param_1) + 4);
    puVar2 = puVar2 + 2;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  return;
}

