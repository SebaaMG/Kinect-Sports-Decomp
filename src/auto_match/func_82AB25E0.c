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
extern int fn_82AB18E8();
extern unsigned int lbl_821CE37C;


void fn_82AB25E0(undefined8 param_1,uint param_2,ulonglong param_3,byte param_4,int param_5,
                  int param_6,int param_7,uint param_8)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint in_stack_00000054;
  
  if (((param_2 == 0) && (param_6 != 0)) || ((param_2 == 1 && ((param_3 & 0x80) != 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar4 = (int)param_3 >> 6 & param_2;
  param_4 = param_2 == 0 & param_4;
  if (param_7 != 0) {
    fn_82AB18E8(param_1,0xffffffff821aa634);
  }
  uVar6 = 0xffffffff821ce384;
  if (bVar3) {
    fn_82AB18E8(param_1,0xffffffff821ce384);
  }
  if (((uVar4 & 1) != 0) || (bVar5 = false, param_4 != 0)) {
    bVar5 = true;
  }
  fn_82AB18E8(param_1,0xffffffff821ce318,(-(param_2 != 0) & 0xfU) + 99);
  if (bVar5) {
    fn_82AB18E8(param_1,0xffffffff821ce34c);
  }
  fn_82AB18E8(param_1,0xffffffff821aa66c,
                ((-(ulonglong)(param_2 != 0) & 0xffffffc0) << 0x20 |
                -(ulonglong)(param_2 != 0) & 0xffffff40) + 0xff & param_3);
  uVar9 = 0xffffffff821ce378;
  if ((uVar4 & 1) != 0) {
    fn_82AB18E8(param_1,0xffffffff821ce378);
  }
  if (param_4 != 0) {
    if (param_5 == 0) {
      uVar9 = 0xffffffff821ce374;
    }
    fn_82AB18E8(param_1,uVar9);
  }
  if (bVar5) {
    fn_82AB18E8(param_1,0xffffffff821c27b4);
  }
  uVar1 = ((~(ulonglong)in_stack_00000054 & 0xffffffff) >> 0x1f) +
          (ulonglong)(3 < (ulonglong)in_stack_00000054) & 1;
  if ((param_8 != 0) || (uVar1 != 0)) {
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    uVar4 = param_8 & 3;
    uVar2 = ((int)param_8 >> 6) - 1U & 3;
    uVar8 = ((int)param_8 >> 2) + 1U & 3;
    uVar7 = ((int)param_8 >> 4) - 2U & 3;
    fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar4]);
    if (((1 < (int)in_stack_00000054) &&
        ((((uVar1 != 0 || (uVar8 != uVar4)) || (uVar7 != uVar4)) || (uVar2 != uVar4)))) &&
       ((fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar8]),
        2 < (int)in_stack_00000054 &&
        ((((uVar1 != 0 || (uVar7 != uVar8)) || (uVar2 != uVar8)) &&
         ((fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar7]),
          3 < (int)in_stack_00000054 && ((uVar1 != 0 || (uVar2 != uVar7)))))))))) {
      fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar2]);
    }
  }
  if (!bVar3) {
    uVar6 = 0xffffffff82196582;
  }
  fn_82AB18E8(param_1,uVar6);
  return;
}

