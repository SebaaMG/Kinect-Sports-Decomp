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
extern int fn_829B6DA0();
extern int fn_82F68CC0();


undefined8 fn_829AC690(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint *puVar13;
  byte *pbVar14;
  byte abStack_1a0 [32];
  byte abStack_180 [384];
  
  puVar3 = (undefined4 *)param_1[6];
  uVar8 = (ulonglong)(uint)puVar3[1];
  pbVar9 = (byte *)*puVar3;
  if (uVar8 == 0) {
    iVar5 = (*(code *)puVar3[3])();
    if (iVar5 != 0) {
      pbVar9 = (byte *)*puVar3;
      uVar8 = (ulonglong)(uint)puVar3[1];
      goto LAB_829ac6dc;
    }
LAB_829ac6c8:
    uVar4 = 0;
  }
  else {
LAB_829ac6dc:
    bVar1 = *pbVar9;
    uVar8 = uVar8 - 1;
    pbVar9 = pbVar9 + 1;
    if (uVar8 == 0) {
      iVar5 = (*(code *)puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829ac6c8;
      pbVar9 = (byte *)*puVar3;
      uVar8 = (ulonglong)(uint)puVar3[1];
    }
    pbVar14 = pbVar9 + 1;
    uVar8 = uVar8 - 1;
    uVar11 = (undefined4)uVar8;
    iVar5 = (uint)*pbVar9 + (uint)bVar1 * 0x100 + -2;
    while (0x10 < iVar5) {
      if ((uVar8 & 0xffffffff) == 0) {
        iVar6 = (*(code *)puVar3[3])(param_1);
        if (iVar6 == 0) goto LAB_829ac6c8;
        pbVar14 = (byte *)*puVar3;
        uVar8 = (ulonglong)(uint)puVar3[1];
      }
      bVar1 = *pbVar14;
      uVar10 = (uint)bVar1;
      uVar8 = uVar8 - 1;
      pbVar14 = pbVar14 + 1;
      *(undefined4 *)(*param_1 + 0x14) = 0x50;
      *(uint *)(*param_1 + 0x18) = (uint)bVar1;
      (**(code **)(*param_1 + 4))(param_1,1);
      iVar6 = 0;
      abStack_1a0[0] = 0;
      iVar12 = 1;
      do {
        if ((uVar8 & 0xffffffff) == 0) {
          iVar7 = (*(code *)puVar3[3])(param_1);
          if (iVar7 == 0) goto LAB_829ac6c8;
          pbVar14 = (byte *)*puVar3;
          uVar8 = (ulonglong)(uint)puVar3[1];
        }
        bVar2 = *pbVar14;
        uVar8 = uVar8 - 1;
        pbVar9 = abStack_1a0 + iVar12;
        iVar12 = iVar12 + 1;
        pbVar14 = pbVar14 + 1;
        *pbVar9 = bVar2;
        iVar6 = (uint)bVar2 + iVar6;
      } while (iVar12 < 0x11);
      iVar12 = *param_1;
      *(uint *)(iVar12 + 0x18) = (uint)abStack_1a0[1];
      *(uint *)(iVar12 + 0x1c) = (uint)abStack_1a0[2];
      *(uint *)(iVar12 + 0x20) = (uint)abStack_1a0[3];
      *(uint *)(iVar12 + 0x24) = (uint)abStack_1a0[4];
      *(uint *)(iVar12 + 0x28) = (uint)abStack_1a0[5];
      *(uint *)(iVar12 + 0x2c) = (uint)abStack_1a0[6];
      *(uint *)(iVar12 + 0x30) = (uint)abStack_1a0[7];
      *(uint *)(iVar12 + 0x34) = (uint)abStack_1a0[8];
      iVar12 = *param_1;
      *(undefined4 *)(iVar12 + 0x14) = 0x56;
      (**(code **)(*param_1 + 4))(param_1,2,*param_1,iVar12,abStack_1a0[8]);
      iVar12 = *param_1;
      *(uint *)(iVar12 + 0x18) = (uint)abStack_1a0[9];
      *(uint *)(iVar12 + 0x1c) = (uint)abStack_1a0[10];
      *(uint *)(iVar12 + 0x20) = (uint)abStack_1a0[0xb];
      *(uint *)(iVar12 + 0x24) = (uint)abStack_1a0[0xc];
      *(uint *)(iVar12 + 0x28) = (uint)abStack_1a0[0xd];
      *(uint *)(iVar12 + 0x2c) = (uint)abStack_1a0[0xe];
      *(uint *)(iVar12 + 0x30) = (uint)abStack_1a0[0xf];
      *(uint *)(iVar12 + 0x34) = (uint)abStack_1a0[0x10];
      iVar12 = *param_1;
      *(undefined4 *)(iVar12 + 0x14) = 0x56;
      (**(code **)(*param_1 + 4))(param_1,2,*param_1,iVar12,abStack_1a0[0x10]);
      if ((0x100 < iVar6) || (iVar5 + -0x11 < iVar6)) {
        *(undefined4 *)(*param_1 + 0x14) = 8;
        (**(code **)*param_1)(param_1);
      }
      iVar12 = 0;
      if (0 < iVar6) {
        do {
          if ((uVar8 & 0xffffffff) == 0) {
            iVar7 = (*(code *)puVar3[3])(param_1);
            if (iVar7 == 0) goto LAB_829ac6c8;
            pbVar14 = (byte *)*puVar3;
            uVar8 = (ulonglong)(uint)puVar3[1];
          }
          bVar2 = *pbVar14;
          uVar8 = uVar8 - 1;
          pbVar14 = pbVar14 + 1;
          abStack_180[iVar12] = bVar2;
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar6);
      }
      uVar11 = (undefined4)uVar8;
      iVar5 = (iVar5 + -0x11) - iVar6;
      if ((bVar1 & 0x10) == 0) {
        iVar6 = bVar1 + 0x2e;
      }
      else {
        uVar10 = bVar1 - 0x10;
        iVar6 = bVar1 + 0x22;
      }
      puVar13 = (uint *)(param_1 + iVar6);
      if (((int)uVar10 < 0) || (3 < (int)uVar10)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x1e;
        *(uint *)(*param_1 + 0x18) = uVar10;
        (**(code **)*param_1)(param_1);
      }
      if (*puVar13 == 0) {
        uVar10 = fn_829B6DA0(param_1);
        *puVar13 = uVar10;
      }
      fn_82F68CC0(*puVar13,abStack_1a0,0x11);
      fn_82F68CC0((ulonglong)*puVar13 + 0x11,abStack_180,0x100);
    }
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0xb;
      (**(code **)*param_1)(param_1);
    }
    *puVar3 = pbVar14;
    uVar4 = 1;
    puVar3[1] = uVar11;
  }
  return uVar4;
}

