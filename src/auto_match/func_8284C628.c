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
extern unsigned int *auStack_40;
extern int fn_8284C428();
extern int fn_8284C528();


/* WARNING: Type propagation algorithm not settling */

longlong fn_8284C628(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint auStack_40 [16];
  
  lVar4 = 0;
  auStack_40[1] = 0;
  auStack_40[0] = 0;
  lVar3 = 0;
  if (param_4 == 0) {
    lVar3 = 0;
  }
  else if (0 < param_4) {
    do {
      fn_8284C428(param_1,param_2,lVar4,auStack_40 + 1,auStack_40);
      iVar1 = fn_8284C528(param_1,param_3,lVar4);
      uVar2 = (ulonglong)*(uint *)(param_3 + 8);
      lVar4 = lVar4 + 1;
      lVar3 = ((longlong)
               (int)((int)(((uVar2 + auStack_40[0]) - 1 & ~(uVar2 - 1) & 0xffffffff) / uVar2) +
                     0x1fU & 0xffffffe0) * (longlong)iVar1 + 0xfffU & 0xfffff000) + lVar3;
    } while ((int)lVar4 < param_4);
  }
  return lVar3;
}

