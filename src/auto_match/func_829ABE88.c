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


undefined8 fn_829ABE88(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  
  puVar3 = (undefined4 *)param_1[6];
  uVar9 = (ulonglong)(uint)puVar3[1];
  pbVar7 = (byte *)*puVar3;
  param_1[0x38] = param_2;
  param_1[0x39] = param_3;
  if (uVar9 == 0) {
    iVar5 = (*(code *)puVar3[3])();
    if (iVar5 != 0) {
      pbVar7 = (byte *)*puVar3;
      uVar9 = (ulonglong)(uint)puVar3[1];
      goto LAB_829abedc;
    }
LAB_829abec8:
    uVar4 = 0;
  }
  else {
LAB_829abedc:
    bVar1 = *pbVar7;
    uVar9 = uVar9 - 1;
    pbVar7 = pbVar7 + 1;
    if (uVar9 == 0) {
      iVar5 = (*(code *)puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar7 = (byte *)*puVar3;
      uVar9 = (ulonglong)(uint)puVar3[1];
    }
    bVar2 = *pbVar7;
    uVar9 = uVar9 - 1;
    pbVar7 = pbVar7 + 1;
    if (uVar9 == 0) {
      iVar5 = (*(code *)puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar7 = (byte *)*puVar3;
      uVar9 = (ulonglong)(uint)puVar3[1];
    }
    uVar9 = uVar9 - 1;
    pbVar8 = pbVar7 + 1;
    param_1[0x36] = (uint)*pbVar7;
    if (uVar9 == 0) {
      iVar5 = (*(code *)puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar8 = (byte *)*puVar3;
      uVar9 = (ulonglong)(uint)puVar3[1];
    }
    uVar9 = uVar9 - 1;
    pbVar7 = pbVar8 + 1;
    param_1[8] = (uint)*pbVar8 << 8;
    if (uVar9 == 0) {
      iVar5 = (*(code *)puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar7 = (byte *)*puVar3;
      uVar9 = (ulonglong)(uint)puVar3[1];
    }
    pbVar8 = pbVar7 + 1;
    uVar9 = uVar9 - 1;
    param_1[8] = (uint)*pbVar7 + param_1[8];
    if (uVar9 == 0) {
      iVar5 = (*(code *)puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar8 = (byte *)*puVar3;
      uVar9 = (ulonglong)(uint)puVar3[1];
    }
    uVar9 = uVar9 - 1;
    pbVar7 = pbVar8 + 1;
    param_1[7] = (uint)*pbVar8 << 8;
    if (uVar9 == 0) {
      iVar5 = (*(code *)puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar7 = (byte *)*puVar3;
      uVar9 = (ulonglong)(uint)puVar3[1];
    }
    uVar9 = uVar9 - 1;
    pbVar8 = pbVar7 + 1;
    param_1[7] = (uint)*pbVar7 + param_1[7];
    if (uVar9 == 0) {
      iVar5 = (*(code *)puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar8 = (byte *)*puVar3;
      uVar9 = (ulonglong)(uint)puVar3[1];
    }
    pbVar7 = pbVar8 + 1;
    uVar9 = uVar9 - 1;
    iVar5 = *param_1;
    param_1[9] = (uint)*pbVar8;
    *(int *)(iVar5 + 0x18) = param_1[0x69];
    *(int *)(iVar5 + 0x1c) = param_1[7];
    *(int *)(iVar5 + 0x20) = param_1[8];
    *(int *)(iVar5 + 0x24) = param_1[9];
    *(undefined4 *)(*param_1 + 0x14) = 100;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (*(int *)(param_1[0x6f] + 0x10) != 0) {
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
    if (param_1[0x37] == 0) {
      iVar5 = (**(code **)param_1[1])(param_1,1,(ulonglong)(uint)param_1[9] * 0x54);
      param_1[0x37] = iVar5;
    }
    iVar5 = 0;
    if (0 < param_1[9]) {
      puVar10 = (undefined4 *)(param_1[0x37] + -0x44);
      do {
        puVar10[0x12] = iVar5;
        if ((uVar9 & 0xffffffff) == 0) {
          iVar6 = (*(code *)puVar3[3])(param_1);
          if (iVar6 == 0) goto LAB_829abec8;
          pbVar7 = (byte *)*puVar3;
          uVar9 = (ulonglong)(uint)puVar3[1];
        }
        uVar9 = uVar9 - 1;
        pbVar8 = pbVar7 + 1;
        puVar10[0x11] = (uint)*pbVar7;
        if (uVar9 == 0) {
          iVar6 = (*(code *)puVar3[3])(param_1);
          if (iVar6 == 0) goto LAB_829abec8;
          pbVar8 = (byte *)*puVar3;
          uVar9 = (ulonglong)(uint)puVar3[1];
        }
        bVar1 = *pbVar8;
        uVar9 = uVar9 - 1;
        pbVar8 = pbVar8 + 1;
        puVar10[0x14] = bVar1 & 0xf;
        puVar10[0x13] = (int)(uint)bVar1 >> 4;
        if (uVar9 == 0) {
          iVar6 = (*(code *)puVar3[3])(param_1);
          if (iVar6 == 0) goto LAB_829abec8;
          pbVar8 = (byte *)*puVar3;
          uVar9 = (ulonglong)(uint)puVar3[1];
        }
        pbVar7 = pbVar8 + 1;
        uVar9 = uVar9 - 1;
        puVar10[0x15] = (uint)*pbVar8;
        iVar6 = *param_1;
        *(undefined4 *)(iVar6 + 0x18) = puVar10[0x11];
        *(undefined4 *)(iVar6 + 0x1c) = puVar10[0x13];
        *(undefined4 *)(iVar6 + 0x20) = puVar10[0x14];
        puVar10 = puVar10 + 0x15;
        *(undefined4 *)(iVar6 + 0x24) = *puVar10;
        *(undefined4 *)(*param_1 + 0x14) = 0x65;
        (**(code **)(*param_1 + 4))(param_1,1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1[9]);
    }
    uVar4 = 1;
    *(undefined4 *)(param_1[0x6f] + 0x10) = 1;
    *puVar3 = pbVar7;
    puVar3[1] = (int)uVar9;
  }
  return uVar4;
}

