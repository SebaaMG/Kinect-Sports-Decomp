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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82542200();
extern int fn_825423A0();
extern int fn_82542650();
extern int fn_82542830();
extern int fn_82542968();
extern int fn_82542B18();
extern int fn_82543BE0();
extern int fn_82543C70();
extern int fn_825AFDF8();
extern int fn_8263AA68();
extern int fn_8263CBB0();
extern unsigned int lbl_8326C140;
extern unsigned int lbl_8326C160;
extern unsigned int lbl_8326C180;
extern unsigned int lbl_8326C1A0;


void fn_825404D0(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  iVar8 = *(int *)(param_2 + 0x14);
  iVar1 = *(int *)(param_3 + 4);
  if (iVar8 == 0) {
    return;
  }
  if (*(int *)(iVar8 + 0x88) != 8) {
    return;
  }
  if (iVar1 == 1) {
    if (*(int *)(iVar8 + 0x2c) != 0) goto LAB_82540584;
    iVar8 = *(int *)(iVar8 + 0x34);
  }
  else if (iVar1 == 4) {
LAB_825407d0:
    if (*(int *)(iVar8 + 4) != 0) goto LAB_82540584;
    if ((iVar1 != 4) && (iVar1 != 0x40)) {
      return;
    }
    iVar8 = *(int *)(iVar8 + 0xc);
  }
  else if (iVar1 == 8) {
LAB_82540540:
    if ((*(int *)(iVar8 + 0x14) != 0) ||
       (((iVar1 == 8 || (iVar1 == 0x80)) && (*(int *)(iVar8 + 0x1c) != 0)))) goto LAB_82540584;
    if (iVar1 != 8) {
      return;
    }
    iVar8 = *(int *)(iVar8 + 0x24);
  }
  else if (iVar1 == 0x10) {
    iVar8 = *(int *)(iVar8 + 0x3c);
  }
  else {
    if (iVar1 != 0x20) {
      if (iVar1 == 0x40) goto LAB_825407d0;
      if (iVar1 != 0x80) {
        return;
      }
      goto LAB_82540540;
    }
    iVar8 = *(int *)(iVar8 + 0x44);
  }
  if (iVar8 == 0) {
    return;
  }
LAB_82540584:
  iVar8 = param_4[3];
  uVar9 = param_4[1];
  uVar10 = *param_4;
  param_1[0xd] = param_4[2];
  param_1[0xe] = iVar8;
  fn_82542968(param_1,param_2,uVar10,uVar9);
  if (param_1[0xf] != 0) {
    fn_82542200(param_1,0xffffffff8329ead0,0);
  }
  fn_82542650((double)(float)param_4[0x18],param_1,*(undefined4 *)(param_3 + 4),param_4[4]);
  fn_825423A0((double)(float)param_4[0x18],param_1,*(undefined4 *)(param_3 + 4),param_4[4]);
  puVar2 = (undefined4 *)((uint)(param_4 + 0x14) & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(param_4 + 0xc) & 0xfffffff0);
  uVar20 = *puVar3;
  uVar21 = puVar3[1];
  uVar22 = puVar3[2];
  uVar23 = puVar3[3];
  puVar3 = (undefined4 *)((uint)(param_4 + 0x10) & 0xfffffff0);
  uVar16 = *puVar3;
  uVar17 = puVar3[1];
  uVar18 = puVar3[2];
  uVar19 = puVar3[3];
  puVar3 = (undefined4 *)((uint)(param_4 + 8) & 0xfffffff0);
  uVar12 = *puVar3;
  uVar13 = puVar3[1];
  uVar14 = puVar3[2];
  uVar15 = puVar3[3];
  puVar3 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  puVar2 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar2 = uVar20;
  puVar2[1] = uVar21;
  puVar2[2] = uVar22;
  puVar2[3] = uVar23;
  puVar2 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar2 = uVar16;
  puVar2[1] = uVar17;
  puVar2[2] = uVar18;
  puVar2[3] = uVar19;
  puVar2 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar2 = uVar12;
  puVar2[1] = uVar13;
  puVar2[2] = uVar14;
  puVar2[3] = uVar15;
  fn_82543C70(param_1,0x2d,auStack_80,1);
  fn_82543C70(param_1,0x2a,auStack_70,1);
  fn_82543C70(param_1,0x38,auStack_60,1);
  fn_82543C70(param_1,0x1c,auStack_50,1);
  if (param_4[0x1d] != 0) {
    fn_8263AA68(*param_1,10,param_4[0x1d],0);
  }
  if (param_4[0x19] != 0) {
    fn_8263CBB0(*param_1,0xb,param_4[0x19],0x100000);
    iVar8 = *param_1;
    *(uint *)(iVar8 + 0x598) = *(uint *)(iVar8 + 0x598) & 0xffc00fff | 0x3e0000;
    *(ulonglong *)(iVar8 + 0x18) = *(ulonglong *)(iVar8 + 0x18) | 0x100000;
  }
  if (param_4[0x1a] != 0) {
    fn_8263CBB0(*param_1,8,param_4[0x1a],0x800000);
    iVar8 = *param_1;
    *(uint *)(iVar8 + 0x550) = *(uint *)(iVar8 + 0x550) & 0xffc00fff | 0x3e0000;
    *(ulonglong *)(iVar8 + 0x18) = *(ulonglong *)(iVar8 + 0x18) | 0x800000;
  }
  if (param_4[0x1b] != 0) {
    fn_8263CBB0(*param_1,0xe,param_4[0x1b],0x20000);
    iVar8 = *param_1;
    *(uint *)(iVar8 + 0x5e0) = *(uint *)(iVar8 + 0x5e0) & 0xffc00fff | 0x3e0000;
    *(ulonglong *)(iVar8 + 0x18) = *(ulonglong *)(iVar8 + 0x18) | 0x20000;
  }
  iVar8 = *(int *)(param_3 + 4);
  if (((iVar8 != 1) && (iVar8 != 0x20)) && (iVar8 != 0x80)) {
    if (param_1[0x2aa9] == 0) {
      piVar7 = (int *)&lbl_8326C1A0;
      piVar6 = (int *)&lbl_8326C180;
      piVar5 = (int *)&lbl_8326C160;
      piVar4 = (int *)&lbl_8326C140;
    }
    else {
      piVar7 = param_1 + 0x2ad8;
      piVar6 = param_1 + 0x2ad0;
      piVar5 = param_1 + 0x2ac8;
      piVar4 = param_1 + 0x2ac0;
    }
    fn_825AFDF8(param_1,piVar4,piVar5,piVar6,piVar7);
  }
  fn_82543BE0(param_1,0x22,param_1 + 0x2ae4,1);
  fn_82542830(param_1,0xff);
  fn_82542B18(param_1,param_2,param_3,param_4);
  return;
}

