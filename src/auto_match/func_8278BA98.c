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
extern int fn_8268ACE8();
extern int fn_8268AF70();
extern int fn_8278B788();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


ulonglong fn_8278BA98(undefined8 param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bStack_31;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  uVar2 = *(ushort *)(param_2 + 0x2a);
  uStack_28 = 0;
  uVar5 = 0;
  uStack_24 = 0;
  uVar6 = 0;
  if (((uVar2 & 1) != 0) || ((uVar2 >> 10 & 1) != 0)) {
    uVar5 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    uVar6 = (uint)*(short *)(param_2 + 0x24);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    uVar6 = (uint)*(ushort *)(param_2 + 0x26) << 0x10 | uVar6;
  }
  uStack_2c = (uint)uVar2 << 0x18 | uVar6;
  bVar1 = *(int *)(param_2 + 0x1c) != 0;
  uStack_30 = (uint)*(byte *)(param_2 + 0x28) << 0x18 | uVar5;
  if (bVar1) {
    uStack_28 = 1;
  }
  uStack_28 = (uint)bVar1;
  if (((uVar2 >> 9 & 1) != 0) && (*(int *)(param_2 + 0x18) != 0)) {
    uStack_24 = fn_8278B788();
  }
  uVar7 = 0x1505;
  lVar8 = 0x10;
  iVar4 = 0x10;
  do {
    uVar7 = (ulonglong)(&bStack_31)[iVar4] + (longlong)(int)uVar7 * 0x1003f;
    lVar8 = lVar8 + -1;
    iVar4 = iVar4 + -1;
  } while (lVar8 != 0);
  if ((*(ushort *)(param_2 + 0x2a) >> 2 & 1) != 0) {
    uVar3 = fn_8268AF70(((ulonglong)*(uint *)(param_2 + 8) & 0xfffffffc) + 8,
                         *(uint *)(*(uint *)(param_2 + 8) & 0xfffffffc) & 0x7fffffff,0x1505);
    uVar7 = uVar3 ^ uVar7;
  }
  if ((*(ushort *)(param_2 + 0x2a) & 0x100) != 0) {
    iVar4 = fn_8268ACE8(param_2 + 0x10);
    bVar1 = true;
    if (iVar4 != 0) goto LAB_8278bbdc;
  }
  bVar1 = false;
LAB_8278bbdc:
  if (bVar1) {
    uVar3 = fn_8268AF70(((ulonglong)*(uint *)(param_2 + 0x10) & 0xfffffffc) + 8,
                         *(uint *)(*(uint *)(param_2 + 0x10) & 0xfffffffc) & 0x7fffffff,0x1505);
    uVar7 = uVar3 ^ uVar7;
  }
  return uVar7;
}

