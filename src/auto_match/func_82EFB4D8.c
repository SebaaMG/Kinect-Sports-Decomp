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
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int iStack_c4;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int iStack_e4;
extern unsigned int uStack_100;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_f0;


void fn_82EFB4D8(byte *param_1,byte *param_2,byte *param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  longlong lVar49;
  int in_stack_00000054;
  int in_stack_0000005c;
  int *in_stack_00000064;
  int in_stack_0000006c;
  byte *pbStack_13c;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_124;
  uint uStack_120;
  uint uStack_100;
  uint uStack_f0;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  iStack_d8 = 0;
  iStack_d4 = 0;
  iStack_e4 = 0;
  iStack_dc = 0;
  lVar49 = 4;
  iStack_bc = 0;
  iStack_cc = 0;
  iStack_c4 = 0;
  iStack_b4 = 0;
  iStack_a8 = 0;
  iStack_c0 = 0;
  iStack_a4 = 0;
  iStack_ac = 0;
  iStack_b0 = 0;
  iStack_e0 = 0;
  pbStack_13c = (byte *)(in_stack_00000064[1] * in_stack_00000054 + *in_stack_00000064 + param_6);
  iStack_d0 = 0;
  iStack_b8 = 0;
  uVar21 = (uint)pbStack_13c[7];
  uStack_12c = (uint)pbStack_13c[6];
  uStack_124 = (uint)pbStack_13c[5];
  uStack_100 = (uint)pbStack_13c[4];
  uStack_f0 = (uint)pbStack_13c[3];
  uVar18 = (uint)pbStack_13c[1];
  uVar15 = (uint)*pbStack_13c;
  uStack_120 = (uint)pbStack_13c[2];
  uStack_130 = (uint)pbStack_13c[8];
  do {
    uStack_f0 = param_1[3] - uStack_f0;
    uStack_100 = param_1[4] - uStack_100;
    uVar20 = (int)uStack_f0 >> 0x1f;
    uStack_124 = param_1[5] - uStack_124;
    uVar25 = (int)uStack_100 >> 0x1f;
    uVar1 = (int)uStack_124 >> 0x1f;
    uStack_12c = param_1[6] - uStack_12c;
    uVar21 = param_1[7] - uVar21;
    uVar2 = (int)uStack_12c >> 0x1f;
    uVar15 = *param_1 - uVar15;
    uVar18 = param_1[1] - uVar18;
    uVar3 = (int)uVar21 >> 0x1f;
    uVar30 = (uint)param_1[10] - (uint)pbStack_13c[10];
    uStack_120 = param_1[2] - uStack_120;
    uVar13 = (uint)param_1[0xb] - (uint)pbStack_13c[0xb];
    uVar7 = (uint)param_1[0xc] - (uint)pbStack_13c[0xc];
    uVar4 = (int)uVar15 >> 0x1f;
    uVar46 = (uint)param_1[9] - (uint)pbStack_13c[9];
    uVar5 = (int)uVar18 >> 0x1f;
    uVar6 = (int)uStack_120 >> 0x1f;
    uVar26 = (int)uVar46 >> 0x1f;
    uVar31 = (int)uVar30 >> 0x1f;
    uVar9 = (int)uVar13 >> 0x1f;
    uVar32 = (uint)param_1[0xd] - (uint)pbStack_13c[0xd];
    iStack_b4 = ((uStack_f0 ^ uVar20) - uVar20) + ((uStack_100 ^ uVar25) - uVar25) +
                ((uStack_124 ^ uVar1) - uVar1) + ((uStack_12c ^ uVar2) - uVar2) +
                ((uVar21 ^ uVar3) - uVar3) + ((uVar15 ^ uVar4) - uVar4) + ((uVar18 ^ uVar5) - uVar5)
                + ((uStack_120 ^ uVar6) - uVar6) + iStack_b4;
    uVar15 = (int)uVar7 >> 0x1f;
    uVar18 = (int)uVar32 >> 0x1f;
    pbVar11 = pbStack_13c + in_stack_00000054;
    uVar22 = (uint)param_1[0xe] - (uint)pbStack_13c[0xe];
    uVar16 = (uint)param_1[0xf] - (uint)pbStack_13c[0xf];
    uVar21 = (int)uVar22 >> 0x1f;
    uStack_130 = param_1[8] - uStack_130;
    uVar12 = (uint)param_1[3] - (uint)pbVar11[3];
    uVar20 = (int)uVar16 >> 0x1f;
    uVar25 = (int)uStack_130 >> 0x1f;
    uVar1 = (int)uVar12 >> 0x1f;
    uVar41 = (uint)param_1[4] - (uint)pbVar11[4];
    uVar2 = (int)uVar41 >> 0x1f;
    uVar44 = (uint)param_1[5] - (uint)pbVar11[5];
    uVar3 = (int)uVar44 >> 0x1f;
    uVar23 = (uint)param_1[6] - (uint)pbVar11[6];
    uVar43 = (uint)param_1[7] - (uint)pbVar11[7];
    uVar4 = (int)uVar23 >> 0x1f;
    uVar5 = (int)uVar43 >> 0x1f;
    uVar47 = (uint)*param_1 - (uint)*pbVar11;
    uVar6 = (int)uVar47 >> 0x1f;
    uVar19 = (uint)param_1[1] - (uint)pbVar11[1];
    uVar10 = (int)uVar19 >> 0x1f;
    uVar17 = (uint)param_1[2] - (uint)pbVar11[2];
    uVar14 = (int)uVar17 >> 0x1f;
    uVar38 = (uint)param_1[0xe] - (uint)pbVar11[0xe];
    uVar45 = (uint)param_1[0xf] - (uint)pbVar11[0xf];
    uVar8 = (int)uVar38 >> 0x1f;
    iStack_cc = ((uVar46 ^ uVar26) - uVar26) + ((uVar30 ^ uVar31) - uVar31) +
                ((uVar13 ^ uVar9) - uVar9) + ((uVar7 ^ uVar15) - uVar15) +
                ((uVar32 ^ uVar18) - uVar18) + ((uVar22 ^ uVar21) - uVar21) +
                ((uVar16 ^ uVar20) - uVar20) + ((uStack_130 ^ uVar25) - uVar25) + iStack_cc;
    iStack_b8 = ((uVar12 ^ uVar1) - uVar1) + ((uVar41 ^ uVar2) - uVar2) + ((uVar44 ^ uVar3) - uVar3)
                + ((uVar23 ^ uVar4) - uVar4) + ((uVar43 ^ uVar5) - uVar5) +
                ((uVar47 ^ uVar6) - uVar6) + ((uVar19 ^ uVar10) - uVar10) +
                ((uVar17 ^ uVar14) - uVar14) + iStack_b8;
    pbVar28 = param_1 + param_4;
    uVar23 = (uint)param_1[10] - (uint)pbVar11[10];
    uVar13 = (uint)param_1[8] - (uint)pbVar11[8];
    uVar7 = (uint)param_1[9] - (uint)pbVar11[9];
    uVar15 = (int)uVar45 >> 0x1f;
    uVar18 = (int)uVar13 >> 0x1f;
    uVar21 = (int)uVar7 >> 0x1f;
    uVar20 = (int)uVar23 >> 0x1f;
    uVar12 = (uint)param_1[0xb] - (uint)pbVar11[0xb];
    uVar14 = (uint)param_1[0xc] - (uint)pbVar11[0xc];
    uVar25 = (int)uVar12 >> 0x1f;
    uVar16 = (uint)pbVar28[3] - (uint)pbVar11[3];
    uVar1 = (int)uVar14 >> 0x1f;
    uVar10 = (uint)param_1[0xd] - (uint)pbVar11[0xd];
    uVar46 = (uint)pbVar28[4] - (uint)pbVar11[4];
    uVar2 = (int)uVar10 >> 0x1f;
    uVar3 = (int)uVar16 >> 0x1f;
    uVar4 = (int)uVar46 >> 0x1f;
    uVar30 = (uint)pbVar28[6] - (uint)pbVar11[6];
    uVar33 = (uint)pbVar28[5] - (uint)pbVar11[5];
    uVar35 = (uint)pbVar28[7] - (uint)pbVar11[7];
    uVar5 = (int)uVar33 >> 0x1f;
    uVar6 = (int)uVar30 >> 0x1f;
    uVar36 = (uint)*pbVar28 - (uint)*pbVar11;
    uVar32 = (uint)pbVar28[1] - (uint)pbVar11[1];
    uVar26 = (int)uVar35 >> 0x1f;
    uVar31 = (int)uVar36 >> 0x1f;
    uVar9 = (int)uVar32 >> 0x1f;
    iStack_e0 = ((uVar38 ^ uVar8) - uVar8) + ((uVar45 ^ uVar15) - uVar15) +
                ((uVar13 ^ uVar18) - uVar18) + ((uVar7 ^ uVar21) - uVar21) +
                ((uVar23 ^ uVar20) - uVar20) + ((uVar12 ^ uVar25) - uVar25) +
                ((uVar14 ^ uVar1) - uVar1) + ((uVar10 ^ uVar2) - uVar2) + iStack_e0;
    uVar19 = (uint)pbVar28[2] - (uint)pbVar11[2];
    uVar20 = (int)uVar19 >> 0x1f;
    uVar39 = (uint)pbVar28[0xe] - (uint)pbVar11[0xe];
    uVar42 = (uint)pbVar28[0xf] - (uint)pbVar11[0xf];
    uVar25 = (int)uVar39 >> 0x1f;
    uVar41 = (uint)pbVar28[8] - (uint)pbVar11[8];
    pbStack_13c = pbVar11 + in_stack_00000054;
    uVar1 = (int)uVar42 >> 0x1f;
    uVar38 = (uint)pbVar28[9] - (uint)pbVar11[9];
    uVar22 = (uint)pbVar28[10] - (uint)pbVar11[10];
    uStack_f0 = (uint)pbStack_13c[3];
    uStack_100 = (uint)pbStack_13c[4];
    uStack_124 = (uint)pbStack_13c[5];
    uStack_12c = (uint)pbStack_13c[6];
    uVar2 = (int)uVar41 >> 0x1f;
    uVar10 = (int)uVar38 >> 0x1f;
    uVar14 = (int)uVar22 >> 0x1f;
    uVar40 = (uint)pbVar28[0xc] - (uint)pbVar11[0xc];
    uVar43 = (uint)pbVar28[0xb] - (uint)pbVar11[0xb];
    uVar34 = (uint)pbVar28[0xd] - (uint)pbVar11[0xd];
    uVar44 = pbVar28[3] - uStack_f0;
    uVar15 = (uint)*pbStack_13c;
    uVar21 = (uint)pbStack_13c[7];
    uVar8 = (int)uVar43 >> 0x1f;
    uVar47 = pbVar28[4] - uStack_100;
    uVar7 = (int)uVar40 >> 0x1f;
    uVar12 = (int)uVar34 >> 0x1f;
    uVar23 = (int)uVar44 >> 0x1f;
    uVar48 = pbVar28[5] - uStack_124;
    uStack_120 = (uint)pbStack_13c[2];
    uVar45 = (int)uVar47 >> 0x1f;
    uVar18 = (uint)pbStack_13c[1];
    uVar13 = (int)uVar48 >> 0x1f;
    uVar37 = pbVar28[6] - uStack_12c;
    uVar17 = (int)uVar37 >> 0x1f;
    iStack_bc = ((uVar39 ^ uVar25) - uVar25) + ((uVar42 ^ uVar1) - uVar1) +
                ((uVar41 ^ uVar2) - uVar2) + ((uVar38 ^ uVar10) - uVar10) +
                ((uVar22 ^ uVar14) - uVar14) + ((uVar43 ^ uVar8) - uVar8) +
                ((uVar40 ^ uVar7) - uVar7) + ((uVar34 ^ uVar12) - uVar12) + iStack_bc;
    iStack_c4 = ((uVar16 ^ uVar3) - uVar3) + ((uVar46 ^ uVar4) - uVar4) + ((uVar33 ^ uVar5) - uVar5)
                + ((uVar30 ^ uVar6) - uVar6) + ((uVar35 ^ uVar26) - uVar26) +
                ((uVar36 ^ uVar31) - uVar31) + ((uVar32 ^ uVar9) - uVar9) +
                ((uVar19 ^ uVar20) - uVar20) + iStack_c4;
    uVar14 = pbVar28[7] - uVar21;
    uVar20 = (int)uVar14 >> 0x1f;
    uVar43 = pbVar28[1] - uVar18;
    uVar41 = *pbVar28 - uVar15;
    uVar38 = pbVar28[2] - uStack_120;
    uVar25 = (int)uVar41 >> 0x1f;
    uVar7 = (uint)pbVar28[9] - (uint)pbStack_13c[9];
    uVar1 = (int)uVar43 >> 0x1f;
    uVar8 = (uint)pbVar28[10] - (uint)pbStack_13c[10];
    uStack_130 = (uint)pbStack_13c[8];
    uVar2 = (int)uVar38 >> 0x1f;
    uVar3 = (int)uVar7 >> 0x1f;
    uVar4 = (int)uVar8 >> 0x1f;
    uVar30 = (uint)pbVar28[0xb] - (uint)pbStack_13c[0xb];
    uVar5 = (int)uVar30 >> 0x1f;
    uVar22 = (uint)pbVar28[0xc] - (uint)pbStack_13c[0xc];
    uVar6 = (int)uVar22 >> 0x1f;
    uVar19 = (uint)pbVar28[0xd] - (uint)pbStack_13c[0xd];
    uVar26 = (int)uVar19 >> 0x1f;
    uVar16 = (uint)pbVar28[0xe] - (uint)pbStack_13c[0xe];
    uVar12 = (uint)pbVar28[0xf] - (uint)pbStack_13c[0xf];
    uVar31 = (int)uVar16 >> 0x1f;
    uVar9 = (int)uVar12 >> 0x1f;
    uVar32 = pbVar28[8] - uStack_130;
    uVar10 = (int)uVar32 >> 0x1f;
    iStack_d0 = ((uVar44 ^ uVar23) - uVar23) + ((uVar47 ^ uVar45) - uVar45) +
                ((uVar48 ^ uVar13) - uVar13) + ((uVar37 ^ uVar17) - uVar17) +
                ((uVar14 ^ uVar20) - uVar20) + ((uVar41 ^ uVar25) - uVar25) +
                ((uVar43 ^ uVar1) - uVar1) + ((uVar38 ^ uVar2) - uVar2) + iStack_d0;
    iStack_b0 = ((uVar7 ^ uVar3) - uVar3) + ((uVar8 ^ uVar4) - uVar4) + ((uVar30 ^ uVar5) - uVar5) +
                ((uVar22 ^ uVar6) - uVar6) + ((uVar19 ^ uVar26) - uVar26) +
                ((uVar16 ^ uVar31) - uVar31) + ((uVar12 ^ uVar9) - uVar9) +
                ((uVar32 ^ uVar10) - uVar10) + iStack_b0;
    param_1 = pbVar28 + param_4;
    lVar49 = lVar49 + -1;
  } while (lVar49 != 0);
  lVar49 = 4;
  do {
    uStack_f0 = param_1[3] - uStack_f0;
    uVar20 = (int)uStack_f0 >> 0x1f;
    uStack_100 = param_1[4] - uStack_100;
    uVar25 = (int)uStack_100 >> 0x1f;
    uStack_124 = param_1[5] - uStack_124;
    uVar21 = param_1[7] - uVar21;
    uVar1 = (int)uStack_124 >> 0x1f;
    uStack_12c = param_1[6] - uStack_12c;
    uVar2 = (int)uStack_12c >> 0x1f;
    uVar15 = *param_1 - uVar15;
    uVar18 = param_1[1] - uVar18;
    uVar3 = (int)uVar21 >> 0x1f;
    uVar7 = (uint)param_1[9] - (uint)pbStack_13c[9];
    uVar32 = (uint)param_1[0xb] - (uint)pbStack_13c[0xb];
    uStack_120 = param_1[2] - uStack_120;
    uVar4 = (int)uVar15 >> 0x1f;
    uVar5 = (int)uVar18 >> 0x1f;
    uVar44 = (uint)param_1[10] - (uint)pbStack_13c[10];
    uVar6 = (int)uStack_120 >> 0x1f;
    uVar26 = (int)uVar7 >> 0x1f;
    uVar31 = (int)uVar44 >> 0x1f;
    uVar9 = (int)uVar32 >> 0x1f;
    uVar46 = (uint)param_1[0xc] - (uint)pbStack_13c[0xc];
    uVar19 = (uint)param_1[0xd] - (uint)pbStack_13c[0xd];
    iStack_dc = ((uStack_f0 ^ uVar20) - uVar20) + ((uStack_100 ^ uVar25) - uVar25) +
                ((uStack_124 ^ uVar1) - uVar1) + ((uStack_12c ^ uVar2) - uVar2) +
                ((uVar21 ^ uVar3) - uVar3) + ((uVar15 ^ uVar4) - uVar4) + ((uVar18 ^ uVar5) - uVar5)
                + ((uStack_120 ^ uVar6) - uVar6) + iStack_dc;
    uVar15 = (int)uVar46 >> 0x1f;
    uVar18 = (int)uVar19 >> 0x1f;
    uStack_130 = param_1[8] - uStack_130;
    pbVar11 = pbStack_13c + in_stack_00000054;
    uVar17 = (uint)param_1[0xe] - (uint)pbStack_13c[0xe];
    uVar12 = (uint)param_1[0xf] - (uint)pbStack_13c[0xf];
    uVar21 = (int)uVar17 >> 0x1f;
    uVar20 = (int)uVar12 >> 0x1f;
    uVar25 = (int)uStack_130 >> 0x1f;
    uVar41 = (uint)param_1[3] - (uint)pbVar11[3];
    uVar1 = (int)uVar41 >> 0x1f;
    uVar45 = (uint)param_1[4] - (uint)pbVar11[4];
    uVar2 = (int)uVar45 >> 0x1f;
    uVar38 = (uint)param_1[5] - (uint)pbVar11[5];
    uVar22 = (uint)param_1[6] - (uint)pbVar11[6];
    uVar3 = (int)uVar38 >> 0x1f;
    uVar4 = (int)uVar22 >> 0x1f;
    uVar30 = (uint)param_1[7] - (uint)pbVar11[7];
    uVar43 = (uint)*param_1 - (uint)*pbVar11;
    uVar5 = (int)uVar30 >> 0x1f;
    uVar6 = (int)uVar43 >> 0x1f;
    uVar23 = (uint)param_1[1] - (uint)pbVar11[1];
    uVar10 = (int)uVar23 >> 0x1f;
    uVar13 = (uint)param_1[2] - (uint)pbVar11[2];
    uVar14 = (int)uVar13 >> 0x1f;
    uVar16 = (uint)param_1[0xe] - (uint)pbVar11[0xe];
    uVar8 = (int)uVar16 >> 0x1f;
    iStack_ac = ((uVar41 ^ uVar1) - uVar1) + ((uVar45 ^ uVar2) - uVar2) + ((uVar38 ^ uVar3) - uVar3)
                + ((uVar22 ^ uVar4) - uVar4) + ((uVar30 ^ uVar5) - uVar5) +
                ((uVar43 ^ uVar6) - uVar6) + ((uVar23 ^ uVar10) - uVar10) +
                ((uVar13 ^ uVar14) - uVar14) + iStack_ac;
    pbVar28 = param_1 + param_4;
    iStack_d4 = ((uVar7 ^ uVar26) - uVar26) + ((uVar44 ^ uVar31) - uVar31) +
                ((uVar32 ^ uVar9) - uVar9) + ((uVar46 ^ uVar15) - uVar15) +
                ((uVar19 ^ uVar18) - uVar18) + ((uVar17 ^ uVar21) - uVar21) +
                ((uVar12 ^ uVar20) - uVar20) + ((uStack_130 ^ uVar25) - uVar25) + iStack_d4;
    uVar7 = (uint)param_1[0xf] - (uint)pbVar11[0xf];
    uVar14 = (uint)param_1[8] - (uint)pbVar11[8];
    uVar23 = (uint)param_1[9] - (uint)pbVar11[9];
    uVar15 = (int)uVar7 >> 0x1f;
    uVar18 = (int)uVar14 >> 0x1f;
    uVar21 = (int)uVar23 >> 0x1f;
    uVar10 = (uint)param_1[10] - (uint)pbVar11[10];
    uVar44 = (uint)pbVar28[3] - (uint)pbVar11[3];
    uVar12 = (uint)param_1[0xb] - (uint)pbVar11[0xb];
    uVar45 = (uint)param_1[0xd] - (uint)pbVar11[0xd];
    uVar13 = (uint)param_1[0xc] - (uint)pbVar11[0xc];
    uVar20 = (int)uVar10 >> 0x1f;
    uVar25 = (int)uVar12 >> 0x1f;
    uVar47 = (uint)pbVar28[4] - (uint)pbVar11[4];
    uVar1 = (int)uVar13 >> 0x1f;
    uVar2 = (int)uVar45 >> 0x1f;
    uVar3 = (int)uVar44 >> 0x1f;
    uVar4 = (int)uVar47 >> 0x1f;
    uVar30 = (uint)pbVar28[6] - (uint)pbVar11[6];
    uVar33 = (uint)pbVar28[5] - (uint)pbVar11[5];
    uVar5 = (int)uVar33 >> 0x1f;
    uVar6 = (int)uVar30 >> 0x1f;
    uVar48 = (uint)pbVar28[7] - (uint)pbVar11[7];
    uVar26 = (int)uVar48 >> 0x1f;
    uVar35 = (uint)*pbVar28 - (uint)*pbVar11;
    uVar22 = (uint)pbVar28[1] - (uint)pbVar11[1];
    uVar31 = (int)uVar35 >> 0x1f;
    uVar9 = (int)uVar22 >> 0x1f;
    uVar46 = (uint)pbVar28[2] - (uint)pbVar11[2];
    iStack_c0 = ((uVar16 ^ uVar8) - uVar8) + ((uVar7 ^ uVar15) - uVar15) +
                ((uVar14 ^ uVar18) - uVar18) + ((uVar23 ^ uVar21) - uVar21) +
                ((uVar10 ^ uVar20) - uVar20) + ((uVar12 ^ uVar25) - uVar25) +
                ((uVar13 ^ uVar1) - uVar1) + ((uVar45 ^ uVar2) - uVar2) + iStack_c0;
    pbStack_13c = pbVar11 + in_stack_00000054;
    uVar20 = (int)uVar46 >> 0x1f;
    uVar32 = (uint)pbVar28[0xf] - (uint)pbVar11[0xf];
    uVar34 = (uint)pbVar28[8] - (uint)pbVar11[8];
    uVar41 = (uint)pbVar28[0xe] - (uint)pbVar11[0xe];
    uVar40 = (uint)pbVar28[9] - (uint)pbVar11[9];
    uVar25 = (int)uVar41 >> 0x1f;
    uVar1 = (int)uVar32 >> 0x1f;
    uVar2 = (int)uVar34 >> 0x1f;
    uStack_f0 = (uint)pbStack_13c[3];
    uVar38 = (uint)pbVar28[10] - (uint)pbVar11[10];
    uStack_100 = (uint)pbStack_13c[4];
    uStack_124 = (uint)pbStack_13c[5];
    uVar19 = (uint)pbVar28[0xb] - (uint)pbVar11[0xb];
    uStack_12c = (uint)pbStack_13c[6];
    uVar10 = (int)uVar40 >> 0x1f;
    uVar14 = (int)uVar38 >> 0x1f;
    uVar8 = (int)uVar19 >> 0x1f;
    uVar36 = (uint)pbVar28[0xc] - (uint)pbVar11[0xc];
    uVar15 = (uint)*pbStack_13c;
    uVar7 = (int)uVar36 >> 0x1f;
    uVar43 = (uint)pbVar28[0xd] - (uint)pbVar11[0xd];
    uVar42 = pbVar28[4] - uStack_100;
    uVar12 = (int)uVar43 >> 0x1f;
    uVar39 = pbVar28[3] - uStack_f0;
    uVar23 = (int)uVar39 >> 0x1f;
    uVar21 = (uint)pbStack_13c[7];
    uVar45 = (int)uVar42 >> 0x1f;
    uStack_120 = (uint)pbStack_13c[2];
    uVar37 = pbVar28[5] - uStack_124;
    uVar18 = (uint)pbStack_13c[1];
    uVar13 = (int)uVar37 >> 0x1f;
    uVar16 = pbVar28[6] - uStack_12c;
    uVar17 = (int)uVar16 >> 0x1f;
    iStack_e4 = ((uVar44 ^ uVar3) - uVar3) + ((uVar47 ^ uVar4) - uVar4) + ((uVar33 ^ uVar5) - uVar5)
                + ((uVar30 ^ uVar6) - uVar6) + ((uVar48 ^ uVar26) - uVar26) +
                ((uVar35 ^ uVar31) - uVar31) + ((uVar22 ^ uVar9) - uVar9) +
                ((uVar46 ^ uVar20) - uVar20) + iStack_e4;
    iStack_d8 = ((uVar41 ^ uVar25) - uVar25) + ((uVar32 ^ uVar1) - uVar1) +
                ((uVar34 ^ uVar2) - uVar2) + ((uVar40 ^ uVar10) - uVar10) +
                ((uVar38 ^ uVar14) - uVar14) + ((uVar19 ^ uVar8) - uVar8) +
                ((uVar36 ^ uVar7) - uVar7) + ((uVar43 ^ uVar12) - uVar12) + iStack_d8;
    uVar46 = pbVar28[1] - uVar18;
    uVar32 = pbVar28[2] - uStack_120;
    uVar8 = pbVar28[7] - uVar21;
    uVar14 = *pbVar28 - uVar15;
    uVar20 = (int)uVar8 >> 0x1f;
    uVar7 = (uint)pbVar28[9] - (uint)pbStack_13c[9];
    uStack_130 = (uint)pbStack_13c[8];
    uVar25 = (int)uVar14 >> 0x1f;
    uVar12 = (uint)pbVar28[10] - (uint)pbStack_13c[10];
    uVar1 = (int)uVar46 >> 0x1f;
    uVar2 = (int)uVar32 >> 0x1f;
    uVar3 = (int)uVar7 >> 0x1f;
    uVar4 = (int)uVar12 >> 0x1f;
    uVar41 = (uint)pbVar28[0xb] - (uint)pbStack_13c[0xb];
    uVar5 = (int)uVar41 >> 0x1f;
    uVar38 = (uint)pbVar28[0xc] - (uint)pbStack_13c[0xc];
    uVar6 = (int)uVar38 >> 0x1f;
    uVar30 = (uint)pbVar28[0xd] - (uint)pbStack_13c[0xd];
    uVar19 = (uint)pbVar28[0xe] - (uint)pbStack_13c[0xe];
    uVar26 = (int)uVar30 >> 0x1f;
    uVar31 = (int)uVar19 >> 0x1f;
    uVar22 = (uint)pbVar28[0xf] - (uint)pbStack_13c[0xf];
    uVar9 = (int)uVar22 >> 0x1f;
    uVar43 = pbVar28[8] - uStack_130;
    uVar10 = (int)uVar43 >> 0x1f;
    iStack_a4 = ((uVar39 ^ uVar23) - uVar23) + ((uVar42 ^ uVar45) - uVar45) +
                ((uVar37 ^ uVar13) - uVar13) + ((uVar16 ^ uVar17) - uVar17) +
                ((uVar8 ^ uVar20) - uVar20) + ((uVar14 ^ uVar25) - uVar25) +
                ((uVar46 ^ uVar1) - uVar1) + ((uVar32 ^ uVar2) - uVar2) + iStack_a4;
    iStack_a8 = ((uVar7 ^ uVar3) - uVar3) + ((uVar12 ^ uVar4) - uVar4) + ((uVar41 ^ uVar5) - uVar5)
                + ((uVar38 ^ uVar6) - uVar6) + ((uVar30 ^ uVar26) - uVar26) +
                ((uVar19 ^ uVar31) - uVar31) + ((uVar22 ^ uVar9) - uVar9) +
                ((uVar43 ^ uVar10) - uVar10) + iStack_a8;
    param_1 = pbVar28 + param_4;
    lVar49 = lVar49 + -1;
  } while (lVar49 != 0);
  if (in_stack_0000006c == 0) {
    lVar49 = 2;
    iVar24 = (in_stack_00000064[1] >> 1) * in_stack_0000005c + (*in_stack_00000064 >> 1);
    pbVar28 = (byte *)(iVar24 + param_7);
    pbVar11 = (byte *)(iVar24 + param_8);
    uVar18 = (uint)pbVar28[3];
    uVar15 = (uint)pbVar28[2];
    uVar21 = (uint)pbVar28[1];
    uVar20 = (uint)*pbVar28;
    uVar25 = (uint)pbVar28[4];
    do {
      uVar13 = *param_2 - uVar20;
      uVar21 = param_2[1] - uVar21;
      uVar1 = (int)uVar13 >> 0x1f;
      uVar2 = (int)uVar21 >> 0x1f;
      uVar15 = param_2[2] - uVar15;
      uVar3 = (int)uVar15 >> 0x1f;
      uVar18 = param_2[3] - uVar18;
      pbVar29 = pbVar28 + in_stack_0000005c;
      uVar17 = (uint)param_2[5] - (uint)pbVar28[5];
      uVar4 = (int)uVar18 >> 0x1f;
      uVar41 = (uint)param_2[6] - (uint)pbVar28[6];
      uVar38 = (uint)param_2[7] - (uint)pbVar28[7];
      uVar5 = (int)uVar17 >> 0x1f;
      uVar25 = param_2[4] - uVar25;
      uVar6 = (int)uVar41 >> 0x1f;
      uVar7 = (uint)*param_2 - (uint)*pbVar29;
      uVar26 = (int)uVar38 >> 0x1f;
      uVar8 = (uint)param_2[1] - (uint)pbVar29[1];
      uVar31 = (int)uVar25 >> 0x1f;
      uVar20 = (int)uVar7 >> 0x1f;
      uVar9 = (int)uVar8 >> 0x1f;
      uVar23 = (uint)param_2[3] - (uint)pbVar29[3];
      uVar12 = (uint)param_2[2] - (uint)pbVar29[2];
      uVar10 = (int)uVar12 >> 0x1f;
      uVar14 = (int)uVar23 >> 0x1f;
      iStack_b8 = ((uVar7 ^ uVar20) - uVar20) + ((uVar8 ^ uVar9) - uVar9) +
                  ((uVar12 ^ uVar10) - uVar10) + ((uVar23 ^ uVar14) - uVar14) + iStack_b8;
      pbVar27 = param_2 + param_5;
      uVar43 = (uint)param_2[5] - (uint)pbVar29[5];
      uVar32 = (uint)param_2[6] - (uint)pbVar29[6];
      uVar16 = (uint)param_2[7] - (uint)pbVar29[7];
      uVar9 = (int)uVar43 >> 0x1f;
      uVar22 = (uint)param_2[4] - (uint)pbVar29[4];
      pbVar28 = pbVar29 + in_stack_0000005c;
      uVar46 = (uint)*pbVar27 - (uint)*pbVar29;
      uVar10 = (int)uVar32 >> 0x1f;
      uVar14 = (int)uVar16 >> 0x1f;
      uVar8 = (int)uVar22 >> 0x1f;
      uVar30 = (uint)pbVar27[1] - (uint)pbVar29[1];
      uVar7 = (int)uVar46 >> 0x1f;
      uVar45 = (uint)pbVar27[3] - (uint)pbVar29[3];
      uVar12 = (int)uVar30 >> 0x1f;
      uVar23 = (uint)pbVar27[2] - (uint)pbVar29[2];
      uVar20 = (uint)*pbVar28;
      iStack_b4 = ((uVar13 ^ uVar1) - uVar1) + ((uVar21 ^ uVar2) - uVar2) +
                  ((uVar15 ^ uVar3) - uVar3) + ((uVar18 ^ uVar4) - uVar4) + iStack_b4;
      uVar13 = (uint)pbVar27[5] - (uint)pbVar29[5];
      uVar1 = (int)uVar23 >> 0x1f;
      uVar19 = (uint)pbVar27[6] - (uint)pbVar29[6];
      iStack_cc = ((uVar17 ^ uVar5) - uVar5) + ((uVar41 ^ uVar6) - uVar6) +
                  ((uVar38 ^ uVar26) - uVar26) + ((uVar25 ^ uVar31) - uVar31) + iStack_cc;
      uVar25 = (int)uVar45 >> 0x1f;
      uVar26 = (uint)pbVar27[7] - (uint)pbVar29[7];
      uVar2 = (int)uVar13 >> 0x1f;
      uVar3 = (int)uVar19 >> 0x1f;
      uVar21 = (uint)pbVar28[1];
      uVar4 = (int)uVar26 >> 0x1f;
      uVar18 = (uint)pbVar28[3];
      uVar15 = (uint)pbVar28[2];
      uVar31 = (uint)pbVar27[4] - (uint)pbVar29[4];
      uVar5 = (int)uVar31 >> 0x1f;
      iStack_c4 = ((uVar46 ^ uVar7) - uVar7) + ((uVar30 ^ uVar12) - uVar12) +
                  ((uVar23 ^ uVar1) - uVar1) + ((uVar45 ^ uVar25) - uVar25) + iStack_c4;
      uVar12 = *pbVar27 - uVar20;
      uVar1 = (int)uVar12 >> 0x1f;
      uVar7 = pbVar27[1] - uVar21;
      iStack_e0 = ((uVar43 ^ uVar9) - uVar9) + ((uVar32 ^ uVar10) - uVar10) +
                  ((uVar16 ^ uVar14) - uVar14) + ((uVar22 ^ uVar8) - uVar8) + iStack_e0;
      uVar6 = (int)uVar7 >> 0x1f;
      iStack_bc = ((uVar13 ^ uVar2) - uVar2) + ((uVar19 ^ uVar3) - uVar3) +
                  ((uVar26 ^ uVar4) - uVar4) + ((uVar31 ^ uVar5) - uVar5) + iStack_bc;
      uVar25 = (uint)pbVar28[4];
      uVar14 = pbVar27[2] - uVar15;
      uVar45 = pbVar27[3] - uVar18;
      uVar9 = (uint)pbVar27[5] - (uint)pbVar28[5];
      uVar10 = (uint)pbVar27[6] - (uint)pbVar28[6];
      uVar2 = (int)uVar14 >> 0x1f;
      uVar3 = (int)uVar45 >> 0x1f;
      uVar4 = (int)uVar9 >> 0x1f;
      uVar5 = (int)uVar10 >> 0x1f;
      uVar23 = (uint)pbVar27[7] - (uint)pbVar28[7];
      uVar26 = (int)uVar23 >> 0x1f;
      uVar8 = pbVar27[4] - uVar25;
      uVar31 = (int)uVar8 >> 0x1f;
      iStack_b0 = ((uVar9 ^ uVar4) - uVar4) + ((uVar10 ^ uVar5) - uVar5) +
                  ((uVar23 ^ uVar26) - uVar26) + ((uVar8 ^ uVar31) - uVar31) + iStack_b0;
      iStack_d0 = ((uVar12 ^ uVar1) - uVar1) + ((uVar7 ^ uVar6) - uVar6) +
                  ((uVar14 ^ uVar2) - uVar2) + ((uVar45 ^ uVar3) - uVar3) + iStack_d0;
      param_2 = pbVar27 + param_5;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
    lVar49 = 2;
    do {
      uVar13 = *param_2 - uVar20;
      uVar21 = param_2[1] - uVar21;
      uVar1 = (int)uVar13 >> 0x1f;
      uVar2 = (int)uVar21 >> 0x1f;
      uVar15 = param_2[2] - uVar15;
      uVar3 = (int)uVar15 >> 0x1f;
      uVar18 = param_2[3] - uVar18;
      pbVar29 = pbVar28 + in_stack_0000005c;
      uVar17 = (uint)param_2[5] - (uint)pbVar28[5];
      uVar4 = (int)uVar18 >> 0x1f;
      uVar41 = (uint)param_2[6] - (uint)pbVar28[6];
      uVar38 = (uint)param_2[7] - (uint)pbVar28[7];
      uVar5 = (int)uVar17 >> 0x1f;
      uVar25 = param_2[4] - uVar25;
      uVar6 = (int)uVar41 >> 0x1f;
      uVar7 = (uint)*param_2 - (uint)*pbVar29;
      uVar26 = (int)uVar38 >> 0x1f;
      uVar8 = (uint)param_2[1] - (uint)pbVar29[1];
      uVar31 = (int)uVar25 >> 0x1f;
      uVar20 = (int)uVar7 >> 0x1f;
      uVar9 = (int)uVar8 >> 0x1f;
      uVar23 = (uint)param_2[3] - (uint)pbVar29[3];
      uVar12 = (uint)param_2[2] - (uint)pbVar29[2];
      uVar10 = (int)uVar12 >> 0x1f;
      uVar14 = (int)uVar23 >> 0x1f;
      iStack_ac = ((uVar7 ^ uVar20) - uVar20) + ((uVar8 ^ uVar9) - uVar9) +
                  ((uVar12 ^ uVar10) - uVar10) + ((uVar23 ^ uVar14) - uVar14) + iStack_ac;
      pbVar27 = param_2 + param_5;
      uVar43 = (uint)param_2[5] - (uint)pbVar29[5];
      uVar32 = (uint)param_2[6] - (uint)pbVar29[6];
      uVar16 = (uint)param_2[7] - (uint)pbVar29[7];
      uVar9 = (int)uVar43 >> 0x1f;
      uVar22 = (uint)param_2[4] - (uint)pbVar29[4];
      pbVar28 = pbVar29 + in_stack_0000005c;
      uVar46 = (uint)*pbVar27 - (uint)*pbVar29;
      uVar10 = (int)uVar32 >> 0x1f;
      uVar14 = (int)uVar16 >> 0x1f;
      uVar8 = (int)uVar22 >> 0x1f;
      uVar30 = (uint)pbVar27[1] - (uint)pbVar29[1];
      uVar7 = (int)uVar46 >> 0x1f;
      uVar45 = (uint)pbVar27[3] - (uint)pbVar29[3];
      uVar12 = (int)uVar30 >> 0x1f;
      uVar23 = (uint)pbVar27[2] - (uint)pbVar29[2];
      uVar20 = (uint)*pbVar28;
      iStack_dc = ((uVar13 ^ uVar1) - uVar1) + ((uVar21 ^ uVar2) - uVar2) +
                  ((uVar15 ^ uVar3) - uVar3) + ((uVar18 ^ uVar4) - uVar4) + iStack_dc;
      uVar13 = (uint)pbVar27[5] - (uint)pbVar29[5];
      uVar1 = (int)uVar23 >> 0x1f;
      uVar19 = (uint)pbVar27[6] - (uint)pbVar29[6];
      iStack_d4 = ((uVar17 ^ uVar5) - uVar5) + ((uVar41 ^ uVar6) - uVar6) +
                  ((uVar38 ^ uVar26) - uVar26) + ((uVar25 ^ uVar31) - uVar31) + iStack_d4;
      uVar25 = (int)uVar45 >> 0x1f;
      uVar26 = (uint)pbVar27[7] - (uint)pbVar29[7];
      uVar2 = (int)uVar13 >> 0x1f;
      uVar3 = (int)uVar19 >> 0x1f;
      uVar21 = (uint)pbVar28[1];
      uVar4 = (int)uVar26 >> 0x1f;
      uVar18 = (uint)pbVar28[3];
      uVar15 = (uint)pbVar28[2];
      uVar31 = (uint)pbVar27[4] - (uint)pbVar29[4];
      uVar5 = (int)uVar31 >> 0x1f;
      iStack_e4 = ((uVar46 ^ uVar7) - uVar7) + ((uVar30 ^ uVar12) - uVar12) +
                  ((uVar23 ^ uVar1) - uVar1) + ((uVar45 ^ uVar25) - uVar25) + iStack_e4;
      uVar12 = *pbVar27 - uVar20;
      uVar1 = (int)uVar12 >> 0x1f;
      uVar7 = pbVar27[1] - uVar21;
      iStack_c0 = ((uVar43 ^ uVar9) - uVar9) + ((uVar32 ^ uVar10) - uVar10) +
                  ((uVar16 ^ uVar14) - uVar14) + ((uVar22 ^ uVar8) - uVar8) + iStack_c0;
      uVar6 = (int)uVar7 >> 0x1f;
      iStack_d8 = ((uVar13 ^ uVar2) - uVar2) + ((uVar19 ^ uVar3) - uVar3) +
                  ((uVar26 ^ uVar4) - uVar4) + ((uVar31 ^ uVar5) - uVar5) + iStack_d8;
      uVar25 = (uint)pbVar28[4];
      uVar14 = pbVar27[2] - uVar15;
      uVar45 = pbVar27[3] - uVar18;
      uVar9 = (uint)pbVar27[5] - (uint)pbVar28[5];
      uVar10 = (uint)pbVar27[6] - (uint)pbVar28[6];
      uVar2 = (int)uVar14 >> 0x1f;
      uVar3 = (int)uVar45 >> 0x1f;
      uVar4 = (int)uVar9 >> 0x1f;
      uVar5 = (int)uVar10 >> 0x1f;
      uVar23 = (uint)pbVar27[7] - (uint)pbVar28[7];
      uVar26 = (int)uVar23 >> 0x1f;
      uVar8 = pbVar27[4] - uVar25;
      uVar31 = (int)uVar8 >> 0x1f;
      iStack_a8 = ((uVar9 ^ uVar4) - uVar4) + ((uVar10 ^ uVar5) - uVar5) +
                  ((uVar23 ^ uVar26) - uVar26) + ((uVar8 ^ uVar31) - uVar31) + iStack_a8;
      iStack_a4 = ((uVar12 ^ uVar1) - uVar1) + ((uVar7 ^ uVar6) - uVar6) +
                  ((uVar14 ^ uVar2) - uVar2) + ((uVar45 ^ uVar3) - uVar3) + iStack_a4;
      param_2 = pbVar27 + param_5;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
    lVar49 = 2;
    uVar18 = (uint)pbVar11[3];
    uVar15 = (uint)pbVar11[2];
    uVar21 = (uint)pbVar11[1];
    uVar20 = (uint)*pbVar11;
    uVar25 = (uint)pbVar11[4];
    do {
      uVar13 = *param_3 - uVar20;
      uVar21 = param_3[1] - uVar21;
      uVar1 = (int)uVar13 >> 0x1f;
      uVar2 = (int)uVar21 >> 0x1f;
      uVar15 = param_3[2] - uVar15;
      uVar3 = (int)uVar15 >> 0x1f;
      uVar18 = param_3[3] - uVar18;
      pbVar28 = pbVar11 + in_stack_0000005c;
      uVar17 = (uint)param_3[5] - (uint)pbVar11[5];
      uVar4 = (int)uVar18 >> 0x1f;
      uVar41 = (uint)param_3[6] - (uint)pbVar11[6];
      uVar38 = (uint)param_3[7] - (uint)pbVar11[7];
      uVar5 = (int)uVar17 >> 0x1f;
      uVar25 = param_3[4] - uVar25;
      uVar6 = (int)uVar41 >> 0x1f;
      uVar7 = (uint)*param_3 - (uint)*pbVar28;
      uVar26 = (int)uVar38 >> 0x1f;
      uVar8 = (uint)param_3[1] - (uint)pbVar28[1];
      uVar31 = (int)uVar25 >> 0x1f;
      uVar20 = (int)uVar7 >> 0x1f;
      uVar9 = (int)uVar8 >> 0x1f;
      uVar23 = (uint)param_3[3] - (uint)pbVar28[3];
      uVar12 = (uint)param_3[2] - (uint)pbVar28[2];
      uVar10 = (int)uVar12 >> 0x1f;
      uVar14 = (int)uVar23 >> 0x1f;
      iStack_b8 = ((uVar7 ^ uVar20) - uVar20) + ((uVar8 ^ uVar9) - uVar9) +
                  ((uVar12 ^ uVar10) - uVar10) + ((uVar23 ^ uVar14) - uVar14) + iStack_b8;
      pbVar29 = param_3 + param_5;
      uVar43 = (uint)param_3[4] - (uint)pbVar28[4];
      uVar32 = (uint)param_3[5] - (uint)pbVar28[5];
      uVar16 = (uint)param_3[6] - (uint)pbVar28[6];
      uVar9 = (int)uVar43 >> 0x1f;
      uVar22 = (uint)param_3[7] - (uint)pbVar28[7];
      pbVar11 = pbVar28 + in_stack_0000005c;
      uVar46 = (uint)*pbVar29 - (uint)*pbVar28;
      uVar10 = (int)uVar32 >> 0x1f;
      uVar14 = (int)uVar16 >> 0x1f;
      uVar8 = (int)uVar22 >> 0x1f;
      uVar30 = (uint)pbVar29[1] - (uint)pbVar28[1];
      uVar7 = (int)uVar46 >> 0x1f;
      uVar45 = (uint)pbVar29[3] - (uint)pbVar28[3];
      uVar12 = (int)uVar30 >> 0x1f;
      uVar23 = (uint)pbVar29[2] - (uint)pbVar28[2];
      uVar20 = (uint)*pbVar11;
      iStack_b4 = ((uVar13 ^ uVar1) - uVar1) + ((uVar21 ^ uVar2) - uVar2) +
                  ((uVar15 ^ uVar3) - uVar3) + ((uVar18 ^ uVar4) - uVar4) + iStack_b4;
      uVar13 = (uint)pbVar29[4] - (uint)pbVar28[4];
      uVar1 = (int)uVar23 >> 0x1f;
      uVar19 = (uint)pbVar29[5] - (uint)pbVar28[5];
      iStack_cc = ((uVar17 ^ uVar5) - uVar5) + ((uVar41 ^ uVar6) - uVar6) +
                  ((uVar38 ^ uVar26) - uVar26) + ((uVar25 ^ uVar31) - uVar31) + iStack_cc;
      uVar25 = (int)uVar45 >> 0x1f;
      uVar2 = (int)uVar13 >> 0x1f;
      uVar3 = (int)uVar19 >> 0x1f;
      uVar26 = (uint)pbVar29[6] - (uint)pbVar28[6];
      uVar21 = (uint)pbVar11[1];
      uVar4 = (int)uVar26 >> 0x1f;
      uVar18 = (uint)pbVar11[3];
      uVar15 = (uint)pbVar11[2];
      uVar31 = (uint)pbVar29[7] - (uint)pbVar28[7];
      uVar5 = (int)uVar31 >> 0x1f;
      iStack_c4 = ((uVar46 ^ uVar7) - uVar7) + ((uVar30 ^ uVar12) - uVar12) +
                  ((uVar23 ^ uVar1) - uVar1) + ((uVar45 ^ uVar25) - uVar25) + iStack_c4;
      uVar12 = *pbVar29 - uVar20;
      uVar1 = (int)uVar12 >> 0x1f;
      uVar7 = pbVar29[1] - uVar21;
      iStack_e0 = ((uVar43 ^ uVar9) - uVar9) + ((uVar32 ^ uVar10) - uVar10) +
                  ((uVar16 ^ uVar14) - uVar14) + ((uVar22 ^ uVar8) - uVar8) + iStack_e0;
      uVar6 = (int)uVar7 >> 0x1f;
      iStack_bc = ((uVar13 ^ uVar2) - uVar2) + ((uVar19 ^ uVar3) - uVar3) +
                  ((uVar26 ^ uVar4) - uVar4) + ((uVar31 ^ uVar5) - uVar5) + iStack_bc;
      uVar25 = (uint)pbVar11[4];
      uVar14 = pbVar29[2] - uVar15;
      uVar45 = pbVar29[3] - uVar18;
      uVar9 = (uint)pbVar29[5] - (uint)pbVar11[5];
      uVar10 = (uint)pbVar29[6] - (uint)pbVar11[6];
      uVar2 = (int)uVar14 >> 0x1f;
      uVar3 = (int)uVar45 >> 0x1f;
      uVar4 = (int)uVar9 >> 0x1f;
      uVar5 = (int)uVar10 >> 0x1f;
      uVar23 = (uint)pbVar29[7] - (uint)pbVar11[7];
      uVar26 = (int)uVar23 >> 0x1f;
      uVar8 = pbVar29[4] - uVar25;
      uVar31 = (int)uVar8 >> 0x1f;
      iStack_b0 = ((uVar9 ^ uVar4) - uVar4) + ((uVar10 ^ uVar5) - uVar5) +
                  ((uVar23 ^ uVar26) - uVar26) + ((uVar8 ^ uVar31) - uVar31) + iStack_b0;
      iStack_d0 = ((uVar12 ^ uVar1) - uVar1) + ((uVar7 ^ uVar6) - uVar6) +
                  ((uVar14 ^ uVar2) - uVar2) + ((uVar45 ^ uVar3) - uVar3) + iStack_d0;
      param_3 = pbVar29 + param_5;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
    lVar49 = 2;
    do {
      uVar13 = *param_3 - uVar20;
      uVar21 = param_3[1] - uVar21;
      uVar1 = (int)uVar13 >> 0x1f;
      uVar2 = (int)uVar21 >> 0x1f;
      uVar15 = param_3[2] - uVar15;
      uVar3 = (int)uVar15 >> 0x1f;
      uVar18 = param_3[3] - uVar18;
      pbVar28 = pbVar11 + in_stack_0000005c;
      uVar17 = (uint)param_3[5] - (uint)pbVar11[5];
      uVar4 = (int)uVar18 >> 0x1f;
      uVar41 = (uint)param_3[6] - (uint)pbVar11[6];
      uVar38 = (uint)param_3[7] - (uint)pbVar11[7];
      uVar5 = (int)uVar17 >> 0x1f;
      uVar25 = param_3[4] - uVar25;
      uVar6 = (int)uVar41 >> 0x1f;
      uVar7 = (uint)*param_3 - (uint)*pbVar28;
      uVar26 = (int)uVar38 >> 0x1f;
      uVar8 = (uint)param_3[1] - (uint)pbVar28[1];
      uVar31 = (int)uVar25 >> 0x1f;
      uVar20 = (int)uVar7 >> 0x1f;
      uVar9 = (int)uVar8 >> 0x1f;
      uVar23 = (uint)param_3[3] - (uint)pbVar28[3];
      uVar12 = (uint)param_3[2] - (uint)pbVar28[2];
      uVar10 = (int)uVar12 >> 0x1f;
      uVar14 = (int)uVar23 >> 0x1f;
      iStack_ac = ((uVar7 ^ uVar20) - uVar20) + ((uVar8 ^ uVar9) - uVar9) +
                  ((uVar12 ^ uVar10) - uVar10) + ((uVar23 ^ uVar14) - uVar14) + iStack_ac;
      pbVar29 = param_3 + param_5;
      uVar43 = (uint)param_3[4] - (uint)pbVar28[4];
      uVar32 = (uint)param_3[5] - (uint)pbVar28[5];
      uVar16 = (uint)param_3[6] - (uint)pbVar28[6];
      uVar9 = (int)uVar43 >> 0x1f;
      uVar46 = (uint)*pbVar29 - (uint)*pbVar28;
      pbVar11 = pbVar28 + in_stack_0000005c;
      uVar22 = (uint)param_3[7] - (uint)pbVar28[7];
      uVar10 = (int)uVar32 >> 0x1f;
      uVar14 = (int)uVar16 >> 0x1f;
      uVar8 = (int)uVar22 >> 0x1f;
      uVar30 = (uint)pbVar29[1] - (uint)pbVar28[1];
      uVar7 = (int)uVar46 >> 0x1f;
      uVar45 = (uint)pbVar29[3] - (uint)pbVar28[3];
      uVar12 = (int)uVar30 >> 0x1f;
      uVar23 = (uint)pbVar29[2] - (uint)pbVar28[2];
      uVar20 = (uint)*pbVar11;
      iStack_dc = ((uVar13 ^ uVar1) - uVar1) + ((uVar21 ^ uVar2) - uVar2) +
                  ((uVar15 ^ uVar3) - uVar3) + ((uVar18 ^ uVar4) - uVar4) + iStack_dc;
      uVar13 = (uint)pbVar29[4] - (uint)pbVar28[4];
      uVar1 = (int)uVar23 >> 0x1f;
      uVar19 = (uint)pbVar29[5] - (uint)pbVar28[5];
      iStack_d4 = ((uVar17 ^ uVar5) - uVar5) + ((uVar41 ^ uVar6) - uVar6) +
                  ((uVar38 ^ uVar26) - uVar26) + ((uVar25 ^ uVar31) - uVar31) + iStack_d4;
      uVar25 = (int)uVar45 >> 0x1f;
      uVar2 = (int)uVar13 >> 0x1f;
      uVar3 = (int)uVar19 >> 0x1f;
      uVar26 = (uint)pbVar29[6] - (uint)pbVar28[6];
      uVar21 = (uint)pbVar11[1];
      uVar4 = (int)uVar26 >> 0x1f;
      uVar18 = (uint)pbVar11[3];
      uVar31 = (uint)pbVar29[7] - (uint)pbVar28[7];
      uVar15 = (uint)pbVar11[2];
      uVar5 = (int)uVar31 >> 0x1f;
      iStack_e4 = ((uVar46 ^ uVar7) - uVar7) + ((uVar30 ^ uVar12) - uVar12) +
                  ((uVar23 ^ uVar1) - uVar1) + ((uVar45 ^ uVar25) - uVar25) + iStack_e4;
      uVar7 = *pbVar29 - uVar20;
      uVar45 = pbVar29[1] - uVar21;
      uVar1 = (int)uVar7 >> 0x1f;
      iStack_c0 = ((uVar43 ^ uVar9) - uVar9) + ((uVar32 ^ uVar10) - uVar10) +
                  ((uVar16 ^ uVar14) - uVar14) + ((uVar22 ^ uVar8) - uVar8) + iStack_c0;
      uVar6 = (int)uVar45 >> 0x1f;
      iStack_d8 = ((uVar13 ^ uVar2) - uVar2) + ((uVar19 ^ uVar3) - uVar3) +
                  ((uVar26 ^ uVar4) - uVar4) + ((uVar31 ^ uVar5) - uVar5) + iStack_d8;
      uVar25 = (uint)pbVar11[4];
      uVar14 = pbVar29[2] - uVar15;
      uVar12 = pbVar29[3] - uVar18;
      uVar10 = (uint)pbVar29[5] - (uint)pbVar11[5];
      uVar9 = (uint)pbVar29[6] - (uint)pbVar11[6];
      uVar2 = (int)uVar14 >> 0x1f;
      uVar3 = (int)uVar12 >> 0x1f;
      uVar4 = (int)uVar10 >> 0x1f;
      uVar5 = (int)uVar9 >> 0x1f;
      uVar23 = (uint)pbVar29[7] - (uint)pbVar11[7];
      uVar26 = (int)uVar23 >> 0x1f;
      uVar8 = pbVar29[4] - uVar25;
      uVar31 = (int)uVar8 >> 0x1f;
      iStack_a8 = ((uVar10 ^ uVar4) - uVar4) + ((uVar9 ^ uVar5) - uVar5) +
                  ((uVar23 ^ uVar26) - uVar26) + ((uVar8 ^ uVar31) - uVar31) + iStack_a8;
      iStack_a4 = ((uVar7 ^ uVar1) - uVar1) + ((uVar45 ^ uVar6) - uVar6) +
                  ((uVar14 ^ uVar2) - uVar2) + ((uVar12 ^ uVar3) - uVar3) + iStack_a4;
      param_3 = pbVar29 + param_5;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
  }
  in_stack_00000064[5] = iStack_d8 + iStack_d4;
  in_stack_00000064[4] = iStack_e4 + iStack_dc;
  in_stack_00000064[3] = iStack_bc + iStack_cc;
  in_stack_00000064[7] = iStack_dc + iStack_b4;
  in_stack_00000064[8] = iStack_d4 + iStack_cc;
  in_stack_00000064[9] = iStack_e4 + iStack_c4;
  in_stack_00000064[10] = iStack_d8 + iStack_bc;
  in_stack_00000064[2] = iStack_c4 + iStack_b4;
  in_stack_00000064[0xb] = iStack_ac + iStack_b8;
  in_stack_00000064[0xc] = iStack_c0 + iStack_e0;
  in_stack_00000064[0xd] = iStack_a4 + iStack_d0;
  in_stack_00000064[0xe] = iStack_a8 + iStack_b0;
  in_stack_00000064[0xf] = iStack_d4 + iStack_cc + iStack_dc + iStack_b4;
  in_stack_00000064[6] =
       iStack_d8 + iStack_d4 + iStack_e4 + iStack_dc + iStack_bc + iStack_cc + iStack_c4 + iStack_b4
  ;
  in_stack_00000064[0x10] = iStack_d8 + iStack_bc + iStack_e4 + iStack_c4;
  in_stack_00000064[0x11] = iStack_c0 + iStack_e0 + iStack_ac + iStack_b8;
  in_stack_00000064[0x12] = iStack_a8 + iStack_b0 + iStack_a4 + iStack_d0;
  return;
}

