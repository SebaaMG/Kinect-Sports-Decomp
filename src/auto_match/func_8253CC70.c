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
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_825269D0();
extern int fn_8253C630();
extern int fn_8258F940();
extern int fn_825A3100();
extern int fn_825A4488();
extern int fn_8265C9E0();
extern int fn_82A1DD38();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D404C8();
extern int fn_82D41870();
extern int fn_82D80BA0();
extern int fn_82D84168();
extern int fn_82D86990();
extern int fn_82D88E60();
extern int fn_82D8DDB8();
extern int fn_82D8E600();
extern int fn_82DEA840();
extern unsigned int lbl_821452E4;
extern unsigned int lbl_821C40C4;
extern unsigned int lbl_821C40D8;
extern unsigned int lbl_821C40E4;
extern unsigned int lbl_821C40F0;
extern unsigned int lbl_821C6594;
extern unsigned int lbl_821C65A4;
extern unsigned int lbl_821C65AC;
extern unsigned int lbl_821C65BC;
extern unsigned int lbl_821C65C4;
extern unsigned int lbl_821C7F98;
extern unsigned int lbl_821C7FC0;
extern unsigned int lbl_821C7FE0;
extern unsigned int lbl_821C7FEC;
extern unsigned int lbl_8327F7CC;
extern unsigned int uStack_140;
extern V16 loadVectorLeftIndexed128();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8253CC70(int param_1,longlong param_2)

{
  float *pfVar1;
  int in_r0;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  undefined1 uStack_140;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [224];
  
  fn_82D8E600(auStack_120);
  iVar2 = (int)param_2;
  if (*(char *)(iVar2 + 0xd1) != '\0') {
    puVar4 = (undefined4 *)(iVar2 + 0x180U & 0xfffffff0);
    uVar5 = puVar4[1];
    uVar10 = puVar4[2];
    uVar12 = puVar4[3];
    pfVar1 = (float *)(iVar2 + 400U & 0xfffffff0);
    in_register_000100d0 = *pfVar1;
    in_register_000100d4 = pfVar1[1];
    in_register_000100d8 = pfVar1[2];
    in_vr13 = pfVar1[3];
    puVar6 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
    *puVar6 = *puVar4;
    puVar6[1] = uVar5;
    puVar6[2] = uVar10;
    puVar6[3] = uVar12;
    pfVar1 = (float *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
    *pfVar1 = in_register_000100d0;
    pfVar1[1] = in_register_000100d4;
    pfVar1[2] = in_register_000100d8;
    pfVar1[3] = in_vr13;
  }
  fn_825A3100(auStack_120,auStack_130,param_1 + 0xf4);
  loadVectorLeftIndexed128(param_2 + 0x1b0,0x30);
  pfVar1 = (float *)((uint)(auStack_130 + in_r0) & 0xfffffff0);
  fVar8 = *pfVar1;
  fVar9 = pfVar1[1];
  fVar11 = pfVar1[2];
  fVar13 = pfVar1[3];
  iVar2 = (int)(param_2 + 0x1b0);
  pfVar1 = (float *)(iVar2 + 0x10U & 0xfffffff0);
  *pfVar1 = fVar8;
  pfVar1[1] = fVar9;
  pfVar1[2] = fVar11;
  pfVar1[3] = fVar13;
  pfVar1 = (float *)(iVar2 + 0x20U & 0xfffffff0);
  *pfVar1 = fVar8 * in_register_000100d0;
  pfVar1[1] = fVar9 * in_register_000100d4;
  pfVar1[2] = fVar11 * in_register_000100d8;
  pfVar1[3] = fVar13 * in_vr13;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  iVar2 = fn_82CE5410();
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x350);
  *(undefined2 *)(iVar2 + 4) = 0x350;
  iVar2 = fn_82D86990(iVar2,auStack_120,70000);
  *(int *)(param_1 + 8) = iVar2;
  iVar2 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0x48);
  iVar3 = fn_82CE5410();
  puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0xc);
  *(undefined2 *)(puVar4 + 1) = 0xc;
  *puVar4 = &lbl_821C7F98;
  puVar4[2] = 0x20000;
  *(undefined2 *)((int)puVar4 + 6) = 1;
  *(undefined4 **)(iVar2 + 0x48) = puVar4;
  fn_82CE4118(uVar5);
  fn_82D404C8(*(undefined4 *)(*(int *)(param_1 + 8) + 0x80));
  iVar2 = fn_82CE5410();
  puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x5c);
  *(undefined2 *)(puVar4 + 1) = 0x5c;
  fn_82D8DDB8(puVar4,*(undefined4 *)(param_1 + 8),0,0);
  *puVar4 = &lbl_821C40C4;
  puVar4[2] = &lbl_821C40D8;
  puVar4[3] = &lbl_821C40E4;
  puVar4[4] = &lbl_821C40F0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0x80000000;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0x80000000;
  *(undefined4 **)(param_1 + 0x20) = puVar4;
  fn_82D80BA0(*(undefined4 *)(param_1 + 8),puVar4);
  puVar4 = (undefined4 *)fn_8265C9E0(0x28);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &lbl_821C7FC0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0x80000000;
    fn_825A4488(puVar4 + 4,0);
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0x80000000;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar4;
  iVar2 = fn_82CE5410();
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x24);
  *(undefined2 *)(iVar2 + 4) = 0x24;
  uVar5 = fn_82DEA840(iVar2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  iVar2 = fn_82CE5410();
  puVar6 = (undefined4 *)(**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x100);
  *(undefined2 *)(puVar6 + 1) = 0x100;
  fn_82D41870();
  lVar7 = 0x20;
  *puVar6 = &lbl_821C6594;
  puVar6[2] = &lbl_821C65A4;
  puVar6[3] = &lbl_821C65AC;
  puVar6[4] = &lbl_821C65BC;
  puVar6[8] = 2;
  puVar6[5] = &lbl_821C65C4;
  puVar4 = puVar6 + 0xc;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = 0xffffffff;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar6[0xc] = 0;
  *(undefined4 **)(param_1 + 0x1c) = puVar6;
  fn_8258F940(puVar6);
  if (lbl_8327F7CC != 0) {
    fn_825269D0(0x53,param_2);
  }
  fn_82D88E60(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c),uStack_140,0,1);
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = fn_82CE5410();
    puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x54)
    ;
    *(undefined2 *)(puVar4 + 1) = 0x54;
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    *(undefined2 *)((int)puVar4 + 6) = 1;
    puVar4[2] = &lbl_821452E4;
    *puVar4 = &lbl_821C7FE0;
    puVar4[2] = &lbl_821C7FEC;
    fn_82A1DD38(puVar4 + 3,uVar5,0x48);
    *(undefined4 **)(param_1 + 0x3c) = puVar4;
    fn_82D84168(*(undefined4 *)(param_1 + 8),puVar4 + 2);
  }
  *(undefined4 *)(param_1 + 0xf0) = 1;
  *(undefined4 *)(param_1 + 0x44) = 1;
  fn_8253C630(auStack_120);
  return;
}

