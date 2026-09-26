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
extern int fn_82C75948();
extern int fn_830DC190();
extern V16 vectorSplatHalfWord();


void fn_830EDBD0(int param_1,undefined4 *param_2,longlong param_3,int param_4,longlong param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ushort uVar8;
  int in_r0;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar13;
  longlong lVar12;
  ulonglong uVar14;
  undefined1 in_vs32 [16];
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  dataCacheBlockClearToZero(param_5);
  iVar3 = *(int *)(param_1 + 0x26c);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  iVar11 = 0;
  uVar6 = *(uint *)(param_4 + 0x28);
  uVar10 = 0;
  uVar9 = 0;
  bVar1 = **(byte **)(param_4 + 0x18);
  uVar14 = (ulonglong)bVar1;
  puVar13 = *(ushort **)(param_4 + 0x14);
  *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero((ulonglong)uVar6);
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
        *(ushort *)((uint)bVar1 * 2 + uVar6) =
             ((uVar2 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar8) + uVar8;
        uVar14 = uVar14 - 1;
        uVar10 = uVar9;
      } while (uVar14 != 0);
    }
    *(ushort **)(param_4 + 0x14) = puVar13;
  }
  else {
    uVar9 = fn_82C75948();
  }
  lVar12 = (2U - param_3 & 0x3ffffff) * 0x40;
  if (uVar9 == 0) {
    iVar3 = (int)lVar12 + (int)param_5;
    vectorSplatHalfWord(in_vs32,1);
    puVar7 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
    puVar7 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
    puVar7 = (undefined4 *)(iVar3 + 0x20U & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
    puVar7 = (undefined4 *)(iVar3 + 0x30U & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
  }
  else {
    fn_830DC190((ulonglong)uVar6,lVar12 + param_5);
  }
  return;
}

