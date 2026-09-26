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
extern int fn_827C1A60();
extern int fn_82F68CC0();


undefined8 fn_827BBEB0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  char cVar5;
  undefined8 uVar4;
  ulonglong uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint *puVar13;
  byte *pbVar14;
  byte abStack_180 [32];
  byte abStack_160 [352];
  
  puVar3 = (undefined4 *)param_1[6];
  uVar6 = (ulonglong)(uint)puVar3[1];
  pbVar7 = (byte *)*puVar3;
  if (uVar6 == 0) {
    cVar5 = (*(code *)puVar3[3])();
    if (cVar5 != '\0') {
      pbVar7 = (byte *)*puVar3;
      uVar6 = (ulonglong)(uint)puVar3[1];
      goto LAB_827bbef8;
    }
LAB_827bbee8:
    uVar4 = 0;
  }
  else {
LAB_827bbef8:
    bVar1 = *pbVar7;
    uVar6 = uVar6 - 1;
    pbVar7 = pbVar7 + 1;
    if (uVar6 == 0) {
      cVar5 = (*(code *)puVar3[3])(param_1);
      if (cVar5 == '\0') goto LAB_827bbee8;
      pbVar7 = (byte *)*puVar3;
      uVar6 = (ulonglong)(uint)puVar3[1];
    }
    pbVar14 = pbVar7 + 1;
    uVar6 = uVar6 - 1;
    uVar11 = (undefined4)uVar6;
    iVar9 = (uint)*pbVar7 + (uint)bVar1 * 0x100 + -2;
    while (0x10 < iVar9) {
      if ((uVar6 & 0xffffffff) == 0) {
        cVar5 = (*(code *)puVar3[3])(param_1);
        if (cVar5 == '\0') goto LAB_827bbee8;
        pbVar14 = (byte *)*puVar3;
        uVar6 = (ulonglong)(uint)puVar3[1];
      }
      bVar1 = *pbVar14;
      uVar10 = (uint)bVar1;
      uVar6 = uVar6 - 1;
      pbVar14 = pbVar14 + 1;
      *(undefined4 *)(*param_1 + 0x14) = 0x50;
      *(uint *)(*param_1 + 0x18) = (uint)bVar1;
      (**(code **)(*param_1 + 4))(param_1,1);
      iVar8 = 0;
      abStack_180[0] = 0;
      iVar12 = 1;
      do {
        if ((uVar6 & 0xffffffff) == 0) {
          cVar5 = (*(code *)puVar3[3])(param_1);
          if (cVar5 == '\0') goto LAB_827bbee8;
          pbVar14 = (byte *)*puVar3;
          uVar6 = (ulonglong)(uint)puVar3[1];
        }
        bVar2 = *pbVar14;
        uVar6 = uVar6 - 1;
        pbVar7 = abStack_180 + iVar12;
        iVar12 = iVar12 + 1;
        pbVar14 = pbVar14 + 1;
        *pbVar7 = bVar2;
        iVar8 = (uint)bVar2 + iVar8;
      } while (iVar12 < 0x11);
      iVar12 = *param_1;
      *(uint *)(iVar12 + 0x18) = (uint)abStack_180[1];
      *(uint *)(iVar12 + 0x1c) = (uint)abStack_180[2];
      *(uint *)(iVar12 + 0x20) = (uint)abStack_180[3];
      *(uint *)(iVar12 + 0x24) = (uint)abStack_180[4];
      *(uint *)(iVar12 + 0x28) = (uint)abStack_180[5];
      *(uint *)(iVar12 + 0x2c) = (uint)abStack_180[6];
      *(uint *)(iVar12 + 0x30) = (uint)abStack_180[7];
      *(uint *)(iVar12 + 0x34) = (uint)abStack_180[8];
      *(undefined4 *)(*param_1 + 0x14) = 0x56;
      (**(code **)(*param_1 + 4))(param_1,2);
      iVar12 = *param_1;
      *(uint *)(iVar12 + 0x18) = (uint)abStack_180[9];
      *(uint *)(iVar12 + 0x1c) = (uint)abStack_180[10];
      *(uint *)(iVar12 + 0x20) = (uint)abStack_180[0xb];
      *(uint *)(iVar12 + 0x24) = (uint)abStack_180[0xc];
      *(uint *)(iVar12 + 0x28) = (uint)abStack_180[0xd];
      *(uint *)(iVar12 + 0x2c) = (uint)abStack_180[0xe];
      *(uint *)(iVar12 + 0x30) = (uint)abStack_180[0xf];
      *(uint *)(iVar12 + 0x34) = (uint)abStack_180[0x10];
      *(undefined4 *)(*param_1 + 0x14) = 0x56;
      (**(code **)(*param_1 + 4))(param_1,2);
      if ((0x100 < iVar8) || (iVar9 + -0x11 < iVar8)) {
        *(undefined4 *)(*param_1 + 0x14) = 8;
        (**(code **)*param_1)(param_1);
      }
      iVar12 = 0;
      if (0 < iVar8) {
        do {
          if ((uVar6 & 0xffffffff) == 0) {
            cVar5 = (*(code *)puVar3[3])(param_1);
            if (cVar5 == '\0') goto LAB_827bbee8;
            pbVar14 = (byte *)*puVar3;
            uVar6 = (ulonglong)(uint)puVar3[1];
          }
          bVar2 = *pbVar14;
          uVar6 = uVar6 - 1;
          pbVar14 = pbVar14 + 1;
          abStack_160[iVar12] = bVar2;
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar8);
      }
      uVar11 = (undefined4)uVar6;
      iVar9 = (iVar9 + -0x11) - iVar8;
      if ((bVar1 & 0x10) == 0) {
        iVar8 = bVar1 + 0x28;
      }
      else {
        uVar10 = bVar1 - 0x10;
        iVar8 = bVar1 + 0x1c;
      }
      puVar13 = (uint *)(param_1 + iVar8);
      if (((int)uVar10 < 0) || (3 < (int)uVar10)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x1e;
        *(uint *)(*param_1 + 0x18) = uVar10;
        (**(code **)*param_1)(param_1);
      }
      if (*puVar13 == 0) {
        uVar10 = fn_827C1A60(param_1);
        *puVar13 = uVar10;
      }
      fn_82F68CC0(*puVar13,abStack_180,0x11);
      fn_82F68CC0((ulonglong)*puVar13 + 0x11,abStack_160,0x100);
    }
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0xb;
      (**(code **)*param_1)(param_1);
    }
    *puVar3 = pbVar14;
    uVar4 = 1;
    puVar3[1] = uVar11;
  }
  return uVar4;
}

