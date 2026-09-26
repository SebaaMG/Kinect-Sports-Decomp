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
extern int fn_82631D60();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82AA1BA8();
extern int fn_82AA3B58();
extern int fn_82AA5540();
extern int fn_82D7E470();
extern unsigned int iStack_254;
extern unsigned int uStack_260;


ulonglong fn_82AA3C58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 *param_5,ulonglong param_6,undefined8 param_7,code *param_8)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint in_stack_00000064;
  int aiStack_270 [4];
  undefined4 uStack_260;
  code *pcStack_25c;
  short sStack_258;
  int iStack_254;
  
  lVar3 = fn_8265C940(param_4,0x24870000);
  if (lVar3 == 0) {
    uVar4 = 0xffffffff8007000e;
  }
  else {
    uVar4 = fn_82AA3B58(param_1,param_2,lVar3,param_4,param_5,param_6,param_7,param_8);
    if (-1 < (longlong)uVar4) {
      fn_82631D60(param_3,lVar3,*param_5);
    }
    fn_8265C990(lVar3,0x24870000);
    if ((-1 < (int)uVar4) && ((param_6 & 0x10) == 0)) {
      aiStack_270[0] = 0;
      iVar2 = (in_stack_00000064 & 0x7f) << 10;
      uVar4 = fn_82D7E470(param_3,*param_5,iVar2,0,0xffffffff82aa0550,aiStack_270);
      if (((longlong)uVar4 < 0) || (aiStack_270[0] != 0)) {
        uVar1 = (uVar4 & 0xffffffff) >> 0x1f;
        uStack_260 = (undefined4)param_7;
        iStack_254 = (int)uVar1;
        sStack_258 = 0;
        if ((int)uVar4 < 0) {
          uVar5 = 0xffffffff82033f00;
        }
        else {
          uVar5 = 0xffffffff82033ecc;
        }
        pcStack_25c = param_8;
        (*param_8)(param_7,uVar1,(ulonglong)(iStack_254 == 0) + 0x1bbd,uVar5);
        fn_82D7E470(param_3,*param_5,iVar2,0,0xffffffff82aa1c88,&uStack_260);
        if (sStack_258 != 0) {
          fn_82AA1BA8(&uStack_260);
        }
        fn_82AA5540(param_3,*param_5,0x44,0xffffffff82aa1c88,&uStack_260,0,0);
        if (sStack_258 != 0) {
          fn_82AA1BA8(&uStack_260);
        }
      }
    }
  }
  return uVar4;
}

