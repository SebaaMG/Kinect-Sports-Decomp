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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_98;
extern unsigned int fStack_a0;
extern unsigned int fStack_f0;
extern int fn_82264048();
extern int fn_822ABA88();
extern int fn_82359698();
extern int fn_8236A100();
extern int fn_8236A360();
extern int fn_8236C428();
extern int fn_8236C760();
extern int fn_823C2148();
extern int fn_823D8598();
extern int fn_823D8960();
extern int fn_823D8C90();
extern int fn_823D9D60();
extern int fn_823E8210();
extern int fn_824FE498();
extern int fn_824FFDC8();
extern int fn_825354B8();
extern int fn_82536288();
extern int fn_8288B760();
extern int fn_82F68CC0();
extern unsigned int lbl_82196750;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1918;
extern unsigned int lbl_83276554;
extern unsigned int uStack_9c;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ea;
extern unsigned int uStack_eb;
extern unsigned int uStack_ec;


void fn_823CDF08(int param_1,undefined8 param_2,ulonglong param_3,int param_4,char *param_5,
                  undefined4 param_6,int param_7,char param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar9;
  longlong lVar8;
  int iVar10;
  bool bVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  int aiStack_140 [4];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  float fStack_f0;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  float fStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  
  *(undefined1 *)(param_1 + 0xd84) = 1;
  fn_8236C760();
  if (*(int *)(param_1 + 0x4c0) == 0) {
    uVar4 = fn_823D9D60(param_1,0);
    fn_823D9D60(uVar4,1);
    fn_823E8210(param_7,*(undefined4 *)(param_1 + 8),param_1 + 0xc,param_1 + 0x1090);
  }
  fn_824FE498(*(undefined4 *)(param_1 + 0xe10));
  fn_8236C428(param_1);
  iVar5 = *(int *)(param_4 + 0x10);
  puVar1 = (undefined4 *)((uint)(auStack_120 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)((uint)(auStack_110 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  dVar12 = (double)lbl_821CC160;
  uStack_9c = 0;
  puVar1 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar13 = puVar1[1];
  uVar14 = puVar1[2];
  uVar15 = puVar1[3];
  uStack_ec = 0;
  fStack_a0 = lbl_821CC160;
  uStack_eb = 0;
  fStack_98 = lbl_821CC160;
  uStack_ea = 0;
  fStack_f0 = lbl_821CC160;
  uStack_e8 = 0;
  uStack_e4 = 3;
  puVar2 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar13;
  puVar2[2] = uVar14;
  puVar2[3] = uVar15;
  if (iVar5 == 0) {
    fn_823D8960(param_1,param_2,param_3,param_4,param_5,*(undefined1 *)(param_7 + 0xc),auStack_120
                  ,auStack_e0);
  }
  else if (iVar5 == 1) {
    fn_823D8C90(param_4,param_5,auStack_120,auStack_e0);
  }
  fn_823D8598(auStack_130,param_1,param_2,param_3,auStack_120);
  fn_82F68CC0(param_1 + 0xd90,auStack_e0,0x50);
  *(undefined4 *)(param_1 + 0xde4) = *(undefined4 *)(param_4 + 0x14);
  uVar13 = *(undefined4 *)(param_4 + 0x18);
  *(float *)(param_1 + 0xde8) = (float)dVar12;
  *(undefined4 *)(param_1 + 0xde0) = uVar13;
  *(undefined4 *)(param_1 + 0xdf0) = param_6;
  *(uint *)(param_1 + 0xdec) = ((uint)LZCOUNT(*(undefined4 *)(param_4 + 0x10)) >> 5 ^ 1) + 0xe;
  fn_82359698(param_1,2);
  if (*(int *)(param_4 + 0x1c) == 2) {
    iVar5 = 0xb;
  }
  else {
    iVar5 = (-(uint)(*(int *)(param_4 + 0x1c) == 1) & 0xb) + 1;
  }
  iVar10 = (int)param_3;
  if (((iVar5 != *(int *)(param_1 + 0x41c)) || (iVar10 != *(int *)(param_1 + 0x420))) ||
     ((int)param_2 != *(int *)(param_1 + 0x420))) {
    *(float *)(param_1 + 0x428) = (float)dVar12;
    *(int *)(param_1 + 0x41c) = iVar5;
    *(int *)(param_1 + 0x420) = iVar10;
    *(int *)(param_1 + 0x424) = (int)param_2;
  }
  if (*(int *)(param_4 + 0x1c) == 1) {
    if (*param_5 == '\0') {
      piVar9 = (int *)(param_1 + 0x103c);
      if (piVar9 == (int *)0x0) {
        bVar11 = false;
      }
      else {
        bVar11 = *piVar9 != 0;
      }
      if (bVar11) {
        aiStack_140[0] = *piVar9;
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0xe10) + 0x50U & 0xfffffff0);
        uVar13 = puVar2[1];
        uVar14 = puVar2[2];
        uVar15 = puVar2[3];
        puVar1 = *(undefined4 **)(param_1 + 0xfe0);
        puVar3 = (undefined4 *)((uint)(auStack_130 + in_r0) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar13;
        puVar3[2] = uVar14;
        puVar3[3] = uVar15;
        aiStack_140[0] =
             fn_825354B8(aiStack_140,auStack_130,0,*puVar1,0xffffffff83296bc0,
                               0xffffffff83296bd0);
        fn_82536288(aiStack_140);
      }
    }
    if (lbl_831D1918 != 0) {
      piVar9 = *(int **)(*(int *)(param_4 + 0x18) * 4 + **(int **)(param_1 + 8));
      piVar7 = *(int **)((int)((param_3 & 0xffffffff) << 2) + **(int **)(param_1 + 8));
      fn_822ABA88(*(undefined4 *)(piVar9[4] * 4 + *piVar9),*(undefined4 *)(param_4 + 0x14));
      fn_822ABA88(*(undefined4 *)(piVar7[4] * 4 + *piVar7),param_2);
      iVar5 = fn_822ABA88(*(undefined4 *)(piVar7[4] * 4 + *piVar7));
      fn_82264048(lbl_83276554,*(int *)(iVar5 + 0x24) != 0);
    }
    goto LAB_823ce304;
  }
  fn_8236A360(param_1,2);
  if (*param_5 != '\0') goto LAB_823ce304;
  piVar9 = *(int **)(**(int **)(param_1 + 8) + (int)((param_3 & 0xffffffff) << 2));
  iVar5 = fn_822ABA88(*(undefined4 *)(piVar9[4] * 4 + *piVar9),param_2);
  if (*(int *)(iVar5 + 0x24) == 0) {
LAB_823ce2e8:
    lVar8 = 0;
  }
  else {
    if (*(int *)(iVar5 + 0x168) == 0) {
      uVar6 = *(uint *)(iVar5 + 0x16c);
    }
    else {
      uVar6 = fn_8288B760();
      uVar6 = uVar6 & 0xff;
    }
    lVar8 = 1;
    if (uVar6 == 0) goto LAB_823ce2e8;
  }
  fn_8236A100(param_1,(lVar8 + -1) - (lVar8 + -2 + (ulonglong)(lVar8 + -1 == 0)));
LAB_823ce304:
  uVar13 = *(undefined4 *)(param_1 + 0xe10);
  fn_824FFDC8(uVar13,0,0);
  fn_824FFDC8(uVar13,1,0);
  fn_824FFDC8(*(undefined4 *)(param_1 + 0xe10),0,1);
  if ((*(int *)(param_4 + 0x1c) == 1) && (lbl_831D1918 != 0)) {
    piVar9 = *(int **)(*(int *)(param_4 + 0x18) * 4 + **(int **)(param_1 + 8));
    piVar7 = *(int **)((int)((param_3 & 0xffffffff) << 2) + **(int **)(param_1 + 8));
    fn_822ABA88(*(undefined4 *)(piVar9[4] * 4 + *piVar9),*(undefined4 *)(param_4 + 0x14));
    fn_822ABA88(*(undefined4 *)(piVar7[4] * 4 + *piVar7),param_2);
    iVar5 = fn_822ABA88(*(undefined4 *)(piVar7[4] * 4 + *piVar7));
    fn_82264048(lbl_83276554,*(int *)(iVar5 + 0x24) != 0);
  }
  if (param_8 != '\0') {
    iVar5 = iVar10 * 0x84 + *(int *)(param_1 + 0x4bc);
    *(int *)(iVar5 + 0x3c) = *(int *)(iVar5 + 0x3c) + 1;
  }
  fn_823C2148(param_1,0,1);
  return;
}

