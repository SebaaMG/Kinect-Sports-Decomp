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
extern int fn_8265C9E0();
extern int memcpy();
extern int memset();
extern unsigned int lbl_82005328;
extern unsigned int lbl_820DC748;
extern unsigned int lbl_8316E320;
extern unsigned int lbl_8316E3A0;


undefined4 * fn_82B8F788(undefined4 *param_1,undefined4 *param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  int *piVar13;
  
  *param_1 = &lbl_820DC748;
  piVar13 = param_1 + 0xf;
  param_1[8] = *param_2;
  param_1[1] = param_2[1] & 0xfffffeff;
  param_1[0x18] = param_2[2];
  param_1[0x19] = param_2[3];
  memcpy(piVar13,param_2 + 10,0x18);
  if (param_2[0x10] == 0) {
    puVar12 = &lbl_8316E320;
  }
  else {
    puVar12 = &lbl_8316E3A0;
  }
  param_1[0xd] = puVar12;
  param_1[2] = param_4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  iVar11 = (int)((param_3 & 0xffffffff) >> 3);
  param_1[0x1e] = iVar11;
  param_1[3] = (uint)(param_3 != 0);
  iVar1 = param_2[0x13];
  param_1[6] = iVar1;
  param_1[7] = 0;
  param_1[0xe] = 0;
  param_1[4] = param_2[0x12];
  param_1[5] = 0;
  if (iVar1 != 0) {
    uVar2 = param_2[0x13];
    fVar5 = (float)(uVar2 >> 8 & 0xff) * lbl_82005328;
    fVar6 = (float)(uVar2 >> 0x10 & 0xff) * lbl_82005328;
    fVar7 = (float)(uVar2 >> 0x18) * lbl_82005328;
    param_1[0xb] = (float)(uVar2 & 0xff) * lbl_82005328;
    param_1[0xc] = fVar7;
    param_1[9] = fVar6;
    param_1[10] = fVar5;
  }
  if ((param_4 == 2) && (param_1[1] != 0x2a200b45)) {
    param_1[4] = 0;
  }
  if (param_4 == 3) {
    param_1[4] = 0;
  }
  iVar1 = *piVar13;
  iVar3 = param_1[0x10];
  iVar10 = param_1[0x11] - iVar1;
  iVar4 = param_1[0x13];
  param_1[0x1a] = iVar10;
  param_1[0x1b] = param_1[0x12] - iVar3;
  param_1[0x1d] = iVar10 * iVar11;
  param_1[0x1c] = param_1[0x14] - iVar4;
  if ((param_3 != 0) != 0) {
    param_1[0x11] = param_1[0x1a];
    *piVar13 = 0;
    param_1[0x10] = 0;
    param_1[0x12] = param_1[0x1b];
    param_1[0x13] = 0;
    param_1[0x14] = param_1[0x1c];
    param_1[8] = iVar1 * iVar11 + iVar4 * param_1[0x19] + iVar3 * param_1[0x18] + param_1[8];
  }
  if (param_2[0x11] != 0) {
    lVar8 = ((ulonglong)(param_1[0x1a] + 2) & 0xfffffff) << 4;
    if (0xfffffff < param_1[0x1a] + 2) {
      lVar8 = -1;
    }
    uVar9 = fn_8265C9E0(lVar8);
    param_1[0x17] = (int)uVar9;
                    /* WARNING: Subroutine does not return */
    memset(uVar9,0,((ulonglong)(uint)param_1[0x1a] + 2 & 0xfffffff) << 4);
  }
  param_1[0x17] = 0;
  return param_1;
}

