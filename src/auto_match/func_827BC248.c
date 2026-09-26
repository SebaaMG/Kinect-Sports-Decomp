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
extern int fn_827C1A20();
extern unsigned int lbl_82017AE8;


undefined8 fn_827BC248(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar7;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  ushort uVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  byte *pbVar15;
  ushort *puVar16;
  
  puVar2 = (undefined4 *)param_1[6];
  uVar8 = (ulonglong)(uint)puVar2[1];
  pbVar9 = (byte *)*puVar2;
  if (uVar8 == 0) {
    cVar7 = (*(code *)puVar2[3])();
    if (cVar7 != '\0') {
      pbVar9 = (byte *)*puVar2;
      uVar8 = (ulonglong)(uint)puVar2[1];
      goto LAB_827bc290;
    }
LAB_827bc280:
    uVar5 = 0;
  }
  else {
LAB_827bc290:
    bVar1 = *pbVar9;
    uVar8 = uVar8 - 1;
    pbVar9 = pbVar9 + 1;
    if (uVar8 == 0) {
      cVar7 = (*(code *)puVar2[3])(param_1);
      if (cVar7 == '\0') goto LAB_827bc280;
      pbVar9 = (byte *)*puVar2;
      uVar8 = (ulonglong)(uint)puVar2[1];
    }
    pbVar15 = pbVar9 + 1;
    uVar8 = uVar8 - 1;
    lVar12 = (ulonglong)*pbVar9 + (ulonglong)bVar1 * 0x100 + -2;
    if (0 < lVar12) {
      lVar13 = lVar12;
      do {
        if ((uVar8 & 0xffffffff) == 0) {
          cVar7 = (*(code *)puVar2[3])(param_1);
          if (cVar7 == '\0') goto LAB_827bc280;
          pbVar15 = (byte *)*puVar2;
          uVar8 = (ulonglong)(uint)puVar2[1];
        }
        uVar4 = *pbVar15 & 0xf;
        iVar3 = (int)(uint)*pbVar15 >> 4;
        *(undefined4 *)(*param_1 + 0x14) = 0x51;
        uVar8 = uVar8 - 1;
        pbVar15 = pbVar15 + 1;
        *(uint *)(*param_1 + 0x18) = uVar4;
        *(int *)(*param_1 + 0x1c) = iVar3;
        (**(code **)(*param_1 + 4))(param_1,1);
        if (3 < uVar4) {
          *(undefined4 *)(*param_1 + 0x14) = 0x1f;
          *(uint *)(*param_1 + 0x18) = uVar4;
          (**(code **)*param_1)(param_1);
        }
        iVar10 = uVar4 + 0x24;
        if (param_1[iVar10] == 0) {
          iVar6 = fn_827C1A20(param_1);
          param_1[iVar10] = iVar6;
        }
        iVar10 = param_1[iVar10];
        piVar14 = (int *)&lbl_82017AE8;
        do {
          if (iVar3 == 0) {
            if ((uVar8 & 0xffffffff) == 0) {
              cVar7 = (*(code *)puVar2[3])(param_1);
              if (cVar7 == '\0') goto LAB_827bc280;
              pbVar15 = (byte *)*puVar2;
              uVar8 = (ulonglong)(uint)puVar2[1];
            }
            uVar11 = (ushort)*pbVar15;
          }
          else {
            if ((uVar8 & 0xffffffff) == 0) {
              cVar7 = (*(code *)puVar2[3])(param_1);
              if (cVar7 == '\0') goto LAB_827bc280;
              pbVar15 = (byte *)*puVar2;
              uVar8 = (ulonglong)(uint)puVar2[1];
            }
            bVar1 = *pbVar15;
            uVar8 = uVar8 - 1;
            pbVar15 = pbVar15 + 1;
            if (uVar8 == 0) {
              cVar7 = (*(code *)puVar2[3])(param_1);
              if (cVar7 == '\0') goto LAB_827bc280;
              pbVar15 = (byte *)*puVar2;
              uVar8 = (ulonglong)(uint)puVar2[1];
            }
            uVar11 = (ushort)*pbVar15 + (ushort)bVar1 * 0x100;
          }
          pbVar15 = pbVar15 + 1;
          uVar8 = uVar8 - 1;
          iVar6 = *piVar14;
          piVar14 = piVar14 + 1;
          *(ushort *)(iVar6 * 2 + iVar10) = uVar11;
        } while ((int)piVar14 < -0x7dfe8418);
        if (1 < *(int *)(*param_1 + 0x68)) {
          puVar16 = (ushort *)(iVar10 + -2);
          lVar12 = 8;
          do {
            iVar10 = *param_1;
            *(uint *)(iVar10 + 0x18) = (uint)puVar16[1];
            *(uint *)(iVar10 + 0x1c) = (uint)puVar16[2];
            *(uint *)(iVar10 + 0x20) = (uint)puVar16[3];
            *(uint *)(iVar10 + 0x24) = (uint)puVar16[4];
            *(uint *)(iVar10 + 0x28) = (uint)puVar16[5];
            *(uint *)(iVar10 + 0x2c) = (uint)puVar16[6];
            *(uint *)(iVar10 + 0x30) = (uint)puVar16[7];
            puVar16 = puVar16 + 8;
            *(uint *)(iVar10 + 0x34) = (uint)*puVar16;
            *(undefined4 *)(*param_1 + 0x14) = 0x5d;
            (**(code **)(*param_1 + 4))(param_1,2);
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        lVar12 = lVar13 + -0x41;
        if (iVar3 != 0) {
          lVar12 = lVar13 + -0x81;
        }
        lVar13 = lVar12;
      } while (0 < (int)lVar12);
    }
    if ((int)lVar12 != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0xb;
      (**(code **)*param_1)(param_1);
    }
    *puVar2 = pbVar15;
    uVar5 = 1;
    puVar2[1] = (int)uVar8;
  }
  return uVar5;
}

