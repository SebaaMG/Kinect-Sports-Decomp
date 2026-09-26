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
extern int fn_82646E80();
extern int fn_82646F48();
extern int fn_8314272C();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


longlong fn_8264E8F0(undefined4 *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined8 in_r13;
  undefined4 *puVar7;
  uint *puVar8;
  longlong lVar9;
  int aiStack_60 [3];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar7 = param_1 + 0x11;
  uVar2 = KfAcquireSpinLock(puVar7);
  uVar5 = *param_3;
  if ((ulonglong)uVar5 == 0xc0000000) {
    param_1[9] = param_3;
    param_1[0xe] = param_1[0xe] & ~(0x1000000 << (*(uint *)(param_2 + 4) & 0x3f));
    uVar5 = param_1[0xf];
    param_1[0xf] = (int)((ulonglong)uVar5 - 1);
    if ((ulonglong)uVar5 - 1 == 0) {
      iVar3 = KeGetCurrentProcessType();
      piVar6 = __imp__VdGlobalDevice;
      if (iVar3 == 2) {
        piVar6 = __imp__VdGlobalXamDevice;
      }
      uVar5 = 0;
      piVar6 = (int *)(*piVar6 + 0x2c98);
      lVar9 = 6;
      do {
        uVar1 = 0x1000000 << (uVar5 & 0x3f);
        if ((param_1[0xe] & uVar1) != 0) {
          *piVar6 = *piVar6 + 1;
          param_1[0xe] = param_1[0xe] & ~uVar1;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 0x1b;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      if (param_1[0x12] == 0) {
        param_1[0x10] = param_1[0x10] + -1;
      }
    }
    KfReleaseSpinLock(puVar7,uVar2);
    iVar3 = KeGetCurrentProcessType();
    piVar6 = __imp__VdGlobalDevice;
    if (iVar3 == 2) {
      piVar6 = __imp__VdGlobalXamDevice;
    }
    iVar3 = *piVar6;
    lVar9 = 6;
    puVar8 = (uint *)(iVar3 + 0x2c4c);
    do {
      if (puVar8[1] != 0) {
        uVar5 = puVar8[-1];
        uVar1 = *puVar8;
        uStack_54 = *(undefined4 *)(*(int *)((int)in_r13 + 0x100) + 0x58);
        aiStack_60[2] = **(undefined4 **)(iVar3 + 0x2a90);
        aiStack_60[1] = 0;
        uVar2 = TBLr;
        uStack_4c = (undefined4)uVar2;
        aiStack_60[0] = iVar3;
        uStack_50 = uStack_54;
        do {
          iVar4 = fn_82646F48(aiStack_60);
          if (iVar4 == 0) break;
        } while (*(uint *)puVar8[4] != (uVar1 & 3 | uVar5 & 0xfffffffc));
        fn_82646E80(aiStack_60);
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 0x1b;
    } while (lVar9 != 0);
    if (param_1[0x1a] != 0) {
      fn_8314272C(0);
    }
    sync(1);
    lVar9 = 0;
    *param_1 = 0;
  }
  else {
    KfReleaseSpinLock(puVar7,uVar2);
    lVar9 = (ulonglong)uVar5 + 4;
  }
  return lVar9;
}

