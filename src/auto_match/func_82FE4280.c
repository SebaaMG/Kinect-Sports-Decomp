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


void fn_82FE4280(uint *param_1,int param_2,ulonglong param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  
  iVar4 = (int)param_3;
  uVar2 = param_1[2];
  uVar8 = (ulonglong)uVar2;
  uVar6 = (ulonglong)*param_1;
  puVar7 = (undefined4 *)param_1[1];
  uVar9 = uVar6 - uVar8;
  puVar10 = puVar7 + uVar2;
  if ((param_3 & 0xffffffff) < (uVar9 & 0xffffffff)) {
    puVar7 = (undefined4 *)(param_2 + -4);
    puVar10 = puVar10 + -1;
    do {
      uVar1 = puVar10[1];
      puVar10 = puVar10 + 1;
      *puVar10 = puVar7[1];
      puVar7 = puVar7 + 1;
      *puVar7 = uVar1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    param_1[2] = uVar2 + iVar4;
    return;
  }
  if (iVar4 != 0) {
    puVar5 = (undefined4 *)(param_2 + -4);
    do {
      if ((param_3 & 0xffffffff) < (uVar9 & 0xffffffff)) {
        uVar9 = param_3;
      }
      uVar11 = uVar9;
      uVar3 = uVar9 & 0xffffffff;
      while (uVar3 != 0) {
        uVar1 = *puVar10;
        *puVar10 = puVar5[1];
        puVar10 = puVar10 + 1;
        puVar5 = puVar5 + 1;
        *puVar5 = uVar1;
        uVar11 = uVar11 - 1;
        uVar3 = uVar11;
      }
      uVar8 = uVar8 + uVar9;
      if ((uVar8 & 0xffffffff) == uVar6) {
        uVar8 = 0;
        puVar10 = puVar7;
      }
      param_3 = param_3 - uVar9;
      uVar9 = uVar6 - uVar8;
    } while (param_3 != 0);
    param_1[2] = (uint)uVar8;
  }
  return;
}

