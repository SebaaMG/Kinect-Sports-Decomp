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
extern unsigned int *auStack_40;
extern int fn_82386E68();
extern int fn_823AD830();
extern int fn_8265CA20();
extern unsigned int uStack_34;


void fn_823AD5D8(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar7;
  ulonglong uVar6;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint auStack_40 [2];
  uint *puStack_38;
  uint uStack_34;
  
  auStack_40[1] = 5;
  if ((param_1[1] - *param_1 & 0xfffffff0) != 0x50) {
    uVar4 = fn_82386E68(5);
    auStack_40[0] = param_1[4];
    uVar10 = 0;
    if (auStack_40[0] != 0) {
      uVar10 = (ulonglong)param_1[2];
    }
    puVar7 = auStack_40;
    if (4 < auStack_40[0]) {
      puVar7 = auStack_40 + 1;
    }
    uVar9 = *puVar7;
    uVar5 = (ulonglong)uVar9;
    uStack_34 = (uint)uVar10;
    puStack_38 = param_1;
    if ((int)uVar9 < 1) {
      uVar6 = uVar10;
      if ((int)uVar9 < 0) {
        fn_823AD830(&puStack_38,-uVar5);
        uVar6 = (ulonglong)uStack_34;
      }
    }
    else {
      if ((int)(param_1[1] - uStack_34) >> 4 <= (int)uVar9) {
        uVar5 = uVar5 - (longlong)((int)(param_1[1] - *param_1) >> 4);
      }
      uVar6 = (uVar5 & 0xfffffff) * 0x10 + uVar10;
      uStack_34 = (uint)uVar6;
      if ((uVar6 & 0xffffffff) == (ulonglong)param_1[3]) {
        uStack_34 = 0;
        uVar6 = 0;
      }
    }
    uVar9 = uVar4;
    if (uVar10 != (uVar6 & 0xffffffff)) {
      do {
        if (uVar9 != 0) {
          puVar2 = (undefined4 *)(in_r0 + (int)uVar10 & 0xfffffff0);
          uVar11 = puVar2[1];
          uVar12 = puVar2[2];
          uVar13 = puVar2[3];
          puVar3 = (undefined4 *)(in_r0 + uVar9 & 0xfffffff0);
          *puVar3 = *puVar2;
          puVar3[1] = uVar11;
          puVar3[2] = uVar12;
          puVar3[3] = uVar13;
        }
        uVar10 = uVar10 + 0x10;
        if ((uVar10 & 0xffffffff) == (ulonglong)param_1[1]) {
          uVar10 = (ulonglong)*param_1;
        }
        uVar9 = uVar9 + 0x10;
        uVar10 = -(ulonglong)(param_1[3] != uVar10) & uVar10;
      } while ((uVar10 & 0xffffffff) != (uVar6 & 0xffffffff));
    }
    uVar8 = 0;
    if (param_1[4] != 0) {
      do {
        uVar1 = param_1[2];
        uVar8 = uVar8 + 1;
        param_1[2] = uVar1 + 0x10;
        if (uVar1 + 0x10 == param_1[1]) {
          param_1[2] = *param_1;
        }
      } while (uVar8 < param_1[4]);
    }
    if (*param_1 != 0) {
      fn_8265CA20();
    }
    *param_1 = uVar4;
    param_1[2] = uVar4;
    param_1[1] = uVar4 + 0x50;
    param_1[4] = (int)(uVar9 - uVar4) >> 4;
    if (uVar9 == uVar4 + 0x50) {
      uVar9 = uVar4;
    }
    param_1[3] = uVar9;
  }
  return;
}

