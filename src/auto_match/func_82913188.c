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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82904138();
extern int fn_82909950();
extern int fn_8290AAE0();
extern int fn_82913308();
extern int fn_82F68CC0();


uint fn_82913188(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar8;
  longlong lVar7;
  
  if (((param_3 & 0xffffffff) != 0) &&
     (((param_5 & 0xffffffff) != (param_3 & 0xffffffff) ||
      ((*(uint *)(*(int *)(param_1 + 8) + 0x70) & 0x10000000) == 0)))) {
    uVar8 = fn_82913308(param_1,param_3,0);
    if ((int)uVar8 < 0) {
      return uVar8;
    }
    if ((*(int *)(param_1 + 0x50) != 0) || (*(int *)(param_1 + 0x54) != 0)) {
      return 0;
    }
    param_3 = 0;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x1c) << 2;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc);
  lVar7 = fn_8265C940(iVar6,0x24810000);
  if (lVar7 == 0) {
    uVar8 = 0x8007000e;
  }
  else {
    fn_82F68CC0(lVar7,*(undefined4 *)(param_1 + 0x18),iVar6);
    if (*(int *)(*(int *)(param_1 + 8) + 0x5c) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x58);
      uVar4 = *(undefined4 *)(param_1 + 0x5c);
      uVar5 = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x58) = 1;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      uVar8 = fn_82909950(param_1,param_2,param_3,param_4,param_5,lVar7);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x60) = uVar5;
      if (-1 < (int)uVar8) goto LAB_829132f0;
      fn_82904138(param_1,uVar1,uVar2,lVar7);
    }
    uVar8 = fn_8290AAE0(param_1,param_2,param_3,param_4,param_5,lVar7);
    uVar8 = (int)uVar8 >> 0x1f & uVar8;
  }
LAB_829132f0:
  fn_8265C990(lVar7,0x24810000);
  return uVar8;
}

