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


undefined8
fn_82C30368(int param_1,undefined1 *param_2,uint param_3,int param_4,int param_5,int param_6,
             int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar7;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  
  lVar11 = 0;
  if ((param_3 == 0) || (param_5 != 0)) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  if (0 < (int)param_3) {
    *(undefined1 **)(param_1 + 0x1c) = param_2;
    *(uint *)(param_1 + 0x20) = param_3;
    *(code **)(param_1 + 0x54) = fn_82BA02A8;
    if ((param_4 != 0) || (param_6 != 0)) {
      *(undefined1 **)(param_1 + 0x14) = param_2;
      *(uint *)(param_1 + 0x18) = param_3;
      if (param_6 != 0) {
        uVar7 = fn_82C16A38(*(undefined4 *)(param_1 + 8));
        if ((uVar7 & 0xff) != ((int)(uVar7 & 0xff) >> 3) * 8) {
          *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_3;
        }
        if (*(int *)(param_1 + 0x44) != 0) {
          uVar7 = *(uint *)(param_1 + 0x48);
          if (uVar7 < param_3) {
            *(uint *)(param_1 + 0x20) = uVar7;
            *(undefined4 *)(param_1 + 0x44) = 0;
          }
          else {
            *(uint *)(param_1 + 0x48) = uVar7 - param_3;
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      if (param_4 != 0) {
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1U & 0x3ff;
      }
    }
    else if ((param_4 != 0) && (param_6 == 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = uVar1;
      uVar4 = (**(code **)(param_1 + 0x54))(*param_2);
      uVar12 = (uVar4 & 0xff) << 8;
      uVar5 = (**(code **)(param_1 + 0x54))(*(undefined1 *)(*(int *)(param_1 + 0x1c) + 1));
      uVar6 = (**(code **)(param_1 + 0x54))(*(undefined1 *)(*(int *)(param_1 + 0x1c) + 2));
      uVar7 = (**(code **)(param_1 + 0x54))(*(undefined1 *)(*(int *)(param_1 + 0x1c) + 3));
      iVar2 = *(int *)(param_1 + 8);
      uVar13 = uVar7 & 0xff | (uint)((uVar6 & 0xff | (uVar5 & 0xff | uVar12) << 8) << 8);
      *(uint *)(param_1 + 0x10) = uVar13;
      uVar5 = fn_82C16A38(iVar2);
      uVar7 = (uint)((uVar5 & 0xffffffff) >> 3) & 0x1f;
      iVar9 = (int)(uVar5 & 0xff);
      iVar3 = *(int *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x1c) = uVar7 + *(int *)(param_1 + 0x1c);
      *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - uVar7;
      lVar11 = (uVar5 & 0xff) + (ulonglong)(uint)(iVar9 >> 3) * -8;
      iVar10 = (int)((uVar4 & 0xff) >> 4);
      *(int *)(param_1 + 0x34) = iVar10;
      if (*(int *)(param_1 + 0x3c) == 0) {
        bVar8 = false;
        if ((2 < param_7) && ((uVar12 & 0x400) != 0)) {
          bVar8 = true;
        }
        iVar10 = iVar10 - iVar3;
        if (((iVar10 != 1) && (iVar10 != -0xf)) || (bVar8)) {
          *(uint *)(param_1 + 0x24) = uVar13;
          *(int *)(param_1 + 0x28) = 0x20 - iVar9;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x14) + 4;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x18) + -4;
          *(undefined4 *)(iVar2 + 0xc) = 1;
          return 6;
        }
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
    }
    fn_82A6C940(param_1,lVar11);
  }
  return 0;
}

