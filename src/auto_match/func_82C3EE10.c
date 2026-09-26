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
extern unsigned int iStack_100;
extern unsigned int iStack_dc;
extern unsigned int iStack_e4;
extern unsigned int iStack_e8;
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int iStack_f4;
extern unsigned int iStack_f8;
extern unsigned int iStack_fc;


int fn_82C3EE10(int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_dc;
  
  iVar7 = 0;
  iVar16 = 0;
  iVar2 = *(int *)(param_1 + 4);
  psVar11 = *(short **)(param_1 + 0x30);
  iVar6 = 0;
  piVar10 = (int *)(*(int *)(param_1 + 0x20) * 4 + *(int *)(param_1 + 0x24));
  iVar17 = 0;
  iStack_f4 = 0;
  iVar5 = 0;
  iStack_e4 = 0;
  iVar18 = 0;
  iStack_f8 = 0;
  iVar4 = 0;
  iVar8 = 0;
  iStack_e8 = 0;
  iStack_fc = 0;
  iStack_ec = 0;
  iStack_100 = 0;
  iVar9 = 0;
  iStack_f0 = 0;
  iStack_dc = 0;
  if (1 < iVar2) {
    do {
      sVar1 = *psVar11;
      psVar3 = psVar11 + 4;
      iVar17 = (int)psVar11[0xe] * piVar10[0xe] + (int)psVar11[10] * piVar10[10] + iStack_e8;
      iVar18 = (int)psVar11[0xd] * piVar10[0xd] + (int)psVar11[9] * piVar10[9] + iStack_ec;
      iVar16 = (int)psVar11[0xf] * piVar10[0xf] + (int)psVar11[0xb] * piVar10[0xb] + iStack_e4;
      iVar5 = (int)psVar11[5] * piVar10[5] + (int)psVar11[1] * piVar10[1] + iStack_fc;
      iVar8 = (int)psVar11[0xc] * piVar10[0xc] + (int)psVar11[8] * piVar10[8] + iStack_f0;
      iVar6 = (int)psVar11[6] * piVar10[6] + (int)psVar11[2] * piVar10[2] + iStack_f8;
      iVar7 = (int)psVar11[7] * piVar10[7] + (int)psVar11[3] * piVar10[3] + iStack_f4;
      psVar11 = psVar11 + 0x10;
      iVar9 = iStack_dc + 2;
      iVar4 = (int)*psVar3 * piVar10[4] + (int)sVar1 * *piVar10 + iStack_100;
      piVar10 = piVar10 + 0x10;
      iStack_100 = iVar4;
      iStack_fc = iVar5;
      iStack_f8 = iVar6;
      iStack_f4 = iVar7;
      iStack_f0 = iVar8;
      iStack_ec = iVar18;
      iStack_e8 = iVar17;
      iStack_e4 = iVar16;
      iStack_dc = iVar9;
    } while (iVar9 < iVar2 + -1);
  }
  iVar12 = 0;
  iVar13 = 0;
  iVar15 = 0;
  iVar14 = 0;
  if (iVar9 < iVar2) {
    iVar14 = (int)psVar11[5] * piVar10[5] + (int)psVar11[1] * piVar10[1];
    iVar15 = (int)psVar11[4] * piVar10[4] + (int)*psVar11 * *piVar10;
    iVar13 = (int)psVar11[6] * piVar10[6] + (int)psVar11[2] * piVar10[2];
    iVar12 = (int)psVar11[7] * piVar10[7] + (int)psVar11[3] * piVar10[3];
  }
  return *(int *)(param_1 + 0x18) + iVar16 + iVar17 + iVar18 + iVar8 + iVar7 + iVar6 + iVar5 + iVar4
         + iVar12 + iVar13 + iVar14 + iVar15 >> (*(uint *)(param_1 + 0x14) & 0x3f);
}

