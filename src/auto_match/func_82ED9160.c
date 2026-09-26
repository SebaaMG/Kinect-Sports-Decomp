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
extern int fn_82F68CC0();


void fn_82ED9160(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                  int param_5,int param_6,int param_7,int param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar19;
  longlong lVar18;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  iVar6 = *(int *)(param_1 + 0x31c);
  iVar5 = iVar6 - *(int *)(param_1 + 0x548);
  iVar11 = *(int *)(param_1 + 800) - *(int *)(param_1 + 0x550);
  iVar3 = iVar5 + 0x10;
  iVar16 = iVar11 + 0x10;
  iVar5 = iVar5 + 0x11 >> 1;
  iVar11 = iVar11 + 0x11 >> 1;
  iVar15 = iVar6 + 1 >> 1;
  if ((*(int *)(param_1 + 0x6d54) != 0) && (*(int *)(param_1 + 0x7b38) != 0)) {
    iVar6 = iVar6 << 1;
    iVar15 = iVar15 << 1;
  }
  if ((*(int *)(param_1 + 0x340) == 0) &&
     (((param_8 != 0 && (iVar3 != 0x10)) || ((in_stack_00000054 != 0 && (iVar16 != 0x10)))))) {
    if (param_8 != 0) {
      if (in_stack_00000054 == 0) {
        iVar16 = 0x10;
        iVar11 = 8;
      }
      iVar17 = iVar16;
      puVar13 = param_2;
      iVar4 = param_5;
      if (0 < iVar16) {
        do {
          iVar8 = 0;
          if (0 < iVar3) {
            puVar12 = puVar13;
            iVar19 = iVar3;
            do {
              *puVar12 = puVar12[iVar4 - (int)puVar13];
              puVar12 = puVar12 + 1;
              iVar19 = iVar19 + -1;
              iVar8 = iVar3;
            } while (iVar19 != 0);
          }
          uVar1 = *(undefined1 *)(iVar8 + iVar4 + -1);
          if (iVar8 < 0x10) {
            puVar12 = puVar13 + iVar8 + -1;
            for (iVar8 = 0x10 - iVar8; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar12 = puVar12 + 1;
              *puVar12 = uVar1;
            }
          }
          iVar17 = iVar17 + -1;
          puVar13 = puVar13 + 0x10;
          iVar4 = iVar4 + iVar6;
        } while (iVar17 != 0);
      }
      if ((in_stack_0000005c == 0) && (0 < iVar11)) {
        iVar3 = param_6;
        puVar13 = param_3;
        iVar17 = iVar11;
        do {
          iVar4 = 0;
          if (0 < iVar5) {
            iVar8 = iVar5;
            puVar12 = puVar13;
            do {
              *puVar12 = puVar12[iVar3 - (int)puVar13];
              puVar12[(int)param_4 - (int)param_3] =
                   puVar12[((param_7 - param_6) - (int)puVar13) + iVar3];
              puVar12 = puVar12 + 1;
              iVar8 = iVar8 + -1;
              iVar4 = iVar5;
            } while (iVar8 != 0);
          }
          uVar1 = *(undefined1 *)(iVar4 + iVar3 + -1);
          uVar2 = *(undefined1 *)((param_7 - param_6) + iVar4 + iVar3 + -1);
          if (iVar4 < 8) {
            iVar8 = 8 - iVar4;
            puVar12 = puVar13 + ((int)param_4 - (int)param_3) + iVar4;
            do {
              puVar12[(int)puVar13 - (int)(puVar13 + ((int)param_4 - (int)param_3))] = uVar1;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          iVar17 = iVar17 + -1;
          puVar13 = puVar13 + 8;
          iVar3 = iVar3 + iVar15;
        } while (iVar17 != 0);
      }
    }
    if (in_stack_00000054 != 0) {
      if (param_8 == 0) {
        iVar5 = iVar16;
        iVar3 = 0;
        if (0 < iVar16) {
          do {
            lVar18 = 0x10;
            puVar13 = param_2;
            do {
              *puVar13 = puVar13[param_5 - (int)param_2];
              puVar13 = puVar13 + 1;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            iVar5 = iVar5 + -1;
            param_2 = param_2 + 0x10;
            param_5 = param_5 + iVar6;
            iVar3 = iVar16;
          } while (iVar5 != 0);
        }
      }
      else {
        param_2 = param_2 + iVar16 * 0x10;
        iVar3 = iVar16;
      }
      puVar13 = param_2 + -0x10;
      if (iVar3 < 0x10) {
        iVar3 = 0x10 - iVar3;
        do {
          fn_82F68CC0(param_2,puVar13,0x10);
          iVar3 = iVar3 + -1;
          param_2 = param_2 + 0x10;
        } while (iVar3 != 0);
      }
      if (in_stack_0000005c == 0) {
        if (param_8 == 0) {
          puVar13 = param_3;
          puVar12 = param_4;
          iVar6 = 0;
          if (0 < iVar11) {
            puVar7 = (undefined1 *)(param_6 + 3);
            puVar9 = (undefined1 *)(param_7 + 2);
            iVar5 = iVar11;
            do {
              *puVar13 = puVar7[-3];
              *puVar12 = puVar9[-2];
              puVar12[(int)(param_3 + (1 - (int)param_4))] = puVar7[-2];
              puVar12[1] = puVar9[-1];
              puVar13[2] = puVar9[param_6 - param_7];
              puVar12[2] = *puVar9;
              puVar13[3] = *puVar7;
              puVar12[3] = puVar9[1];
              puVar13[4] = puVar7[1];
              puVar12[4] = puVar9[2];
              puVar13[5] = puVar7[2];
              puVar12[5] = puVar9[3];
              puVar13[6] = puVar7[3];
              puVar12[6] = puVar9[4];
              puVar14 = puVar7 + 4;
              puVar7 = puVar7 + iVar15;
              puVar13[7] = *puVar14;
              puVar13 = puVar13 + 8;
              puVar14 = puVar9 + 5;
              puVar9 = puVar9 + iVar15;
              puVar12[7] = *puVar14;
              puVar12 = puVar12 + 8;
              iVar5 = iVar5 + -1;
              iVar6 = iVar11;
            } while (iVar5 != 0);
          }
        }
        else {
          puVar13 = param_3 + iVar11 * 8;
          puVar12 = param_4 + iVar11 * 8;
          iVar6 = iVar11;
        }
        if (iVar6 < 8) {
          iVar6 = 8 - iVar6;
          puVar7 = puVar13 + -8;
          puVar9 = puVar12 + -8;
          do {
            puVar14 = puVar13 + -9;
            puVar10 = puVar7 + 7;
            lVar18 = 8;
            do {
              puVar14 = puVar14 + 1;
              puVar10 = puVar10 + 1;
              *puVar10 = *puVar14;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            puVar14 = puVar12 + -9;
            puVar10 = puVar9 + 7;
            lVar18 = 8;
            do {
              puVar14 = puVar14 + 1;
              puVar10 = puVar10 + 1;
              *puVar10 = *puVar14;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            iVar6 = iVar6 + -1;
            puVar7 = puVar7 + 8;
            puVar9 = puVar9 + 8;
          } while (iVar6 != 0);
        }
      }
    }
  }
  else {
    (**(code **)(param_1 + 0x2008))(param_1,param_2,param_5,0x10);
    if (in_stack_0000005c == 0) {
      (**(code **)(param_1 + 0x2004))(param_1,param_3,param_6,8,iVar15);
      (**(code **)(param_1 + 0x2004))(param_1,param_4,param_7,8,iVar15);
    }
  }
  return;
}

