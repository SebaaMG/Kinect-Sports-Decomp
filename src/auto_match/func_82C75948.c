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
extern int fn_82F6E7A8();


byte fn_82C75948(undefined8 param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  byte bVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  ushort *puVar15;
  
  iVar12 = 0;
  uVar5 = *param_4;
  bVar10 = 0;
  uVar6 = param_4[1];
  uVar7 = *(uint *)(param_5 + 0x28);
  puVar15 = *(ushort **)(param_5 + 0x14);
  bVar1 = *(byte *)(*(int *)(param_5 + 0x18) + -1);
  dataCacheBlockClearToZero((ulonglong)uVar7);
  if (bVar1 == 0xffffffff) {
    fn_82F6E7A8(0xffffffff820fbbbc,0xffffffff820fc5a8,0x54d);
    fn_82F6E7A8(0xffffffff820fc598);
    fn_82F6E7A8(0xffffffff821cc86c);
    bVar10 = 0;
  }
  else {
    iVar13 = 0;
    puVar14 = puVar15;
    if ((bVar1 & 0x7f) != 0) {
      do {
        uVar3 = *puVar14;
        puVar15 = puVar14 + 1;
        uVar9 = uVar3 >> 7 & 1;
        uVar11 = uVar3 >> 8;
        if ((uVar3 & 0x40) != 0) {
          uVar4 = *puVar15;
          puVar15 = puVar14 + 2;
          iVar13 = iVar13 + 1;
          uVar11 = uVar4 << 8 | uVar11;
        }
        uVar8 = (uVar3 & 0x3f) + iVar12 & 0x3f;
        iVar13 = iVar13 + 1;
        iVar12 = uVar8 + 1;
        bVar2 = *(byte *)(uVar8 + param_2);
        bVar10 = *(byte *)((uint)bVar2 + param_3) | bVar10;
        *(ushort *)((uint)bVar2 * 2 + uVar7) =
             (uVar11 * (short)uVar5 + (short)uVar6 ^ -uVar9) + uVar9;
        puVar14 = puVar15;
      } while (iVar13 < (int)(bVar1 & 0x7f));
    }
    *(ushort **)(param_5 + 0x14) = puVar15;
  }
  return bVar10;
}

