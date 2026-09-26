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


ushort * fn_82A26920(int param_1,int param_2,uint *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  ushort *apuStack_50 [20];
  
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar5 = *(int **)(param_2 + 0x38);
    piVar10 = (int *)(param_2 + 0x38);
    piVar11 = (int *)0x0;
    do {
      piVar12 = piVar5;
      if ((*param_3 <= (uint)piVar12[2]) && ((param_4 == 0 || (piVar12[1] == param_4)))) {
        apuStack_50[0] = (ushort *)piVar12[1];
        if (*(code **)(param_1 + 0x584) == (code *)0x0) {
          iVar6 = NtAllocateVirtualMemory
                            (apuStack_50,param_3,0x60001000,4,*(undefined4 *)(param_1 + 0x590));
        }
        else {
          iVar6 = (**(code **)(param_1 + 0x584))(param_1,apuStack_50,param_3);
        }
        if (iVar6 < 0) {
          return (ushort *)0x0;
        }
        *(uint *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) - (uint)*(ushort *)param_3;
        if (*(int *)(param_2 + 0x1c) == piVar12[2]) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        puVar9 = *(ushort **)(param_2 + 0x40);
        if (((*(byte *)((int)puVar9 + 5) & 0x10) != 0) &&
           (puVar9 + (uint)*puVar9 * 8 == (ushort *)piVar12[1])) goto LAB_82a26aa0;
        if (piVar11 == (int *)0x0) {
          puVar9 = *(ushort **)(param_2 + 0x28);
        }
        else {
          puVar9 = (ushort *)(piVar11[2] + piVar11[1]);
        }
        if ((*(byte *)((int)puVar9 + 5) & 0x10) != 0) goto LAB_82a26aa0;
        puVar8 = puVar9;
        goto LAB_82a26a60;
      }
      piVar5 = (int *)*piVar12;
      piVar10 = piVar12;
      piVar11 = piVar12;
    } while ((int *)*piVar12 != (int *)0x0);
  }
  return (ushort *)0x0;
LAB_82a26a60:
  puVar9 = puVar8 + (uint)*puVar8 * 8;
  if ((*(ushort **)(param_2 + 0x2c) <= puVar9) || (*puVar9 == 0)) {
    bVar1 = puVar9 != apuStack_50[0];
    puVar9 = puVar8;
    if (bVar1) {
      return (ushort *)0x0;
    }
    goto LAB_82a26aa0;
  }
  puVar8 = puVar9;
  if ((*(byte *)((int)puVar9 + 5) & 0x10) != 0) {
LAB_82a26aa0:
    *(byte *)((int)puVar9 + 5) = *(byte *)((int)puVar9 + 5) & 0xef;
    uVar2 = piVar12[2];
    piVar12[1] = piVar12[1] + *param_3;
    uVar3 = *param_3;
    piVar12[2] = (int)((ulonglong)uVar2 - (ulonglong)uVar3);
    if ((ulonglong)uVar2 - (ulonglong)uVar3 == 0) {
      if (piVar12[1] == *(int *)(param_2 + 0x2c)) {
        *(undefined1 *)((int)apuStack_50[0] + 5) = 0x10;
        *(ushort **)(param_2 + 0x40) = apuStack_50[0];
      }
      else {
        *(undefined1 *)((int)apuStack_50[0] + 5) = 0;
        *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x28);
      }
      *piVar10 = *piVar12;
      *piVar12 = *(int *)(*(int *)(param_2 + 0x18) + 0x4c);
      *(int **)(*(int *)(param_2 + 0x18) + 0x4c) = piVar12;
      piVar12[1] = 0;
      piVar12[2] = 0;
      *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + -1;
    }
    else {
      *(undefined1 *)((int)apuStack_50[0] + 5) = 0x10;
      *(ushort **)(param_2 + 0x40) = apuStack_50[0];
    }
    *(undefined1 *)(apuStack_50[0] + 2) = *(undefined1 *)(puVar9 + 2);
    uVar2 = *param_3;
    uVar7 = (ushort)(uVar2 >> 4);
    *apuStack_50[0] = uVar7;
    apuStack_50[0][1] = *puVar9;
    if ((*(byte *)((int)apuStack_50[0] + 5) & 0x10) == 0) {
      apuStack_50[0][(uVar2 >> 4 & 0xffff) * 8 + 1] = uVar7;
    }
    if (*(int *)(param_2 + 0x1c) == 0) {
      for (puVar4 = *(undefined4 **)(param_2 + 0x38); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        if (*(uint *)(param_2 + 0x1c) <= (uint)puVar4[2]) {
          *(undefined4 *)(param_2 + 0x1c) = puVar4[2];
        }
      }
    }
    return apuStack_50[0];
  }
  goto LAB_82a26a60;
}

