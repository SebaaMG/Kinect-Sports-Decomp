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
extern int fn_82D0B2B0();
extern int fn_82D0B378();


void fn_82D0C860(undefined8 param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 in_r0;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  lVar5 = fn_82D0B2B0();
  iVar6 = fn_82CE5410();
  uVar1 = param_2[1];
  lVar9 = (ulonglong)uVar1 + lVar5;
  iVar7 = (int)lVar9;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar7) {
    lVar4 = ((ulonglong)(uint)param_2[2] & 0x3fffffff) << 1;
    if (iVar7 < (int)lVar4) {
      lVar9 = lVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),param_2,lVar9,0x10);
  }
  iVar6 = *param_2;
  param_2[1] = param_2[1] + (int)lVar5;
  lVar9 = 0;
  iVar7 = fn_82D0B2B0(param_1);
  iVar6 = uVar1 * 0x10 + iVar6;
  if (0 < iVar7) {
    do {
      iVar8 = fn_82D0B378(param_1,lVar9);
      lVar9 = lVar9 + 1;
      puVar2 = (undefined4 *)((int)in_r0 + iVar8 & 0xfffffff0);
      uVar10 = puVar2[1];
      uVar11 = puVar2[2];
      uVar12 = puVar2[3];
      puVar3 = (undefined4 *)((int)in_r0 + iVar6 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      iVar6 = iVar6 + 0x10;
    } while ((int)lVar9 < iVar7);
  }
  return;
}

