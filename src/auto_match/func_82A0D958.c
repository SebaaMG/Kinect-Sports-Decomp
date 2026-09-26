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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;


void fn_82A0D958(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float in_register_00010010;
  float in_register_00010014;
  
  uVar4 = (ulonglong)(uint)(int)((in_register_00010010 + lbl_82002C5C) - lbl_82002AE0);
  uVar1 = (uint)(in_register_00010010 + lbl_82002C5C + lbl_82002AE0);
  uVar4 = -(ulonglong)(uVar4 < 0xffffffff80000000) & uVar4;
  uVar3 = 0x13f;
  if ((int)uVar1 < 0x140) {
    uVar3 = (ulonglong)uVar1;
  }
  uVar1 = (uint)(in_register_00010014 + lbl_82002C5C + lbl_82002AE0);
  uVar7 = (ulonglong)uVar1;
  uVar5 = (ulonglong)(uint)(int)((in_register_00010014 + lbl_82002C5C) - lbl_82002AE0);
  uVar5 = -(ulonglong)(uVar5 < 0xffffffff80000000) & uVar5;
  if (0xef < (int)uVar1) {
    uVar7 = 0xef;
  }
  if ((int)uVar7 <= (int)uVar5) {
    return;
  }
  lVar6 = uVar7 - uVar5;
  param_1 = (uVar5 + (uVar5 & 0x3fffffff) * 4 & 0x3ffffff) * 0x40 + param_1;
  do {
    if ((int)uVar4 < (int)uVar3) {
      lVar2 = uVar3 - uVar4;
      uVar5 = uVar4;
      do {
        *(undefined1 *)((int)param_1 + (int)uVar5) = 4;
        uVar5 = uVar5 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    lVar6 = lVar6 + -1;
    param_1 = param_1 + 0x140;
  } while (lVar6 != 0);
  return;
}

