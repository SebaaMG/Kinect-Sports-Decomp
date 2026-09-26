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
extern int fn_829B6D60();
extern unsigned int lbl_820548B8;


undefined8 fn_829ACA30(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  ulonglong uVar7;
  byte *pbVar8;
  int iVar9;
  ushort uVar10;
  longlong lVar11;
  longlong lVar12;
  byte *pbVar13;
  int *piVar14;
  ushort *puVar15;
  
  puVar2 = (undefined4 *)param_1[6];
  uVar7 = (ulonglong)(uint)puVar2[1];
  pbVar8 = (byte *)*puVar2;
  if (uVar7 == 0) {
    iVar5 = (*(code *)puVar2[3])();
    if (iVar5 != 0) {
      pbVar8 = (byte *)*puVar2;
      uVar7 = (ulonglong)(uint)puVar2[1];
      goto LAB_829aca7c;
    }
LAB_829aca68:
    uVar4 = 0;
  }
  else {
LAB_829aca7c:
    bVar1 = *pbVar8;
    uVar7 = uVar7 - 1;
    pbVar8 = pbVar8 + 1;
    if (uVar7 == 0) {
      iVar5 = (*(code *)puVar2[3])(param_1);
      if (iVar5 == 0) goto LAB_829aca68;
      pbVar8 = (byte *)*puVar2;
      uVar7 = (ulonglong)(uint)puVar2[1];
    }
    pbVar13 = pbVar8 + 1;
    uVar7 = uVar7 - 1;
    lVar11 = (ulonglong)*pbVar8 + (ulonglong)bVar1 * 0x100 + -2;
    if (0 < lVar11) {
      lVar12 = lVar11;
      do {
        if ((uVar7 & 0xffffffff) == 0) {
          iVar5 = (*(code *)puVar2[3])(param_1);
          if (iVar5 == 0) goto LAB_829aca68;
          pbVar13 = (byte *)*puVar2;
          uVar7 = (ulonglong)(uint)puVar2[1];
        }
        uVar7 = uVar7 - 1;
        uVar3 = *pbVar13 & 0xf;
        iVar5 = (int)(uint)*pbVar13 >> 4;
        *(undefined4 *)(*param_1 + 0x14) = 0x51;
        pbVar13 = pbVar13 + 1;
        *(uint *)(*param_1 + 0x18) = uVar3;
        *(int *)(*param_1 + 0x1c) = iVar5;
        (**(code **)(*param_1 + 4))(param_1,1);
        if (3 < uVar3) {
          *(undefined4 *)(*param_1 + 0x14) = 0x1f;
          *(uint *)(*param_1 + 0x18) = uVar3;
          (**(code **)*param_1)(param_1);
        }
        iVar9 = uVar3 + 0x2a;
        if (param_1[iVar9] == 0) {
          iVar6 = fn_829B6D60(param_1);
          param_1[iVar9] = iVar6;
        }
        iVar9 = param_1[iVar9];
        piVar14 = (int *)&lbl_820548B8;
        do {
          if (iVar5 == 0) {
            if ((uVar7 & 0xffffffff) == 0) {
              iVar6 = (*(code *)puVar2[3])(param_1);
              if (iVar6 == 0) goto LAB_829aca68;
              pbVar13 = (byte *)*puVar2;
              uVar7 = (ulonglong)(uint)puVar2[1];
            }
            uVar10 = (ushort)*pbVar13;
          }
          else {
            if ((uVar7 & 0xffffffff) == 0) {
              iVar6 = (*(code *)puVar2[3])(param_1);
              if (iVar6 == 0) goto LAB_829aca68;
              pbVar13 = (byte *)*puVar2;
              uVar7 = (ulonglong)(uint)puVar2[1];
            }
            bVar1 = *pbVar13;
            uVar7 = uVar7 - 1;
            pbVar13 = pbVar13 + 1;
            if (uVar7 == 0) {
              iVar6 = (*(code *)puVar2[3])(param_1);
              if (iVar6 == 0) goto LAB_829aca68;
              pbVar13 = (byte *)*puVar2;
              uVar7 = (ulonglong)(uint)puVar2[1];
            }
            uVar10 = (ushort)*pbVar13 + (ushort)bVar1 * 0x100;
          }
          pbVar13 = pbVar13 + 1;
          uVar7 = uVar7 - 1;
          iVar6 = *piVar14;
          piVar14 = piVar14 + 1;
          *(ushort *)(iVar6 * 2 + iVar9) = uVar10;
        } while ((int)piVar14 < -0x7dfab648);
        if (1 < *(int *)(*param_1 + 0x68)) {
          puVar15 = (ushort *)(iVar9 + -2);
          lVar11 = 8;
          do {
            iVar9 = *param_1;
            *(uint *)(iVar9 + 0x18) = (uint)puVar15[1];
            *(uint *)(iVar9 + 0x1c) = (uint)puVar15[2];
            *(uint *)(iVar9 + 0x20) = (uint)puVar15[3];
            *(uint *)(iVar9 + 0x24) = (uint)puVar15[4];
            *(uint *)(iVar9 + 0x28) = (uint)puVar15[5];
            *(uint *)(iVar9 + 0x2c) = (uint)puVar15[6];
            *(uint *)(iVar9 + 0x30) = (uint)puVar15[7];
            puVar15 = puVar15 + 8;
            *(uint *)(iVar9 + 0x34) = (uint)*puVar15;
            *(undefined4 *)(*param_1 + 0x14) = 0x5d;
            (**(code **)(*param_1 + 4))(param_1,2);
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        lVar11 = lVar12 + -0x41;
        if (iVar5 != 0) {
          lVar11 = lVar12 + -0x81;
        }
        lVar12 = lVar11;
      } while (0 < (int)lVar11);
    }
    if ((int)lVar11 != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0xb;
      (**(code **)*param_1)(param_1);
    }
    *puVar2 = pbVar13;
    uVar4 = 1;
    puVar2[1] = (int)uVar7;
  }
  return uVar4;
}

