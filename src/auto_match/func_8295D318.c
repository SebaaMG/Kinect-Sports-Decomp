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
extern unsigned int *auStack_4c;
extern int fn_82953B18();
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8
fn_8295D318(int *param_1,int param_2,int *param_3,undefined8 param_4,int *param_5,int *param_6,
             int *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [19];
  
  uVar1 = (**(code **)(*param_1 + 0x130))();
  uVar1 = fn_8295D0A8(param_1,uVar1);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  uVar1 = (**(code **)(*param_1 + 0x140))
                    (param_1,*(undefined4 *)(*param_3 * 4 + param_1[5]),&uStack_5c,auStack_4c,
                     &uStack_50);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  uVar1 = (**(code **)(*param_1 + 0x144))(param_1,param_3,param_4,&uStack_60,uStack_50);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  uVar1 = (**(code **)(*param_1 + 0x138))
                    (param_1,-(uint)(in_stack_0000006c != 0) & 0x400000 | uStack_5c,uStack_60,
                     auStack_4c[0]);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if (param_2 == 8) {
    uStack_60 = 0x70000;
    goto LAB_8295d46c;
  }
  if (param_2 != 9) {
    if (param_2 == 0x5a) {
      uStack_60 = 0x30000;
      goto LAB_8295d46c;
    }
    if ((((param_2 == 6) || (param_2 == 0xe)) || (param_2 == 0xf)) || (param_2 == 7)) {
      uStack_60 = 0x10000;
      goto LAB_8295d46c;
    }
    if (param_2 != 0x25) goto LAB_8295d46c;
  }
  uStack_60 = 0xf0000;
LAB_8295d46c:
  if (param_5 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*param_5 * 4 + param_1[5]),&uStack_5c,&uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x14c))(param_1,param_5,param_8,uStack_60,&uStack_54);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (in_stack_00000054 == 0) {
      uVar2 = (ulonglong)uStack_5c;
    }
    else {
      uVar2 = fn_82953B18(uStack_5c);
    }
    uVar1 = (**(code **)(*param_1 + 0x13c))(param_1,uVar2,uStack_54,uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  if (param_6 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*param_6 * 4 + param_1[5]),&uStack_5c,&uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x14c))(param_1,param_6,param_8,uStack_60,&uStack_54);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (in_stack_0000005c == 0) {
      uVar2 = (ulonglong)uStack_5c;
    }
    else {
      uVar2 = fn_82953B18(uStack_5c);
    }
    uVar1 = (**(code **)(*param_1 + 0x13c))(param_1,uVar2,uStack_54,uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  if (param_7 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*param_7 * 4 + param_1[5]),&uStack_5c,&uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x14c))(param_1,param_7,param_8,uStack_60,&uStack_54);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (in_stack_00000064 == 0) {
      uVar2 = (ulonglong)uStack_5c;
    }
    else {
      uVar2 = fn_82953B18(uStack_5c);
    }
    uVar1 = (**(code **)(*param_1 + 0x13c))(param_1,uVar2,uStack_54,uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  uVar1 = (**(code **)(*param_1 + 0x134))(param_1);
  if ((-1 < (int)uVar1) && (uVar1 = fn_829548C8(param_1), -1 < (int)uVar1)) {
    uVar1 = 0;
  }
  return uVar1;
}

