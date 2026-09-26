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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int fStack_70;
extern unsigned int fStack_ac;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_822CEE40();
extern int fn_822CEFA0();
extern int fn_82365BD8();
extern int fn_82370F38();
extern int fn_823730C0();
extern int fn_82379A60();
extern int fn_8237AFE8();
extern int fn_8237B3E0();
extern int fn_8237C768();
extern int fn_8237C838();
extern int fn_82384CA0();
extern int fn_825275B0();
extern unsigned int iStack_bc;
extern unsigned int lbl_8218E8E8;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82377788(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar6;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 *puStack_c0;
  int iStack_bc;
  undefined1 auStack_b0 [4];
  float fStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  float fStack_70;
  
  iVar7 = **(int **)(param_1 + 8);
  piVar1 = *(int **)(*(int *)(param_2 + 0x40) * 4 + iVar7);
  iVar6 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),*(undefined4 *)(param_2 + 0x44));
  piVar1 = *(int **)(*(int *)(param_2 + 0x48) * 4 + iVar7);
  uVar4 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),*(undefined4 *)(param_2 + 0x4c));
  fn_823730C0(&puStack_c0,param_1,*(undefined4 *)(param_2 + 0x34));
  if (puStack_c0[0x27] != 0) {
    fn_825275B0(*puStack_c0);
    puStack_c0[0x27] = 0;
  }
  iVar7 = *(int *)(param_2 + 0x50) * 0x52 + 0x77;
  if (lbl_8218E8E8 <= *(float *)(param_2 + 0x78)) {
    iVar7 = *(int *)(param_2 + 0x50) * 0x52 + 0xa0;
  }
  puStack_c0[0x49] = puStack_c0[iVar7];
  fn_8237AFE8(puStack_c0);
  puVar2 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar11 = puVar2[1];
  uVar12 = puVar2[2];
  uVar14 = puVar2[3];
  puVar3 = (undefined4 *)((int)puStack_c0 + in_r0 + 0x30 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar11;
  puVar3[2] = uVar12;
  puVar3[3] = uVar14;
  puVar2 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  uVar12 = *puVar2;
  uVar14 = puVar2[1];
  uVar13 = puVar2[2];
  uVar15 = puVar2[3];
  uVar11 = *(undefined4 *)(param_2 + 0x30);
  puStack_c0[0x46] = uVar11;
  puStack_c0[0x47] = uVar11;
  puVar2 = (undefined4 *)((uint)(puStack_c0 + 100) & 0xfffffff0);
  *puVar2 = uVar12;
  puVar2[1] = uVar14;
  puVar2[2] = uVar13;
  puVar2[3] = uVar15;
  uVar11 = *(undefined4 *)(param_2 + 0x50);
  puVar2 = (undefined4 *)((int)puStack_c0 + in_r0 + 0x30 & 0xfffffff0);
  uVar12 = *puVar2;
  uVar14 = puVar2[1];
  uVar13 = puVar2[2];
  uVar15 = puVar2[3];
  puStack_c0[0x84c] = iVar6;
  puStack_c0[0x84d] = (int)uVar4;
  puStack_c0[0x84e] = 0;
  puStack_c0[0x37] = 0;
  puStack_c0[0x852] = uVar11;
  puVar2 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar2 = uVar12;
  puVar2[1] = uVar14;
  puVar2[2] = uVar13;
  puVar2[3] = uVar15;
  dVar9 = (double)fn_82379A60(puStack_c0);
  puStack_c0[0x48] = (float)(-(double)fStack_ac / dVar9);
  puStack_c0[0x33] = 0;
  puStack_c0[0x34] = 0;
  puStack_c0[0x32] = 0;
  puStack_c0[0x30] = 0;
  dVar10 = (double)*(float *)(param_2 + 0x7c);
  dVar9 = (double)*(float *)(param_2 + 0x78);
  uVar11 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = fn_82365BD8(auStack_b0,&puStack_c0);
  fn_82370F38(dVar9,dVar10,param_1,uVar5,iVar6,uVar4,uVar11,0);
  fStack_70 = lbl_8218E8E8;
  uStack_94 = *(undefined4 *)(param_2 + 0x74);
  uStack_9c = *(undefined4 *)(param_2 + 0x78);
  uVar11 = puStack_c0[0x834];
  puVar2 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (undefined4 *)(param_2 + 0x60U & 0xfffffff0);
  uVar12 = puVar2[1];
  uVar14 = puVar2[2];
  uVar13 = puVar2[3];
  uStack_a0 = *(undefined4 *)(param_2 + 0x50);
  uStack_98 = *(undefined4 *)(param_2 + 0x70);
  puVar3 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar12;
  puVar3[2] = uVar14;
  puVar3[3] = uVar13;
  fn_82384CA0(uVar11,&uStack_a0,1);
  puStack_c0[0x827] = 0;
  iVar7 = fn_822CEE40(uVar4);
  puStack_c0[0x84e] = 0;
  if ((((iVar7 != 0) && (iVar8 = fn_822CEFA0(iVar7), iVar8 != 0)) &&
      (*(int *)(iVar7 + 0x2c) != *(int *)(iVar6 + 0x2c))) &&
     (((fn_8237B3E0(puStack_c0,iVar7), *(int *)(iVar7 + 0x340) != 0 ||
       (*(int *)(iVar7 + 0x24) == 0)) || (iVar6 = fn_8237C768(iVar7), iVar6 != 0)))) {
    puStack_c0[0x84e] = iVar7;
    *(undefined4 *)(iVar7 + 0x340) = 1;
    puVar2 = (undefined4 *)((uint)(puStack_c0 + 0x68) & 0xfffffff0);
    uVar11 = *puVar2;
    uVar12 = puVar2[1];
    uVar14 = puVar2[2];
    uVar13 = puVar2[3];
    puStack_c0[0x848] = puStack_c0[0x6c];
    puVar2 = (undefined4 *)((uint)(puStack_c0 + 0x844) & 0xfffffff0);
    *puVar2 = uVar11;
    puVar2[1] = uVar12;
    puVar2[2] = uVar14;
    puVar2[3] = uVar13;
  }
  puStack_c0[0x83a] = 0;
  if (*(char *)(param_2 + 0x80) != '\0') {
    puStack_c0[0x30] = 1;
  }
  fn_8237C838(puStack_c0,uVar4);
  if (iStack_bc != 0) {
    fn_822315A0();
  }
  return;
}

