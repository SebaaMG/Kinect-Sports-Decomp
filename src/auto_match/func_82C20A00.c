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
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_90;
extern int fn_82C10AD0();
extern int fn_82C1E938();
extern int fn_82C1EAB8();
extern int fn_82C1EE20();
extern int fn_82C1EFD0();
extern int fn_82F691F0();
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


undefined8 fn_82C20A00(int param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ushort auStack_90 [2];
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint auStack_78 [2];
  undefined1 auStack_70 [112];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uStack_80 = 0;
  uVar6 = param_2 - 0x18;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_84 = (undefined4)uVar6;
  uStack_7c = 0;
  auStack_78[0] = 0;
  uVar3 = (**(code **)(*piVar1 + 0xc))(*piVar1,uVar6);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  if (0x17 < (uVar6 & 0xffffffff)) {
    uVar3 = fn_82C1EE20(param_1,auStack_70,&uStack_80,&uStack_88,&uStack_84);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar3 = fn_82C1EAB8(param_1,auStack_78,&uStack_80,&uStack_88,&uStack_84);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar3 = fn_82C1E938(param_1,auStack_90,&uStack_80,&uStack_88,&uStack_84);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar3 = fn_82C1E938(param_1,auStack_90,&uStack_80,&uStack_88,&uStack_84);
    uVar2 = auStack_78[0];
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar8 = 0x18;
    if (*(short *)(piVar1[1] + 0x34) < 1) {
      uVar5 = (ulonglong)auStack_78[0];
      *(uint *)(piVar1[1] + 0x5c) = auStack_78[0];
      if (uVar5 == 0) {
        uVar6 = (uVar6 - uStack_88) - 0x18;
        if (uVar6 == 0) {
          return uVar3;
        }
        uVar3 = (**(code **)(*piVar1 + 0x14))(*piVar1,uVar6);
        if (-1 < (int)uVar3) {
          *(ulonglong *)(piVar1 + 2) = (uVar6 & 0xffffffff) + *(longlong *)(piVar1 + 2);
          return uVar3;
        }
        return uVar3;
      }
      uVar4 = (ulonglong)auStack_90[0];
      if (uVar4 != 0) {
        uVar8 = uVar4 + 0x18;
        if ((uVar6 & 0xffffffff) < uVar8) {
          return 0xffffffff8050000c;
        }
        uVar3 = fn_82C1EFD0(param_1,0,uVar4,&uStack_80,&uStack_88,&uStack_84);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      if (((uVar5 + ((ulonglong)uVar2 & 0x1fffffff) * 8 & 0x7fffffff) * 2 + uVar8 & 0xffffffff) <=
          (uVar6 & 0xffffffff)) {
        lVar7 = (uVar5 + ((ulonglong)uVar2 & 0x3fffffff) * 4 & 0x1fffffff) << 3;
        uVar3 = fn_82C10AD0(piVar1[0x38],0xb,lVar7,&uStack_8c);
        if (-1 < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(uStack_8c,0,lVar7);
        }
        return uVar3;
      }
    }
  }
  return 0xffffffff8050000c;
}

