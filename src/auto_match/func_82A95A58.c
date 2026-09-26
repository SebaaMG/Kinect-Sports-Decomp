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
extern unsigned int *auStack_10;
extern unsigned int uStack_14;


void fn_82A95A58(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 in_vs32 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  uint uStack_14;
  uint auStack_10 [4];
  
  puVar3 = &uStack_14;
  piVar4 = (int *)(param_2 + 8);
  lVar5 = 4;
  do {
    puVar1 = (uint *)(piVar4 + 9);
    puVar2 = (uint *)(piVar4 + 5);
    piVar4 = piVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = ((uint)*(byte *)(*piVar4 + param_1) & *puVar2) >> (*puVar1 & 0x3f);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  altv300_23(in_vs42,in_vs43);
  altv300_21(in_vs32,in_vs41);
  return;
}

