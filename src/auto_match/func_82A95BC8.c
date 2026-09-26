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
extern unsigned int *auStack_44;
extern unsigned int *auStack_50;
extern int fn_82AA75B8();


void fn_82A95BC8(longlong param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  uint *puVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  uint auStack_50 [3];
  uint auStack_44 [17];
  
  puVar4 = (uint *)(param_2 + 0x18);
  puVar2 = auStack_44;
  lVar3 = 4;
  do {
    fn_82AA75B8(auStack_50,((ulonglong)puVar4[-3] & 0x3fffffff) * 4 + param_1,0x40001);
    puVar1 = puVar4 + 5;
    puVar4 = puVar4 + 1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 1;
    *puVar2 = (*puVar4 & auStack_50[0]) >> (*puVar1 & 0x3f);
  } while (lVar3 != 0);
  altv300_23(in_vs42,in_vs43);
  altv300_21(in_vs32,in_vs41);
  return;
}

