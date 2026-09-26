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
extern int fn_82A6C940();
extern int fn_82BA02A8();
extern int fn_82C16A38();
extern int fn_82F68B64();


undefined8
fn_82A6CEF0(undefined8 param_1,undefined1 *param_2,ulonglong param_3,int param_4,int param_5,
             int param_6,int param_7,ulonglong param_8)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int iVar7;
  uint uVar8;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  
  param_8 = param_8 ^ 0xab7638de;
  iVar7 = fn_82F68B64();
  pcVar10 = (code *)param_8;
  lVar13 = 0;
  iVar9 = (int)param_3;
  if ((iVar9 == 0) || (param_5 != 0)) {
    *(undefined4 *)(iVar7 + 0x4c) = 1;
  }
  if (0 < iVar9) {
    *(undefined1 **)(iVar7 + 0x1c) = param_2;
    *(int *)(iVar7 + 0x20) = iVar9;
    if ((param_8 & 0xffffffff) == 0) {
      pcVar10 = fn_82BA02A8;
    }
    *(code **)(iVar7 + 0x54) = pcVar10;
    if ((param_4 != 0) || (param_6 != 0)) {
      *(undefined1 **)(iVar7 + 0x14) = param_2;
      *(int *)(iVar7 + 0x18) = iVar9;
      if (param_6 != 0) {
        uVar8 = fn_82C16A38(*(undefined4 *)(iVar7 + 8));
        if ((uVar8 & 0xff) != ((int)(uVar8 & 0xff) >> 3) << 3) {
          *(int *)(iVar7 + 0x50) = *(int *)(iVar7 + 0x50) + iVar9;
        }
        if (*(int *)(iVar7 + 0x44) != 0) {
          uVar8 = *(uint *)(iVar7 + 0x48);
          if ((ulonglong)uVar8 < (param_3 & 0xffffffff)) {
            *(uint *)(iVar7 + 0x20) = uVar8;
            *(undefined4 *)(iVar7 + 0x44) = 0;
          }
          else {
            *(uint *)(iVar7 + 0x48) = uVar8 - iVar9;
          }
        }
      }
    }
    if (*(int *)(iVar7 + 0x38) == 0) {
      if (param_4 != 0) {
        *(uint *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + 1U & 0x3ff;
      }
    }
    else if ((param_4 != 0) && (param_6 == 0)) {
      uVar1 = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)(iVar7 + 0x10) = 0;
      *(undefined4 *)(iVar7 + 0xc) = uVar1;
      uVar4 = (**(code **)(iVar7 + 0x54))(*param_2);
      uVar14 = (uVar4 & 0xff) << 8;
      uVar5 = (**(code **)(iVar7 + 0x54))(*(undefined1 *)(*(int *)(iVar7 + 0x1c) + 1));
      uVar6 = (**(code **)(iVar7 + 0x54))(*(undefined1 *)(*(int *)(iVar7 + 0x1c) + 2));
      uVar8 = (**(code **)(iVar7 + 0x54))(*(undefined1 *)(*(int *)(iVar7 + 0x1c) + 3));
      iVar9 = *(int *)(iVar7 + 8);
      uVar15 = uVar8 & 0xff | (uint)((uVar6 & 0xff | (uVar5 & 0xff | uVar14) << 8) << 8);
      *(uint *)(iVar7 + 0x10) = uVar15;
      uVar5 = fn_82C16A38(iVar9);
      uVar8 = (uint)((uVar5 & 0xffffffff) >> 3) & 0x1f;
      iVar11 = (int)(uVar5 & 0xff);
      iVar2 = *(int *)(iVar7 + 0x34);
      *(uint *)(iVar7 + 0x1c) = uVar8 + *(int *)(iVar7 + 0x1c);
      *(uint *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) - uVar8;
      lVar13 = (uVar5 & 0xff) + (ulonglong)(uint)(iVar11 >> 3) * -8;
      iVar12 = (int)((uVar4 & 0xff) >> 4);
      *(int *)(iVar7 + 0x34) = iVar12;
      if (*(int *)(iVar7 + 0x3c) == 0) {
        bVar3 = false;
        if ((2 < param_7) && ((uVar14 & 0x400) != 0)) {
          bVar3 = true;
        }
        iVar12 = iVar12 - iVar2;
        if (((iVar12 != 1) && (iVar12 != -0xf)) || (bVar3)) {
          *(uint *)(iVar7 + 0x24) = uVar15;
          *(int *)(iVar7 + 0x28) = 0x20 - iVar11;
          *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x14) + 4;
          *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x18) + -4;
          *(undefined4 *)(iVar9 + 0xc) = 1;
          return 6;
        }
        *(undefined4 *)(iVar9 + 0xc) = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 0x3c) = 0;
      }
    }
    fn_82A6C940(iVar7,lVar13);
  }
  return 0;
}

