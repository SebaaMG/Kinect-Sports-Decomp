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
extern int fn_822304F8();
extern int fn_82F622A8();
extern int fn_82F622E0();
extern int fn_82F63CA0();
extern int fn_82F68CC0();


undefined4 *
fn_82865320(undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4,uint param_5,
             uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  uVar1 = param_1[4];
  if ((uVar1 < param_2) || ((uint)param_4[4] < param_5)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821961fc);
  }
  uVar4 = uVar1 - param_2;
  if (uVar4 < param_3) {
    param_3 = uVar4;
  }
  uVar7 = param_4[4] - param_5;
  if (uVar7 < param_6) {
    param_6 = uVar7;
  }
  if (0xffffffff - param_6 <= uVar1 - param_3) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196214);
  }
  uVar7 = (uVar1 - param_3) + param_6;
  uVar4 = uVar4 - param_3;
  if (uVar1 < uVar7) {
    fn_822304F8(param_1,uVar7,0);
  }
  if (param_1 == param_4) {
    if (param_3 < param_6) {
      if (param_2 < param_5) {
        if (param_5 < param_2 + param_3) {
          puVar5 = param_1;
          puVar6 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar5 = (undefined4 *)*param_1;
            puVar6 = (undefined4 *)*param_1;
          }
          fn_82F63CA0((int)puVar5 + param_2,(int)puVar6 + param_5,param_3);
          puVar5 = param_1;
          puVar6 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar5 = (undefined4 *)*param_1;
            puVar6 = (undefined4 *)*param_1;
          }
          fn_82F63CA0((int)puVar5 + param_6 + param_2,(int)puVar6 + param_3 + param_2,uVar4);
          puVar5 = param_1;
          puVar6 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar5 = (undefined4 *)*param_1;
            puVar6 = (undefined4 *)*param_1;
          }
          uVar4 = param_6 - param_3;
          iVar3 = (int)puVar6 + param_6 + param_5;
          iVar2 = (int)puVar5 + param_3 + param_2;
        }
        else {
          puVar5 = param_1;
          puVar6 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar5 = (undefined4 *)*param_1;
            puVar6 = (undefined4 *)*param_1;
          }
          fn_82F63CA0((int)puVar5 + param_6 + param_2,(int)puVar6 + param_3 + param_2,uVar4);
          puVar5 = param_1;
          puVar6 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar5 = (undefined4 *)*param_1;
            puVar6 = (undefined4 *)*param_1;
          }
          iVar2 = (int)puVar5 + param_2;
          iVar3 = (int)puVar6 + param_6 + (param_5 - param_3);
          uVar4 = param_6;
        }
      }
      else {
        puVar5 = param_1;
        puVar6 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar5 = (undefined4 *)*param_1;
          puVar6 = (undefined4 *)*param_1;
        }
        fn_82F63CA0((int)puVar5 + param_6 + param_2,(int)puVar6 + param_3 + param_2,uVar4);
        puVar5 = param_1;
        puVar6 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar5 = (undefined4 *)*param_1;
          puVar6 = (undefined4 *)*param_1;
        }
        iVar3 = (int)puVar6 + param_5;
        iVar2 = (int)puVar5 + param_2;
        uVar4 = param_6;
      }
    }
    else {
      puVar5 = param_1;
      puVar6 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar5 = (undefined4 *)*param_1;
        puVar6 = (undefined4 *)*param_1;
      }
      fn_82F63CA0((int)puVar5 + param_2,(int)puVar6 + param_5,param_6);
      puVar5 = param_1;
      puVar6 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar5 = (undefined4 *)*param_1;
        puVar6 = (undefined4 *)*param_1;
      }
      iVar3 = (int)puVar6 + param_3 + param_2;
      iVar2 = (int)puVar5 + param_6 + param_2;
    }
    fn_82F63CA0(iVar2,iVar3,uVar4);
  }
  else {
    puVar5 = param_1;
    puVar6 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar5 = (undefined4 *)*param_1;
      puVar6 = (undefined4 *)*param_1;
    }
    fn_82F63CA0((int)puVar5 + param_6 + param_2,(int)puVar6 + param_3 + param_2,uVar4);
    if (0xf < (uint)param_4[5]) {
      param_4 = (undefined4 *)*param_4;
    }
    puVar6 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar6 = (undefined4 *)*param_1;
    }
    fn_82F68CC0((int)puVar6 + param_2,(int)param_4 + param_5,param_6);
  }
  param_1[4] = uVar7;
  puVar6 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar6 = (undefined4 *)*param_1;
  }
  *(undefined1 *)((int)puVar6 + uVar7) = 0;
  return param_1;
}

