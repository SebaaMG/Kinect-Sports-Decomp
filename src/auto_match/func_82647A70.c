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
#define TBLr 0
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern unsigned int uRam7fc86110;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82647A70(ulonglong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar7;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  
  iVar7 = KeGetCurrentProcessType();
  piVar1 = __imp__VdGlobalDevice;
  if (iVar7 == 2) {
    piVar1 = __imp__VdGlobalXamDevice;
  }
  iVar7 = *piVar1;
  uVar5 = KfAcquireSpinLock(iVar7 + 0x4220);
  uVar9 = (ulonglong)*(uint *)(iVar7 + 0x550c);
  uVar12 = (param_1 & 0xffffffff) >> 8 & 0xf;
  *(int *)(iVar7 + 0x418c) = *(int *)(iVar7 + 0x418c) + 1;
  uVar4 = param_1 & 0xfffff000;
  if (uVar9 == 0) {
    uVar9 = 0x3c;
  }
  uVar10 = TBLr;
  uVar2 = *(uint *)(iVar7 + 0x417c);
  uVar6 = KeQueryPerformanceFrequency();
  uVar6 = (uVar6 & 0xffffffff) / uVar9;
  trapWord(6,uVar9,0);
  trapWord(6,uVar6,0);
  uVar9 = (((uVar10 & 0xffffffff) - (ulonglong)uVar2) * 100 & 0xffffffff) / uVar6 + 1;
  if (100 < (uVar9 & 0xffffffff)) {
    uVar9 = 100;
  }
  uVar2 = *(uint *)(iVar7 + 0x4178);
  uVar10 = *(uint *)(iVar7 + 0x4180) + uVar12;
  uVar11 = (uint)uVar10;
  if ((((uVar10 & 0xffffffff) <= (ulonglong)uVar2) && (uVar11 = uVar2, uVar12 != 0)) &&
     ((param_1 & 0xff) < (uVar9 & 0xffffffff))) {
    uVar11 = uVar2 + 1;
  }
  if (*(code **)(iVar7 + 0x4170) != (code *)0x0) {
    uStack_5c = *(undefined4 *)(iVar7 + 0x418c);
    uStack_60 = (uint)(uVar4 != 0);
    uStack_50 = (undefined4)uVar9;
    uStack_58 = uVar2;
    uStack_54 = *(uint *)(iVar7 + 0x4180);
    uStack_4c = uVar11;
    (**(code **)(iVar7 + 0x4170))(&uStack_60);
    uVar11 = uStack_4c;
  }
  *(uint *)(iVar7 + 0x4180) = uVar11;
  if ((uVar11 == *(uint *)(iVar7 + 0x4178)) || (*(int *)(iVar7 + 0x418c) == 1)) {
    *(int *)(iVar7 + 0x4190) = *(int *)(iVar7 + 0x4190) + 1;
    if (uVar4 == 0) {
      *(undefined4 *)(*(int *)(iVar7 + 0x2a94) + 4) = 0;
    }
    else {
      enforceInOrderExecutionIO();
      sync(0);
      uRam7fc86110 = (int)uVar4;
    }
    uVar3 = TBLr;
    *(int *)(iVar7 + 0x5c2c) = (int)uVar3;
  }
  else {
    iVar8 = (*(uint *)(iVar7 + 0x4218) & 0xf) * 8 + iVar7;
    *(uint *)(iVar8 + 0x4198) = uVar11;
    *(int *)(iVar8 + 0x4194) = (int)uVar4;
    *(int *)(iVar7 + 0x4218) = *(int *)(iVar7 + 0x4218) + 1;
  }
  KfReleaseSpinLock(iVar7 + 0x4220,uVar5);
  return;
}

