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
extern int fn_82690BA0();


int fn_8270AAF8(uint *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar1 = *param_1;
  uVar10 = (ulonglong)(param_2 >> (uVar1 & 0x3f));
  iVar7 = fn_82690BA0(param_1 + 2,uVar10);
  if (iVar7 != 0) {
    uVar9 = (ulonglong)*(ushort *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 8);
    if (0x20 < uVar9) {
      uVar9 = (ulonglong)*(uint *)(iVar7 + 0x10);
    }
    uVar9 = uVar9 - uVar10;
    iVar11 = (int)uVar9;
    uVar3 = iVar11 << (uVar1 & 0x3f);
    if (uVar3 < 0x10) {
      param_2 = uVar3 + param_2;
    }
    else {
      iVar6 = iVar7 + param_2;
      iVar4 = uVar3 + iVar6;
      if ((uVar9 & 0xffffffff) < 0x21) {
        *(short *)(iVar4 + -2) = (short)uVar9;
        *(short *)(iVar6 + 0xc) = (short)uVar9;
      }
      else {
        *(undefined2 *)(iVar4 + -2) = 0x21;
        *(undefined2 *)(iVar6 + 0xc) = 0x21;
        *(int *)(iVar4 + -8) = iVar11;
        *(int *)(iVar6 + 0x10) = iVar11;
      }
      *(int *)(iVar6 + 8) = iVar2;
      fn_826909B0(param_1 + 2);
      iVar11 = iVar2 + 0x20;
      uVar3 = (iVar7 - *(int *)(iVar2 + 0x1c)) + param_2 >> (uVar1 & 0x3f);
      uVar5 = uVar3 >> 3 & 0x1ffffffc;
      uVar10 = (uVar3 + uVar9) - 1;
      *(uint *)(uVar5 + iVar11) = *(uint *)(uVar5 + iVar11) & ~(1 << (uVar3 & 0x1f));
      uVar3 = (uint)((uVar10 & 0xffffffff) >> 3) & 0x1ffffffc;
      *(uint *)(uVar3 + iVar11) = *(uint *)(uVar3 + iVar11) & ~(1 << ((uint)uVar10 & 0x1f));
    }
    iVar11 = iVar2 + 0x20;
    uVar3 = iVar7 - *(int *)(iVar2 + 0x1c) >> (uVar1 & 0x3f);
    uVar5 = uVar3 >> 3 & 0x1ffffffc;
    uVar8 = ((param_2 >> (uVar1 & 0x3f)) + uVar3) - 1;
    *(uint *)(uVar5 + iVar11) = 1 << (uVar3 & 0x1f) | *(uint *)(uVar5 + iVar11);
    uVar1 = uVar8 >> 3 & 0x1ffffffc;
    *(uint *)(uVar1 + iVar11) = 1 << (uVar8 & 0x1f) | *(uint *)(uVar1 + iVar11);
    *param_3 = iVar2;
  }
  return iVar7;
}

