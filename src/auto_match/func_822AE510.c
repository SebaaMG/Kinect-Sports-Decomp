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
extern unsigned int *auStack_250;
extern int fn_8225C590();
extern int fn_8225DA70();
extern int fn_8225F160();
extern int fn_822AE7C8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825200A8();
extern int fn_82528BF8();
extern int fn_82528EE0();
extern int fn_82A1DD38();
extern int fn_82A81CC0();
extern int fn_82E1DAA0();
extern unsigned int lbl_821A7C80;
extern unsigned int lbl_831CD2FC;
extern unsigned int lbl_83276540;


ulonglong fn_822AE510(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                       longlong param_5,undefined8 param_6,undefined4 *param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar5;
  undefined8 uVar3;
  int iVar6;
  char cVar8;
  longlong lVar4;
  int iVar7;
  undefined *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_250 [592];
  
  iVar2 = (int)param_1;
  if (param_3 != 0) {
    if (*(char *)(param_3 + 0xd8) == '\0') {
      puVar5 = (undefined4 *)fn_82E1DAA0(param_3);
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      puVar9 = &lbl_821A7C80;
    }
    else {
      if ((lbl_83276540 == 0) ||
         (iVar6 = fn_82528BF8(lbl_83276540,0xffffffff821ac4e0,auStack_250,0x100,0,1),
         iVar6 == 0)) {
        fn_82528EE0(auStack_250,0x100,0xffffffff821ac4f0);
      }
      puVar9 = auStack_250;
      puVar5 = lbl_831CD2FC;
    }
    fn_82528EE0(param_2,0x20,puVar9,puVar5);
    lbl_831CD2FC = (undefined4 *)((int)lbl_831CD2FC + 1);
    uVar3 = fn_8225C590();
    iVar6 = fn_8225DA70(uVar3,param_6,param_3,0);
    if (iVar6 == 0) {
      *param_7 = 0;
      return 0xffffffffffffffff;
    }
    *param_7 = 1;
    cVar8 = fn_82A81CC0(param_6);
    if (cVar8 == '\x01') {
      *(undefined4 *)(iVar2 + 0x8e44) = 1;
    }
    goto LAB_822ae628;
  }
  if (((int)param_5 < 0) || (3 < (int)param_5)) {
LAB_822ae6ac:
    while( true ) {
      if (*(int *)(iVar2 + 0x8e48) == 0) {
        iVar6 = fn_8225F160();
        uVar3 = param_4;
      }
      else if (*(int *)(iVar2 + 0x8e44) == 0) {
        iVar6 = fn_8225F160();
        uVar3 = 0;
      }
      else {
        iVar6 = fn_8225F160();
        uVar3 = 1;
      }
      uVar12 = fn_822AE7C8(param_1,*(undefined4 *)(iVar6 + 0x14),uVar3);
      iVar6 = *(int *)(iVar2 + 0x34);
      uVar10 = 0;
      if (iVar6 == 0) break;
      lVar4 = uVar12 + 0x20;
      lVar11 = param_1 + 0x38;
      while (iVar7 = fn_825200A8(lVar4,(ulonglong)*(uint *)lVar11 + 0x20), iVar7 == 0) {
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 4;
        if ((ulonglong)*(uint *)(iVar2 + 0x34) <= (uVar10 & 0xffffffff)) goto LAB_822ae74c;
      }
    }
LAB_822ae74c:
    *(int *)((iVar6 + 0xe) * 4 + iVar2) = (int)uVar12;
    *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + 1;
  }
  else {
    lVar4 = fn_8225F160();
    lVar4 = param_5 * 0x28 + lVar4;
    uVar12 = lVar4 + 300;
    if (*(int *)((int)lVar4 + 0x150) == 0) {
      uVar12 = 0;
    }
    if ((uVar12 & 0xffffffff) == 0) goto LAB_822ae6ac;
  }
  fn_82528EE0(param_2,0x20,0xffffffff821a7c80,uVar12);
  uVar3 = fn_8251F720(uVar12 + 0x20,1);
  fn_82A1DD38(param_6,uVar3,1000);
  fn_8251FA58(uVar3);
  *param_7 = 1;
  if (0x22 < *(uint *)(iVar2 + 0x34)) {
    *(undefined4 *)(iVar2 + 0x34) = 0x22;
  }
LAB_822ae628:
  if (0x22 < (int)*(uint *)(iVar2 + 0x124)) {
    return 0xffffffffffffffff;
  }
  fn_82A1DD38((ulonglong)*(uint *)(iVar2 + 0x124) * 1000 + param_1 + 0x128,param_6,1000);
  uVar1 = *(uint *)(iVar2 + 0x124);
  *(uint *)(iVar2 + 0x124) = uVar1 + 1;
  return (ulonglong)uVar1;
}

