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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern int fn_82F691F0();


ulonglong fn_82964228(int param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (*(uint *)(param_1 + 4) == uVar1) {
    uVar3 = ((ulonglong)uVar1 & 0x7fffffff) << 1;
    if (uVar1 == 0) {
      uVar3 = 0x10;
    }
    lVar2 = fn_8265C940((uVar3 & 0x3fffffff) << 2,0x24810000);
    if (lVar2 != 0) {
      fn_82F68CC0(lVar2,*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 4) << 2);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(((ulonglong)*(uint *)(param_1 + 4) & 0x3fffffff) * 4 + lVar2,0,
                   (uVar3 - *(uint *)(param_1 + 4) & 0x3fffffff) << 2);
    }
    if ((param_2 & 0xffffffff) != 0) {
      fn_82BA02A8(param_2);
      fn_8265C990(param_2,0x24810000);
    }
    uVar3 = 0xffffffffffffffff;
  }
  else {
    *(int *)(*(int *)(param_1 + 4) * 4 + *(int *)(param_1 + 0x10)) = (int)param_2;
    uVar3 = (ulonglong)*(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) + 1;
  }
  return uVar3;
}

