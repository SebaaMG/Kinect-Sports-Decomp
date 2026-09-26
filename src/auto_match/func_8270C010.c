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
extern int fn_82690258();
extern int fn_826909B0();
extern int fn_82690E00();
extern int fn_8270BA30();
extern unsigned int lbl_8200E1B0;


int fn_8270C010(uint *param_1,uint param_2,ulonglong param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar9;
  int iVar13;
  
  uVar1 = *param_1;
  param_1 = param_1 + 2;
  iVar7 = fn_82690E00(param_1,param_2 >> (uVar1 & 0x3f),(ulonglong)uVar1,param_3 - 1);
  if (iVar7 == 0) {
    iVar8 = 0;
  }
  else {
    iVar2 = *(int *)(iVar7 + 8);
    iVar13 = iVar2 + 0x20;
    iVar3 = *(int *)(iVar2 + 0x1c);
    iVar8 = fn_82690258(iVar7,param_3 - 1);
    uVar10 = (uint)*(ushort *)(iVar7 + 0xc);
    if (0x20 < *(ushort *)(iVar7 + 0xc)) {
      uVar10 = *(uint *)(iVar7 + 0x10);
    }
    uVar10 = (((uVar10 << (uVar1 & 0x3f)) - iVar8) - param_2) + iVar7;
    if (iVar8 - iVar7 != 0) {
      uVar5 = (uint)(iVar8 - iVar7) >> (uVar1 & 0x3f);
      iVar6 = (uVar5 << (uVar1 & 0x3f)) + iVar7;
      if (uVar5 < 0x21) {
        *(short *)(iVar6 + -2) = (short)uVar5;
        *(short *)(iVar7 + 0xc) = (short)uVar5;
      }
      else {
        *(undefined2 *)(iVar6 + -2) = 0x21;
        *(undefined2 *)(iVar7 + 0xc) = 0x21;
        *(uint *)(iVar6 + -8) = uVar5;
        *(uint *)(iVar7 + 0x10) = uVar5;
      }
      *(int *)(iVar7 + 8) = iVar2;
      fn_826909B0(param_1,iVar7);
      uVar4 = iVar7 - iVar3 >> (uVar1 & 0x3f);
      uVar12 = uVar4 >> 2 & 0x3ffffffc;
      uVar11 = (uVar5 + uVar4) - 1;
      *(uint *)(uVar12 + iVar13) = *(uint *)(uVar12 + iVar13) & ~(3 << ((uVar4 & 0xf) << 1));
      uVar5 = uVar11 >> 2 & 0x3ffffffc;
      *(uint *)(uVar5 + iVar13) = *(uint *)(uVar5 + iVar13) & ~(3 << (uVar11 * 2 & 0x1e));
    }
    if (uVar10 < 0x10) {
      param_2 = uVar10 + param_2;
    }
    else {
      uVar10 = uVar10 >> (uVar1 & 0x3f);
      iVar6 = iVar8 + param_2;
      iVar7 = (uVar10 << (uVar1 & 0x3f)) + iVar6;
      if (uVar10 < 0x21) {
        *(short *)(iVar7 + -2) = (short)uVar10;
        *(short *)(iVar6 + 0xc) = (short)uVar10;
      }
      else {
        *(undefined2 *)(iVar7 + -2) = 0x21;
        *(undefined2 *)(iVar6 + 0xc) = 0x21;
        *(uint *)(iVar7 + -8) = uVar10;
        *(uint *)(iVar6 + 0x10) = uVar10;
      }
      *(int *)(iVar6 + 8) = iVar2;
      fn_826909B0(param_1);
      uVar5 = (int)((iVar8 - iVar3) + param_2) >> (uVar1 & 0x3f);
      uVar4 = uVar5 >> 2 & 0x3ffffffc;
      uVar12 = (uVar10 + uVar5) - 1;
      *(uint *)(uVar4 + iVar13) = *(uint *)(uVar4 + iVar13) & ~(3 << ((uVar5 & 0xf) << 1));
      uVar10 = uVar12 >> 2 & 0x3ffffffc;
      *(uint *)(uVar10 + iVar13) = *(uint *)(uVar10 + iVar13) & ~(3 << (uVar12 * 2 & 0x1e));
    }
    if ((param_3 & 0xffff0000) == 0) {
      if ((param_3 & 0xff00) == 0) {
        uVar9 = (ulonglong)(byte)(&lbl_8200E1B0)[(uint)param_3 & 0xff];
      }
      else {
        uVar9 = (ulonglong)(byte)(&lbl_8200E1B0)[(uint)param_3 >> 8 & 0xff] + 8;
      }
    }
    else if ((param_3 & 0xff000000) == 0) {
      uVar9 = (ulonglong)(byte)(&lbl_8200E1B0)[(ushort)(param_3 >> 0x10) & 0xff] + 0x10;
    }
    else {
      uVar9 = (ulonglong)(byte)(&lbl_8200E1B0)[(byte)(param_3 >> 0x18)] + 0x18;
    }
    fn_8270BA30(iVar13,iVar8 - iVar3 >> (uVar1 & 0x3f),param_2 >> (uVar1 & 0x3f),
                  (uVar9 & 0xff) - (ulonglong)uVar1);
    *param_4 = iVar2;
  }
  return iVar8;
}

