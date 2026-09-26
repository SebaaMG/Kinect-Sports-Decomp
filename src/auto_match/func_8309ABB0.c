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


void fn_8309ABB0(int *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                  int param_7,int *param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  uVar7 = (ulonglong)(uint)param_1[1];
  iVar11 = 0;
  iVar9 = 0;
  if (0 < param_1[1]) {
    puVar12 = (undefined4 *)(param_7 + 0x24);
    puVar6 = (undefined4 *)(param_5 + 0x24);
    iVar10 = 0;
    iVar11 = 0;
    iVar9 = 0;
    do {
      piVar14 = (int *)(iVar10 + *param_1);
      uVar1 = piVar14[4];
      uVar13 = (ulonglong)uVar1;
      if (uVar1 == 1) {
        iVar2 = *piVar14;
        iVar11 = iVar11 + 1;
        iVar5 = iVar2 * 0x10;
        puVar15 = (undefined4 *)(iVar5 + param_2 & 0xfffffff0);
        uVar16 = puVar15[1];
        uVar17 = puVar15[2];
        uVar18 = puVar15[3];
        puVar8 = (undefined4 *)((uint)(puVar6 + -9) & 0xfffffff0);
        *puVar8 = *puVar15;
        puVar8[1] = uVar16;
        puVar8[2] = uVar17;
        puVar8[3] = uVar18;
        puVar15 = (undefined4 *)(iVar5 + param_3 & 0xfffffff0);
        uVar16 = *puVar15;
        uVar17 = puVar15[1];
        uVar18 = puVar15[2];
        uVar19 = puVar15[3];
        *puVar6 = 0;
        puVar15 = (undefined4 *)((uint)(puVar6 + -5) & 0xfffffff0);
        *puVar15 = uVar16;
        puVar15[1] = uVar17;
        puVar15[2] = uVar18;
        puVar15[3] = uVar19;
        *(undefined1 *)(puVar6 + -1) = 0;
        puVar6[3] = iVar2 * 0x60 + param_4;
        puVar6[4] = 1;
        puVar6[5] = 0;
        *(undefined1 *)((int)puVar6 + 0x19) = 0;
        puVar6 = puVar6 + 0x10;
      }
      else {
        if (0 < (int)uVar1) {
          piVar14 = piVar14 + -1;
          puVar15 = puVar12 + 0x2e;
          puVar8 = puVar12;
          do {
            piVar14 = piVar14 + 1;
            iVar2 = *piVar14;
            iVar5 = iVar2 * 0x10;
            puVar3 = (undefined4 *)(iVar5 + param_2 & 0xfffffff0);
            uVar16 = puVar3[1];
            uVar17 = puVar3[2];
            uVar18 = puVar3[3];
            puVar4 = (undefined4 *)((uint)(puVar8 + -9) & 0xfffffff0);
            *puVar4 = *puVar3;
            puVar4[1] = uVar16;
            puVar4[2] = uVar17;
            puVar4[3] = uVar18;
            puVar3 = (undefined4 *)(iVar5 + param_3 & 0xfffffff0);
            uVar16 = *puVar3;
            uVar17 = puVar3[1];
            uVar18 = puVar3[2];
            uVar19 = puVar3[3];
            *puVar8 = 0;
            puVar3 = (undefined4 *)((uint)(puVar8 + -5) & 0xfffffff0);
            *puVar3 = uVar16;
            puVar3[1] = uVar17;
            puVar3[2] = uVar18;
            puVar3[3] = uVar19;
            *(undefined1 *)(puVar8 + -1) = 0;
            puVar15[-5] = iVar2 * 0x60 + param_4;
            puVar8 = puVar8 + 0xc;
            puVar15 = puVar15 + 1;
            *puVar15 = 0;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar12[0x27] = uVar1;
        iVar9 = iVar9 + 1;
        *(undefined1 *)(puVar12 + 0x28) = 0;
        puVar12 = puVar12 + 0x40;
      }
      uVar7 = uVar7 - 1;
      iVar10 = iVar10 + 0x14;
    } while (uVar7 != 0);
  }
  *param_6 = iVar11;
  *param_8 = iVar9;
  return;
}

