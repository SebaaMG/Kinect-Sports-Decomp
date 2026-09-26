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
extern int fn_82A29A38();
extern int fn_82AB03B0();
extern int fn_82AB0450();
extern int fn_82AB0600();
extern int fn_82F6DCE0();


undefined8
fn_82AB0740(undefined4 *param_1,uint param_2,int param_3,undefined8 param_4,undefined8 param_5,
             code *param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar7;
  undefined8 uVar6;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char acStack_130 [304];
  
  pbVar1 = (byte *)*param_1;
  if ((*pbVar1 & 0xf) != 2) {
    fn_82A29A38();
  }
  if (param_2 < 0xffff0200) {
    fn_82A29A38();
  }
  uVar10 = *(uint *)(pbVar1 + 4);
  uVar2 = *(uint *)(pbVar1 + 8);
  uVar3 = uVar2 & 0x7ff;
  uVar9 = (uVar2 >> 0x14 & 0x700 | uVar2 & 0x1800) >> 8;
  if (uVar9 == 10) {
    if (0xf < uVar3) {
      uVar5 = 0x13f1;
      pcVar7 = "old back end only supports samplers s0..s15";
LAB_82ab07c8:
      (*param_6)(param_5,1,uVar5,pcVar7);
      return 2;
    }
    fn_82AB03B0(uVar3,uVar10 & 0x78000000,param_4);
    uVar10 = uVar3 + 1;
    if (uVar3 + 1 < *(uint *)(param_3 + 8)) {
      uVar10 = *(uint *)(param_3 + 8);
    }
    *(uint *)(param_3 + 8) = uVar10;
    *(uint *)(param_3 + 0xc) = 1 << (uVar2 & 0x3f) | *(uint *)(param_3 + 0xc);
  }
  else {
    if (uVar9 == 1) {
      if (0xffff02ff < param_2) {
        if (0xf < uVar3) {
          fn_82A29A38();
        }
        uVar9 = uVar10 & 0xf;
        uVar8 = uVar2 >> 0x16 & 1;
        uVar10 = uVar10 >> 0x10 & 0xf;
        if (uVar9 == 10) {
          uVar8 = 1;
        }
        if ((uVar9 == 5) && (7 < uVar10)) {
          fn_82F6DCE0(acStack_130,200,0xffffffff820d5d68,uVar10);
          pcVar7 = acStack_130;
          uVar5 = 0x13f2;
          goto LAB_82ab07c8;
        }
        fn_82AB0450(uVar3,uVar9,uVar10,uVar8,0xffffffff83160568,uVar2 & 0xf0000,param_3,param_4);
        goto LAB_82ab0968;
      }
      if ((uVar2 & 0x7ff) == 0) {
        uVar5 = 0xffffffff83160538;
      }
      else {
        uVar5 = 0xffffffff83160548;
        if (1 < uVar3) {
          fn_82A29A38();
        }
      }
      uVar6 = 1;
      uVar4 = 10;
      uVar10 = uVar3;
    }
    else {
      if (uVar9 != 3) {
        if ((uVar9 != 0x11) || (param_2 < 0xffff0300)) {
          fn_82A29A38();
        }
        goto LAB_82ab0968;
      }
      if (0xffff02ff < param_2) {
        fn_82A29A38();
      }
      if (7 < uVar3) {
        fn_82A29A38();
      }
      uVar6 = 0;
      uVar5 = 0xffffffff83160558;
      uVar4 = 5;
      uVar10 = uVar3 + 2;
    }
    fn_82AB0600(uVar10,uVar4,uVar3,uVar6,uVar5,uVar2 & 0xf0000,param_3,param_4);
  }
LAB_82ab0968:
  *param_1 = pbVar1 + 0xc;
  return 0;
}

