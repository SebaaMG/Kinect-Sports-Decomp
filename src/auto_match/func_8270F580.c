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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_82681898();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_82696B20();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_8269A608();
extern int fn_8269F500();
extern int fn_826A7398();
extern int fn_826CD420();
extern int fn_82700380();
extern int fn_82700480();
extern int fn_8270EF90();
extern int fn_8270F048();
extern int fn_8270F0B8();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;


void fn_8270F580(int param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  char *pcVar7;
  undefined8 uVar6;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  int iStack_70;
  int iStack_6c;
  longlong lStack_68;
  int iStack_60;
  int iStack_5c;
  byte bStack_58;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  iStack_6c = 0;
  lVar13 = 0;
  fn_826959C8(puVar1);
  *puVar1 = 0;
  if (1 < *(int *)(param_1 + 0x1c)) {
    lVar12 = 1;
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288);
    pcVar7 = (char *)fn_826957D0(param_1,0);
    if ((*pcVar7 == '\b') || (bVar5 = false, *pcVar7 == '\v')) {
      bVar5 = true;
    }
    if (bVar5) {
      lVar13 = fn_8267B890(uVar2,0x40,0);
      if (lVar13 == 0) {
        iVar8 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x18);
        uVar6 = fn_826957D0(param_1,0);
        uVar6 = fn_82696B20(&iStack_60,uVar6,(ulonglong)uVar3);
        iVar8 = fn_8270EF90(lVar13,uVar6,(ulonglong)uVar3 + 0x78);
        if (((bStack_58 & 2) == 0) && (iStack_60 != 0)) {
          fn_826824B0();
        }
        iStack_60 = 0;
        if (((bStack_58 & 1) == 0) && (iStack_5c != 0)) {
          fn_826824B0();
        }
        iStack_5c = 0;
      }
    }
    else {
      pcVar7 = (char *)fn_826957D0(param_1,0);
      if (*pcVar7 == '\x06') {
        lVar12 = fn_8267B890(uVar2,0x40,0);
        if (lVar12 == 0) {
          iVar8 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x18);
          lVar13 = 2;
          uVar6 = fn_826957D0(param_1,1);
          fn_82696D38(&iStack_70,uVar6,uVar2,0xffffffffffffffff,0);
          uVar2 = *(undefined4 *)(param_1 + 0x18);
          uVar6 = fn_826957D0(param_1,0);
          uVar6 = fn_82696958(uVar6,uVar2);
          iVar8 = fn_8270F048(lVar12,uVar6,&iStack_70);
        }
      }
      else {
        pcVar7 = (char *)fn_826957D0(param_1,0);
        if (*pcVar7 != '\a') {
          return;
        }
        lVar12 = fn_8267B890(uVar2,0x40,0);
        if (lVar12 == 0) {
          iVar8 = 0;
          iStack_70 = iStack_6c;
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x18);
          lVar13 = 4;
          uVar6 = fn_826957D0(param_1,1);
          fn_82696D38(&iStack_6c,uVar6,uVar2,0xffffffffffffffff,0);
          uVar2 = *(undefined4 *)(param_1 + 0x18);
          uVar6 = fn_826957D0(param_1,0);
          uVar6 = fn_82695370(uVar6,uVar2);
          iVar8 = fn_8270F0B8(lVar12,uVar6,&iStack_6c);
          iStack_70 = iStack_6c;
        }
      }
      if ((lVar13 != 0) &&
         (lVar13 = (ulonglong)*(uint *)(iStack_70 + 8) - 1, *(int *)(iStack_70 + 8) = (int)lVar13,
         lVar13 == 0)) {
        fn_826944C8(iStack_70);
      }
      lVar12 = 2;
    }
    if ((int)lVar12 < *(int *)(param_1 + 0x1c)) {
      piVar10 = *(int **)(*(int *)(param_1 + 0x18) + 0x74);
      if (piVar10 != (int *)0x0) {
        iVar9 = (**(code **)(*piVar10 + 0x54))(piVar10,0);
        piVar10 = *(int **)(iVar9 + 0x80);
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)fn_8269F500();
        }
        if (piVar10 != (int *)0x0) {
          *piVar10 = *piVar10 + 1;
        }
        puVar4 = *(uint **)(iVar8 + 0x34);
        if ((puVar4 != (uint *)0x0) &&
           (uVar3 = *puVar4, *puVar4 = (uint)((ulonglong)uVar3 - 1),
           (longlong)((ulonglong)uVar3 - 1) < 1)) {
          fn_8269A608(puVar4);
          fn_8267BE38(puVar4);
        }
        *(int **)(iVar8 + 0x34) = piVar10;
      }
      uVar6 = fn_826957D0(param_1,lVar12);
      dVar14 = (double)fn_826972E0(uVar6,*(undefined4 *)(param_1 + 0x18));
      lVar12 = lVar12 + 1;
      *(int *)(iVar8 + 0x24) = (int)dVar14;
      *(undefined1 *)(iVar8 + 0x39) = param_2;
      if ((int)lVar12 < *(int *)(param_1 + 0x1c)) {
        do {
          uVar6 = fn_826957D0(param_1,lVar12);
          fn_826CD420(iVar8 + 0x18,uVar6);
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 < *(int *)(param_1 + 0x1c));
      }
      iVar9 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
      iVar11 = fn_82700480(iVar9,iVar8);
      lStack_68 = (longlong)iVar11;
      fn_82681898((double)lStack_68,*(undefined4 *)(param_1 + 4));
      *(ulonglong *)(iVar8 + 0x28) =
           *(longlong *)(iVar9 + 0x130) + (ulonglong)*(uint *)(iVar8 + 0x24);
    }
    else if (iVar8 != 0) {
      fn_82700380(iVar8);
      fn_8267BE38(iVar8);
    }
  }
  return;
}

