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


void fn_830EDF70(int param_1,undefined4 *param_2,longlong param_3,int param_4,longlong param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short *psVar6;
  ulonglong *puVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar13;
  longlong lVar12;
  ulonglong uVar14;
  
  dataCacheBlockClearToZero(param_5);
  iVar3 = *(int *)(param_1 + 0x270);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  iVar11 = 0;
  psVar6 = *(short **)(param_4 + 0x28);
  uVar10 = 0;
  uVar9 = 0;
  bVar1 = **(byte **)(param_4 + 0x18);
  uVar14 = (ulonglong)bVar1;
  puVar13 = *(ushort **)(param_4 + 0x14);
  *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar14 < 0x80) {
    if (bVar1 != 0) {
      do {
        uVar2 = *puVar13;
        puVar13 = puVar13 + 1;
        uVar9 = (uVar2 & 0x3f) + iVar11 & 0x3f;
        uVar8 = uVar2 >> 7 & 1;
        bVar1 = *(byte *)(uVar9 + iVar3);
        iVar11 = uVar9 + 1;
        uVar9 = *(byte *)((uint)bVar1 + param_1 + 0xa8) | uVar10;
        psVar6[bVar1] = ((uVar2 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar8) + uVar8;
        uVar14 = uVar14 - 1;
        uVar10 = uVar9;
      } while (uVar14 != 0);
    }
    *(ushort **)(param_4 + 0x14) = puVar13;
  }
  else {
    uVar9 = fn_82C75948();
  }
  lVar12 = (2U - param_3 & 0x1fffffff) * 8;
  if (uVar9 == 0) {
    puVar7 = (ulonglong *)((int)lVar12 + (int)param_5);
    uVar14 = (ulonglong)(uint)((*psVar6 * 0x10 + (int)*psVar6 + 4 >> 3) * 3 + 0x10 >> 5);
    uVar14 = (uVar14 & 0xffff) << 0x10 | uVar14 & 0xffff;
    uVar14 = uVar14 << 0x20 | uVar14;
    puVar7[0xe] = uVar14;
    puVar7[0xc] = uVar14;
    puVar7[10] = uVar14;
    puVar7[8] = uVar14;
    puVar7[6] = uVar14;
    puVar7[4] = uVar14;
    puVar7[2] = uVar14;
    *puVar7 = uVar14;
  }
  else {
    fn_830DBED0(ZEXT48(psVar6),lVar12 + param_5);
  }
  return;
}

