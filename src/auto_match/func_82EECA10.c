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
extern int fn_82EED830();


undefined8 fn_82EECA10(int param_1,undefined8 param_2,uint *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  param_1 = param_1 - *(int *)(param_1 + -4);
  if (((int)*(uint *)(param_1 + -0x4c) < 0) || (param_3 == (uint *)0x0)) {
    return 0xffffffff8000ffff;
  }
  uVar2 = (ulonglong)*param_3 - (ulonglong)*(uint *)(param_1 + -0x4c);
  if (((longlong)uVar2 < 0) || (4 < (int)uVar2)) {
    uVar1 = fn_82EED830(*(int *)(*(int *)(param_1 + -0x50) + 8) + param_1 + -0x50);
    return uVar1;
  }
  if ((uVar2 & 0xffffffff) == 0) {
                    /* WARNING: Could not recover jumptable at 0x82f408a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined4 **)(param_1 + -0x54))();
    return uVar1;
  }
  if ((uVar2 & 0xffffffff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x82f4088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(param_1 + -0x54) + 4))();
    return uVar1;
  }
  if ((uVar2 & 0xffffffff) < 3) {
                    /* WARNING: Could not recover jumptable at 0x82f40878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(param_1 + -0x54) + 8))();
    return uVar1;
  }
  if ((uVar2 & 0xffffffff) != 3) {
    if (4 < (uVar2 & 0xffffffff)) {
      return 0xffffffff80004005;
    }
                    /* WARNING: Could not recover jumptable at 0x82f40850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(param_1 + -0x54) + 0x10))();
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x82f40864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(int *)(param_1 + -0x54) + 0xc))();
  return uVar1;
}

