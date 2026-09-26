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
extern unsigned int *auStack_80;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E59EC8();
extern int fn_82F691F0();
extern unsigned int iStack_70;
extern unsigned int iStack_78;
extern unsigned int iStack_7c;
extern unsigned int lbl_820F8EF8;
extern unsigned int uStack_7e;


longlong fn_82EF2E50(int *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte *pbVar8;
  ulonglong uVar7;
  uint uVar9;
  int *piVar10;
  int aiStack_90 [4];
  undefined1 auStack_80 [2];
  ushort uStack_7e;
  int iStack_7c;
  int iStack_78;
  int iStack_70;
  
  iStack_7c = 0;
  iStack_78 = 0;
  aiStack_90[0] = 0;
  iStack_70 = 0;
  if (param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  if (param_2 == (uint *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  uVar3 = param_1[0x10];
  if (uVar3 < 0x2c) {
    *param_2 = 0x2c;
    return -0x3ff2c94f;
  }
  piVar10 = param_1 + 10;
  fn_82E57620(param_1 + 4,piVar10);
  fn_82E576A8(param_1 + 8,piVar10);
  pbVar8 = (byte *)(param_1 + 0x12);
  lVar4 = fn_82E57620(pbVar8,piVar10);
  if (lVar4 < 0) {
    return lVar4;
  }
  pbVar6 = (byte *)&lbl_820F8EF8;
  do {
    bVar1 = *pbVar8;
    bVar2 = *pbVar6;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar8 = pbVar8 + 1;
    pbVar6 = pbVar6 + 1;
  } while (pbVar8 != (byte *)(param_1 + 0x16));
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    return -0x3ff2c566;
  }
  lVar4 = fn_82E59EC8(aiStack_90,piVar10);
  if (lVar4 < 0) {
    return lVar4;
  }
  if (aiStack_90[0] == 0) goto LAB_82ef3188;
  uVar9 = param_1[0x10];
  if (uVar9 < 2) {
LAB_82ef315c:
    uVar9 = (uVar3 - uVar9) + 2;
  }
  else {
    lVar4 = fn_82E57738(auStack_80,piVar10);
    if (lVar4 < 0) goto LAB_82ef3188;
    uVar9 = param_1[0x10];
    if (uVar9 < 2) goto LAB_82ef315c;
    lVar4 = fn_82E57738(&uStack_7e,piVar10);
    if (lVar4 < 0) goto LAB_82ef3188;
    uVar5 = (ulonglong)uStack_7e * 2;
    if (uVar5 <= (uint)param_1[0x10]) {
      uVar7 = (ulonglong)uStack_7e + 1;
      lVar4 = uVar7 * 2;
      if (0x7fffffff < uVar7) {
        lVar4 = -1;
      }
      lVar4 = fn_82E50BE8(lVar4,0,0,0,0);
      iStack_7c = (int)lVar4;
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar4,0,uVar5 + 2);
      }
      lVar4 = -0x7ff8fff2;
      iStack_7c = 0;
      goto LAB_82ef3188;
    }
    uVar9 = ((uint)uStack_7e * 2 - param_1[0x10]) + uVar3;
  }
  *param_2 = uVar9;
  lVar4 = -0x3ff2c94f;
LAB_82ef3188:
  *param_2 = uVar3 - param_1[0x10];
  uVar5 = (**(code **)(*param_1 + 0x2c))(param_1);
  if (uVar5 != *param_2) {
    lVar4 = -0x3ff2c566;
  }
  if (iStack_7c != 0) {
    fn_82E4FE40();
  }
  if (iStack_78 != 0) {
    fn_82E4FE40();
  }
  if (iStack_70 != 0) {
    fn_82E4FE40();
  }
  return lVar4;
}

