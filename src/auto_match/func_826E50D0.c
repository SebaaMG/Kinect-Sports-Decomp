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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_60;
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82683F88();
extern int fn_826E3ED8();
extern int fn_826E4EA8();
extern int fn_826E76C8();
extern int fn_826E7800();
extern int fn_826E7BA8();
extern int fn_826E89C0();
extern int fn_826E8FF0();
extern unsigned int lbl_8200D4C0;
extern unsigned int uStack_58;


undefined8
fn_826E50D0(int param_1,int *param_2,ulonglong param_3,int *param_4,int param_5,char param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint auStack_60 [2];
  undefined8 uStack_58;
  
  uVar6 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined4 *)(param_1 + 0x244) = uVar6;
  auStack_60[0] = 0;
  (**(code **)(*param_2 + 0x28))(param_2,auStack_60,4);
  uVar11 = (ulonglong)auStack_60[0];
  uStack_58 = (ulonglong)(((U64)(uStack_58) >> 32) & 0xFFFFFFFF);
  uVar12 = ((ulonglong)(auStack_60[0] >> 0x10) | uVar11 & 0xffffffffffff0000) >> 8 & 0xffff;
  uVar13 = auStack_60[0] & 0xff;
  (**(code **)(*param_2 + 0x28))(param_2,&uStack_58,4);
  *(undefined4 *)(param_1 + 0x26c) = 0;
  uVar3 = uVar12 | (uVar11 & 0xff00) << 8;
  bVar4 = ((uint)uVar12 & 0xff) == 0x43;
  *(uint *)(param_1 + 0x250) = uVar13;
  uVar13 = (((U64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 0x18 | (((U64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 8 & 0xff00 |
           (((((U64)(uStack_58) >> 0) & 0xFFFFFFFF) << 0x10 | (((U64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xffff) & 0xffff00) << 8;
  *(uint *)(param_1 + 0x24c) = uVar13;
  *(uint *)(param_1 + 0x248) = uVar13 + *(int *)(param_1 + 0x244);
  if ((((uVar3 != 0x535746) && (uVar3 != 0x535743)) && (uVar3 != 0x584647)) && (uVar3 != 0x584643))
  {
    if ((param_3 & 0xffffffff) == 0) {
      return 0;
    }
    fn_82683F88(param_3 + 0xc,0xffffffff8200d560);
    return 0;
  }
  if ((uVar11 & 0xff00) == 0x5800) {
    *(undefined4 *)(param_1 + 0x26c) = 0x10;
  }
  if (bVar4) {
    *(uint *)(param_1 + 0x26c) = *(uint *)(param_1 + 0x26c) | 1;
  }
  if ((((param_3 & 0xffffffff) == 0) || (param_5 == 0)) || ((*(uint *)(param_5 + 0xc) & 1) == 0)) {
    param_6 = '\0';
  }
  if (param_6 != '\0') {
    fn_826E3ED8(param_3,0x30,0xffffffff8200d534);
  }
  fn_8267C4C8(param_2);
  piVar7 = param_2;
  if (bVar4) {
    if (param_4 == (int *)0x0) {
      if ((param_3 & 0xffffffff) != 0) {
        fn_82683F88(param_3 + 0xc,0xffffffff8200d4e0);
      }
      goto LAB_826e52c0;
    }
    if (param_6 != '\0') {
      fn_826E3ED8(param_3,0x30,0xffffffff8200d4c4);
    }
    piVar7 = (int *)(**(code **)(*param_4 + 4))(param_4,param_2);
    fn_8267C4F0(param_2);
    *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x24c) + -8;
  }
  fn_826E76C8(param_1,piVar7,param_3,param_5);
  fn_826E8FF0(param_1,param_1 + 0x254);
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
    fn_826E7800(param_1,2);
  }
  fVar5 = lbl_8200D4C0;
  iVar8 = *(int *)(param_1 + 0x2c) + 2;
  puVar10 = (undefined1 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x3c));
  uVar1 = puVar10[1];
  uVar2 = *puVar10;
  *(int *)(param_1 + 0x2c) = iVar8;
  *(undefined1 *)(param_1 + 0x15) = 0;
  uStack_58 = (ulonglong)CONCAT11(uVar1,uVar2);
  *(float *)(param_1 + 0x264) = (float)uStack_58 * fVar5;
  if (*(int *)(param_1 + 0x30) - iVar8 < 2) {
    fn_826E7800(param_1,2);
  }
  iVar8 = *(int *)(param_1 + 0x2c) + 2;
  puVar10 = (undefined1 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x3c));
  uVar1 = puVar10[1];
  uVar2 = *puVar10;
  *(int *)(param_1 + 0x2c) = iVar8;
  *(uint *)(param_1 + 0x268) = (uint)CONCAT11(uVar1,uVar2);
  if (((*(uint *)(param_1 + 0x26c) & 0x10) == 0) ||
     (*(uint *)(param_1 + 0x248) <=
      (uint)((*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) + iVar8))) {
LAB_826e547c:
    if (piVar7 != (int *)0x0) {
      fn_8267C4F0(piVar7);
    }
    return 1;
  }
  iVar8 = fn_826E89C0(param_1);
  if (iVar8 == 1000) {
    uVar13 = param_1 + 0x270;
    fn_826E4EA8(uVar13,param_1,1000);
    if ((0x2ff < (*(ushort *)((-(uint)(*(int *)(param_1 + 0x270) != 0) & uVar13) + 0xc) & 0xff00))
       && ((*(ushort *)((-(uint)(*(int *)(param_1 + 0x270) != 0) & uVar13) + 0xc) & 0xff00) < 0x401)
       ) {
      fn_826E7BA8(param_1);
      goto LAB_826e547c;
    }
    if ((param_3 & 0xffffffff) != 0) {
      uVar9 = 0xffffffff8200d470;
      goto LAB_826e54a8;
    }
  }
  else if ((param_3 & 0xffffffff) != 0) {
    uVar9 = 0xffffffff8200d428;
LAB_826e54a8:
    fn_82683F88(param_3 + 0xc,uVar9);
  }
  param_2 = piVar7;
  if (piVar7 == (int *)0x0) {
    return 0;
  }
LAB_826e52c0:
  fn_8267C4F0(param_2);
  return 0;
}

