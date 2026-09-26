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


void fn_822F8F38(int param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar7;
  ulonglong uVar6;
  bool bVar8;
  
  uVar2 = param_2;
  while( true ) {
    uVar6 = uVar2 + 1 & 0x7fffffff;
    uVar5 = uVar6 * 2;
    if ((int)param_3 <= (int)uVar5) break;
    iVar1 = (int)(uVar6 << 4) + param_1;
    if (*(float *)(iVar1 + -4) < *(float *)(iVar1 + 4)) {
      uVar5 = uVar5 - 1;
    }
    puVar4 = (undefined4 *)((int)((uVar5 & 0xffffffff) << 3) + param_1);
    puVar3 = (undefined4 *)((int)((uVar2 & 0xffffffff) << 3) + param_1);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    uVar2 = uVar5;
  }
  if ((int)uVar5 == (int)param_3) {
    iVar1 = (int)((param_3 & 0xffffffff) << 3) + param_1;
    puVar3 = (undefined4 *)((int)((uVar2 & 0xffffffff) << 3) + param_1);
    uVar2 = param_3 - 1;
    *puVar3 = *(undefined4 *)(iVar1 + -8);
    puVar3[1] = *(undefined4 *)(iVar1 + -4);
  }
  iVar1 = (int)uVar2;
  uVar7 = iVar1 - 1;
  bVar8 = (int)uVar7 < 0 && (uVar7 & 1) != 0;
  while (uVar6 = (longlong)((int)uVar7 >> 1) + (ulonglong)bVar8, (int)param_2 < iVar1) {
    iVar1 = (int)uVar6;
    puVar3 = (undefined4 *)(iVar1 * 8 + param_1);
    if ((float)puVar3[1] <= (float)param_4[1]) break;
    puVar4 = (undefined4 *)((int)((uVar2 & 0xffffffff) << 3) + param_1);
    uVar7 = iVar1 - 1;
    bVar8 = (int)uVar7 < 0 && (uVar7 & 1) != 0;
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    uVar2 = uVar6;
  }
  puVar3 = (undefined4 *)((int)((uVar2 & 0xffffffff) << 3) + param_1);
  *puVar3 = *param_4;
  puVar3[1] = param_4[1];
  return;
}

