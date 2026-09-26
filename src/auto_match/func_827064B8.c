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
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_8268CC00();
extern int fn_826933E8();
extern int fn_826AE490();
extern int fn_826BC870();
extern int fn_826DA948();
extern int fn_8270EE10();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82005928;
extern unsigned int lbl_8200DBB8;
extern unsigned int lbl_8200DBFC;
extern unsigned int lbl_8200DC10;
extern unsigned int lbl_8200DE20;
extern unsigned int lbl_8200DE58;
extern unsigned int lbl_8200DE70;
extern unsigned int lbl_821AAD20;


undefined4 * fn_827064B8(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  
  param_1[1] = 1;
  param_1[2] = &lbl_82005928;
  *param_1 = &lbl_8200DE70;
  param_1[2] = &lbl_8200DE58;
  param_1[5] = param_2;
  fn_826AE490(param_1 + 6);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = param_1 + 0x1c;
  fVar3 = lbl_82002AE0;
  dVar11 = (double)lbl_82002AE0;
  param_1[0x1d] = param_1 + 0x1c;
  param_1[0x29] = fVar3;
  param_1[0x28] = fVar3;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  fVar4 = lbl_821AAD20;
  dVar12 = (double)lbl_821AAD20;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 1;
  param_1[0x22] = 1;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = fVar3;
  param_1[0x32] = fVar4;
  param_1[0x33] = fVar4;
  param_1[0x34] = fVar4;
  param_1[0x35] = fVar4;
  param_1[0x36] = fVar4;
  param_1[0x37] = fVar4;
  param_1[0x38] = fVar4;
  param_1[0x39] = fVar4;
  fn_8268CC00(param_1 + 0x3a);
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  pbVar9 = (byte *)(param_1 + 0x250);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  lVar10 = 4;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x245] = 0;
  param_1[0x246] = 0;
  param_1[0x24f] = 0;
  *(undefined1 *)((int)param_1 + 0x941) = 0;
  *(undefined1 *)((int)param_1 + 0x942) = 0;
  *(undefined1 *)((int)param_1 + 0x943) = 0;
  *(undefined1 *)(param_1 + 0x250) = 0xff;
  do {
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
    pbVar9[8] = 0;
    pbVar9[9] = 0;
    pbVar9[10] = 0;
    pbVar9[0xb] = 0;
    pbVar9[0xc] = 0;
    pbVar9[0xd] = 0;
    pbVar9[0xe] = 0;
    pbVar9[0xf] = 0;
    *(float *)(pbVar9 + 0x1c) = (float)dVar12;
    pbVar2 = pbVar9 + 0x24;
    *(float *)(pbVar9 + 0x18) = (float)dVar12;
    pbVar9[0x20] = 0;
    pbVar9[0x21] = 0;
    pbVar9[0x22] = 0;
    pbVar9[0x23] = 0;
    pbVar9[0x14] = 0;
    pbVar9[0x15] = 0;
    pbVar9[0x16] = 0;
    pbVar9[0x17] = 0;
    pbVar9[0x10] = 0;
    pbVar9[0x11] = 0;
    pbVar9[0x12] = 0;
    pbVar9[0x13] = 0;
    pbVar9 = pbVar9 + 0x24;
    *pbVar9 = *pbVar2 & 7;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  puVar8 = param_1 + 0x288;
  *(undefined1 *)(param_1 + 0x27c) = 0;
  param_1[0x282] = 0;
  lVar10 = 6;
  *(undefined1 *)(param_1 + 0x283) = 0;
  *(undefined1 *)((int)param_1 + 0xa0d) = 0;
  param_1[0x285] = (float)dVar12;
  param_1[0x284] = (float)dVar12;
  param_1[0x28a] = 0;
  param_1[0x287] = (float)dVar12;
  param_1[0x286] = (float)dVar12;
  param_1[0x289] = (float)dVar12;
  param_1[0x288] = (float)dVar12;
  do {
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8 = puVar8 + 3;
    *puVar8 = 0;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  param_1[0x2a2] = param_2;
  param_1[0x29d] = 1;
  param_1[0x29e] = 0;
  param_1[0x2a1] = 1;
  param_1[0x29f] = 1;
  param_1[0x2a0] = 0;
  uVar6 = lbl_82002C28;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  param_1[0x2a8] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2af] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2b3] = 0;
  param_1[0x2b4] = 0;
  param_1[0x2b5] = 0;
  param_1[0x2b9] = (float)dVar12;
  param_1[0x2b6] = 0;
  param_1[0x2ba] = (float)dVar12;
  param_1[699] = (float)dVar12;
  param_1[0x2b7] = 0;
  param_1[700] = (float)dVar12;
  param_1[0x2c0] = 0;
  param_1[0x2c7] = uVar6;
  param_1[0x2c2] = &lbl_8200DBB8;
  param_1[0x2c3] = 0;
  uVar6 = lbl_8200DE20;
  param_1[0x2c4] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c6] = 0;
  *(undefined8 *)(param_1 + 0x2cc) = 0;
  *(undefined8 *)(param_1 + 0x2ce) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d2) = 0;
  *(undefined8 *)(param_1 + 0x2d4) = 0;
  *(undefined8 *)(param_1 + 0x2d6) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2da) = 0;
  *(undefined8 *)(param_1 + 0x2dc) = 0;
  param_1[0x2de] = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  param_1[0x2e2] = 0;
  param_1[0x2e3] = 0;
  uVar1 = param_1[0x2c0];
  param_1[0x2c0] = uVar1 | 0x80;
  param_1[0x2c0] = uVar1 | 0x40080;
  param_1[0x2c0] = uVar1 | 0x40180;
  param_1[0x4e] = (float)dVar12;
  param_1[0x4f] = uVar6;
  param_1[0x2bf] = 0;
  param_1[0x2be] = 0;
  param_1[0x2bd] = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x50] = 0;
  param_1[0x2c8] = 0;
  param_1[0x2ca] = 0;
  uVar5 = fn_8267B890(param_1[5],0x38,0);
  if ((uVar5 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_826DA948(uVar5,0);
  }
  if (param_1[0x40] != 0) {
    fn_8267C4F0();
  }
  param_1[0x40] = uVar6;
  param_1[0x277] = 0;
  iVar7 = fn_8267B890(param_1[5],0x678,0);
  if (iVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_8270EE10();
  }
  if (param_1[0x278] != 0) {
    fn_8267C498();
  }
  param_1[0x278] = uVar6;
  uVar5 = fn_8267B890(param_1[5],0x2ac,0);
  if ((uVar5 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_826BC870(uVar5,param_1);
  }
  if (param_1[0x279] != 0) {
    fn_8267C498();
  }
  param_1[0x279] = uVar6;
  puVar8 = (undefined4 *)fn_8267B890(param_1[5],0x1c,0);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    iVar7 = param_1[0x279];
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    iVar7 = *(int *)(iVar7 + 8);
    puVar8[5] = iVar7;
    *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    puVar8[6] = 0;
  }
  param_1[0x27a] = puVar8;
  puVar8 = (undefined4 *)fn_8267B890(param_1[5],0x20,0);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    iVar7 = param_1[0x40] + 8;
    if (param_1[0x40] == 0) {
      iVar7 = 0;
    }
    puVar8[1] = 1;
    puVar8[2] = &lbl_82005928;
    *puVar8 = &lbl_8200DC10;
    puVar8[2] = &lbl_8200DBFC;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = iVar7;
  }
  if (param_1[0x46] != 0) {
    fn_8267C498();
  }
  param_1[0x46] = puVar8;
  param_1[0x2c] = (float)dVar11;
  param_1[0x2d] = (float)dVar11;
  param_1[0x281] = 0;
  param_1[0x2f] = (float)dVar12;
  param_1[0x1a] = 0;
  param_1[0x2e] = (float)dVar12;
  param_1[0x30] = 1;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x2b2) = 0;
  *(undefined2 *)(param_1 + 0x2b8) = 0;
  param_1[0x2b1] = 0;
  param_1[0x2c1] = 0;
  uVar5 = fn_826933E8();
  *(undefined8 *)(param_1 + 0x2ac) = 0;
  *(ulonglong *)(param_1 + 0x2aa) = uVar5 / 1000;
  param_1[0x36] = (float)dVar12;
  param_1[0x37] = (float)dVar12;
  param_1[0x38] = (float)dVar12;
  param_1[0x39] = (float)dVar12;
  param_1[0x280] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  puVar8 = (undefined4 *)fn_8267B890(param_1[5],4,0);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    *puVar8 = param_1;
  }
  param_1[4] = puVar8;
  param_1[0x2c9] = 0;
  return param_1;
}

