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
extern unsigned int lbl_8201482C;


void fn_8275FE18(undefined4 *param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  byte *pbVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  
  pbVar4 = *(byte **)(param_2 + 4);
  param_1[1] = 0;
  *param_1 = pbVar4;
  param_1[9] = *(undefined4 *)(param_2 + 0x20);
  param_1[6] = 1;
  if (pbVar4 == (byte *)0x0) {
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
  }
  else {
    bVar1 = *pbVar4;
    if ((bVar1 & 1) != 0) {
      psVar5 = (short *)((uint)(pbVar4 + 5) & 0xfffffffe);
      param_1[2] = (bVar1 >> 1 & 3) + 1;
      param_1[7] = psVar5;
      param_1[5] = bVar1 >> 3 & 0xf;
      sVar2 = *psVar5;
      param_1[7] = psVar5 + 1;
      param_1[3] = (int)sVar2;
      param_1[4] = (int)psVar5[1];
      param_1[7] = psVar5 + 2;
      return;
    }
    uVar12 = bVar1 >> 1 & 3;
    uVar9 = -(uint)((bVar1 & 8) != 0) & 2;
    iVar10 = uVar9 + 2;
    if ((bVar1 >> 1 & 3) == 0) {
      param_1[2] = 0;
      return;
    }
    bVar1 = bVar1 >> 4;
    iVar8 = *(int *)(&lbl_8201482C + uVar12 * 4);
    param_1[2] = (uint)bVar1;
    puVar11 = (ushort *)
              ((((uint)(pbVar4 + uVar12) & ~(uVar12 - 1)) + iVar8 * 3 + iVar10) - 1 & ~(uVar9 + 1));
    if (iVar10 == 2) {
      param_1[7] = puVar11;
      if (bVar1 == 0) {
        uVar3 = *puVar11;
        param_1[7] = puVar11 + 1;
        param_1[2] = (uint)uVar3;
      }
      psVar5 = (short *)param_1[7];
      sVar2 = *psVar5;
      param_1[7] = psVar5 + 1;
      param_1[3] = (int)sVar2;
      sVar2 = psVar5[1];
      param_1[7] = psVar5 + 2;
      param_1[4] = (int)sVar2;
      param_1[5] = (uint)(ushort)psVar5[2];
      param_1[7] = psVar5 + 3;
      param_1[8] = 0;
      return;
    }
    param_1[8] = puVar11;
    if (bVar1 == 0) {
      uVar6 = *(undefined4 *)puVar11;
      param_1[8] = puVar11 + 2;
      param_1[2] = uVar6;
    }
    puVar7 = (undefined4 *)param_1[8];
    uVar6 = *puVar7;
    param_1[8] = puVar7 + 1;
    param_1[3] = uVar6;
    param_1[4] = puVar7[1];
    param_1[8] = puVar7 + 2;
    param_1[5] = puVar7[2];
    param_1[8] = puVar7 + 3;
  }
  param_1[7] = 0;
  return;
}

