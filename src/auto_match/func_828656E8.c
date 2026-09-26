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
extern int fn_822977A8();
extern int fn_82F622A8();
extern int fn_82F622E0();
extern int fn_82F63CA0();
extern int fn_82F68CC0();


undefined4 *
fn_828656E8(undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4,uint param_5,
             uint param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = param_1[4];
  if ((uVar1 < param_2) || ((uint)param_4[4] < param_5)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821961fc);
  }
  uVar5 = uVar1 - param_2;
  if (uVar5 < param_3) {
    param_3 = uVar5;
  }
  uVar9 = param_4[4] - param_5;
  if (uVar9 < param_6) {
    param_6 = uVar9;
  }
  if (0xffffffff - param_6 <= uVar1 - param_3) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196214);
  }
  uVar9 = (uVar1 - param_3) + param_6;
  uVar5 = uVar5 - param_3;
  if (uVar1 < uVar9) {
    fn_822977A8(param_1,uVar9,0);
  }
  uVar1 = param_1[5];
  if (param_1 != param_4) {
    puVar8 = param_1;
    puVar6 = param_1;
    if (7 < uVar1) {
      puVar8 = (undefined4 *)*param_1;
      puVar6 = (undefined4 *)*param_1;
    }
    fn_82F63CA0((param_2 + param_6) * 2 + (int)puVar8,(param_2 + param_3) * 2 + (int)puVar6,
                 uVar5 & 0x7fffffff);
    if (7 < (uint)param_4[5]) {
      param_4 = (undefined4 *)*param_4;
    }
    puVar6 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar6 = (undefined4 *)*param_1;
    }
    fn_82F68CC0(param_2 * 2 + (int)puVar6,param_5 * 2 + (int)param_4,param_6 & 0x7fffffff);
    goto LAB_82865aac;
  }
  puVar8 = param_1;
  puVar6 = param_1;
  if (param_3 < param_6) {
    if (param_5 <= param_2) {
      puVar7 = param_1;
      puVar2 = param_1;
      if (7 < uVar1) {
        puVar7 = (undefined4 *)*param_1;
        puVar2 = (undefined4 *)*param_1;
      }
      fn_82F63CA0((param_2 + param_6) * 2 + (int)puVar7,(param_2 + param_3) * 2 + (int)puVar2,
                   uVar5 & 0x7fffffff);
      if (7 < (uint)param_1[5]) {
        puVar6 = (undefined4 *)*param_1;
        puVar8 = (undefined4 *)*param_1;
      }
      goto LAB_828658a8;
    }
    uVar10 = param_2 + param_3;
    if (param_5 < uVar10) {
      if (7 < uVar1) {
        puVar8 = (undefined4 *)*param_1;
        puVar6 = (undefined4 *)*param_1;
      }
      fn_82F63CA0(param_2 * 2 + (int)puVar8,param_5 * 2 + (int)puVar6,param_3 & 0x7fffffff);
      puVar8 = param_1;
      puVar6 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
        puVar6 = (undefined4 *)*param_1;
      }
      fn_82F63CA0((param_2 + param_6) * 2 + (int)puVar8,uVar10 * 2 + (int)puVar6,uVar5 & 0x7fffffff
                  );
      puVar8 = param_1;
      puVar6 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
        puVar6 = (undefined4 *)*param_1;
      }
      uVar1 = param_6 - param_3 & 0x7fffffff;
      iVar4 = (param_5 + param_6) * 2 + (int)puVar6;
      iVar3 = uVar10 * 2 + (int)puVar8;
    }
    else {
      if (7 < uVar1) {
        puVar8 = (undefined4 *)*param_1;
        puVar6 = (undefined4 *)*param_1;
      }
      fn_82F63CA0((param_2 + param_6) * 2 + (int)puVar8,uVar10 * 2 + (int)puVar6,uVar5 & 0x7fffffff
                  );
      puVar8 = param_1;
      puVar6 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
        puVar6 = (undefined4 *)*param_1;
      }
      uVar1 = param_6 & 0x7fffffff;
      iVar3 = param_2 * 2 + (int)puVar8;
      iVar4 = ((param_5 - param_3) + param_6) * 2 + (int)puVar6;
    }
  }
  else {
    puVar7 = param_1;
    puVar2 = param_1;
    if (7 < uVar1) {
      puVar7 = (undefined4 *)*param_1;
      puVar2 = (undefined4 *)*param_1;
    }
    fn_82F63CA0(param_2 * 2 + (int)puVar7,param_5 * 2 + (int)puVar2,param_6 & 0x7fffffff);
    if (7 < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
      puVar6 = (undefined4 *)*param_1;
    }
    param_5 = param_2 + param_3;
    param_2 = param_2 + param_6;
    param_6 = uVar5;
LAB_828658a8:
    uVar1 = param_6 & 0x7fffffff;
    iVar4 = param_5 * 2 + (int)puVar6;
    iVar3 = param_2 * 2 + (int)puVar8;
  }
  fn_82F63CA0(iVar3,iVar4,uVar1);
LAB_82865aac:
  param_1[4] = uVar9;
  puVar6 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar6 = (undefined4 *)*param_1;
  }
  *(undefined2 *)(uVar9 * 2 + (int)puVar6) = 0;
  return param_1;
}

