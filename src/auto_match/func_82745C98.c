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
extern unsigned int *auStack_20;
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82743730();
extern int fn_82743CD8();
extern int fn_827459D8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


void fn_82745C98(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar5;
  char cVar7;
  longlong lVar4;
  int iVar6;
  double *pdVar8;
  undefined1 *puVar9;
  undefined1 uVar11;
  undefined1 *puVar10;
  longlong lVar12;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  char acStack_40 [16];
  char cStack_30;
  undefined1 auStack_20 [8];
  
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = fn_826957D0(param_1,0);
  iVar5 = fn_82696958(uVar3,uVar1);
  if (iVar5 == 0) {
    return;
  }
  cVar7 = fn_82695468(param_1,0x11);
  if (cVar7 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eef4,0,0);
    return;
  }
  lVar4 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
  if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
    lVar4 = 0;
  }
  pdVar8 = &dStack_50;
  dStack_60 = lbl_82005710;
  lVar12 = 2;
  dStack_58 = lbl_82005710;
  dStack_50 = lbl_82005710;
  dStack_48 = lbl_82005710;
  do {
    pdVar8 = pdVar8 + 2;
    *(undefined1 *)pdVar8 = 0;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  fn_827459D8(lVar4,*(undefined4 *)(param_1 + 0x18),&dStack_60);
  fn_82743730(*(undefined4 *)(param_1 + 0x18),iVar5,acStack_40);
  iVar6 = (**(code **)(*(int *)(iVar5 + 0x10) + 8))(iVar5 + 0x10);
  if (iVar6 == 0x10) {
LAB_82745dec:
    fn_82743CD8(iVar5,*(undefined4 *)(param_1 + 0x18),&dStack_70);
    if (dStack_70 == dStack_50) {
      dStack_70 = dStack_70 + lbl_82005758;
    }
    if (dStack_68 == dStack_48) {
      dStack_68 = dStack_68 + lbl_82005758;
    }
    if ((((dStack_50 < dStack_70) || (dStack_70 < dStack_60)) || (dStack_48 < dStack_68)) ||
       (uVar11 = 1, dStack_68 < dStack_58)) {
      uVar11 = 0;
    }
    puVar9 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar9);
    puVar9[4] = uVar11;
    puVar10 = auStack_20;
    *puVar9 = 2;
    lVar4 = 1;
    do {
      puVar10 = puVar10 + -0x10;
      fn_82696330(puVar10);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  else {
    if ((acStack_40[0] == '\0') || (bVar2 = false, acStack_40[0] == '\n')) {
      bVar2 = true;
    }
    if (!bVar2) {
      if ((cStack_30 == '\0') || (bVar2 = false, cStack_30 == '\n')) {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_82745dec;
    }
    puVar9 = auStack_20;
    lVar4 = 1;
    do {
      puVar9 = puVar9 + -0x10;
      fn_82696330(puVar9);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}

