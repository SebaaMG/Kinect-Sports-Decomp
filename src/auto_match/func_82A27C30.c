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
extern int fn_82A26628();
extern int fn_82A26800();
extern int fn_82A27010();
extern unsigned int uStack_80;


void fn_82A27C30(int param_1,ushort *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int *piVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  uint uStack_80;
  ushort *apuStack_7c [31];
  
  if (*(int *)(param_1 + 0x584) == 0) {
    apuStack_7c[0] = (ushort *)((int)param_2 + 0xffffU & 0xffff0000);
    puVar10 = (ushort *)0x0;
    uVar11 = (int)apuStack_7c[0] - (int)param_2 >> 4 & 0xffff;
    iVar2 = *(int *)((*(byte *)(param_2 + 2) + 0x18) * 4 + param_1);
    if (uVar11 == 1) {
      apuStack_7c[0] = apuStack_7c[0] + 0x8000;
      uVar11 = 0x1001;
    }
    else if ((param_2[1] != 0) && (apuStack_7c[0] == param_2)) {
      puVar10 = param_2 + (uint)param_2[1] * -8;
    }
    puVar9 = (ushort *)0x0;
    puVar6 = param_2 + param_3 * 8;
    puVar7 = (ushort *)((uint)puVar6 & 0xffff0000);
    uVar3 = (int)puVar6 - (int)puVar7 >> 4;
    uVar12 = uVar3 & 0xffff;
    if (uVar12 == 1) {
      uVar12 = 0x1001;
      puVar7 = puVar7 + -0x8000;
    }
    else if (((uVar3 & 0xffff) == 0) && ((*(byte *)((int)param_2 + 5) & 0x10) == 0)) {
      puVar9 = puVar6;
    }
    puVar6 = puVar6 + uVar12 * -8;
    uStack_80 = (int)puVar7 - (int)apuStack_7c[0];
    if (puVar7 <= apuStack_7c[0]) {
      uStack_80 = 0;
    }
    if ((uStack_80 != 0) &&
       (puVar4 = (undefined4 *)fn_82A26628(iVar2), puVar4 != (undefined4 *)0x0)) {
      iVar5 = NtFreeVirtualMemory(apuStack_7c,&uStack_80,0x4000,*(undefined4 *)(param_1 + 0x590));
      *puVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x4c);
      *(undefined4 **)(*(int *)(iVar2 + 0x18) + 0x4c) = puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      if (-1 < iVar5) {
        fn_82A26800(iVar2,apuStack_7c[0],uStack_80);
        *(uint *)(iVar2 + 0x30) = (uStack_80 >> 0x10) + *(int *)(iVar2 + 0x30);
        if (uVar11 == 0) {
          if (puVar10 == (ushort *)0x0) {
            if ((apuStack_7c[0] <= *(ushort **)(iVar2 + 0x40)) &&
               (*(ushort **)(iVar2 + 0x40) < (ushort *)(uStack_80 + (int)apuStack_7c[0]))) {
              *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x28);
            }
          }
          else {
            *(byte *)((int)puVar10 + 5) = *(byte *)((int)puVar10 + 5) | 0x10;
            *(ushort **)(iVar2 + 0x40) = puVar10;
          }
        }
        else {
          *param_2 = (ushort)uVar11;
          *(undefined1 *)((int)param_2 + 5) = 0x10;
          *(uint *)(param_1 + 0x30) = uVar11 + *(int *)(param_1 + 0x30);
          *(ushort **)(iVar2 + 0x40) = param_2;
          *(byte *)((int)param_2 + 5) = *(byte *)((int)param_2 + 5) & 0xf8;
          if (uVar11 < 0x80) {
            piVar8 = (int *)((uVar11 + 0x30) * 8 + param_1);
            if ((int *)*piVar8 == piVar8) {
              iVar5 = ((*param_2 >> 5) + 0x58) * 4;
              *(uint *)(iVar5 + param_1) = 1 << (*param_2 & 0x1f) | *(uint *)(iVar5 + param_1);
            }
          }
          else {
            for (piVar8 = *(int **)(param_1 + 0x180);
                ((int *)(param_1 + 0x180) != piVar8 && (*(ushort *)(piVar8 + -2) < uVar11));
                piVar8 = (int *)*piVar8) {
            }
          }
          puVar4 = (undefined4 *)piVar8[1];
          *(int **)(param_2 + 4) = piVar8;
          *(undefined4 **)(param_2 + 6) = puVar4;
          *puVar4 = param_2 + 4;
          piVar8[1] = (int)(param_2 + 4);
        }
        if (uVar12 != 0) {
          puVar6[1] = 0;
          uVar1 = *(undefined1 *)(iVar2 + 4);
          *(undefined1 *)((int)puVar6 + 5) = 0;
          *(undefined1 *)(puVar6 + 2) = uVar1;
          *puVar6 = (ushort)uVar12;
          puVar6[uVar12 * 8 + 1] = (ushort)uVar12;
          *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) & 0xf8;
          if (uVar12 < 0x80) {
            piVar8 = (int *)((uVar12 + 0x30) * 8 + param_1);
            if ((int *)*piVar8 == piVar8) {
              iVar2 = ((*puVar6 >> 5) + 0x58) * 4;
              *(uint *)(iVar2 + param_1) = 1 << (*puVar6 & 0x1f) | *(uint *)(iVar2 + param_1);
            }
          }
          else {
            for (piVar8 = *(int **)(param_1 + 0x180);
                ((int *)(param_1 + 0x180) != piVar8 && (*(ushort *)(piVar8 + -2) < uVar12));
                piVar8 = (int *)*piVar8) {
            }
          }
          puVar4 = (undefined4 *)piVar8[1];
          *(int **)(puVar6 + 4) = piVar8;
          *(undefined4 **)(puVar6 + 6) = puVar4;
          *puVar4 = puVar6 + 4;
          piVar8[1] = (int)(puVar6 + 4);
          *(uint *)(param_1 + 0x30) = uVar12 + *(int *)(param_1 + 0x30);
          return;
        }
        if (puVar9 == (ushort *)0x0) {
          return;
        }
        puVar9[1] = 0;
        return;
      }
    }
  }
  fn_82A27010(param_1,param_2,param_3);
  return;
}

