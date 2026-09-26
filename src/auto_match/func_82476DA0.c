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
extern int fn_82547C80();
extern int fn_82555A88();


void fn_82476DA0(int param_1,int param_2)

{
  int iVar1;
  uint *puVar3;
  longlong lVar2;
  uint uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x15c) + 0x3e4);
  if ((iVar1 != 0) &&
     (puVar3 = (uint *)fn_82555A88((ulonglong)*(uint *)(iVar1 + 0x8c0) + 0x98,
                                         0xffffffff821bcf40), puVar3 != (uint *)0x0)) {
    uVar4 = 0;
    lVar2 = (ulonglong)*puVar3 + 0xd0;
    do {
      lVar2 = fn_82547C80(lVar2,uVar4 & 0xff,(int)uVar4 < param_2);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 8);
  }
  return;
}

