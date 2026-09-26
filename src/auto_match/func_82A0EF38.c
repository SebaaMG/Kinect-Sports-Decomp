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
extern int fn_82A0F090();
extern int fn_82A0F400();


undefined8
fn_82A0EF38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  uint *in_stack_0000005c;
  
  iVar3 = fn_8265C940(0x90,0x249c0000);
  if (iVar3 == 0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    uVar1 = iVar3 + 0x10U & 0xfffffff0;
    *(int *)(uVar1 - 4) = iVar3;
    fn_82A0F090(uVar1);
    uVar2 = fn_82A0F400(uVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if ((int)uVar2 < 0) {
      fn_8265C990(*(undefined4 *)(uVar1 - 4),0x249c0000);
    }
    else {
      uVar2 = 0;
      *in_stack_0000005c = uVar1;
    }
  }
  return uVar2;
}

