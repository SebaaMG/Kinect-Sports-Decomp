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
extern int fn_82AD1B28();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82B0FC78();
extern int fn_82B8AC10();


void fn_82AFE298(int param_1,uint *param_2,uint *param_3,uint param_4,undefined8 param_5)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar4;
  int iVar3;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  
  puVar5 = param_2;
  while (puVar1 = (uint *)*puVar5, puVar1 != (uint *)0x0) {
    if ((*puVar1 & 0xe000000) == 0) {
      puVar6 = (uint *)puVar1[4];
      for (puVar7 = (uint *)*puVar6; puVar7 != puVar1; puVar7 = (uint *)puVar7[1]) {
        puVar6 = puVar7 + 1;
      }
      *puVar6 = puVar1[1];
      puVar1[1] = *param_3;
      *param_3 = (uint)puVar1;
      puVar1[4] = (uint)param_3;
    }
    if ((uint *)*puVar5 == puVar1) {
      puVar5 = puVar1 + 1;
    }
  }
  puVar5 = param_2 + 1;
  while (puVar1 = (uint *)*puVar5, puVar1 != (uint *)0x0) {
    if (puVar1[4] != 0) {
      if ((param_4 != 0xe4) && (uVar8 = *puVar1, (uVar8 & 0xe000000) != 0)) {
        *puVar1 = ((((param_4 >> (uVar8 >> 10 & 6) & 3) << 2 | param_4 >> (uVar8 >> 8 & 6) & 3) << 2
                   | param_4 >> (uVar8 >> 6 & 6) & 3) << 2 | param_4 >> (uVar8 >> 4 & 6) & 3) << 5 |
                  uVar8 & 0xffffe01f;
      }
      puVar7 = (uint *)(puVar1[3] + 4);
      for (puVar6 = (uint *)*puVar7; puVar6 != puVar1; puVar6 = (uint *)puVar6[2]) {
        puVar7 = puVar6 + 2;
      }
      *puVar7 = puVar1[2];
      puVar1[2] = param_3[1];
      param_3[1] = (uint)puVar1;
      puVar1[3] = (uint)param_3;
    }
    if ((uint *)*puVar5 == puVar1) {
      puVar5 = puVar1 + 2;
    }
  }
  if ((param_3[2] & 0x3f80) == 0x3700) {
    fn_82B0FC78(param_1,param_3);
  }
  else {
    fn_82AD1B28(param_3);
  }
  uVar8 = param_3[2];
  param_3[2] = uVar8 | 0x1000000;
  if (((uVar8 >> 0x17 & 1) != 0) || ((param_2[2] >> 0x17 & 1) == 0)) goto LAB_82afe504;
  param_3[2] = uVar8 | 0x1800000;
  if ((param_2[4] & 0x70000) != 0) {
    *(short *)((int)param_3 + 0x12) = (short)param_2[4];
    param_3[4] = param_2[4] & 0x70000 | param_3[4] & 0xfff8ffff;
    uVar8 = (uint)*(ushort *)((int)param_2 + 0x12);
    if (uVar8 < (param_2[4] >> 0x10 & 7) + (param_2[4] & 0xffff)) {
      iVar3 = uVar8 << 2;
      do {
        if (*(uint **)(iVar3 + *(int *)(param_1 + 0x2c4)) == param_2) {
          *(uint **)(iVar3 + *(int *)(param_1 + 0x2c4)) = param_3;
        }
        uVar8 = uVar8 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar8 < (param_2[4] >> 0x10 & 7) + (param_2[4] & 0xffff));
    }
    goto LAB_82afe504;
  }
  uVar4 = fn_82ADD120(param_2);
  *(undefined2 *)((int)param_3 + 0x12) = uVar4;
  puVar5 = *(uint **)(param_1 + 0x294);
  if ((puVar5[1] & 1) == 0) {
    uVar8 = *puVar5 & 0xfffffffe;
    iVar3 = uVar8 - 4;
    if ((iVar3 == 0) || (*(uint *)(uVar8 + 8) < *(int *)(uVar8 + 4) + 1U)) goto LAB_82afe4e0;
  }
  else {
LAB_82afe4e0:
    iVar3 = fn_82AD6090(puVar5,1);
  }
  iVar2 = *(int *)(iVar3 + 8);
  *(int *)(iVar3 + 8) = iVar2 + 1;
  *(uint **)((iVar2 + 4) * 4 + iVar3) = param_3;
LAB_82afe504:
  fn_82B8AC10(param_1,param_2,param_5,1);
  return;
}

