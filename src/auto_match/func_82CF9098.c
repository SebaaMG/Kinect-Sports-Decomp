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
extern int fn_82D01B18();
extern int fn_82D02610();


void fn_82CF9098(int param_1,undefined4 *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  RtlEnterCriticalSection(param_1 + 4);
  if ((int)param_4 < 0x221) {
    puVar8 = param_2 + param_3;
    puVar3 = *(undefined4 **)((((int)param_4 + 0xf >> 4) + 0x3c) * 4 + param_1);
    iVar1 = puVar3[10];
    puVar9 = param_2;
    for (puVar10 = (undefined4 *)*puVar3;
        (puVar6 = puVar10, puVar9 < puVar8 &&
        (puVar6 = (undefined4 *)0x0, puVar10 != (undefined4 *)0x0));
        puVar10 = (undefined4 *)*puVar10) {
      *puVar9 = puVar10;
      puVar9 = puVar9 + 1;
    }
    *puVar3 = puVar6;
    puVar3[10] = puVar3[10] - ((int)puVar9 - (int)param_2 >> 2);
    while (puVar9 < puVar8) {
      puVar10 = puVar9;
      if ((uint)puVar3[8] < (uint)puVar3[9]) {
        do {
          if (puVar8 <= puVar10) break;
          *puVar10 = puVar3[8];
          puVar10 = puVar10 + 1;
          iVar2 = puVar3[8];
          puVar3[8] = puVar3[1] + iVar2;
        } while ((uint)(puVar3[1] + iVar2) < (uint)puVar3[9]);
        puVar3[10] = puVar3[10] - ((int)puVar10 - (int)puVar9 >> 2);
        puVar9 = puVar10;
      }
      else {
        uVar4 = fn_82D01B18(puVar3);
        *puVar9 = uVar4;
        puVar9 = puVar9 + 1;
      }
    }
    *(int *)(param_1 + 0x20) = (puVar3[10] - iVar1) * puVar3[1] + *(int *)(param_1 + 0x20);
  }
  else if (0 < param_3) {
    param_2 = param_2 + -1;
    do {
      uVar4 = (**(code **)(*(int *)(param_1 + 0x2c) + 4))((int *)(param_1 + 0x2c),param_4);
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      *param_2 = uVar4;
    } while (param_3 != 0);
  }
  uVar7 = *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0x20);
  uVar5 = *(uint *)(param_1 + 0x24);
  if (*(uint *)(param_1 + 0x24) < uVar7) {
    uVar5 = uVar7;
  }
  *(uint *)(param_1 + 0x24) = uVar5;
  if (*(uint *)(param_1 + 0x8fc) <= uVar7) {
    fn_82D02610(1);
  }
  RtlLeaveCriticalSection(param_1 + 4);
  return;
}

