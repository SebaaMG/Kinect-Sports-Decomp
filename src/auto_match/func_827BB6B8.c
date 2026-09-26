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


undefined8 fn_827BB6B8(int *param_1,undefined1 param_2,undefined1 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar7;
  undefined8 uVar5;
  int iVar6;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  
  puVar3 = (undefined4 *)param_1[6];
  uVar10 = (ulonglong)(uint)puVar3[1];
  pbVar8 = (byte *)*puVar3;
  *(undefined1 *)(param_1 + 0x32) = param_2;
  *(undefined1 *)((int)param_1 + 0xc9) = param_3;
  if (uVar10 == 0) {
    cVar7 = (*(code *)puVar3[3])();
    if (cVar7 != '\0') {
      pbVar8 = (byte *)*puVar3;
      uVar10 = (ulonglong)(uint)puVar3[1];
      goto LAB_827bb708;
    }
LAB_827bb6f8:
    uVar5 = 0;
  }
  else {
LAB_827bb708:
    bVar1 = *pbVar8;
    uVar10 = uVar10 - 1;
    pbVar8 = pbVar8 + 1;
    if (uVar10 == 0) {
      cVar7 = (*(code *)puVar3[3])(param_1);
      if (cVar7 == '\0') goto LAB_827bb6f8;
      pbVar8 = (byte *)*puVar3;
      uVar10 = (ulonglong)(uint)puVar3[1];
    }
    bVar2 = *pbVar8;
    uVar10 = uVar10 - 1;
    pbVar8 = pbVar8 + 1;
    if (uVar10 == 0) {
      cVar7 = (*(code *)puVar3[3])(param_1);
      if (cVar7 == '\0') goto LAB_827bb6f8;
      pbVar8 = (byte *)*puVar3;
      uVar10 = (ulonglong)(uint)puVar3[1];
    }
    uVar10 = uVar10 - 1;
    pbVar9 = pbVar8 + 1;
    param_1[0x30] = (uint)*pbVar8;
    if (uVar10 == 0) {
      cVar7 = (*(code *)puVar3[3])(param_1);
      if (cVar7 == '\0') goto LAB_827bb6f8;
      pbVar9 = (byte *)*puVar3;
      uVar10 = (ulonglong)(uint)puVar3[1];
    }
    uVar10 = uVar10 - 1;
    pbVar8 = pbVar9 + 1;
    param_1[8] = (uint)*pbVar9 << 8;
    if (uVar10 == 0) {
      cVar7 = (*(code *)puVar3[3])(param_1);
      if (cVar7 == '\0') goto LAB_827bb6f8;
      pbVar8 = (byte *)*puVar3;
      uVar10 = (ulonglong)(uint)puVar3[1];
    }
    pbVar9 = pbVar8 + 1;
    uVar10 = uVar10 - 1;
    param_1[8] = (uint)*pbVar8 + param_1[8];
    if (uVar10 == 0) {
      cVar7 = (*(code *)puVar3[3])(param_1);
      if (cVar7 == '\0') goto LAB_827bb6f8;
      pbVar9 = (byte *)*puVar3;
      uVar10 = (ulonglong)(uint)puVar3[1];
    }
    uVar10 = uVar10 - 1;
    pbVar8 = pbVar9 + 1;
    param_1[7] = (uint)*pbVar9 << 8;
    if (uVar10 == 0) {
      cVar7 = (*(code *)puVar3[3])(param_1);
      if (cVar7 == '\0') goto LAB_827bb6f8;
      pbVar8 = (byte *)*puVar3;
      uVar10 = (ulonglong)(uint)puVar3[1];
    }
    uVar10 = uVar10 - 1;
    pbVar9 = pbVar8 + 1;
    param_1[7] = (uint)*pbVar8 + param_1[7];
    if (uVar10 == 0) {
      cVar7 = (*(code *)puVar3[3])(param_1);
      if (cVar7 == '\0') goto LAB_827bb6f8;
      pbVar9 = (byte *)*puVar3;
      uVar10 = (ulonglong)(uint)puVar3[1];
    }
    pbVar8 = pbVar9 + 1;
    iVar6 = *param_1;
    uVar10 = uVar10 - 1;
    param_1[9] = (uint)*pbVar9;
    *(int *)(iVar6 + 0x18) = param_1[0x5f];
    *(int *)(iVar6 + 0x1c) = param_1[7];
    *(int *)(iVar6 + 0x20) = param_1[8];
    *(int *)(iVar6 + 0x24) = param_1[9];
    *(undefined4 *)(*param_1 + 0x14) = 100;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (*(char *)(param_1[0x65] + 0xd) != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x3a;
      (**(code **)*param_1)(param_1);
    }
    if (((param_1[8] == 0) || (param_1[7] == 0)) || (param_1[9] < 1)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x20;
      (**(code **)*param_1)(param_1);
    }
    if ((uint)bVar2 + (uint)bVar1 * 0x100 + -8 != param_1[9] * 3) {
      *(undefined4 *)(*param_1 + 0x14) = 0xb;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[0x31] == 0) {
      iVar6 = (**(code **)param_1[1])(param_1,1,(ulonglong)(uint)param_1[9] * 0x54);
      param_1[0x31] = iVar6;
    }
    iVar6 = 0;
    if (0 < param_1[9]) {
      puVar11 = (undefined4 *)(param_1[0x31] + -0x44);
      do {
        puVar11[0x12] = iVar6;
        if ((uVar10 & 0xffffffff) == 0) {
          cVar7 = (*(code *)puVar3[3])(param_1);
          if (cVar7 == '\0') goto LAB_827bb6f8;
          pbVar8 = (byte *)*puVar3;
          uVar10 = (ulonglong)(uint)puVar3[1];
        }
        uVar10 = uVar10 - 1;
        pbVar9 = pbVar8 + 1;
        puVar11[0x11] = (uint)*pbVar8;
        if (uVar10 == 0) {
          cVar7 = (*(code *)puVar3[3])(param_1);
          if (cVar7 == '\0') goto LAB_827bb6f8;
          pbVar9 = (byte *)*puVar3;
          uVar10 = (ulonglong)(uint)puVar3[1];
        }
        bVar1 = *pbVar9;
        uVar10 = uVar10 - 1;
        pbVar9 = pbVar9 + 1;
        puVar11[0x14] = bVar1 & 0xf;
        puVar11[0x13] = (int)(uint)bVar1 >> 4;
        if (uVar10 == 0) {
          cVar7 = (*(code *)puVar3[3])(param_1);
          if (cVar7 == '\0') goto LAB_827bb6f8;
          pbVar9 = (byte *)*puVar3;
          uVar10 = (ulonglong)(uint)puVar3[1];
        }
        pbVar8 = pbVar9 + 1;
        uVar10 = uVar10 - 1;
        puVar11[0x15] = (uint)*pbVar9;
        iVar4 = *param_1;
        *(undefined4 *)(iVar4 + 0x18) = puVar11[0x11];
        *(undefined4 *)(iVar4 + 0x1c) = puVar11[0x13];
        *(undefined4 *)(iVar4 + 0x20) = puVar11[0x14];
        puVar11 = puVar11 + 0x15;
        *(undefined4 *)(iVar4 + 0x24) = *puVar11;
        *(undefined4 *)(*param_1 + 0x14) = 0x65;
        (**(code **)(*param_1 + 4))(param_1,1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_1[9]);
    }
    uVar5 = 1;
    *(undefined1 *)(param_1[0x65] + 0xd) = 1;
    *puVar3 = pbVar8;
    puVar3[1] = (int)uVar10;
  }
  return uVar5;
}

