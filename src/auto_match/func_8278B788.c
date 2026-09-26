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
extern int fn_8268AF70();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


ulonglong fn_8278B788(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bStack_31;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  uVar4 = 0x1505;
  uStack_30 = *(undefined4 *)(param_1 + 0x40);
  lVar5 = 0x10;
  uStack_2c = *(undefined4 *)(param_1 + 0x44);
  uStack_28 = *(undefined4 *)(param_1 + 0x48);
  uStack_24 = (uint)*(byte *)(param_1 + 0x4c);
  iVar3 = 0x10;
  do {
    uVar4 = (ulonglong)(&bStack_31)[iVar3] + (longlong)(int)uVar4 * 0x1003f;
    lVar5 = lVar5 + -1;
    iVar3 = iVar3 + -1;
  } while (lVar5 != 0);
  uVar1 = fn_8268AF70(((ulonglong)*(uint *)(param_1 + 0x38) & 0xfffffffc) + 8,
                       *(uint *)(*(uint *)(param_1 + 0x38) & 0xfffffffc) & 0x7fffffff,0x1505);
  uVar2 = fn_8268AF70(((ulonglong)*(uint *)(param_1 + 0x3c) & 0xfffffffc) + 8,
                       *(uint *)(*(uint *)(param_1 + 0x3c) & 0xfffffffc) & 0x7fffffff,0x1505);
  return uVar2 ^ uVar1 ^ uVar4;
}

