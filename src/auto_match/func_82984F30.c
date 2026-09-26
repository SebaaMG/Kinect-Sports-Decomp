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
extern int fn_8297F800();
extern int fn_829814B0();
extern int fn_82981738();
extern int fn_829846B0();


undefined8
fn_82984F30(undefined8 param_1,int *param_2,int *param_3,undefined4 *param_4,undefined4 *param_5,
             undefined4 *param_6)

{
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar1;
  int *piVar6;
  longlong lVar2;
  int aiStack_50 [20];
  
  if ((param_4 == (undefined4 *)0x0) || (param_5 == (undefined4 *)0x0)) {
    return 0xffffffff80004005;
  }
  *param_4 = 0;
  *param_5 = 0;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if (param_2 != (int *)0x0) {
    if (param_3 == (int *)0x0) {
      return 0xffffffff80004005;
    }
    uVar3 = fn_82981738(param_1,param_2);
    uVar4 = fn_82981738(param_1,param_3);
    if ((((uVar3 < uVar4) ||
         (iVar5 = fn_829846B0(param_1,param_2,param_3,0), piVar6 = param_2, iVar5 == 0)) &&
        (iVar5 = fn_829846B0(param_1,param_3,param_2,0), piVar6 = param_3, iVar5 == 0)) &&
       (iVar5 = fn_829846B0(param_1,param_2,param_3,0), piVar6 = param_2, iVar5 == 0)) {
      return 0xffffffff80004005;
    }
    uVar1 = fn_8297F800(param_1,param_2,param_3,aiStack_50);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (piVar6[5] != aiStack_50[0]) {
      piVar6 = (int *)(**(code **)(*piVar6 + 4))(piVar6);
      if (piVar6 == (int *)0x0) {
        return 0xffffffff8007000e;
      }
      piVar6[5] = aiStack_50[0];
    }
    if (param_6 != (undefined4 *)0x0) {
      lVar2 = (**(code **)(*piVar6 + 4))(piVar6);
      *param_6 = (int)lVar2;
      if (lVar2 == 0) {
        return 0xffffffff8007000e;
      }
      fn_829814B0(param_1,lVar2,1);
    }
    *param_4 = piVar6;
    *param_5 = piVar6;
    return 0;
  }
  if (param_3 != (int *)0x0) {
    return 0xffffffff80004005;
  }
  return 0;
}

