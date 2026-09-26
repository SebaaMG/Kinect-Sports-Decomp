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


undefined8 fn_829AC2D8(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar6;
  undefined8 uVar5;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  byte *pbVar13;
  
  puVar4 = (undefined4 *)param_1[6];
  pbVar13 = (byte *)*puVar4;
  uVar11 = (ulonglong)(uint)puVar4[1];
  if (*(int *)(param_1[0x6f] + 0x10) == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3e;
    (**(code **)*param_1)();
  }
  if (uVar11 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 != 0) {
      pbVar13 = (byte *)*puVar4;
      uVar11 = (ulonglong)(uint)puVar4[1];
      goto LAB_829ac354;
    }
LAB_829ac340:
    uVar5 = 0;
  }
  else {
LAB_829ac354:
    bVar1 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) {
      iVar6 = (*(code *)puVar4[3])(param_1);
      if (iVar6 == 0) goto LAB_829ac340;
      pbVar13 = (byte *)*puVar4;
      uVar11 = (ulonglong)(uint)puVar4[1];
    }
    bVar2 = *pbVar13;
    uVar11 = uVar11 - 1;
    pbVar13 = pbVar13 + 1;
    if (uVar11 == 0) {
      iVar6 = (*(code *)puVar4[3])(param_1);
      if (iVar6 == 0) goto LAB_829ac340;
      pbVar13 = (byte *)*puVar4;
      uVar11 = (ulonglong)(uint)puVar4[1];
    }
    bVar3 = *pbVar13;
    uVar11 = uVar11 - 1;
    pbVar13 = pbVar13 + 1;
    *(undefined4 *)(*param_1 + 0x14) = 0x67;
    *(uint *)(*param_1 + 0x18) = (uint)bVar3;
    (**(code **)(*param_1 + 4))(param_1,1);
    if ((((uint)bVar2 + (uint)bVar1 * 0x100 != (bVar3 + 3) * 2) || (bVar3 == 0)) || (4 < bVar3)) {
      *(undefined4 *)(*param_1 + 0x14) = 0xb;
      (**(code **)*param_1)(param_1);
    }
    param_1[0x53] = (uint)bVar3;
    iVar6 = 0;
    if (bVar3 != 0) {
      piVar9 = param_1 + 0x53;
      do {
        if ((uVar11 & 0xffffffff) == 0) {
          iVar7 = (*(code *)puVar4[3])(param_1);
          if (iVar7 == 0) goto LAB_829ac340;
          pbVar13 = (byte *)*puVar4;
          uVar11 = (ulonglong)(uint)puVar4[1];
        }
        bVar1 = *pbVar13;
        uVar11 = uVar11 - 1;
        pbVar8 = pbVar13 + 1;
        if (uVar11 == 0) {
          iVar7 = (*(code *)puVar4[3])(param_1);
          if (iVar7 == 0) goto LAB_829ac340;
          pbVar8 = (byte *)*puVar4;
          uVar11 = (ulonglong)(uint)puVar4[1];
        }
        pbVar13 = pbVar8 + 1;
        bVar2 = *pbVar8;
        uVar11 = uVar11 - 1;
        puVar12 = (uint *)param_1[0x37];
        iVar7 = 0;
        uVar10 = (uint)bVar1;
        if (0 < param_1[9]) {
          do {
            if (uVar10 == *puVar12) goto LAB_829ac50c;
            iVar7 = iVar7 + 1;
            puVar12 = puVar12 + 0x15;
          } while (iVar7 < param_1[9]);
        }
        *(undefined4 *)(*param_1 + 0x14) = 5;
        *(uint *)(*param_1 + 0x18) = uVar10;
        (**(code **)*param_1)(param_1);
LAB_829ac50c:
        piVar9 = piVar9 + 1;
        *piVar9 = (int)puVar12;
        puVar12[6] = bVar2 & 0xf;
        puVar12[5] = (int)(uint)bVar2 >> 4;
        iVar7 = *param_1;
        *(uint *)(iVar7 + 0x18) = uVar10;
        *(uint *)(iVar7 + 0x1c) = puVar12[5];
        *(uint *)(iVar7 + 0x20) = puVar12[6];
        *(undefined4 *)(*param_1 + 0x14) = 0x68;
        (**(code **)(*param_1 + 4))(param_1,1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(uint)bVar3);
    }
    if ((uVar11 & 0xffffffff) == 0) {
      iVar6 = (*(code *)puVar4[3])(param_1);
      if (iVar6 == 0) goto LAB_829ac340;
      pbVar13 = (byte *)*puVar4;
      uVar11 = (ulonglong)(uint)puVar4[1];
    }
    uVar11 = uVar11 - 1;
    pbVar8 = pbVar13 + 1;
    param_1[0x65] = (uint)*pbVar13;
    if (uVar11 == 0) {
      iVar6 = (*(code *)puVar4[3])(param_1);
      if (iVar6 == 0) goto LAB_829ac340;
      pbVar8 = (byte *)*puVar4;
      uVar11 = (ulonglong)(uint)puVar4[1];
    }
    uVar11 = uVar11 - 1;
    pbVar13 = pbVar8 + 1;
    param_1[0x66] = (uint)*pbVar8;
    if (uVar11 == 0) {
      iVar6 = (*(code *)puVar4[3])(param_1);
      if (iVar6 == 0) goto LAB_829ac340;
      pbVar13 = (byte *)*puVar4;
      uVar11 = (ulonglong)(uint)puVar4[1];
    }
    bVar1 = *pbVar13;
    iVar6 = *param_1;
    param_1[0x68] = bVar1 & 0xf;
    param_1[0x67] = (int)(uint)bVar1 >> 4;
    *(int *)(iVar6 + 0x18) = param_1[0x65];
    *(int *)(iVar6 + 0x1c) = param_1[0x66];
    *(int *)(iVar6 + 0x20) = param_1[0x67];
    *(int *)(iVar6 + 0x24) = param_1[0x68];
    *(undefined4 *)(*param_1 + 0x14) = 0x69;
    (**(code **)(*param_1 + 4))(param_1,1);
    uVar5 = 1;
    *(undefined4 *)(param_1[0x6f] + 0x14) = 0;
    param_1[0x25] = param_1[0x25] + 1;
    *puVar4 = pbVar13 + 1;
    puVar4[1] = (int)uVar11 + -1;
  }
  return uVar5;
}

