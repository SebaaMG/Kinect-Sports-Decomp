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
extern int fn_8265B200();
extern unsigned int lbl_821CE37C;


void fn_82658670(undefined8 param_1,uint param_2,ulonglong param_3,byte param_4,int param_5,
                  int param_6,int param_7,uint param_8)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int in_stack_00000054;
  char in_stack_0000005f;
  
  if (((param_2 == 0) && (param_6 != 0)) || ((param_2 == 1 && ((param_3 & 0x80) != 0)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  uVar3 = (int)param_3 >> 6 & param_2;
  param_4 = param_2 == 0 & param_4;
  if (param_7 != 0) {
    fn_8265B200(param_1,0xffffffff821aa634);
  }
  if (((uVar3 & 1) != 0) || (bVar4 = false, param_4 != 0)) {
    bVar4 = true;
  }
  fn_8265B200(param_1,0xffffffff821ce318,(-(param_2 != 0) & 0xfU) + 99);
  uVar8 = 0xffffffff821ce36c;
  if (bVar4) {
    if (bVar2) {
      fn_8265B200(param_1,0xffffffff821ce36c);
    }
    fn_8265B200(param_1,0xffffffff821ce34c);
  }
  fn_8265B200(param_1,0xffffffff821aa66c,
                    ((-(ulonglong)(param_2 != 0) & 0xffffffc0) << 0x20 |
                    -(ulonglong)(param_2 != 0) & 0xffffff40) + 0xff & param_3);
  uVar9 = 0xffffffff821ce374;
  if ((uVar3 & 1) != 0) {
    fn_8265B200(param_1,0xffffffff821ce374);
  }
  if (param_4 != 0) {
    if (param_5 != 0) {
      uVar9 = 0xffffffff821ce378;
    }
    fn_8265B200(param_1,uVar9);
  }
  if (bVar4) {
    uVar8 = 0xffffffff821c27b4;
  }
  else if (!bVar2) goto LAB_826587f8;
  fn_8265B200(param_1,uVar8);
LAB_826587f8:
  if (in_stack_00000054 < 4) {
    fn_8265B200(param_1,0xffffffff821c7f2c);
    fn_8265B200(param_1,0xffffffff821ce318,(&lbl_821CE37C)[((int)param_8 >> 6) - 1U & 3]);
    if (in_stack_00000054 < 2) {
      return;
    }
    if (in_stack_0000005f != '\0') {
      param_8 = ((int)param_8 >> 4) - 2;
    }
    uVar5 = (&lbl_821CE37C)[param_8 & 3];
  }
  else {
    if (param_8 == 0) {
      return;
    }
    fn_8265B200(param_1,0xffffffff821c7f2c);
    uVar3 = param_8 & 3;
    uVar1 = ((int)param_8 >> 6) - 1U & 3;
    uVar7 = ((int)param_8 >> 2) + 1U & 3;
    uVar6 = ((int)param_8 >> 4) - 2U & 3;
    fn_8265B200(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar3]);
    if (((uVar7 == uVar3) && (uVar6 == uVar3)) && (uVar1 == uVar3)) {
      return;
    }
    fn_8265B200(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar7]);
    if ((uVar6 == uVar7) && (uVar1 == uVar7)) {
      return;
    }
    fn_8265B200(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar6]);
    if (uVar1 == uVar6) {
      return;
    }
    uVar5 = (&lbl_821CE37C)[uVar1];
  }
  fn_8265B200(param_1,0xffffffff821ce318,uVar5);
  return;
}

