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
extern int fn_8268E9E8();
extern int fn_8270AED0();
extern int fn_82F691F0();
extern unsigned int lbl_8200E1B0;


undefined8 fn_8270B220(undefined4 *param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if ((param_3 & 0xffffffff) < (ulonglong)(uint)param_1[4]) {
    param_3 = (ulonglong)(uint)param_1[4];
  }
  if ((undefined4 *)param_1[0xb] == param_1 + 9) {
    uVar9 = (ulonglong)(uint)param_1[2];
  }
  else {
    uVar9 = 0;
  }
  uVar11 = (ulonglong)(uint)param_1[0x14];
  uVar10 = param_3;
  if ((param_3 & 0xffffffff) < uVar11) {
    uVar10 = uVar11;
  }
  uVar6 = (ulonglong)(uint)param_1[5];
  if (uVar6 < (uVar10 & 0xffffffff)) {
    uVar10 = uVar6;
  }
  uVar7 = (ulonglong)(uint)param_1[1];
  uVar6 = -(ulonglong)(uVar6 < param_3) & param_3;
  uVar5 = -(ulonglong)(uVar10 < uVar11) & uVar11;
  trapWord(6,uVar7,0);
  uVar6 = ((longlong)
           (int)((((((-(ulonglong)(uVar5 < uVar6) & uVar6) + uVar9 + param_2 + param_3) - 1 &
                   ~(param_3 - 1)) + uVar7) - 1 & 0xffffffff) / uVar7) * (longlong)(int)param_1[1] +
           uVar5 + uVar11) - 1 & ~(uVar11 - 1);
  lVar3 = (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,uVar6,uVar10);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = (int)uVar6;
    uVar6 = (lVar3 + uVar11) - 1 & ~(uVar11 - 1);
    if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar6,0,uVar9);
    }
    iVar1 = param_1[0xb];
    *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 0xc) + 8) = *(int *)(*(int *)(iVar1 + 0xc) + 8) + 1;
    *(int *)(iVar1 + 0x10) = (int)uVar6;
    *(uint *)(iVar1 + 0x14) = ((int)lVar3 + iVar2 & (uint)~(uVar11 - 1)) - (int)uVar6;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    if ((uVar10 & 0xffff0000) == 0) {
      if ((uVar10 & 0xff00) == 0) {
        uVar8 = (ushort)(byte)(&lbl_8200E1B0)[(uint)uVar10 & 0xff];
      }
      else {
        uVar8 = (byte)(&lbl_8200E1B0)[(uint)uVar10 >> 8 & 0xff] + 8;
      }
    }
    else if ((uVar10 & 0xff000000) == 0) {
      uVar8 = (byte)(&lbl_8200E1B0)[(ushort)(uVar10 >> 0x10) & 0xff] + 0x10;
    }
    else {
      uVar8 = (byte)(&lbl_8200E1B0)[(byte)(uVar10 >> 0x18)] + 0x18;
    }
    *(short *)(iVar1 + 0x1e) = (short)uVar6 - (short)lVar3;
    *(ushort *)(iVar1 + 0x1c) = uVar8 & 0xff;
    fn_8270AED0(param_1 + 0x11,iVar1);
    fn_8268E9E8(param_1 + 0x13,iVar1);
    uVar4 = 1;
    param_1[0x12] = iVar2 + param_1[0x12];
  }
  return uVar4;
}

