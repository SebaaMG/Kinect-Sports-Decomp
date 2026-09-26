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
extern unsigned int *auStack_850;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8268F7C0();
extern int fn_82693A98();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_826BD6B0();
extern int fn_827912D8();
extern int fn_82793908();
extern int fn_82799DA8();
extern int fn_82799E00();
extern int fn_8279A130();
extern int fn_827A3A50();
extern unsigned int iStack_86c;
extern unsigned int lbl_82005710;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_858;
extern unsigned int uStack_860;


void fn_82722FC0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  int iVar7;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  undefined4 *puStack_870;
  int iStack_86c;
  int aiStack_868 [2];
  ulonglong uStack_860;
  ulonglong uStack_858;
  undefined1 auStack_850 [2128];
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar7 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if (iVar7 == 4) {
      piVar10 = (int *)(*(int *)(param_1 + 8) + -0x68);
      if (*(int *)(param_1 + 8) == 0) {
        piVar10 = (int *)0x0;
      }
      if (((int *)piVar10[0x34] == (int *)0x0) || (bVar3 = true, *(int *)piVar10[0x34] == 0)) {
        bVar3 = false;
      }
      if ((!bVar3) && (2 < *(int *)(param_1 + 0x1c))) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,0);
        dVar12 = (double)fn_826972E0(uVar4,uVar1);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,1);
        dVar13 = (double)fn_826972E0(uVar4,uVar1);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,2);
        fn_82696D38(&puStack_870,uVar4,uVar1,0xffffffffffffffff,0);
        uVar5 = fn_82693A98(&puStack_870);
        uStack_860 = (ulonglong)dVar12;
        uStack_858 = (ulonglong)dVar13;
        uVar11 = uStack_860 & 0xffffffff;
        uVar9 = uStack_858 & 0xffffffff;
        if ((lbl_82005710 <= dVar12) && ((lbl_82005710 <= dVar13 && (uVar11 <= uVar9)))) {
          uVar6 = fn_827912D8(*(undefined4 *)(piVar10[0x28] + 8));
          uVar8 = (uVar6 - uVar9) + uVar11 + uVar5;
          if (uVar11 < (uVar6 & 0xffffffff)) {
            fn_82793908(*(undefined4 *)(piVar10[0x28] + 8),&iStack_86c,aiStack_868,uVar11);
          }
          else {
            iStack_86c = *(int *)(*(int *)(piVar10[0x28] + 8) + 0x1c);
            aiStack_868[0] = *(int *)(*(int *)(piVar10[0x28] + 8) + 0x18);
          }
          if ((uVar5 & 0xffffffff) < 0x400) {
            fn_826BD6B0(auStack_850,*puStack_870,0xffffffffffffffff);
            fn_8279A130(piVar10[0x28],auStack_850,uVar11,uVar9,0xffffffffffffffff);
          }
          else {
            uVar4 = fn_8267B890(lbl_831E7E64,(uVar5 + 1 & 0x7fffffff) << 1,0);
            fn_826BD6B0(uVar4,*puStack_870,0xffffffffffffffff);
            fn_8279A130(piVar10[0x28],uVar4,uVar11,uVar9,0xffffffffffffffff);
            fn_8267BE38(uVar4);
          }
          if ((*(int *)(piVar10[0x28] + 0x114) != 0) &&
             (uVar9 = fn_8268F7C0(), (uVar8 & 0xffffffff) < (uVar9 & 0xffffffff))) {
            fn_827A3A50(*(undefined4 *)(piVar10[0x28] + 0x114),uVar8,0);
          }
          if (aiStack_868[0] != 0) {
            fn_82799E00(piVar10[0x28],aiStack_868[0],uVar11,uVar11 + uVar5);
          }
          if (iStack_86c != 0) {
            fn_82799DA8(piVar10[0x28],iStack_86c,uVar11,uVar11 + uVar5);
          }
          iVar7 = (**(code **)(*piVar10 + 0x40))(piVar10);
          if (iVar7 != 0) {
            *(uint *)(iVar7 + 0xb00) = *(uint *)(iVar7 + 0xb00) | 0x400;
          }
        }
        uVar2 = puStack_870[2];
        puStack_870[2] = (int)((ulonglong)uVar2 - 1);
        if ((ulonglong)uVar2 - 1 == 0) {
          fn_826944C8(puStack_870);
        }
      }
    }
  }
  return;
}

