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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DC7928();
extern int fn_830A2398();
extern int fn_830A4688();


void fn_82DC0508(int param_1,int *param_2,int param_3,int *param_4)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 in_r0;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 in_register_00010070;
  undefined4 in_register_00010074;
  undefined4 in_register_00010078;
  undefined4 in_vr7;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 auStack_80 [32];
  
  iVar3 = *(int *)(param_1 + 8);
  piVar15 = param_2 + param_3;
  for (; param_2 < piVar15; param_2 = param_2 + 1) {
    iVar4 = *param_2;
    iVar9 = *(int *)(iVar4 + 0x30);
    cVar1 = *(char *)(iVar4 + 0x1c);
    piVar17 = (int *)(iVar9 + 4);
    iVar8 = *(int *)(iVar9 + 4);
    iVar14 = *(int *)(iVar9 + 8);
    iVar12 = *(int *)(iVar8 + 0xa4) + *(int *)(param_1 + 0xc);
    iVar10 = *(int *)(iVar14 + 0xa4) + *(int *)(param_1 + 0xc);
    *(int *)(iVar3 + 0x30) = iVar12;
    *(int *)(iVar3 + 0x34) = iVar10;
    iVar13 = (*(uint *)(*piVar17 + 0xa4) >> 2 & 0x3fffffe0) + *(int *)(param_1 + 0x18);
    iVar11 = (*(uint *)(*(int *)(iVar9 + 8) + 0xa4) >> 2 & 0x3fffffe0) + *(int *)(param_1 + 0x18);
    iVar16 = (int)in_r0;
    puVar6 = (undefined4 *)(iVar16 + iVar13 & 0xfffffff0);
    uVar18 = puVar6[1];
    uVar19 = puVar6[2];
    uVar20 = puVar6[3];
    puVar7 = (undefined4 *)(iVar16 + iVar12 + 0x40 & 0xfffffff0);
    *puVar7 = *puVar6;
    puVar7[1] = uVar18;
    puVar7[2] = uVar19;
    puVar7[3] = uVar20;
    puVar6 = (undefined4 *)(iVar13 + 0x10U & 0xfffffff0);
    uVar22 = *puVar6;
    uVar23 = puVar6[1];
    uVar24 = puVar6[2];
    uVar25 = puVar6[3];
    puVar6 = (undefined4 *)(iVar16 + iVar12 + 0x50 & 0xfffffff0);
    *puVar6 = uVar22;
    puVar6[1] = uVar23;
    puVar6[2] = uVar24;
    puVar6[3] = uVar25;
    puVar6 = (undefined4 *)(iVar16 + iVar11 & 0xfffffff0);
    uVar18 = puVar6[1];
    uVar19 = puVar6[2];
    uVar20 = puVar6[3];
    puVar7 = (undefined4 *)(iVar16 + iVar10 + 0x40 & 0xfffffff0);
    *puVar7 = *puVar6;
    puVar7[1] = uVar18;
    puVar7[2] = uVar19;
    puVar7[3] = uVar20;
    puVar6 = (undefined4 *)(iVar11 + 0x10U & 0xfffffff0);
    uVar18 = *puVar6;
    uVar19 = puVar6[1];
    uVar20 = puVar6[2];
    uVar21 = puVar6[3];
    puVar6 = (undefined4 *)(iVar16 + iVar10 + 0x50 & 0xfffffff0);
    *puVar6 = uVar18;
    puVar6[1] = uVar19;
    puVar6[2] = uVar20;
    puVar6[3] = uVar21;
    *(int *)(iVar3 + 0x38) = iVar8 + 0xf0;
    *(int *)(iVar3 + 0x3c) = iVar14 + 0xf0;
    *(int *)(iVar3 + 0x48) = iVar4;
    *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(*(int *)(iVar4 + 0x30) + 0x1c);
    *(uint *)(iVar3 + 0x50) = *(uint *)(*piVar17 + 0xa4) >> 7 & 0xffff;
    *(uint *)(iVar3 + 0x54) = *(uint *)(*(int *)(iVar9 + 8) + 0xa4) >> 7 & 0xffff;
    *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(*(int *)(iVar4 + 0x30) + 0x1c);
    iVar8 = fn_82CE5410();
    if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
      fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),param_4,0xc);
    }
    iVar16 = (uint)(cVar1 == '\x05') * 0x10 + param_1;
    iVar8 = param_4[1] * 0xc;
    param_4[1] = param_4[1] + 1;
    iVar14 = iVar8 + *param_4;
    *(int *)(iVar8 + *param_4) = iVar4;
    *(undefined4 *)(iVar14 + 4) = *(undefined4 *)(iVar16 + 0x28);
    fVar2 = *(float *)(*(int *)(iVar9 + 8) + 0x5c);
    if (*(float *)(*piVar17 + 0x5c) - fVar2 < 0.0) {
      fVar2 = *(float *)(*piVar17 + 0x5c);
    }
    *(float *)(iVar14 + 8) = fVar2;
    auStack_80[0] = *(undefined4 *)(iVar16 + 0x28);
    iVar9 = (**(code **)(**(int **)(iVar4 + 0xc) + 0x20))();
    if (iVar9 == 0xb) {
      fn_82DC7928(*(int *)(iVar4 + 0xc),iVar3,*(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x28),1)
      ;
    }
    if ((*(byte *)(*(int *)(iVar4 + 0x30) + 0x12) & 4) != 0) {
      (**(code **)(**(int **)(iVar4 + 0xc) + 0x38))(*(int **)(iVar4 + 0xc),iVar3);
    }
    psVar5 = *(short **)(*(int *)(iVar4 + 0x30) + 0xc);
    if (*psVar5 == 0x16) {
      fn_830A4688(psVar5,iVar3,1);
    }
    else {
      fn_830A2398(psVar5,*(undefined2 *)(*(int *)(iVar4 + 0x30) + 0x10),iVar3,auStack_80);
    }
    *(undefined4 *)(iVar16 + 0x28) = auStack_80[0];
    *(uint *)(param_1 + 0x48) =
         (uint)*(ushort *)(*(int *)(iVar4 + 0x30) + 0x18) * 4 + *(int *)(param_1 + 0x48);
    iVar4 = (int)in_r0;
    puVar6 = (undefined4 *)(iVar4 + iVar12 + 0x40 & 0xfffffff0);
    *puVar6 = uVar22;
    puVar6[1] = uVar23;
    puVar6[2] = uVar24;
    puVar6[3] = uVar25;
    puVar6 = (undefined4 *)(iVar4 + iVar12 + 0x50 & 0xfffffff0);
    *puVar6 = uVar18;
    puVar6[1] = uVar19;
    puVar6[2] = uVar20;
    puVar6[3] = uVar21;
    puVar6 = (undefined4 *)(iVar4 + iVar10 + 0x40 & 0xfffffff0);
    *puVar6 = in_register_00010090;
    puVar6[1] = in_register_00010094;
    puVar6[2] = in_register_00010098;
    puVar6[3] = in_vr9;
    puVar6 = (undefined4 *)(iVar4 + iVar10 + 0x50 & 0xfffffff0);
    *puVar6 = in_register_00010070;
    puVar6[1] = in_register_00010074;
    puVar6[2] = in_register_00010078;
    puVar6[3] = in_vr7;
  }
  **(undefined4 **)(param_1 + 0x28) = 0;
  **(undefined4 **)(param_1 + 0x38) = 0;
  return;
}

