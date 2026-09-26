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


void fn_825520B8(int param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  uint uVar8;
  ulonglong uVar7;
  bool bVar9;
  
  uVar4 = param_2;
  while( true ) {
    uVar7 = uVar4 + 1 & 0x7fffffff;
    uVar6 = uVar7 * 2;
    if ((int)param_3 <= (int)uVar6) break;
    iVar1 = (int)(uVar7 << 4) + param_1;
    if (*(int *)(iVar1 + 4) < *(int *)(iVar1 + -4)) {
      uVar6 = uVar6 - 1;
    }
    iVar1 = (int)((uVar6 & 0xffffffff) << 3);
    iVar3 = (int)((uVar4 & 0xffffffff) << 3);
    *(undefined4 *)(iVar3 + param_1) = *(undefined4 *)(iVar1 + param_1);
    *(undefined4 *)(iVar3 + param_1 + 4) = *(undefined4 *)(iVar1 + param_1 + 4);
    uVar4 = uVar6;
  }
  if ((int)uVar6 == (int)param_3) {
    iVar3 = (int)((uVar4 & 0xffffffff) << 3);
    iVar1 = (int)((param_3 & 0xffffffff) << 3) + param_1;
    uVar4 = param_3 - 1;
    *(undefined4 *)(iVar3 + param_1) = *(undefined4 *)(iVar1 + -8);
    *(undefined4 *)(iVar3 + param_1 + 4) = *(undefined4 *)(iVar1 + -4);
  }
  iVar1 = (int)uVar4;
  uVar8 = iVar1 - 1;
  bVar9 = (int)uVar8 < 0 && (uVar8 & 1) != 0;
  while ((uVar7 = (longlong)((int)uVar8 >> 1) + (ulonglong)bVar9, (int)param_2 < iVar1 &&
         (iVar1 = (int)uVar7, puVar2 = (undefined4 *)(iVar1 * 8 + param_1),
         (int)puVar2[1] < (int)param_4[1]))) {
    uVar8 = iVar1 - 1;
    puVar5 = (undefined4 *)((int)((uVar4 & 0xffffffff) << 3) + param_1);
    bVar9 = (int)uVar8 < 0 && (uVar8 & 1) != 0;
    *puVar5 = *puVar2;
    puVar5[1] = puVar2[1];
    uVar4 = uVar7;
  }
  iVar1 = (int)((uVar4 & 0xffffffff) << 3);
  *(undefined4 *)(iVar1 + param_1) = *param_4;
  *(undefined4 *)(iVar1 + param_1 + 4) = param_4[1];
  return;
}

