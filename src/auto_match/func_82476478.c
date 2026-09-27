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
extern int fn_82275128();
extern int fn_822800E8();
extern int fn_82280850();
extern int fn_824767B8();
extern int fn_82476DA0();
extern int fn_82476E30();
extern int fn_82476F60();
extern int fn_82477428();
extern int fn_82477708();
extern int fn_82477C80();
extern int fn_82478450();
extern int fn_824787C8();
extern int fn_8254EDB0();
extern int fn_82570840();
extern int fn_825709D8();
extern int memcpy();
extern unsigned int lbl_8218E8E8;
extern float lbl_821917D4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern V16 loadVectorLeftIndexed128();


undefined8 fn_82476478(double param_1,longlong param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 in_r0;
  int iVar8;
  undefined4 uVar9;
  double dVar10;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined1 auStack_50 [1];
  
  iVar6 = (int)param_2;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x15c) + 0x848);
  *(undefined4 *)(iVar6 + 0xf0) = 0;
  fn_824787C8();
  if (*(int *)(iVar6 + 0x14) != 0) {
    fn_822800E8(param_1);
  }
  if (param_4 == 0) {
    *(float *)(iVar6 + 0x178) =
         -*(float *)(iVar6 + 0x178) * lbl_821917D4 + *(float *)(iVar6 + 0x178);
    iVar8 = *(int *)(*(int *)(iVar6 + 0x14) + 0x84);
    iVar5 = *(int *)(*(int *)(iVar6 + 0x14) + 0x7c);
    if (iVar8 != 0) {
      if (iVar5 != 0) {
        *(undefined1 *)(iVar5 + 0x148) = 0;
      }
      *(undefined1 *)(iVar8 + 0xb0) = 0;
      fn_82476E30(param_2,0,0);
      fn_82476DA0(param_2,0);
    }
    goto LAB_82476704;
  }
  if (*(int *)(*(int *)(*(int *)(iVar6 + 0x15c) + 0x844) + 0x358) == 0) {
    *(undefined1 *)(iVar6 + 0x188) = 0;
  }
  else {
    *(undefined1 *)(iVar6 + 0x188) = 1;
  }
  memcpy(param_2 + 0x44,0xffffffff8327faa8,0x54);
  uVar4 = *(uint *)(iVar6 + 0xe0);
  if (uVar4 == 0) {
    fn_82476F60(param_1,param_2);
  }
  else if (uVar4 == 1) {
    fn_82477428(param_1,param_2);
  }
  else {
    if (uVar4 < 3) {
      fn_8254EDB0((double)*(float *)(iVar6 + 0x48),(double)*(float *)(iVar6 + 0x48),
                        *(undefined4 *)(iVar6 + 0x18),0);
      *(undefined4 *)(iVar6 + 0xe0) = 3;
    }
    else {
      if ((uVar4 != 3) ||
         (fVar1 = (float)(param_1 + (double)*(float *)(iVar6 + 0x10c)),
         fVar2 = *(float *)(param_2 + 0x44), *(float *)(iVar6 + 0x10c) = fVar1, fVar1 <= fVar2))
      goto LAB_82476584;
      *(undefined4 *)(iVar6 + 0xe0) = 0;
    }
    *(undefined4 *)(iVar6 + 0x10c) = lbl_821CC160;
  }
LAB_82476584:
  iVar8 = *(int *)(*(int *)(iVar6 + 0x14) + 0x84);
  iVar5 = *(int *)(*(int *)(iVar6 + 0x14) + 0x7c);
  if (iVar8 != 0) {
    if ((*(uint *)(iVar6 + 0xf0) & 3) == 0) {
      if (iVar5 != 0) {
        *(undefined1 *)(iVar5 + 0x148) = 0;
      }
      *(undefined1 *)(iVar8 + 0xb0) = 0;
      fn_82476E30(param_2,0,1);
      fn_82476DA0(param_2,2);
    }
    else {
      if (iVar5 != 0) {
        *(undefined1 *)(iVar5 + 0x148) = 1;
      }
      *(undefined1 *)(iVar8 + 0xb0) = 1;
      fn_82476E30(param_2,1,0);
      fn_82476DA0(param_2,8);
      iVar8 = fn_82275128();
      if (*(float *)(iVar8 + 0xc) < lbl_8218E8E8) {
        *(float *)(iVar8 + 0xc) = lbl_8218E8E8;
      }
      iVar8 = fn_82275128();
      if (*(float *)(iVar8 + 0x10) < lbl_8218E8E8) {
        *(float *)(iVar8 + 0x10) = lbl_8218E8E8;
      }
    }
  }
  if (((*(int *)(iVar6 + 0x174) == -1) && (*(int *)(iVar6 + 0x170) != 0)) && (iVar3 != 0)) {
    uVar9 = fn_82570840(iVar3,param_2 + 0x170,1,0);
    *(undefined4 *)(iVar6 + 0x174) = uVar9;
  }
  *(float *)(iVar6 + 0x178) =
       (lbl_8218E8E8 - *(float *)(iVar6 + 0x178)) * lbl_821917D4 + *(float *)(iVar6 + 0x178);
  fn_82477708(param_1,param_2);
  fn_82477C80(param_1,param_2);
LAB_82476704:
  fn_824767B8(param_1,param_2);
  fn_82478450(param_1,param_2);
  iVar8 = *(int *)(iVar6 + 0x174);
  if (iVar8 != -1) {
    loadVectorLeftIndexed128(in_r0,param_2 + 0x178);
    fVar1 = *(float *)(param_2 + 0x178);
    dVar10 = (double)lbl_821CA460;
    puVar7 = (undefined4 *)((uint)(auStack_50 + (int)in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010000;
    puVar7[1] = in_ACC;
    puVar7[2] = in_register_00010008;
    puVar7[3] = in_vr0;
    fn_825709D8((double)fVar1,dVar10,iVar3,iVar8,auStack_50);
  }
  if ((*(int *)(iVar6 + 0x154) != 0) && (*(char *)(iVar6 + 0xf6) != '\0')) {
    iVar3 = *(int *)(iVar6 + 0x14);
    if (((*(int *)(iVar3 + 0x44) != 0) &&
        ((*(int *)(iVar3 + 0x44) != 2 && (*(int *)(iVar3 + 0x8c) == 0)))) &&
       (*(int *)(iVar3 + 0x6c) == 0)) {
      fn_82280850();
      *(undefined4 *)(iVar6 + 0x154) = 0;
    }
  }
  return 0;
}

