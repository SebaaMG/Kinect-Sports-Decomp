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
extern int fn_82641518();


void fn_82641B60(int param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x30);
  param_4 = param_4 + -4;
  do {
    lVar2 = LZCOUNT(param_2);
    param_2 = param_2 << lVar2;
    param_4 = lVar2 * 4 + param_4;
    lVar4 = LZCOUNT(~param_2);
    lVar2 = lVar2 + param_3;
    if ((lVar4 * 4 + uVar1 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x34)) {
      uVar1 = uVar1 + 4;
      *(uint *)uVar1 = (uint)((lVar4 - 1U & 0xffffffff) << 0x10) | (uint)lVar2;
      lVar3 = lVar4;
      do {
        param_4 = param_4 + 4;
        lVar3 = lVar3 + -1;
        param_2 = param_2 << 1;
        uVar1 = uVar1 + 4;
        *(undefined4 *)uVar1 = *(undefined4 *)param_4;
      } while (lVar3 != 0);
    }
    else {
      uVar1 = fn_82641518(param_1,uVar1,lVar2,param_4,lVar4,1);
      param_4 = lVar4 * 4 + param_4;
      param_2 = param_2 << lVar4;
    }
    param_3 = lVar4 + lVar2;
  } while (param_2 != 0);
  *(int *)(param_1 + 0x30) = (int)uVar1;
  return;
}

