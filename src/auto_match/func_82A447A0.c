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
extern int fn_82A42FF8();
extern int fn_82A431A8();
extern int fn_82A43238();
extern int fn_82A48BD8();
extern int fn_82A49AC8();
extern int fn_82A49C98();
extern int fn_82A51C60();
extern int fn_82A772B8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820143E0;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


longlong fn_82A447A0(double param_1,int param_2,ulonglong param_3,undefined8 param_4,
                      short *param_5,int *param_6,undefined8 param_7)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar4;
  undefined2 uVar5;
  longlong lVar3;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  int *piStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  if (param_6 == (int *)0x0) {
    param_6 = (int *)(*(int *)(param_2 + 0x34) + 0x248);
  }
  if ((param_3 & 4) != 0) {
    param_3 = param_3 | 2;
  }
  *(float *)(param_2 + 200) = (float)param_1;
  uVar4 = fn_82A49C98(param_5,1);
  *(undefined4 *)(param_2 + 0xd0) = uVar4;
  *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_5 + 2);
  uVar5 = fn_82A49AC8(param_5);
  *(undefined2 *)(param_2 + 0xd8) = uVar5;
  *(uint *)(param_2 + 0xcc) = (uint)(ushort)param_5[6];
  if (*param_6 == 0) {
    uVar7 = *(uint *)(param_2 + 0x44);
  }
  else {
    uVar7 = *(uint *)(*(int *)(param_6[1] + 4) + 0x44);
  }
  if (uVar7 == 0) {
    uVar7 = *(uint *)(param_2 + 0xd4);
    uVar6 = (ulonglong)uVar7 % 0x177;
    if (uVar6 != 0) {
      uVar6 = uVar7 - uVar6;
      uVar7 = (uint)uVar6;
      if ((uVar6 & 0xffffffff) < 32000) {
        uVar7 = uVar7 + 0x177;
      }
    }
  }
  uVar1 = param_5[1];
  *(uint *)(param_2 + 0x48) = uVar7;
  *(uint *)(param_2 + 0x44) = uVar7;
  *(uint *)(param_2 + 0x40) = (uint)uVar1;
  lVar3 = fn_82A51C60(param_2 + 4,param_3,param_6,param_7);
  puStack_80 = (undefined4 *)0x0;
  puStack_7c = (undefined4 *)0x0;
  if (-1 < lVar3) {
    if (*param_5 == 2) {
      lVar3 = fn_82A43238(&puStack_80);
    }
    if (-1 < (int)lVar3) {
      if (((param_3 & 2) == 0) || (*(uint *)(param_2 + 0xd4) != uVar7)) {
        lVar3 = fn_82A42FF8(&puStack_7c);
        if (lVar3 < 0) goto LAB_82a44ac0;
        uStack_70 = lbl_82002AE0;
        uStack_6c = lbl_82002AE0;
        if ((param_3 & 2) == 0) {
          uStack_6c = *(undefined4 *)(param_2 + 200);
          uStack_70 = lbl_820143E0;
        }
        piStack_78 = (int *)0x0;
        (**(code **)*puStack_7c)(puStack_7c,0xffffffff82089748,&piStack_78);
        (**(code **)(*piStack_78 + 0x18))(piStack_78,&uStack_70,8);
        (**(code **)(*piStack_78 + 8))();
        *(undefined4 *)(param_2 + 0xdc) = 1;
      }
      if ((puStack_80 == (undefined4 *)0x0) && (puStack_7c == (undefined4 *)0x0)) {
        lVar3 = fn_82A431A8(&puStack_80);
        if (lVar3 < 0) goto LAB_82a44ac0;
        uStack_70 = 1;
        uStack_6c = 1;
        uStack_68 = 0;
        piStack_74 = (int *)0x0;
        (**(code **)*puStack_80)(puStack_80,0xffffffff82089748,&piStack_74);
        (**(code **)(*piStack_74 + 0x18))(piStack_74,&uStack_70,0xc);
        (**(code **)(*piStack_74 + 8))();
        *(undefined4 *)(param_2 + 0xe0) = 1;
      }
      piVar2 = *(int **)(*(int *)(param_2 + 0x34) + 0xb0);
      lVar3 = (**(code **)(*piVar2 + 0x2c))
                        (piVar2,param_5,0x40,puStack_80,puStack_7c,0,
                         *(undefined4 *)(*(int *)(param_2 + 0x7c) + 4),param_2 + 0x8c);
      if ((((lVar3 != 0) && (iVar8 = (int)lVar3, iVar8 != -0x7ff8fff2)) && (iVar8 != -0x7fffbfff))
         && ((iVar8 >> 0x10 & 0x1fffU) != 0x896)) {
        uVar6 = lVar3 + 0x7787ff88;
        if (((uVar6 == 0) || ((uVar6 & 0xffffffff) == 0x1e)) || ((uVar6 & 0xffffffff) == 0xfff89)) {
          lVar3 = -0x7769fffc;
        }
        else if ((uVar6 & 0xffffffff) == 0x1eff89) {
          lVar3 = -0x7769fffd;
        }
      }
    }
  }
LAB_82a44ac0:
  fn_82A772B8(&puStack_80);
  fn_82A772B8(&puStack_7c);
  if (-1 < (int)lVar3) {
    if (*(int *)(param_2 + 0xe0) != 0) {
      lVar3 = (**(code **)(**(int **)(param_2 + 0x90) + 0x14))
                        (*(int **)(param_2 + 0x90),0,0x1337f001);
    }
    if ((-1 < (int)lVar3) &&
       (piVar2 = *(int **)(*(int *)(param_2 + 0x34) + 0xb0),
       lVar3 = (**(code **)(*piVar2 + 0x48))(piVar2,0x1337f001), -1 < lVar3)) {
      lVar3 = fn_82A48BD8(param_2 + 0xbc,8);
    }
  }
  return lVar3;
}

