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
extern int fn_82CFBBF0();


undefined4 fn_82E12FE0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(uint)param_2[1] - 1;
  if (-1 < (longlong)uVar4) {
    lVar3 = (uVar4 & 0x3fffffff) << 2;
    do {
      uVar1 = (**(code **)(**(int **)((int)lVar3 + *param_2) + 0xc))();
      iVar2 = fn_82CFBBF0(uVar1,param_1);
      if (iVar2 == 0) {
        return *(undefined4 *)((int)((uVar4 & 0xffffffff) << 2) + *param_2);
      }
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (longlong)uVar4);
  }
  return 0;
}

