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
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_82645110();
extern int fn_826452A8();
extern int fn_82A1BB18();
extern U64 storeDoubleWordConditionalIndexed();
extern U64 storeWordConditionalIndexed();


ulonglong fn_8262F8D8(ulonglong param_1,undefined8 param_2,int param_3,ulonglong param_4,
                       ulonglong param_5,ulonglong param_6,longlong param_7,ulonglong param_8)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char in_RESERVE;
  byte bVar16;
  undefined4 in_stack_00000054;
  
  puVar4 = (uint *)param_1;
  uVar14 = param_1;
  if ((((*puVar4 & 0xf) == 4) && ((*puVar4 & 0x40000000) != 0)) && ((ulonglong)puVar4[6] != 0)) {
    uVar14 = (ulonglong)puVar4[6];
  }
  bVar1 = (param_8 & 0x1010) == 0;
  bVar16 = bVar1 << 1;
  if (bVar1) {
    iVar6 = *(int *)((int)uVar14 + 8);
  }
  else {
    iVar6 = *(int *)((int)uVar14 + 0xc);
  }
  if (iVar6 != 0) {
    iVar5 = KeGetCurrentProcessType();
    puVar2 = __imp__VdGlobalDevice;
    if (iVar5 == 2) {
      puVar2 = __imp__VdGlobalXamDevice;
    }
    fn_826452A8(*puVar2,iVar6,param_2,0);
  }
  do {
    if (in_RESERVE != '\0') {
      uVar12 = storeWordConditionalIndexed((ulonglong)*puVar4 + 0x100,0,param_1);
      *puVar4 = uVar12;
      bVar16 = 2;
    }
  } while (!(bool)(bVar16 >> 1 & 1));
  sync(1);
  if ((param_8 & 0x12) == 0) {
    iVar6 = KeGetCurrentProcessType();
    puVar2 = __imp__VdGlobalDevice;
    if (iVar6 == 2) {
      puVar2 = __imp__VdGlobalXamDevice;
    }
    uVar12 = *puVar2;
    uVar15 = (((param_6 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (param_6 & 0x1fffffff);
    uVar14 = uVar15 + param_7;
    iVar6 = fn_82A1BB18();
    if (*(int *)(uVar12 + 0x2a88) == iVar6) {
      uVar7 = *(uint *)(uVar12 + 0x30);
      if (*(uint *)(uVar12 + 0x38) < uVar7) {
        uVar7 = fn_82645110((ulonglong)uVar12);
      }
      *(undefined4 *)(uVar7 + 4) = 0xa31;
      uVar3 = (uint)uVar15 & 0xfffff000;
      *(undefined4 *)(uVar7 + 8) = in_stack_00000054;
      *(undefined4 *)(uVar7 + 0xc) = 0x10a2f;
      *(uint *)(uVar7 + 0x10) = ((int)uVar14 + 0xfffU & 0xfffff000) - uVar3;
      *(uint *)(uVar7 + 0x14) = uVar3;
      *(undefined4 *)(uVar7 + 0x18) = 0xc0043c00;
      *(undefined4 *)(uVar7 + 0x1c) = 3;
      *(undefined4 *)(uVar7 + 0x20) = 0xa31;
      *(undefined4 *)(uVar7 + 0x24) = 0;
      *(undefined4 *)(uVar7 + 0x28) = 0x80000000;
      *(undefined4 *)(uVar7 + 0x2c) = 8;
      *(undefined4 **)(uVar12 + 0x30) = (undefined4 *)(uVar7 + 0x2c);
    }
    else {
      lVar8 = (ulonglong)uVar12 + 12000;
      while( true ) {
        puVar9 = (ulonglong *)lVar8;
        uVar13 = *puVar9;
        uVar11 = uVar13 & 0xffffffff;
        if (uVar15 < (uVar13 & 0xffffffff)) {
          uVar11 = uVar15;
        }
        uVar10 = uVar13 >> 0x20;
        if (uVar13 >> 0x20 < (uVar14 & 0xffffffff)) {
          uVar10 = uVar14;
        }
        if (*puVar9 == uVar13) break;
        uVar11 = storeDoubleWordConditionalIndexed(*puVar9,0,lVar8);
        *puVar9 = uVar11;
      }
      uVar14 = storeDoubleWordConditionalIndexed(uVar10 << 0x20 | uVar11,0,lVar8);
      *puVar9 = uVar14;
    }
  }
  if (((param_8 & 0x10) != 0) || ((*puVar4 & 0x200000) != 0)) {
    if ((param_8 & 1) == 0) {
      if ((param_3 == 0) || ((param_5 & 0xffffffff) == 0)) {
        puVar4 = puVar4 + 5;
      }
      else {
        puVar4 = puVar4 + 6;
        param_4 = param_5;
      }
      uVar15 = param_6 - (param_4 & 0xffffff80);
      uVar12 = *puVar4;
      uVar14 = (uVar15 & 0xffffffff) >> 7;
      uVar15 = (uVar15 + param_7 + 0x7f & 0xffffffff) >> 7;
      uVar11 = (ulonglong)(uVar12 >> 0x10);
      uVar13 = (ulonglong)uVar12 & 0xffff;
      if ((uVar12 >> 0x10 & 0x8000) != 0) {
        uVar11 = (uVar11 & 0x7fff) << 4;
      }
      if ((uVar12 & 0x8000) != 0) {
        uVar13 = ((ulonglong)uVar12 & 0x7fff) << 4;
      }
      if (uVar13 < uVar15) {
        uVar13 = uVar15;
      }
      uVar12 = (uint)uVar13;
      if (uVar14 < uVar11) {
        uVar11 = uVar14;
      }
      if (0x7ffe < uVar11) {
        uVar11 = uVar11 + 0x80000 >> 4;
      }
      if (0x7ffe < uVar13) {
        uVar12 = uVar12 + 0x8000f >> 4;
      }
      *puVar4 = (uint)(uVar11 << 0x10) | uVar12;
    }
    if ((param_8 & 0x10) != 0) {
      param_6 = ((((param_6 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (param_6 & 0x1fffffff)) -
                0x40000000;
    }
  }
  return param_6;
}

