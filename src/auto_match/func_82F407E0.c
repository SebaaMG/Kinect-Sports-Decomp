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


undefined8 fn_82F407E0(int param_1,ulonglong param_2,uint *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (((int)*(uint *)(param_1 + -0x14) < 0) || (param_3 == (uint *)0x0)) {
    return 0xffffffff8000ffff;
  }
  uVar2 = (ulonglong)*param_3 - (ulonglong)*(uint *)(param_1 + -0x14);
  if (((longlong)uVar2 < 0) || (4 < (int)uVar2)) {
    if ((param_3 != (uint *)0x0) &&
       ((((param_2 = param_2 & 0xf00, param_2 == 0x100 || (param_2 == 0x200)) || (param_2 == 0x400))
        || (param_2 == 0x800)))) {
      return 1;
    }
    return 0xffffffff8000ffff;
  }
  if ((uVar2 & 0xffffffff) == 0) {
                    /* WARNING: Could not recover jumptable at 0x82f408a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined4 **)(param_1 + -0x1c))();
    return uVar1;
  }
  if ((uVar2 & 0xffffffff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x82f4088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(param_1 + -0x1c) + 4))();
    return uVar1;
  }
  if ((uVar2 & 0xffffffff) < 3) {
                    /* WARNING: Could not recover jumptable at 0x82f40878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(param_1 + -0x1c) + 8))();
    return uVar1;
  }
  if ((uVar2 & 0xffffffff) != 3) {
    if (4 < (uVar2 & 0xffffffff)) {
      return 0xffffffff80004005;
    }
                    /* WARNING: Could not recover jumptable at 0x82f40850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(param_1 + -0x1c) + 0x10))();
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x82f40864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(int *)(param_1 + -0x1c) + 0xc))();
  return uVar1;
}

