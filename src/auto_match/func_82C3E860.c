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
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int iStack_e4;


int fn_82C3E860(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  
  iVar14 = 0;
  iVar5 = 0;
  iVar15 = 0;
  psVar8 = *(short **)(param_1 + 0x30);
  psVar7 = (short *)(*(int *)(param_1 + 0x20) * 2 + *(int *)(param_1 + 0x24));
  iVar4 = 0;
  iStack_d4 = 0;
  iVar1 = 0;
  iStack_c4 = 0;
  iVar12 = 0;
  iStack_d8 = 0;
  iVar2 = 0;
  iStack_c8 = 0;
  iVar13 = 0;
  iStack_e0 = 0;
  iStack_dc = 0;
  iStack_e4 = 0;
  iStack_d0 = 0;
  iVar6 = 0;
  iStack_cc = 0;
  if (1 < *(int *)(param_1 + 4)) {
    do {
      iVar2 = (int)psVar7[1] * (int)psVar8[1] + (int)*psVar7 * (int)*psVar8 + iStack_e4;
      iVar1 = (int)psVar7[3] * (int)psVar8[3] + (int)psVar7[2] * (int)psVar8[2] + iStack_e0;
      iVar12 = (int)psVar7[0xb] * (int)psVar8[0xb] + (int)psVar7[10] * (int)psVar8[10] + iStack_dc;
      iVar15 = (int)psVar7[5] * (int)psVar8[5] + (int)psVar7[4] * (int)psVar8[4] + iStack_d8;
      iVar14 = (int)psVar7[7] * (int)psVar8[7] + (int)psVar7[6] * (int)psVar8[6] + iStack_d4;
      iVar13 = (int)psVar7[9] * (int)psVar8[9] + (int)psVar7[8] * (int)psVar8[8] + iStack_d0;
      iVar6 = iStack_cc + 2;
      iVar4 = (int)psVar7[0xd] * (int)psVar8[0xd] + (int)psVar7[0xc] * (int)psVar8[0xc] + iStack_c8;
      iVar5 = (int)psVar7[0xf] * (int)psVar8[0xf] + (int)psVar7[0xe] * (int)psVar8[0xe] + iStack_c4;
      psVar7 = psVar7 + 0x10;
      psVar8 = psVar8 + 0x10;
      iStack_e4 = iVar2;
      iStack_e0 = iVar1;
      iStack_dc = iVar12;
      iStack_d8 = iVar15;
      iStack_d4 = iVar14;
      iStack_d0 = iVar13;
      iStack_cc = iVar6;
      iStack_c8 = iVar4;
      iStack_c4 = iVar5;
    } while (iVar6 < *(int *)(param_1 + 4) + -1);
  }
  iVar9 = 0;
  iVar10 = 0;
  iVar11 = 0;
  iVar3 = 0;
  if (iVar6 < *(int *)(param_1 + 4)) {
    iVar11 = (int)psVar7[3] * (int)psVar8[3] + (int)psVar7[2] * (int)psVar8[2];
    iVar3 = (int)psVar7[1] * (int)psVar8[1] + (int)*psVar7 * (int)*psVar8;
    iVar10 = (int)psVar7[5] * (int)psVar8[5] + (int)psVar7[4] * (int)psVar8[4];
    iVar9 = (int)psVar7[7] * (int)psVar8[7] + (int)psVar7[6] * (int)psVar8[6];
  }
  return *(int *)(param_1 + 0x18) + iVar5 + iVar4 + iVar12 + iVar13 + iVar14 + iVar15 + iVar1 +
         iVar2 + iVar9 + iVar10 + iVar11 + iVar3 >> (*(uint *)(param_1 + 0x14) & 0x3f);
}

