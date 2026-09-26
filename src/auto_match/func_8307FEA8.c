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
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_8307FEA8(int *param_1,int param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar10;
  longlong lVar8;
  ulonglong uVar9;
  
  iVar1 = param_1[3];
  if ((0 < iVar1) && (iVar1 < param_2)) {
    iVar5 = iVar1 + -1 >> 5;
    iVar3 = iVar5 * 4;
    uVar10 = iVar1 + iVar5 * -0x20;
    if ((int)uVar10 < 0x20) {
      uVar2 = -1 << (uVar10 & 0x3f);
      uVar10 = *(uint *)(iVar3 + *param_1);
      uVar6 = uVar10 & ~uVar2;
      if ((int)param_3 != 0) {
        uVar6 = uVar10 | uVar2;
      }
      *(uint *)(iVar3 + *param_1) = uVar6;
    }
  }
  iVar1 = param_2 + 0x1f >> 5;
  iVar5 = fn_82CE5410();
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    lVar8 = ((ulonglong)(uint)param_1[2] & 0x3fffffff) << 1;
    if ((int)lVar8 <= iVar1) {
      lVar8 = (longlong)iVar1;
    }
    fn_82CE6310(*(undefined4 *)(iVar5 + 0x10),param_1,lVar8,4);
  }
  uVar9 = (longlong)iVar1 - (ulonglong)(uint)param_1[1];
  if (0 < (longlong)uVar9) {
    piVar7 = (int *)(param_1[1] * 4 + *param_1 + -4);
    uVar4 = uVar9 & 0xffffffff;
    while (uVar4 != 0) {
      piVar7 = piVar7 + 1;
      *piVar7 = -(uint)(param_3 != 0);
      uVar9 = uVar9 - 1;
      uVar4 = uVar9;
    }
  }
  param_1[1] = iVar1;
  param_1[3] = param_2;
  return;
}

