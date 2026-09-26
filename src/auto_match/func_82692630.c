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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82691A10();
extern int fn_8270AA18();
extern unsigned int lbl_8200E1B0;
extern unsigned int lbl_831E7E60;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


undefined4 *
fn_82692630(undefined4 *param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,
             ulonglong param_5,longlong param_6,longlong param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 *puVar3;
  ulonglong uVar2;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  undefined4 in_stack_00000054;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = lbl_831E7E60 + 0x118;
  if ((param_5 & 0xffff0000) == 0) {
    if ((param_5 & 0xff00) == 0) {
      uVar4 = (uint)(byte)(&lbl_8200E1B0)[(uint)param_5 & 0xff];
    }
    else {
      uVar4 = (byte)(&lbl_8200E1B0)[(uint)(param_5 >> 8) & 0xff] + 8;
    }
  }
  else if ((param_5 & 0xff000000) == 0) {
    uVar4 = (byte)(&lbl_8200E1B0)[(uint)(param_5 >> 0x10) & 0xff] + 0x10;
  }
  else {
    uVar4 = (byte)(&lbl_8200E1B0)[(uint)(param_5 >> 0x18) & 0xff] + 0x18;
  }
  param_1[3] = uVar4 & 0xff;
  param_1[4] = (1 << (uVar4 & 0x3f)) + -1;
  fn_8270AA18(param_1 + 5);
  puVar3 = param_1 + 0x6d;
  param_1[0x6b] = param_1 + 0x6b;
  param_1[0x6c] = param_1 + 0x6b;
  lVar7 = 8;
  do {
    *puVar3 = puVar3;
    puVar3[1] = puVar3;
    puVar3 = puVar3 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  param_1[0x88] = in_stack_00000054;
  uVar5 = param_6 + 0xfffU & 0xfffff000;
  param_1[0x81] = param_8;
  param_1[0x7f] = (int)uVar5;
  trapWord(6,uVar5,0);
  *(undefined1 *)((int)param_1 + 0x1f6) = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  *(byte *)(param_1 + 0x7d) = (byte)((param_4 & 0xffffffff) >> 4) & 1;
  *(undefined1 *)((int)param_1 + 0x1f7) = 0;
  param_1[0x82] = 0;
  *(byte *)((int)param_1 + 0x1f5) = (byte)((param_4 & 0xffffffff) >> 5) & 1;
  param_1[0x80] = (int)(((uVar5 + param_7) - 1 & 0xffffffff) / uVar5) * (int)uVar5;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x89] = 0;
  param_1[0x7e] = 0x1000;
  (*(code *)**(undefined4 **)param_1[1])((undefined4 *)param_1[1],auStack_60);
  uVar5 = uStack_58 >> 0x20;
  *(undefined1 *)((int)param_1 + 0x1f7) = (((U64)(uStack_50) >> 32) & 0xFF);
  if (uVar5 < 0x1000) {
    uVar5 = 0x1000;
    uStack_58 = CONCAT44(0x1000,(((U64)(uStack_58) >> 32) & 0xFFFFFFFF));
  }
  trapWord(6,uVar5,0);
  param_1[0x7e] = (int)uVar5;
  param_1[0x82] = (((U64)(uStack_58) >> 32) & 0xFFFFFFFF);
  uVar4 = (int)((((uint)param_1[0x7f] + uVar5) - 1 & 0xffffffff) / uVar5) * (int)uVar5;
  param_1[0x7f] = uVar4;
  if ((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) != 0) {
    uVar1 = (((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0xfffU & 0xfffff000;
    uStack_50 = CONCAT44((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0xfffU,(((U64)(uStack_50) >> 32) & 0xFFFFFFFF)) & 0xfffff000ffffffff;
    if (uVar1 < uVar4) {
      param_1[0x7f] = uVar1;
      *(undefined1 *)(param_1 + 0x7d) = 0;
      *(undefined1 *)((int)param_1 + 0x1f5) = 0;
    }
  }
  uVar2 = (uVar5 & 0x7ffffff) << 5;
  if (((uint)param_1[0x81] < uVar2) && ((ulonglong)(uint)param_1[0x81] != 0)) {
    param_1[0x81] = (int)uVar2;
  }
  if ((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) != 0) {
    if ((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) < (uint)param_1[0x81]) {
      param_1[0x81] = (((U64)(uStack_58) >> 32) & 0xFFFFFFFF);
    }
    if (((uint)param_1[0x81] < 0x1000) && (param_1[0x81] != 0)) {
      param_1[0x81] = 0x1000;
    }
    if ((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) < (uint)param_1[0x7f]) {
      param_1[0x7f] = (((U64)(uStack_58) >> 32) & 0xFFFFFFFF) + 0xfff & 0xfffff000;
    }
    if ((uStack_58 & 0xffffffff) < uVar5) {
      param_1[0x7e] = (((U64)(uStack_58) >> 32) & 0xFFFFFFFF) + 0xfff & 0xfffff000;
    }
    if ((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) < (uint)param_1[0x80]) {
      param_1[0x80] = (((U64)(uStack_58) >> 32) & 0xFFFFFFFF);
    }
    *(undefined1 *)((int)param_1 + 0x1f5) = 0;
  }
  if (param_1[0x80] == 0) {
    cVar6 = '\x01';
  }
  else {
    lVar7 = fn_82691A10(param_1,param_1[0x80],param_5,param_1[0x7f],auStack_70);
    cVar6 = '\x01' - (lVar7 == 0);
  }
  *(char *)((int)param_1 + 0x1f6) = cVar6;
  return param_1;
}

