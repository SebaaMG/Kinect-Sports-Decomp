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
extern int fn_8270BA30();


int fn_8270BEF0(uint *param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = fn_82690BA0(param_1 + 2,param_2 >> (*param_1 & 0x3f));
  if (iVar8 != 0) {
    iVar1 = *(int *)(iVar8 + 8);
    uVar2 = *param_1;
    uVar9 = (ulonglong)*(ushort *)(iVar8 + 0xc);
    iVar11 = iVar1 + 0x20;
    iVar3 = *(int *)(iVar1 + 0x1c);
    if (0x20 < uVar9) {
      uVar9 = (ulonglong)*(uint *)(iVar8 + 0x10);
    }
    uVar9 = uVar9 - (param_2 >> (uVar2 & 0x3f));
    iVar10 = (int)uVar9;
    uVar4 = iVar10 << (uVar2 & 0x3f);
    if (uVar4 < 0x10) {
      param_2 = uVar4 + param_2;
    }
    else {
      iVar7 = iVar8 + param_2;
      iVar5 = uVar4 + iVar7;
      if ((uVar9 & 0xffffffff) < 0x21) {
        *(short *)(iVar5 + -2) = (short)uVar9;
        *(short *)(iVar7 + 0xc) = (short)uVar9;
      }
      else {
        *(undefined2 *)(iVar5 + -2) = 0x21;
        *(undefined2 *)(iVar7 + 0xc) = 0x21;
        *(int *)(iVar5 + -8) = iVar10;
        *(int *)(iVar7 + 0x10) = iVar10;
      }
      *(int *)(iVar7 + 8) = iVar1;
      fn_826909B0(param_1 + 2);
      uVar4 = (int)((iVar8 - iVar3) + param_2) >> (uVar2 & 0x3f);
      uVar6 = uVar4 >> 2 & 0x3ffffffc;
      uVar9 = ((longlong)(int)uVar4 + uVar9) - 1;
      *(uint *)(uVar6 + iVar11) = *(uint *)(uVar6 + iVar11) & ~(3 << ((uVar4 & 0xf) << 1));
      uVar4 = (uint)((uVar9 & 0xffffffff) >> 2) & 0x3ffffffc;
      *(uint *)(uVar4 + iVar11) =
           *(uint *)(uVar4 + iVar11) & ~(3 << ((uint)((uVar9 & 0xffffffff) << 1) & 0x1e));
    }
    fn_8270BA30(iVar11,iVar8 - iVar3 >> (uVar2 & 0x3f),param_2 >> (uVar2 & 0x3f),0);
    *param_3 = iVar1;
  }
  return iVar8;
}

