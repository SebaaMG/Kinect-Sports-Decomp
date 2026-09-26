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
extern int fn_82A1BB18();
extern U64 storeDoubleWordConditionalIndexed();


void fn_82630B08(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar2;
  
  iVar4 = KeGetCurrentProcessType();
  puVar2 = __imp__VdGlobalDevice;
  if (iVar4 == 2) {
    puVar2 = __imp__VdGlobalXamDevice;
  }
  uVar1 = *puVar2;
  uVar12 = (((param_2 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (param_2 & 0x1fffffff);
  uVar11 = uVar12 + param_3;
  iVar4 = fn_82A1BB18();
  if (*(int *)(uVar1 + 0x2a88) == iVar4) {
    uVar5 = *(uint *)(uVar1 + 0x30);
    if (*(uint *)(uVar1 + 0x38) < uVar5) {
      uVar5 = fn_82645110((ulonglong)uVar1);
    }
    *(undefined4 *)(uVar5 + 4) = 0xa31;
    uVar3 = (uint)uVar12 & 0xfffff000;
    *(undefined4 *)(uVar5 + 8) = 0x3000000;
    *(undefined4 *)(uVar5 + 0xc) = 0x10a2f;
    *(uint *)(uVar5 + 0x10) = ((int)uVar11 + 0xfffU & 0xfffff000) - uVar3;
    *(uint *)(uVar5 + 0x14) = uVar3;
    *(undefined4 *)(uVar5 + 0x18) = 0xc0043c00;
    *(undefined4 *)(uVar5 + 0x1c) = 3;
    *(undefined4 *)(uVar5 + 0x20) = 0xa31;
    *(undefined4 *)(uVar5 + 0x24) = 0;
    *(undefined4 *)(uVar5 + 0x28) = 0x80000000;
    *(undefined4 *)(uVar5 + 0x2c) = 8;
    *(undefined4 **)(uVar1 + 0x30) = (undefined4 *)(uVar5 + 0x2c);
  }
  else {
    lVar6 = (ulonglong)uVar1 + 12000;
    while( true ) {
      puVar7 = (ulonglong *)lVar6;
      uVar10 = *puVar7;
      uVar9 = uVar10 & 0xffffffff;
      if (uVar12 < (uVar10 & 0xffffffff)) {
        uVar9 = uVar12;
      }
      uVar8 = uVar10 >> 0x20;
      if (uVar10 >> 0x20 < (uVar11 & 0xffffffff)) {
        uVar8 = uVar11;
      }
      if (*puVar7 == uVar10) break;
      uVar9 = storeDoubleWordConditionalIndexed(*puVar7,0,lVar6);
      *puVar7 = uVar9;
    }
    uVar11 = storeDoubleWordConditionalIndexed(uVar8 << 0x20 | uVar9,0,lVar6);
    *puVar7 = uVar11;
  }
  return;
}

