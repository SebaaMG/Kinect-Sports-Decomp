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
extern int fn_82A0F0D0();
extern int fn_82A0F220();
extern int fn_82A10100();
extern int fn_82A19C80();


undefined8
fn_82A0F400(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar2;
  undefined8 uVar1;
  uint uVar3;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  
  *param_1 = (int)param_2;
  uVar3 = 0;
  iVar2 = fn_8265C940(0x2a28,0x249c0000);
  if (iVar2 != 0) {
    uVar3 = iVar2 + 0x10U & 0xfffffff0;
    *(int *)(uVar3 - 4) = iVar2;
  }
  param_1[1] = uVar3;
  if (uVar3 == 0) {
    uVar1 = 0xffffffff8007000e;
  }
  else {
    fn_82A10100(uVar3);
    uVar1 = fn_82A19C80(param_1[1],param_2,param_3,param_4,param_5,param_6,in_stack_00000054,
                            in_stack_0000005c);
    if ((int)uVar1 < 0) {
      fn_82A0F220(param_1);
    }
    else {
      param_1[2] = (int)param_7;
      param_1[3] = (int)param_8;
      param_1[4] = in_stack_00000054;
      param_1[5] = in_stack_0000005c;
      fn_82A0F0D0(param_1 + 6,param_7,param_8);
      uVar1 = 0;
      param_1[0x1f] = 1;
    }
  }
  return uVar1;
}

