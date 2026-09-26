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
extern unsigned int *auStack_40;
extern int fn_82A8B5F8();
extern int fn_82A8F178();


longlong fn_82A8F3C0(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 auStack_40 [4];
  undefined1 auStack_30 [32];
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x5988);
  uVar3 = (longlong)(*(int *)(param_1 + 0x5924) * *(int *)(param_1 + 0x591c) + 0x187 >> 3) +
          (ulonglong)*(uint *)(param_1 + 0x5984);
  uVar4 = uVar2;
  if ((uVar3 & 0xffffffff) <= uVar2) {
    uVar4 = uVar3;
  }
  fn_82A8B5F8(auStack_30,*(undefined4 *)(param_1 + 0x598c),uVar2,uVar4);
  auStack_40[0] = 0;
  lVar1 = fn_82A8F178(auStack_40,auStack_30);
  return lVar1 + uVar4;
}

