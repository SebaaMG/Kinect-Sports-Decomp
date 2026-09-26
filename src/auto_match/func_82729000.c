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
extern unsigned int *auStack_8c;
extern unsigned int *auStack_94;
extern unsigned int *auStack_a0;
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_82722540();
extern int fn_82724448();
extern int fn_82726250();
extern int fn_82728778();
extern unsigned int stack0x00000000;
extern unsigned int uStack_90;
extern unsigned int uStack_98;


void fn_82729000(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar6;
  undefined8 uVar5;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int aiStack_b0 [4];
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined1 auStack_94 [4];
  undefined4 uStack_90;
  undefined4 auStack_8c [19];
  byte bStack_40;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar6 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if (iVar6 == 4) {
      iVar6 = *(int *)(param_1 + 8) + -0x68;
      if (*(int *)(param_1 + 8) == 0) {
        iVar6 = 0;
      }
      iVar8 = *(int *)(iVar6 + 0xe8);
      if (iVar8 != 0) {
        *(uint *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1U & 0x8fffffff;
      }
      iVar6 = *(int *)(iVar6 + 0xe8);
    }
    else {
      iVar6 = (**(code **)(**(int **)(param_1 + 8) + 8))();
      if (iVar6 != 0xd) {
        return;
      }
      iVar6 = *(int *)(param_1 + 8) + -0x10;
      if (*(int *)(param_1 + 8) == 0) {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        *(uint *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1U & 0x8fffffff;
      }
    }
    if (iVar6 != 0) {
      if (0 < *(int *)(param_1 + 0x1c)) {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar5 = fn_826957D0(param_1,0);
        fn_82696D38(&stack0x00000000 + -0xb0,uVar5,uVar2,0xffffffffffffffff,0);
        uVar7 = fn_82722540(&stack0x00000000 + -0xb0);
        if ((int)uVar7 < 5) {
          iVar8 = fn_82724448(iVar6);
          puVar10 = &stack0x00000000 + -0x94;
          lVar12 = 5;
          do {
            *(undefined4 *)(puVar10 + 0xc) = 0;
            *(undefined4 *)(puVar10 + 8) = 0;
            *(undefined4 *)(puVar10 + 4) = 0;
            puVar10 = puVar10 + 0x10;
            *puVar10 = 0;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          bStack_40 = 0;
          if (iVar8 != 0) {
            puVar9 = (undefined4 *)(&stack0x00000000 + -0x98);
            puVar11 = (undefined4 *)(iVar8 + 8);
            lVar12 = 5;
            do {
              uVar2 = puVar11[-1];
              uVar3 = *puVar11;
              uVar1 = *(undefined1 *)(puVar11 + 1);
              puVar9[2] = puVar11[-2];
              puVar9[3] = uVar2;
              puVar9 = puVar9 + 4;
              *puVar9 = uVar3;
              *(undefined1 *)((int)auStack_8c + ((int)puVar11 - iVar8)) = uVar1;
              puVar11 = puVar11 + 4;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            bStack_40 = *(byte *)(iVar8 + 0x50);
          }
          bVar4 = bStack_40;
          puVar11 = (undefined4 *)(&stack0x00000000 + uVar7 * 0x10 + -0x90);
          puVar9 = (undefined4 *)fn_82728778(&stack0x00000000 + -0xa0,param_1,1,puVar11);
          uVar2 = puVar9[1];
          uVar3 = puVar9[2];
          bStack_40 = (byte)(1 << (uVar7 & 0x3f)) | bVar4;
          uVar1 = *(undefined1 *)(puVar9 + 3);
          *puVar11 = *puVar9;
          puVar11[1] = uVar2;
          puVar11[2] = uVar3;
          *(undefined1 *)(puVar11 + 3) = uVar1;
          fn_82726250(iVar6,&stack0x00000000 + -0x90);
        }
        lVar12 = (ulonglong)*(uint *)(aiStack_b0[0] + 8) - 1;
        *(int *)(aiStack_b0[0] + 8) = (int)lVar12;
        if (lVar12 == 0) {
          fn_826944C8(aiStack_b0[0]);
        }
      }
      fn_826824B0(iVar6);
    }
  }
  return;
}

