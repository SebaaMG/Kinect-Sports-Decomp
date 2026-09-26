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
extern unsigned int *auStack_70;
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696B20();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_8269A1F0();
extern int fn_826A1DC0();
extern int fn_826A29C0();
extern int fn_826A2A40();
extern int fn_826A2D50();
extern int fn_826A3F08();
extern int fn_826A5570();
extern int fn_826ADE60();
extern int fn_826B32D0();
extern int fn_826C3768();
extern int fn_827A9810();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_94;
extern unsigned int iStack_98;


void fn_826A57E8(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar7;
  char *pcVar4;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  int iStack_98;
  int iStack_94;
  byte bStack_90;
  int iStack_88;
  int iStack_84;
  byte bStack_80;
  undefined1 auStack_70 [112];
  
  cVar7 = fn_82695468(param_1,7);
  if (cVar7 == '\0') {
    fn_826954C0(param_1,0xffffffff82006e38,0,0);
  }
  else {
    iVar9 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar9 = 0;
    }
    uVar10 = 0;
    bStack_90 = 0;
    iStack_98 = 0;
    iStack_94 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      pcVar4 = (char *)fn_826957D0(param_1,0);
      if ((*pcVar4 == '\b') || (bVar2 = false, *pcVar4 == '\v')) {
        bVar2 = true;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      if (bVar2) {
        uVar3 = fn_826957D0(param_1,0);
        uVar3 = fn_82696B20(&iStack_88,uVar3,uVar1);
        fn_826C3768(&iStack_98,uVar3);
        if (((bStack_80 & 2) == 0) && (iStack_88 != 0)) {
          fn_826824B0();
        }
        iStack_88 = 0;
        if (((bStack_80 & 1) == 0) && (iStack_84 != 0)) {
          fn_826824B0();
        }
        iStack_84 = 0;
      }
      else {
        uVar3 = fn_826957D0(param_1,0);
        dVar13 = (double)fn_826972E0(uVar3,uVar1);
        uVar10 = (uint)dVar13;
      }
      if ((iStack_98 != 0) && (1 < *(int *)(param_1 + 0x1c))) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,1);
        dVar13 = (double)fn_826972E0(uVar3,uVar1);
        uVar10 = (uint)dVar13;
      }
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
    iVar5 = fn_826B32D0(*(int *)(param_1 + 0x18),*(undefined4 *)(iVar5 + 0x2a0),iVar5 + 0x10,0
                              ,0xffffffffffffffff);
    if (iVar5 != 0) {
      fn_826A2D50(iVar5,iVar9);
      fn_826A29C0(auStack_70,iVar5 + 0x10,uVar10,&iStack_98,*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(iVar9 + 0x30));
      cVar7 = fn_826A5570(iVar5,auStack_70);
      if (cVar7 == '\0') {
        fn_826ADE60(*(undefined4 *)(param_1 + 0x18),0xffffffff82006fa0);
      }
      bVar2 = false;
      if (((uVar10 & 4) != 0) && (iVar11 = 1, 1 < *(int *)(iVar5 + 0x38))) {
        iVar12 = 4;
        do {
          puVar8 = (undefined4 *)(iVar12 + *(int *)(iVar5 + 0x34));
          iVar6 = fn_826A3F08(auStack_70,puVar8[-1],*puVar8);
          if (iVar6 == 0) {
            bVar2 = true;
            break;
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar11 < *(int *)(iVar5 + 0x38));
      }
      if (bVar2) {
        fn_8269A1F0(*(undefined4 *)(param_1 + 4),0);
        fn_827A9810(iVar5 + 0x34,0);
      }
      else {
        if ((uVar10 & 8) == 0) {
          fn_826A2D50(iVar9,iVar5);
          fn_827A9810(iVar5 + 0x34,0);
        }
        else {
          fn_826A1DC0(iVar5,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288));
          iVar9 = iVar5;
        }
        fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar9);
      }
      fn_826A2A40(auStack_70);
      fn_826824B0(iVar5);
    }
    if (((bStack_90 & 2) == 0) && (iStack_98 != 0)) {
      fn_826824B0();
    }
    iStack_98 = 0;
    if (((bStack_90 & 1) == 0) && (iStack_94 != 0)) {
      fn_826824B0();
    }
  }
  return;
}

