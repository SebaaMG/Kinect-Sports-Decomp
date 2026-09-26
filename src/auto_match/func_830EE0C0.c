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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82C75948();
extern int fn_830DBED0();


void fn_830EE0C0(int param_1,undefined4 *param_2,undefined8 param_3,int param_4,ulonglong *param_5
                  )

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  int iVar13;
  
  uVar3 = *param_2;
  iVar4 = *(int *)(param_1 + 0x270);
  bVar1 = **(byte **)(param_4 + 0x18);
  uVar9 = (ulonglong)bVar1;
  iVar13 = param_1 + 0xa8;
  uVar5 = param_2[1];
  iVar11 = 0;
  psVar6 = *(short **)(param_4 + 0x28);
  uVar10 = 0;
  uVar8 = 0;
  puVar12 = *(ushort **)(param_4 + 0x14);
  *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar9 < 0x80) {
    if (bVar1 != 0) {
      do {
        uVar2 = *puVar12;
        puVar12 = puVar12 + 1;
        uVar8 = (uVar2 & 0x3f) + iVar11 & 0x3f;
        uVar7 = uVar2 >> 7 & 1;
        bVar1 = *(byte *)(uVar8 + iVar4);
        iVar11 = uVar8 + 1;
        uVar8 = *(byte *)(iVar13 + (uint)bVar1) | uVar10;
        psVar6[bVar1] = ((uVar2 >> 8) * (short)uVar3 + (short)uVar5 ^ -uVar7) + uVar7;
        uVar9 = uVar9 - 1;
        uVar10 = uVar8;
      } while (uVar9 != 0);
    }
    *(ushort **)(param_4 + 0x14) = puVar12;
  }
  else {
    uVar8 = fn_82C75948(param_1,iVar4,iVar13,param_2,param_4);
  }
  if (uVar8 == 0) {
    uVar9 = (ulonglong)(uint)((*psVar6 * 0x10 + (int)*psVar6 + 4 >> 3) * 3 + 0x10 >> 5);
    uVar9 = (uVar9 & 0xffff) << 0x10 | uVar9 & 0xffff;
    uVar9 = uVar9 << 0x20 | uVar9;
    param_5[0xe] = uVar9;
    param_5[0xc] = uVar9;
    param_5[10] = uVar9;
    param_5[8] = uVar9;
    param_5[6] = uVar9;
    param_5[4] = uVar9;
    param_5[2] = uVar9;
    *param_5 = uVar9;
  }
  else {
    fn_830DBED0(ZEXT48(psVar6),param_5);
  }
  iVar11 = 0;
  iVar4 = *(int *)(param_1 + 0x270);
  uVar10 = 0;
  uVar8 = 0;
  uVar3 = *param_2;
  uVar5 = param_2[1];
  psVar6 = *(short **)(param_4 + 0x28);
  bVar1 = **(byte **)(param_4 + 0x18);
  uVar9 = (ulonglong)bVar1;
  puVar12 = *(ushort **)(param_4 + 0x14);
  *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar9 < 0x80) {
    if (bVar1 != 0) {
      do {
        uVar2 = *puVar12;
        puVar12 = puVar12 + 1;
        uVar8 = (uVar2 & 0x3f) + iVar11 & 0x3f;
        uVar7 = uVar2 >> 7 & 1;
        bVar1 = *(byte *)(uVar8 + iVar4);
        iVar11 = uVar8 + 1;
        uVar8 = *(byte *)(iVar13 + (uint)bVar1) | uVar10;
        psVar6[bVar1] = ((uVar2 >> 8) * (short)uVar3 + (short)uVar5 ^ -uVar7) + uVar7;
        uVar9 = uVar9 - 1;
        uVar10 = uVar8;
      } while (uVar9 != 0);
    }
    *(ushort **)(param_4 + 0x14) = puVar12;
  }
  else {
    uVar8 = fn_82C75948(param_1,iVar4,iVar13,param_2,param_4);
  }
  if (uVar8 == 0) {
    uVar9 = (ulonglong)(uint)((*psVar6 * 0x10 + (int)*psVar6 + 4 >> 3) * 3 + 0x10 >> 5);
    uVar9 = (uVar9 & 0xffff) << 0x10 | uVar9 & 0xffff;
    uVar9 = uVar9 << 0x20 | uVar9;
    param_5[0xf] = uVar9;
    param_5[0xd] = uVar9;
    param_5[0xb] = uVar9;
    param_5[9] = uVar9;
    param_5[7] = uVar9;
    param_5[5] = uVar9;
    param_5[3] = uVar9;
    param_5[1] = uVar9;
  }
  else {
    fn_830DBED0(ZEXT48(psVar6),param_5 + 1);
  }
  return;
}

