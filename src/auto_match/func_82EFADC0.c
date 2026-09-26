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
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8324D7A4;


void fn_82EFADC0(byte *param_1,int param_2,byte *param_3,int param_4,int *param_5,int *param_6)

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
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  longlong lVar15;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  
  iVar12 = 0;
  iStack_b0 = 0;
  lbl_8324D7A4 = lbl_8324D7A4 + lbl_82005344;
  iStack_a8 = 0;
  lVar15 = 2;
  iStack_ac = 0;
  do {
    uVar1 = (int)((uint)param_1[3] - (uint)param_3[3]) >> 0x1f;
    uVar2 = (int)((uint)param_1[2] - (uint)param_3[2]) >> 0x1f;
    uVar3 = (int)((uint)param_1[1] - (uint)param_3[1]) >> 0x1f;
    uVar4 = (int)((uint)*param_1 - (uint)*param_3) >> 0x1f;
    pbVar13 = param_3 + param_4;
    pbVar14 = param_1 + param_2;
    uVar5 = (int)((uint)param_1[7] - (uint)param_3[7]) >> 0x1f;
    uVar6 = (int)((uint)param_1[6] - (uint)param_3[6]) >> 0x1f;
    uVar7 = (int)((uint)param_1[5] - (uint)param_3[5]) >> 0x1f;
    uVar8 = (int)((uint)param_1[4] - (uint)param_3[4]) >> 0x1f;
    uVar9 = (int)((uint)pbVar14[3] - (uint)pbVar13[3]) >> 0x1f;
    uVar10 = (int)((uint)pbVar14[2] - (uint)pbVar13[2]) >> 0x1f;
    uVar11 = (int)((uint)pbVar14[1] - (uint)pbVar13[1]) >> 0x1f;
    iStack_b0 = (((uint)param_1[7] - (uint)param_3[7] ^ uVar5) - uVar5) +
                (((uint)param_1[6] - (uint)param_3[6] ^ uVar6) - uVar6) +
                (((uint)param_1[5] - (uint)param_3[5] ^ uVar7) - uVar7) +
                (((uint)param_1[4] - (uint)param_3[4] ^ uVar8) - uVar8) + iStack_b0;
    iVar12 = (((uint)param_1[3] - (uint)param_3[3] ^ uVar1) - uVar1) +
             (((uint)param_1[2] - (uint)param_3[2] ^ uVar2) - uVar2) +
             (((uint)param_1[1] - (uint)param_3[1] ^ uVar3) - uVar3) +
             (((uint)*param_1 - (uint)*param_3 ^ uVar4) - uVar4) + iVar12;
    uVar1 = (int)((uint)*pbVar14 - (uint)*pbVar13) >> 0x1f;
    uVar2 = (int)((uint)pbVar14[7] - (uint)pbVar13[7]) >> 0x1f;
    uVar3 = (int)((uint)pbVar14[6] - (uint)pbVar13[6]) >> 0x1f;
    uVar4 = (int)((uint)pbVar14[5] - (uint)pbVar13[5]) >> 0x1f;
    uVar5 = (int)((uint)pbVar14[4] - (uint)pbVar13[4]) >> 0x1f;
    iStack_ac = (((uint)pbVar14[7] - (uint)pbVar13[7] ^ uVar2) - uVar2) +
                (((uint)pbVar14[6] - (uint)pbVar13[6] ^ uVar3) - uVar3) +
                (((uint)pbVar14[5] - (uint)pbVar13[5] ^ uVar4) - uVar4) +
                (((uint)pbVar14[4] - (uint)pbVar13[4] ^ uVar5) - uVar5) + iStack_ac;
    iStack_a8 = (((uint)pbVar14[3] - (uint)pbVar13[3] ^ uVar9) - uVar9) +
                (((uint)pbVar14[2] - (uint)pbVar13[2] ^ uVar10) - uVar10) +
                (((uint)pbVar14[1] - (uint)pbVar13[1] ^ uVar11) - uVar11) +
                (((uint)*pbVar14 - (uint)*pbVar13 ^ uVar1) - uVar1) + iStack_a8;
    param_1 = pbVar14 + param_2;
    param_3 = pbVar13 + param_4;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  *param_5 = iStack_a8 + iVar12;
  *param_6 = iStack_ac + iStack_b0;
  return;
}

