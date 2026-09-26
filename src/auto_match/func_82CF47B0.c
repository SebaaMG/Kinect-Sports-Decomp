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


void fn_82CF47B0(uint *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar9 = param_2 + param_3;
  iVar4 = fn_82CE5410();
  uVar10 = (uint)uVar9;
  if ((int)(param_1[2] & 0x3fffffff) < (int)uVar10) {
    uVar6 = ((ulonglong)param_1[2] & 0x3fffffff) << 1;
    if ((int)uVar6 <= (int)uVar10) {
      uVar6 = uVar9;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),param_1,uVar6,0xc);
  }
  lVar7 = param_1[1] - uVar9;
  if (0 < lVar7) {
    lVar11 = (uVar9 + (uVar9 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + (ulonglong)*param_1 + -4;
    do {
      iVar5 = fn_82CE5410();
      iVar4 = (int)lVar11;
      piVar1 = *(int **)(iVar5 + 0x10);
      *(undefined4 *)(iVar4 + 8) = 0;
      if ((*(uint *)(iVar4 + 0xc) & 0x80000000) == 0) {
        (**(code **)(*piVar1 + 0x10))
                  (piVar1,*(undefined4 *)(iVar4 + 4),*(uint *)(iVar4 + 0xc) & 0x3fffffff,0x24);
      }
      *(undefined4 *)(iVar4 + 4) = 0;
      lVar7 = lVar7 + -1;
      lVar11 = lVar11 + 0xc;
      *(undefined4 *)lVar11 = 0x80000000;
    } while (lVar7 != 0);
  }
  uVar2 = param_1[1];
  lVar7 = uVar9 - uVar2;
  uVar9 = ((ulonglong)uVar2 + ((ulonglong)uVar2 & 0x7fffffff) * 2 & 0x3fffffff) * 4 +
          (ulonglong)*param_1;
  if (0 < lVar7) {
    do {
      if ((uVar9 & 0xffffffff) != 0) {
        puVar8 = (undefined4 *)uVar9;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0x80000000;
      }
      uVar9 = uVar9 + 0xc;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  param_1[1] = uVar10;
  iVar4 = 0;
  param_1[7] = (uint)param_3;
  param_1[6] = (uint)param_2;
  param_1[4] = 0;
  if (0 < (int)uVar10) {
    iVar5 = 0;
    do {
      iVar4 = iVar4 + 1;
      iVar3 = iVar5 + *param_1;
      iVar5 = iVar5 + 0xc;
      *(undefined4 *)(iVar3 + 4) = 0;
    } while (iVar4 < (int)param_1[1]);
  }
  return;
}

