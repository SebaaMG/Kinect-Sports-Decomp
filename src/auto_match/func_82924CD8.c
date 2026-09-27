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
extern int fn_8265C940();
extern int memcpy();
extern int memset();
extern unsigned int lbl_82005328;
extern unsigned int lbl_8202EE2C;
extern unsigned int lbl_8315AA38;
extern unsigned int lbl_8315AAB8;


undefined4 *
fn_82924CD8(undefined4 *param_1,undefined4 *param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  ulonglong uVar6;
  int iVar7;
  undefined *puVar8;
  int *piVar9;
  
  *param_1 = &lbl_8202EE2C;
  piVar9 = param_1 + 0xf;
  param_1[8] = *param_2;
  param_1[1] = param_2[1] & 0xfffffeff;
  param_1[0x18] = param_2[2];
  param_1[0x19] = param_2[3];
  memcpy(piVar9,param_2 + 10,0x18);
  if (param_2[0x10] == 0) {
    puVar8 = &lbl_8315AA38;
  }
  else {
    puVar8 = &lbl_8315AAB8;
  }
  param_1[0xd] = puVar8;
  param_1[2] = param_4;
  param_1[0x1e] = (uint)param_3 >> 3;
  param_1[0x16] = 0;
  param_1[3] = (uint)(param_3 != 0);
  param_1[0x15] = 0;
  iVar1 = param_2[0x13];
  param_1[6] = iVar1;
  param_1[0xe] = 0;
  param_1[7] = 0;
  param_1[4] = param_2[0x12];
  param_1[5] = 0;
  fVar5 = lbl_82005328;
  if (iVar1 != 0) {
    uVar2 = param_2[0x13];
    param_1[10] = (float)(uVar2 >> 8 & 0xff) * lbl_82005328;
    param_1[0xb] = (float)(uVar2 & 0xff) * fVar5;
    param_1[9] = (float)(uVar2 >> 0x10 & 0xff) * fVar5;
    param_1[0xc] = (float)(uVar2 >> 0x18) * fVar5;
  }
  if ((param_1[2] == 2) && ((param_1[1] & 0xfffffe3f) != 0x2a200a05)) {
    param_1[4] = 0;
  }
  if (param_1[2] == 3) {
    param_1[4] = 0;
  }
  iVar1 = *piVar9;
  iVar7 = param_1[0x11] - iVar1;
  iVar3 = param_1[0x10];
  iVar4 = param_1[0x13];
  param_1[0x1a] = iVar7;
  param_1[0x1d] = param_1[0x1e] * iVar7;
  param_1[0x1b] = param_1[0x12] - iVar3;
  param_1[0x1c] = param_1[0x14] - iVar4;
  if (param_1[3] != 0) {
    param_1[0x11] = param_1[0x1a];
    *piVar9 = 0;
    param_1[0x10] = 0;
    param_1[0x12] = param_1[0x1b];
    param_1[0x13] = 0;
    param_1[0x14] = param_1[0x1c];
    param_1[8] = iVar4 * param_1[0x19] + iVar3 * param_1[0x18] + param_1[0x1e] * iVar1 + param_1[8];
  }
  if (param_2[0x11] == 0) {
    param_1[0x17] = 0;
  }
  else {
    uVar6 = fn_8265C940(((ulonglong)(uint)param_1[0x1a] + 2 & 0xfffffff) << 4,0x24810000);
    param_1[0x17] = (int)uVar6;
    if ((uVar6 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(uVar6,0,((ulonglong)(uint)param_1[0x1a] + 2 & 0xfffffff) << 4);
    }
  }
  return param_1;
}

