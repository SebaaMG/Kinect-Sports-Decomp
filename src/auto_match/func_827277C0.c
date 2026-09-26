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
extern int fn_8267B890();
extern int fn_8267C488();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82735960();
extern int fn_82735D68();
extern int fn_827363A0();
extern int fn_8278B290();
extern int fn_827936D0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82010C6C;
extern unsigned int uStack_7a;
extern unsigned int uStack_7c;
extern unsigned int uStack_7e;
extern unsigned int uStack_80;
extern unsigned int uStack_82;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


void fn_827277C0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined1 auStack_70 [112];
  
  if ((*(int **)(param_1 + 8) == (int *)0x0) ||
     (iVar4 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar4 != 4)) {
    puVar2 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar2);
    *puVar2 = 0;
  }
  else {
    uVar7 = 0;
    iVar4 = *(int *)(param_1 + 8) + -0x68;
    if (*(int *)(param_1 + 8) == 0) {
      iVar4 = 0;
    }
    uVar5 = 0;
    uVar6 = 0xffffffffffffffff;
    dVar9 = lbl_82005710;
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      dVar10 = (double)fn_826972E0(uVar3,uVar1);
      dVar11 = dVar9;
      if ((dVar10 < dVar9) || (dVar11 = dVar10, dVar9 <= dVar10)) {
        uVar5 = (longlong)dVar11 & 0xffffffff;
      }
    }
    if (*(int *)(param_1 + 0x1c) < 2) {
      if (0 < *(int *)(param_1 + 0x1c)) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        dVar11 = (double)fn_826972E0(uVar3,uVar1);
        dVar11 = dVar11 + lbl_82005758;
        if ((dVar11 < dVar9) || (bVar8 = dVar9 <= dVar11, dVar9 = dVar11, bVar8)) {
          uVar6 = (longlong)dVar9 & 0xffffffff;
        }
      }
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,1);
      dVar11 = (double)fn_826972E0(uVar3,uVar1);
      if ((dVar11 < dVar9) || (bVar8 = dVar9 <= dVar11, dVar9 = dVar11, bVar8)) {
        uVar6 = (longlong)dVar9 & 0xffffffff;
      }
    }
    if ((uVar6 & 0xffffffff) < uVar5) {
      puVar2 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar2);
      *puVar2 = 0;
    }
    else {
      fn_826FDED0(auStack_70,
                        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288));
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_8c = 1;
      ppuStack_90 = &lbl_82010C6C;
      uStack_80 = 0;
      uStack_7e = 0;
      uStack_7c = 0;
      uStack_7a = 0;
      fn_827936D0(*(undefined4 *)(*(int *)(iVar4 + 0xa0) + 8),auStack_70,&ppuStack_90,uVar5,
                      uVar6);
      uVar5 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                                0x74,0);
      if ((uVar5 & 0xffffffff) != 0) {
        uVar7 = fn_82735960(uVar5,*(undefined4 *)(param_1 + 0x18));
      }
      fn_82735D68(uVar7,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,auStack_70);
      fn_827363A0(uVar7,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,&ppuStack_90);
      fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar7);
      if ((uVar7 & 0xffffffff) != 0) {
        fn_826824B0(uVar7);
      }
      ppuStack_90 = &lbl_82010C6C;
      fn_8278B290(&ppuStack_90);
      fn_8267C488(&ppuStack_90);
      fn_826FDF58(auStack_70);
    }
  }
  return;
}

