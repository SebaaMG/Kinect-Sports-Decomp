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
extern int fn_8265C940();
extern int fn_8265C9E0();
extern int fn_82C04BC8();
extern int fn_82C04BE8();
extern int fn_82C04E40();


undefined8 fn_82C0BFC8(int *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar7;
  longlong lVar6;
  ulonglong uVar8;
  uint uVar9;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  if (-1 < (int)uVar1) {
    uVar5 = (param_3 + param_4) - 1U & ~(param_4 - 1U);
    iVar7 = (int)param_2;
    iVar2 = fn_8265C940((longlong)(int)uVar5 * (longlong)iVar7 + param_4 + -1,0x208c800e);
    param_1[0xb] = iVar2;
    if ((param_2 & 0xffffffff) == 0) {
      piVar3 = (int *)fn_8265C9E0(4);
    }
    else {
      if ((0x4444444 < (param_2 & 0xffffffff)) ||
         (lVar6 = param_2 * 0x3c + 4, 0xfffffffb < (param_2 * 0x3c & 0xffffffff))) {
        lVar6 = -1;
      }
      piVar3 = (int *)fn_82C04BC8(lVar6);
    }
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      uVar8 = param_2;
      piVar3 = piVar4;
      while (uVar8 = uVar8 - 1, -1 < (longlong)uVar8) {
        fn_82C04E40(piVar3);
        piVar3 = piVar3 + 0xf;
      }
    }
    param_1[0xc] = (int)piVar4;
    if (((ulonglong)(uint)param_1[0xb] != 0) && (piVar4 != (int *)0x0)) {
      param_1[0xd] = iVar7;
      uVar9 = 0;
      uVar8 = ((ulonglong)(uint)param_1[0xb] + param_4) - 1 & ~(param_4 - 1U);
      if ((param_2 & 0xffffffff) == 0) {
        return uVar1;
      }
      lVar6 = 0;
      do {
        fn_82C04BE8(lVar6 + (ulonglong)(uint)param_1[0xc],uVar8,uVar5);
        uVar9 = uVar9 + 1;
        uVar8 = uVar8 + uVar5;
        lVar6 = lVar6 + 0x3c;
      } while (uVar9 < (uint)param_1[0xd]);
      return uVar1;
    }
    uVar1 = 0xffffffff8007000e;
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  return uVar1;
}

