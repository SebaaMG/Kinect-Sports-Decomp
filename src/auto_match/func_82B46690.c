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
extern int fn_82ABDD90();


void fn_82B46690(int param_1,uint param_2,undefined4 param_3,uint param_4,undefined8 param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = (param_2 & 1) << 0x12 | uVar1 & 0xfffbffff | 0x20000;
  iVar3 = fn_82ABDD90(param_5,((ulonglong)uVar1 & 0x3f80) >> 7,uVar1 >> 0x13 & 7,
                       ((ulonglong)uVar1 & 0x1c000) >> 0xe);
  puVar2 = (undefined4 *)(iVar3 + param_1 + -0x10);
  *puVar2 = param_3;
  puVar2[3] = (param_4 & 1) << 2 | puVar2[3] & 0xfffffffb;
  return;
}

