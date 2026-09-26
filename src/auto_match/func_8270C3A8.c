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
extern int fn_826909B0();
extern int fn_82690A98();
extern int fn_8270BA30();
extern int fn_8270BD28();
extern int fn_8270BDE0();


int fn_8270C3A8(uint *param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  iVar13 = param_2 + 0x20;
  uVar2 = *param_1;
  lVar10 = (longlong)(param_3 - iVar1 >> (uVar2 & 0x3f));
  uVar7 = *(int *)(param_2 + 0x18) + iVar1;
  lVar3 = fn_8270BD28(iVar13,lVar10);
  uVar4 = fn_8270BDE0(iVar13,lVar10,lVar3);
  uVar9 = (int)lVar3 << (uVar2 & 0x3f);
  *param_5 = uVar9;
  uVar11 = (1 << (uVar2 + (int)uVar4 & 0x3f)) - 1;
  uVar11 = uVar11 + param_4 & ~uVar11;
  if (uVar9 < uVar11) {
    uVar5 = uVar9 + param_3;
    if ((uVar5 < uVar7) &&
       ((*(uint *)(((uint)(lVar3 + lVar10) >> 2 & 0x3ffffffc) + iVar13) >>
         ((uint)((lVar3 + lVar10 & 0xffffffffU) << 1) & 0x1e) & 3) == 0)) {
      uVar7 = (uint)*(ushort *)(uVar5 + 0xc);
      if (0x20 < *(ushort *)(uVar5 + 0xc)) {
        uVar7 = *(uint *)(uVar5 + 0x10);
      }
      iVar6 = uVar7 << (uVar2 & 0x3f);
      if (uVar11 <= iVar6 + uVar9) {
        fn_82690A98(param_1 + 2);
        uVar9 = (iVar6 - uVar11) + uVar9;
        if (uVar9 < 0x10) {
          uVar11 = uVar9 + uVar11;
        }
        else {
          uVar9 = uVar9 >> (uVar2 & 0x3f);
          iVar12 = uVar11 + param_3;
          iVar6 = uVar9 << (uVar2 & 0x3f);
          if (uVar9 < 0x21) {
            *(short *)(iVar6 + iVar12 + -2) = (short)uVar9;
            *(short *)(iVar12 + 0xc) = (short)uVar9;
          }
          else {
            iVar6 = iVar6 + iVar12;
            *(undefined2 *)(iVar6 + -2) = 0x21;
            *(undefined2 *)(iVar12 + 0xc) = 0x21;
            *(uint *)(iVar6 + -8) = uVar9;
            *(uint *)(iVar12 + 0x10) = uVar9;
          }
          *(int *)(iVar12 + 8) = param_2;
          fn_826909B0(param_1 + 2,iVar12);
          uVar7 = iVar12 - iVar1 >> (uVar2 & 0x3f);
          uVar5 = uVar7 >> 2 & 0x3ffffffc;
          uVar8 = (uVar9 + uVar7) - 1;
          *(uint *)(uVar5 + iVar13) = *(uint *)(uVar5 + iVar13) & ~(3 << ((uVar7 & 0xf) << 1));
          uVar9 = uVar8 >> 2 & 0x3ffffffc;
          *(uint *)(uVar9 + iVar13) = *(uint *)(uVar9 + iVar13) & ~(3 << (uVar8 * 2 & 0x1e));
        }
        fn_8270BA30(iVar13,lVar10,uVar11 >> (uVar2 & 0x3f),uVar4);
        return param_3;
      }
    }
    param_3 = 0;
  }
  else if (uVar11 < uVar9) {
    uVar5 = uVar9 + param_3;
    iVar6 = 0;
    if ((uVar5 < uVar7) &&
       ((*(uint *)(((uint)(lVar3 + lVar10) >> 2 & 0x3ffffffc) + iVar13) >>
         ((uint)((lVar3 + lVar10 & 0xffffffffU) << 1) & 0x1e) & 3) == 0)) {
      uVar7 = (uint)*(ushort *)(uVar5 + 0xc);
      if (0x20 < *(ushort *)(uVar5 + 0xc)) {
        uVar7 = *(uint *)(uVar5 + 0x10);
      }
      iVar6 = uVar7 << (uVar2 & 0x3f);
    }
    uVar9 = iVar6 + (uVar9 - uVar11);
    if (0xf < uVar9) {
      if (iVar6 != 0) {
        fn_82690A98(param_1 + 2);
      }
      uVar9 = uVar9 >> (uVar2 & 0x3f);
      iVar12 = uVar11 + param_3;
      iVar6 = uVar9 << (uVar2 & 0x3f);
      if (uVar9 < 0x21) {
        *(short *)(iVar6 + iVar12 + -2) = (short)uVar9;
        *(short *)(iVar12 + 0xc) = (short)uVar9;
      }
      else {
        iVar6 = iVar6 + iVar12;
        *(undefined2 *)(iVar6 + -2) = 0x21;
        *(undefined2 *)(iVar12 + 0xc) = 0x21;
        *(uint *)(iVar6 + -8) = uVar9;
        *(uint *)(iVar12 + 0x10) = uVar9;
      }
      *(int *)(iVar12 + 8) = param_2;
      fn_826909B0(param_1 + 2,iVar12);
      fn_8270BA30(iVar13,lVar10,uVar11 >> (uVar2 & 0x3f),uVar4);
      uVar2 = iVar12 - iVar1 >> (uVar2 & 0x3f);
      uVar11 = uVar2 >> 2 & 0x3ffffffc;
      uVar9 = (uVar9 + uVar2) - 1;
      *(uint *)(uVar11 + iVar13) = *(uint *)(uVar11 + iVar13) & ~(3 << ((uVar2 & 0xf) << 1));
      uVar2 = uVar9 >> 2 & 0x3ffffffc;
      *(uint *)(uVar2 + iVar13) = *(uint *)(uVar2 + iVar13) & ~(3 << (uVar9 * 2 & 0x1e));
    }
  }
  return param_3;
}

