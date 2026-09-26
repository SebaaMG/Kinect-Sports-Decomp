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


void fn_82FE4340(uint *param_1,int param_2,int param_3,ulonglong param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  
  uVar2 = param_1[2];
  uVar7 = (ulonglong)uVar2;
  uVar6 = (ulonglong)*param_1;
  puVar9 = (undefined4 *)param_1[1];
  uVar8 = uVar6 - uVar7;
  puVar10 = puVar9 + uVar2;
  if ((param_4 & 0xffffffff) < (uVar8 & 0xffffffff)) {
    param_2 = param_2 - (int)puVar10;
    puVar9 = (undefined4 *)(param_3 + -4);
    uVar8 = param_4;
    do {
      uVar1 = *puVar10;
      *puVar10 = *(undefined4 *)(param_2 + (int)puVar10);
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
      *puVar9 = uVar1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    param_1[2] = uVar2 + (int)param_4;
    return;
  }
  if ((param_4 & 0xffffffff) != 0) {
    puVar4 = (undefined4 *)(param_3 + -4);
    puVar5 = (undefined4 *)(param_2 + -4);
    do {
      if ((param_4 & 0xffffffff) < (uVar8 & 0xffffffff)) {
        uVar8 = param_4;
      }
      uVar11 = uVar8;
      uVar3 = uVar8 & 0xffffffff;
      while (uVar3 != 0) {
        uVar1 = *puVar10;
        puVar5 = puVar5 + 1;
        *puVar10 = *puVar5;
        puVar10 = puVar10 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = uVar1;
        uVar11 = uVar11 - 1;
        uVar3 = uVar11;
      }
      uVar7 = uVar7 + uVar8;
      if ((uVar7 & 0xffffffff) == uVar6) {
        uVar7 = 0;
        puVar10 = puVar9;
      }
      param_4 = param_4 - uVar8;
      uVar8 = uVar6 - uVar7;
    } while (param_4 != 0);
    param_1[2] = (uint)uVar7;
  }
  return;
}

