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
extern int fn_829E08A8();
extern int fn_82F63CA0();
extern int fn_82F691F0();


undefined8
fn_829E0980(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff80004005;
  }
  uVar6 = *param_1;
  uVar2 = uVar6 >> 0xe;
  uVar4 = uVar6 >> 3 & 0x7fe;
  uVar8 = uVar4 + uVar2;
  if ((param_1[1] & 0xfffe0000) == 0) {
    uVar5 = fn_829E08A8(param_1,param_5,param_2,param_3,param_4);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar6 = (*param_1 >> 3 & 0x7fe) + (*param_1 >> 0xe) + param_5[2];
    param_5[2] = uVar6;
    if ((uint)param_5[1] < uVar6) {
      param_5[2] = (param_5[2] - (*param_1 >> 3 & 0x7fe)) - (*param_1 >> 0xe);
      return 0xffffffff8007000e;
    }
  }
  else {
    uVar5 = fn_829E08A8(param_1,param_5,param_2,param_3,param_4);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar1 = *param_1;
    uVar3 = uVar1 >> 0xe;
    uVar7 = (uVar1 >> 3 & 0x7fe) + uVar3;
    if (uVar8 < uVar7) {
      if ((uint)param_5[1] <= param_5[2] + (uVar7 - uVar8)) {
        return 0xffffffff8007000e;
      }
      fn_82F63CA0(uVar7 + (int)param_1,uVar8 + (int)param_1,
                   ((param_5[2] - uVar2) - (int)param_1) + *param_5);
      if (uVar3 != uVar2) {
        fn_82F63CA0(uVar3 + (int)param_1,uVar2 + (int)param_1,uVar4);
      }
      if (((uVar1 >> 4 & 0x3ff) - (uVar6 >> 4 & 0x3ff) & 0x7fffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar4 + uVar3 + (int)param_1,0);
      }
      if (uVar3 != uVar2) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar2 + (int)param_1,0);
      }
      param_5[2] = param_5[2] + (uVar7 - uVar8);
    }
  }
  return 0;
}

