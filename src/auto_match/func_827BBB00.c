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


undefined8 fn_827BBB00(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  char cVar6;
  undefined8 uVar5;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  byte *pbVar14;
  
  puVar4 = (undefined4 *)param_1[6];
  pbVar14 = (byte *)*puVar4;
  uVar12 = (ulonglong)(uint)puVar4[1];
  if (*(char *)(param_1[0x65] + 0xd) == '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x3e;
    (**(code **)*param_1)();
  }
  if (uVar12 == 0) {
    cVar6 = (*(code *)puVar4[3])(param_1);
    if (cVar6 != '\0') {
      pbVar14 = (byte *)*puVar4;
      uVar12 = (ulonglong)(uint)puVar4[1];
      goto LAB_827bbb78;
    }
LAB_827bbb68:
    uVar5 = 0;
  }
  else {
LAB_827bbb78:
    bVar1 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) {
      cVar6 = (*(code *)puVar4[3])(param_1);
      if (cVar6 == '\0') goto LAB_827bbb68;
      pbVar14 = (byte *)*puVar4;
      uVar12 = (ulonglong)(uint)puVar4[1];
    }
    bVar2 = *pbVar14;
    uVar12 = uVar12 - 1;
    pbVar14 = pbVar14 + 1;
    if (uVar12 == 0) {
      cVar6 = (*(code *)puVar4[3])(param_1);
      if (cVar6 == '\0') goto LAB_827bbb68;
      pbVar14 = (byte *)*puVar4;
      uVar12 = (ulonglong)(uint)puVar4[1];
    }
    bVar3 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    uVar12 = uVar12 - 1;
    *(undefined4 *)(*param_1 + 0x14) = 0x67;
    *(uint *)(*param_1 + 0x18) = (uint)bVar3;
    (**(code **)(*param_1 + 4))(param_1,1);
    if ((((uint)bVar2 + (uint)bVar1 * 0x100 != (bVar3 + 3) * 2) || (bVar3 == 0)) || (4 < bVar3)) {
      *(undefined4 *)(*param_1 + 0x14) = 0xb;
      (**(code **)*param_1)(param_1);
    }
    param_1[0x49] = (uint)bVar3;
    iVar10 = 0;
    if (bVar3 != 0) {
      piVar9 = param_1 + 0x49;
      do {
        if ((uVar12 & 0xffffffff) == 0) {
          cVar6 = (*(code *)puVar4[3])(param_1);
          if (cVar6 == '\0') goto LAB_827bbb68;
          pbVar14 = (byte *)*puVar4;
          uVar12 = (ulonglong)(uint)puVar4[1];
        }
        bVar1 = *pbVar14;
        uVar12 = uVar12 - 1;
        pbVar8 = pbVar14 + 1;
        if (uVar12 == 0) {
          cVar6 = (*(code *)puVar4[3])(param_1);
          if (cVar6 == '\0') goto LAB_827bbb68;
          pbVar8 = (byte *)*puVar4;
          uVar12 = (ulonglong)(uint)puVar4[1];
        }
        pbVar14 = pbVar8 + 1;
        bVar2 = *pbVar8;
        uVar12 = uVar12 - 1;
        puVar13 = (uint *)param_1[0x31];
        iVar7 = 0;
        uVar11 = (uint)bVar1;
        if (0 < param_1[9]) {
          do {
            if (uVar11 == *puVar13) goto LAB_827bbd2c;
            iVar7 = iVar7 + 1;
            puVar13 = puVar13 + 0x15;
          } while (iVar7 < param_1[9]);
        }
        *(undefined4 *)(*param_1 + 0x14) = 5;
        *(uint *)(*param_1 + 0x18) = uVar11;
        (**(code **)*param_1)(param_1);
LAB_827bbd2c:
        piVar9 = piVar9 + 1;
        *piVar9 = (int)puVar13;
        puVar13[6] = bVar2 & 0xf;
        puVar13[5] = (int)(uint)bVar2 >> 4;
        iVar7 = *param_1;
        *(uint *)(iVar7 + 0x18) = uVar11;
        *(uint *)(iVar7 + 0x1c) = puVar13[5];
        *(uint *)(iVar7 + 0x20) = puVar13[6];
        *(undefined4 *)(*param_1 + 0x14) = 0x68;
        (**(code **)(*param_1 + 4))(param_1,1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)(uint)bVar3);
    }
    if ((uVar12 & 0xffffffff) == 0) {
      cVar6 = (*(code *)puVar4[3])(param_1);
      if (cVar6 == '\0') goto LAB_827bbb68;
      pbVar14 = (byte *)*puVar4;
      uVar12 = (ulonglong)(uint)puVar4[1];
    }
    uVar12 = uVar12 - 1;
    pbVar8 = pbVar14 + 1;
    param_1[0x5b] = (uint)*pbVar14;
    if (uVar12 == 0) {
      cVar6 = (*(code *)puVar4[3])(param_1);
      if (cVar6 == '\0') goto LAB_827bbb68;
      pbVar8 = (byte *)*puVar4;
      uVar12 = (ulonglong)(uint)puVar4[1];
    }
    uVar12 = uVar12 - 1;
    pbVar14 = pbVar8 + 1;
    param_1[0x5c] = (uint)*pbVar8;
    if (uVar12 == 0) {
      cVar6 = (*(code *)puVar4[3])(param_1);
      if (cVar6 == '\0') goto LAB_827bbb68;
      pbVar14 = (byte *)*puVar4;
      uVar12 = (ulonglong)(uint)puVar4[1];
    }
    bVar1 = *pbVar14;
    iVar10 = *param_1;
    param_1[0x5e] = bVar1 & 0xf;
    param_1[0x5d] = (int)(uint)bVar1 >> 4;
    *(int *)(iVar10 + 0x18) = param_1[0x5b];
    *(int *)(iVar10 + 0x1c) = param_1[0x5c];
    *(int *)(iVar10 + 0x20) = param_1[0x5d];
    *(int *)(iVar10 + 0x24) = param_1[0x5e];
    *(undefined4 *)(*param_1 + 0x14) = 0x69;
    (**(code **)(*param_1 + 4))(param_1,1);
    uVar5 = 1;
    *(undefined4 *)(param_1[0x65] + 0x10) = 0;
    param_1[0x1f] = param_1[0x1f] + 1;
    *puVar4 = pbVar14 + 1;
    puVar4[1] = (int)uVar12 + -1;
  }
  return uVar5;
}

