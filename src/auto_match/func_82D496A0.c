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
extern unsigned int *auStack_270;
extern int fn_82D6F7E0();


int fn_82D496A0(int param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_270 [624];
  
  iVar8 = 0;
  if ((param_3 & 0xffffffff) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_82D6F7E0((double)*(float *)(param_1 + 0x10),param_3);
  }
  iVar5 = (int)in_r0;
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(param_1 + 0xc);
  iVar10 = *(int *)(param_1 + 8);
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(iVar10 + 0x18)) {
    uVar11 = param_3 + 0x3b & 0xfffffff0;
    iVar5 = *(int *)(*(int *)(iVar10 + 0x14) + (int)((param_2 & 0xffffffff) << 2)) * 4;
    puVar13 = (uint *)(iVar5 + *(int *)(iVar10 + 8));
    iVar10 = *(int *)(iVar5 + *(int *)(iVar10 + 8));
    *(uint **)(iVar6 + 0x24) = puVar13 + 1;
    *(int *)(iVar6 + 0x18) = (int)uVar11;
    *(undefined4 *)(iVar6 + 0x1c) = 0;
    *(int *)(iVar6 + 0x28) = iVar10;
    if (0 < iVar10) {
      iVar10 = 0;
      uVar12 = 2;
      do {
        iVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x10) + 0x14))
                          (*(int *)(param_1 + 0xc) + 0x10,
                           *(undefined4 *)(*(int *)(iVar6 + 0x24) + iVar10),auStack_270);
        uVar9 = uVar12 - 2;
        uVar2 = (uVar9 & 0xffffffff) * 0x8421085 >> 0x20;
        uVar2 = ((uVar9 - uVar2 & 0xffffffff) >> 1) + uVar2 >> 4;
        iVar5 = (int)in_r0;
        if ((1 << ((int)uVar9 - ((int)(uVar2 << 5) - (int)uVar2) & 0x3fU) &
            *(uint *)((int)(((uVar9 & 0xffffffff) / 0x1f + (ulonglong)*puVar13 + 1 & 0xffffffff) <<
                           2) + (int)puVar13)) != 0) {
          puVar3 = (undefined4 *)(iVar7 + 0x20U & 0xfffffff0);
          uVar15 = puVar3[1];
          uVar16 = puVar3[2];
          uVar17 = puVar3[3];
          puVar4 = (undefined4 *)(iVar5 + (int)uVar11 & 0xfffffff0);
          *puVar4 = *puVar3;
          puVar4[1] = uVar15;
          puVar4[2] = uVar16;
          puVar4[3] = uVar17;
          uVar11 = uVar11 + 0x10;
          *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
        }
        uVar9 = uVar12 - 1;
        uVar2 = (uVar9 & 0xffffffff) * 0x8421085 >> 0x20;
        uVar2 = ((uVar9 - uVar2 & 0xffffffff) >> 1) + uVar2 >> 4;
        if ((1 << ((int)uVar9 - ((int)(uVar2 << 5) - (int)uVar2) & 0x3fU) &
            *(uint *)((int)(((uVar9 & 0xffffffff) / 0x1f + (ulonglong)*puVar13 + 1 & 0xffffffff) <<
                           2) + (int)puVar13)) != 0) {
          puVar3 = (undefined4 *)(iVar7 + 0x30U & 0xfffffff0);
          uVar15 = puVar3[1];
          uVar16 = puVar3[2];
          uVar17 = puVar3[3];
          puVar4 = (undefined4 *)(iVar5 + (int)uVar11 & 0xfffffff0);
          *puVar4 = *puVar3;
          puVar4[1] = uVar15;
          puVar4[2] = uVar16;
          puVar4[3] = uVar17;
          uVar11 = uVar11 + 0x10;
          *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
        }
        uVar2 = (uVar12 & 0xffffffff) * 0x8421085 >> 0x20;
        uVar2 = ((uVar12 - uVar2 & 0xffffffff) >> 1) + uVar2 >> 4;
        if ((1 << ((int)uVar12 - ((int)(uVar2 << 5) - (int)uVar2) & 0x3fU) &
            *(uint *)((int)(((uVar12 & 0xffffffff) / 0x1f + (ulonglong)*puVar13 + 1 & 0xffffffff) <<
                           2) + (int)puVar13)) != 0) {
          puVar3 = (undefined4 *)(iVar7 + 0x40U & 0xfffffff0);
          uVar15 = puVar3[1];
          uVar16 = puVar3[2];
          uVar17 = puVar3[3];
          puVar4 = (undefined4 *)(iVar5 + (int)uVar11 & 0xfffffff0);
          *puVar4 = *puVar3;
          puVar4[1] = uVar15;
          puVar4[2] = uVar16;
          puVar4[3] = uVar17;
          uVar11 = uVar11 + 0x10;
          *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
        }
        iVar8 = iVar8 + 1;
        iVar10 = iVar10 + 4;
        uVar12 = uVar12 + 3;
      } while (iVar8 < *(int *)(iVar6 + 0x28));
    }
  }
  else {
    *(undefined4 *)(iVar6 + 0x28) = 1;
    uVar14 = (int)param_3 + 0x3bU & 0xfffffff0;
    iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x20);
    uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x18);
    *(undefined4 *)(iVar6 + 0x1c) = 3;
    *(uint *)(iVar6 + 0x18) = uVar14;
    *(int *)(iVar6 + 0x24) = (int)((param_2 - uVar1 & 0xffffffff) << 2) + iVar8;
    iVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x10) + 0x14))
                      (*(int *)(param_1 + 0xc) + 0x10,**(undefined4 **)(iVar6 + 0x24),auStack_270);
    puVar3 = (undefined4 *)(iVar8 + 0x20U & 0xfffffff0);
    uVar15 = puVar3[1];
    uVar16 = puVar3[2];
    uVar17 = puVar3[3];
    puVar4 = (undefined4 *)(iVar5 + uVar14 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar15;
    puVar4[2] = uVar16;
    puVar4[3] = uVar17;
    puVar3 = (undefined4 *)(iVar8 + 0x30U & 0xfffffff0);
    uVar15 = puVar3[1];
    uVar16 = puVar3[2];
    uVar17 = puVar3[3];
    *(undefined4 *)(uVar14 + 0x10) = *puVar3;
    *(undefined4 *)(uVar14 + 0x14) = uVar15;
    *(undefined4 *)(uVar14 + 0x18) = uVar16;
    *(undefined4 *)(uVar14 + 0x1c) = uVar17;
    puVar3 = (undefined4 *)(iVar8 + 0x40U & 0xfffffff0);
    uVar15 = puVar3[1];
    uVar16 = puVar3[2];
    uVar17 = puVar3[3];
    *(undefined4 *)(uVar14 + 0x20) = *puVar3;
    *(undefined4 *)(uVar14 + 0x24) = uVar15;
    *(undefined4 *)(uVar14 + 0x28) = uVar16;
    *(undefined4 *)(uVar14 + 0x2c) = uVar17;
  }
  return iVar6;
}

