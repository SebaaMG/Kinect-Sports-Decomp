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
extern int fn_82643A48();
extern int fn_82F68CC0();
extern int fn_82F691F0();


ulonglong fn_8264F830(int param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = param_2 & 0xfffffffc;
  uVar2 = param_2 - uVar1 & 0x3fffffff;
  lVar5 = ((param_2 + param_4 + 3 & 0xfffffffc) - uVar1 & 0x3fffffff) * 4;
  uVar4 = lVar5 + (param_4 & 0x3fffffff) * -4 + uVar2 * -4;
  uVar3 = fn_82643A48(param_1,lVar5 + 1);
  if ((uVar3 & 0xffffffff) != 0) {
    *(uint *)(uVar3 + 4) =
         (uint)((uVar1 + 0x1000 & 0xffffffff) << 2) | (uint)((lVar5 - 1U & 0xffffffff) << 0x10);
    if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3 + 8,0,(uVar2 * 4 & 0x3fffffff) << 2);
    }
    lVar5 = (param_4 & 0xfffffff) * 0x10;
    fn_82F68CC0(uVar3 + 8,param_3,lVar5);
    lVar5 = lVar5 + uVar3 + 4;
    if ((uVar4 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar5 + 4,0,(uVar4 & 0x3fffffff) << 2);
    }
    *(int *)(param_1 + 0x30) = (int)lVar5;
    uVar3 = 1;
  }
  return uVar3;
}

