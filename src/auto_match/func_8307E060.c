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


undefined8 fn_8307E060(uint *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_r0;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_000103d0;
  undefined4 in_register_000103d4;
  undefined4 in_register_000103d8;
  undefined4 in_vr61;
  undefined4 in_register_000103e0;
  undefined4 in_register_000103e4;
  undefined4 in_register_000103e8;
  undefined4 in_vr62;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  
  uVar9 = *param_1;
  if (uVar9 != 0) {
    puVar5 = (uint *)param_1[2];
    uVar4 = (ulonglong)uVar9;
    do {
      lVar10 = 0;
      if ((*puVar5 >> 0xe & 0x1f00) != 0) {
        lVar7 = ((((ulonglong)(*puVar5 >> 0xe) & 0x1f00) - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockFlush(lVar10 + (ulonglong)puVar5[0x11]);
          lVar10 = lVar10 + 0x80;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 0x18;
    } while (uVar4 != 0);
  }
  if (((param_1[1] & 0x20000) != 0) && (uVar6 = 0, uVar9 != 0)) {
    iVar8 = 0;
    do {
      uVar6 = uVar6 + 1;
      iVar2 = iVar8 + param_1[2];
      iVar8 = iVar8 + 0x60;
      iVar2 = *(int *)(iVar2 + 0x40);
      altv207_13(in_vs43,in_vs39);
      altv207_13(in_vs43,in_vs38);
      altv207_13(in_vs32,in_vs43);
      puVar3 = (undefined4 *)(in_r0 + iVar2 & 0xfffffff0);
      *puVar3 = in_register_000103d0;
      puVar3[1] = in_register_000103d4;
      puVar3[2] = in_register_000103d8;
      puVar3[3] = in_vr61;
      puVar3 = (undefined4 *)(iVar2 + 0x10U & 0xfffffff0);
      *puVar3 = in_register_000103f0;
      puVar3[1] = in_register_000103f4;
      puVar3[2] = in_register_000103f8;
      puVar3[3] = in_vr63;
      puVar3 = (undefined4 *)(iVar2 + 0x20U & 0xfffffff0);
      *puVar3 = in_register_000103e0;
      puVar3[1] = in_register_000103e4;
      puVar3[2] = in_register_000103e8;
      puVar3[3] = in_vr62;
    } while (uVar6 < *param_1);
  }
  uVar9 = 0;
  if (*param_1 != 0) {
    iVar8 = 0;
    do {
      uVar1 = *(ushort *)(iVar8 + param_1[2] + 0x50);
      uVar6 = 1 << (uVar1 & 0x1f);
      *(uint *)(((uVar1 >> 5) + 0x1ffa8650) * 4) =
           uVar6 << 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00 | uVar6 >> 0x18;
      enforceInOrderExecutionIO();
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 0x60;
    } while (uVar9 < *param_1);
  }
  param_1[1] = param_1[1] & 0xfffcffff;
  return 0;
}

