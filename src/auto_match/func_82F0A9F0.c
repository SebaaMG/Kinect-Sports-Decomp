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
extern unsigned int *auStack_220;
extern unsigned int *auStack_2a0;
extern int fn_82F09EE0();
extern unsigned int lbl_8200D8DC;
extern unsigned int uStack_2a2;


void fn_82F0A9F0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  byte *pbVar15;
  short *psVar16;
  float fVar17;
  ushort *puVar18;
  float *pfVar19;
  byte *pbVar20;
  short *psVar21;
  longlong lVar22;
  ushort uStack_2a2;
  undefined1 auStack_2a0 [126];
  short sStack_222;
  undefined1 auStack_220 [544];
  
  puVar18 = &uStack_2a2;
  pbVar20 = (byte *)(param_1 + 2);
  lVar22 = 8;
  do {
    pbVar15 = pbVar20 + -2;
    bVar1 = pbVar20[-1];
    bVar2 = *pbVar20;
    bVar3 = pbVar20[1];
    bVar4 = pbVar20[2];
    bVar5 = pbVar20[3];
    bVar6 = pbVar20[4];
    bVar7 = pbVar20[5];
    pbVar20 = pbVar20 + param_2;
    puVar18[1] = (ushort)*pbVar15;
    puVar18[2] = (ushort)bVar1;
    puVar18[3] = (ushort)bVar2;
    puVar18[4] = (ushort)bVar3;
    puVar18[5] = (ushort)bVar4;
    puVar18[6] = (ushort)bVar5;
    puVar18[7] = (ushort)bVar6;
    puVar18 = puVar18 + 8;
    *puVar18 = (ushort)bVar7;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  fn_82F09EE0(auStack_2a0,8,auStack_220,0);
  fVar17 = lbl_8200D8DC;
  psVar21 = &sStack_222;
  pfVar19 = (float *)(param_3 + -4);
  lVar22 = 8;
  do {
    sVar8 = psVar21[1];
    sVar9 = psVar21[4];
    sVar10 = psVar21[5];
    sVar11 = psVar21[6];
    sVar12 = psVar21[2];
    psVar16 = psVar21 + 3;
    sVar13 = psVar21[7];
    psVar21 = psVar21 + 8;
    sVar14 = *psVar21;
    pfVar19[3] = (float)(longlong)*psVar16 * fVar17;
    pfVar19[2] = (float)(longlong)sVar12 * fVar17;
    pfVar19[1] = (float)(longlong)sVar8 * fVar17;
    pfVar19[4] = (float)(longlong)sVar9 * fVar17;
    pfVar19[5] = (float)(longlong)sVar10 * fVar17;
    pfVar19[6] = (float)(longlong)sVar11 * fVar17;
    pfVar19[7] = (float)(longlong)sVar13 * fVar17;
    pfVar19 = pfVar19 + 8;
    *pfVar19 = (float)(longlong)sVar14 * fVar17;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  return;
}

