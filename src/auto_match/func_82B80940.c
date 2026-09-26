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
extern int fn_82AE7308();


void fn_82B80940(int param_1,int param_2,ulonglong param_3,uint *param_4,uint *param_5,
                  undefined4 *param_6,int *param_7,int *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  int iVar5;
  
  puVar10 = (uint *)(param_2 * 0x28 + *(int *)(param_1 + 0xc));
  uVar1 = *(uint *)(param_2 * 0x28 + *(int *)(param_1 + 0xc)) >> 3;
  uVar9 = (ulonglong)uVar1 & 0x3fff;
  if (puVar10[7] == 0) {
    fn_82AE7308();
  }
  lVar8 = (param_3 & 0x1fffffff) << 3;
  uVar4 = param_3 + 1;
  iVar5 = (int)uVar4;
  uVar6 = *(uint *)(puVar10[7] + (int)lVar8);
  iVar7 = 0;
  uVar2 = uVar6 >> 4 & 0x3fff;
  uVar6 = uVar6 & 0xf;
  if ((*puVar10 & 0x40000000) == 0) {
    if ((param_3 & 0xffffffff) != 0) {
      do {
        uVar1 = *(uint *)((int)lVar8 + puVar10[7] + -8);
        if ((uVar1 >> 4 & 0x3fff) != uVar2) break;
        param_3 = param_3 - 1;
        uVar6 = uVar1 & 0xf | uVar6;
        lVar8 = lVar8 + -8;
      } while (param_3 != 0);
    }
    if ((uVar4 & 0xffffffff) < uVar9) {
      lVar8 = (uVar4 & 0x1fffffff) << 3;
      do {
        iVar5 = (int)uVar4;
        uVar1 = *(uint *)((int)lVar8 + puVar10[7]);
        if ((uVar1 >> 4 & 0x3fff) != uVar2) break;
        uVar4 = uVar4 + 1;
        iVar5 = (int)uVar4;
        uVar6 = uVar1 & 0xf | uVar6;
        lVar8 = lVar8 + 8;
      } while ((uVar4 & 0xffffffff) < uVar9);
    }
    iVar7 = iVar5 - (int)param_3;
  }
  else {
    uVar6 = 0;
    if ((uVar1 & 0x3fff) != 0) {
      iVar3 = 0;
      iVar7 = 0;
      uVar6 = 0;
      do {
        if ((*(uint *)(iVar3 + puVar10[7]) >> 4 & 0x3fff) == uVar2) {
          iVar7 = iVar7 + 1;
          uVar6 = *(uint *)(iVar3 + puVar10[7]) & 0xf | uVar6;
        }
        iVar3 = iVar3 + 8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  *param_4 = uVar2;
  *param_5 = uVar6;
  *param_6 = (int)param_3;
  *param_7 = iVar5;
  *param_8 = iVar7;
  return;
}

