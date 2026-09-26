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
extern unsigned int *auStack_30;
extern int fn_82BE8EC8();
extern int fn_82BF1B78();
extern int fn_82F6D460();


bool fn_82BE54C8(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar3;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_30 [24];
  
  if ((((param_2 & 0xffffffff) != 0) && (0x20 < (int)param_3)) &&
     (iVar3 = fn_82BE8EC8(param_1,auStack_30,0x12), iVar3 != 0)) {
    uVar1 = fn_82F6D460(auStack_30,0x11);
    lVar2 = fn_82BF1B78(param_2,param_3,auStack_30,uVar1);
    return lVar2 != 0;
  }
  return false;
}

