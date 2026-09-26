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
#define _iStack_38 ((*(U64*)&iStack_38))
extern unsigned int *auStack_40;
extern unsigned int iStack_38;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_34;


undefined8
fn_82C175C0(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,uint param_6,
             undefined8 param_7,int *param_8)

{
  undefined8 uVar1;
  undefined8 *in_stack_00000054;
  undefined1 auStack_40 [8];
  int iStack_38;
  undefined4 uStack_34;
  longlong lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 == 0)) || ((param_2 == 0 && (param_3 != 0)))) ||
     (param_8 == (int *)0x0)) {
    uVar1 = 0xffffffff80070057;
  }
  else if (((param_1[0xb0] == 0) || (param_1[0xae] == 0)) || (param_4 != 0)) {
    param_1[0xad] = 0;
    uStack_20 = 0;
    lStack_30 = (ulonglong)param_6 << 0x20;
    _iStack_38 = CONCAT44(param_4,param_5);
    if (in_stack_00000054 != (undefined8 *)0x0) {
      uStack_20 = *in_stack_00000054;
    }
    uStack_28 = param_7;
    uVar1 = (*(code *)param_1[0xb2])(param_1,auStack_40);
    if ((-1 < (int)uVar1) && (*(int *)(*param_1 + 0x334) == 0)) {
      param_1[0xad] = 2;
    }
  }
  else if (param_1[0x38] == 0) {
    param_1[0xad] = 1;
  }
  if ((param_8 != (int *)0x0) && (param_1 != (int *)0x0)) {
    *param_8 = param_1[0xad];
  }
  return uVar1;
}

