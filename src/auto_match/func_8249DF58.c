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
extern unsigned int fStack_18;
extern int fn_8249ABC0();
extern int fn_8249E0C8();
extern int fn_8249E418();
extern V16 vectorSubtractFloatingPoint();


void fn_8249DF58(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float afStack_20 [2];
  float fStack_18;
  
  iVar5 = fn_8249ABC0();
  if (*(int *)(*(int *)(iVar5 + 0x110) + 0x34) == 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      fn_8249E418(param_1);
    }
    uVar1 = *(uint *)(param_1 + 200);
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        if ((*(int *)(param_1 + 0xc4) < 2) ||
           ((iVar5 = *(int *)(param_1 + 4), *(int *)(iVar5 + 0x20) < 0 &&
            (*(int *)(*(int *)(param_1 + 8) + 0x20) < 0)))) {
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20) = *(undefined4 *)(param_1 + 0xcc);
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20) = 0xffffffff;
        }
        else if (*(int *)(param_1 + 0x1c) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 0xcc);
          puVar3 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
          uVar7 = puVar3[1];
          uVar8 = puVar3[2];
          uVar9 = puVar3[3];
          puVar4 = (undefined4 *)(param_1 + 0x60U & 0xfffffff0);
          uVar10 = *puVar4;
          uVar11 = puVar4[1];
          uVar12 = puVar4[2];
          uVar13 = puVar4[3];
          vectorSubtractFloatingPoint(in_vs32,in_vs44);
          vectorSubtractFloatingPoint(in_vs45,in_vs44);
          puVar4 = (undefined4 *)((int)afStack_20 + in_r0 & 0xfffffff0);
          *puVar4 = *puVar3;
          puVar4[1] = uVar7;
          puVar4[2] = uVar8;
          puVar4[3] = uVar9;
          puVar3 = (undefined4 *)((int)afStack_20 + in_r0 & 0xfffffff0);
          *puVar3 = uVar10;
          puVar3[1] = uVar11;
          puVar3[2] = uVar12;
          puVar3[3] = uVar13;
          iVar6 = iVar5;
          if (fStack_18 * fStack_18 + afStack_20[0] * afStack_20[0] <=
              fStack_18 * fStack_18 + afStack_20[0] * afStack_20[0]) {
            iVar6 = *(int *)(param_1 + 8);
          }
          if (iVar6 == iVar5) {
            iVar5 = *(int *)(param_1 + 8);
          }
          *(undefined4 *)(iVar6 + 0x20) = uVar2;
          *(undefined4 *)(iVar5 + 0x20) = 0xffffffff;
        }
        *(undefined4 *)(param_1 + 0xec) = 0;
        return;
      }
      if (2 < uVar1) {
        return;
      }
      fn_8249E0C8(param_1);
      return;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xec) = 0;
  return;
}

