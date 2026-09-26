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
extern unsigned int *auStack_58;
extern int fn_829E5D38();
extern int fn_829E5E50();
extern int fn_829E5FB8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


uint fn_829E60D0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,ulonglong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined4 *param_10)

{
  uint uVar1;
  undefined4 *in_stack_00000054;
  undefined4 *in_stack_0000005c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [22];
  
  if ((((param_4 == 0) || ((param_5 & 0xffffffff) == 0)) || ((int)param_7 == 0)) ||
     (((param_10 == (undefined4 *)0x0 || (in_stack_00000054 == (undefined4 *)0x0)) ||
      (in_stack_0000005c == (undefined4 *)0x0)))) {
    uVar1 = 0x80070057;
  }
  else {
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_3 + 0x3c);
    uVar1 = fn_829E5FB8(param_3,param_7);
    uVar1 = (int)uVar1 >> 0x1f & uVar1;
    if (-1 < (int)uVar1) {
      uStack_5c = lbl_821AAD20;
      if (*(int *)(param_3 + 8) == 1) {
        uVar1 = fn_829E5E50(param_1,param_2,param_3,param_5,param_6);
      }
      else {
        uVar1 = fn_829E5D38(param_3,&uStack_60,auStack_58);
      }
      if (-1 < (int)uVar1) {
        uVar1 = 0;
        *(undefined4 *)(param_3 + 0x3c) = uStack_60;
        *param_10 = uStack_60;
        *in_stack_00000054 = auStack_58[0];
        *in_stack_0000005c = uStack_5c;
      }
    }
  }
  return uVar1;
}

