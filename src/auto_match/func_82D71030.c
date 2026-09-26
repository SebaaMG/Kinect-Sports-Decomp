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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CF6B28();
extern unsigned int stack0x00000000;
extern unsigned int uStack_144;
extern unsigned int uStack_c4;


void fn_82D71030(int *param_1,int param_2,code *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar10;
  undefined4 *puVar11;
  longlong lVar9;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  byte *pbVar18;
  int iVar19;
  longlong lVar20;
  int *piVar21;
  byte *pbVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  int aiStack_14c [2];
  undefined4 uStack_144;
  byte abStack_140 [4];
  byte abStack_13c [120];
  undefined4 uStack_c4;
  byte abStack_c0 [192];
  
  iVar13 = 0;
  piVar17 = *(int **)*param_1;
  iVar3 = fn_82CE5410();
  piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x200);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = 0;
  }
  lVar20 = 1;
  bVar2 = false;
  piVar21 = piVar17 + 4;
  piVar16 = (int *)((int)piVar17 + *piVar17 + 0x10);
  pbVar5 = (byte *)(piVar4 + 4);
  pbVar22 = (byte *)(piVar4 + 0x80);
  pbVar18 = (byte *)0x0;
  iVar3 = 0;
  iVar19 = 4;
  piVar15 = (int *)0x0;
LAB_82d710bc:
  do {
    while( true ) {
      do {
        piVar14 = piVar21 + -1;
        uVar24 = (ulonglong)(byte)((byte)*piVar21 >> 4);
        pbVar10 = pbVar5 + 8;
        do {
          *(int *)(pbVar10 + -8) = piVar14[1];
          *(int *)(pbVar10 + -4) = piVar14[2];
          *(undefined4 *)pbVar10 = *(undefined4 *)(pbVar10 + ((int)piVar21 - (int)pbVar5));
          piVar14 = piVar14 + 4;
          *(int *)(pbVar10 + 4) = *piVar14;
          pbVar10 = pbVar10 + 0x10;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
        puVar8 = (undefined4 *)(&stack0x00000000 + -0xc4);
        piVar21 = (int *)((uint)(byte)*piVar21 + (int)piVar21);
        puVar11 = (undefined4 *)(param_2 + -4);
        lVar25 = 8;
        do {
          puVar11 = puVar11 + 1;
          puVar8 = puVar8 + 1;
          *puVar8 = *puVar11;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        iVar6 = 0x10;
        uVar24 = (ulonglong)*pbVar5 << 0x20 | (ulonglong)*pbVar5 & 0xfffffffffffffff7;
        if ((uVar24 - 1 & 0xffffffff) < 6) {
          if ((int)(uVar24 - 1) == 0) {
            pbVar5 = pbVar5 + 0x10;
          }
          else {
            if (((uVar24 != 2) && (uVar24 != 3)) && ((uVar24 == 4 || (uVar24 == 5)))) {
              iVar6 = 0x20;
            }
            pbVar5 = (byte *)(*param_3)(&stack0x00000000 + -0xc0,pbVar5,pbVar5 + iVar6);
          }
        }
        piVar14 = piVar15;
        if (piVar21 == piVar16) {
          if (piVar15 != (int *)0x0) {
            iVar6 = fn_82CE5410();
            (**(code **)(**(int **)(iVar6 + 0x10) + 8))(*(int **)(iVar6 + 0x10),piVar15,0x200);
          }
          if (param_1[1] <= (int)lVar20) {
            if (bVar2) {
              puVar11 = (undefined4 *)(&stack0x00000000 + -0x144);
              lVar20 = (longlong)((int)pbVar5 - (int)abStack_140 >> 4);
              pbVar22 = (byte *)((int)piVar4 + (int)(pbVar18 + 0xc));
              do {
                *(undefined4 *)(pbVar22 + 4) = puVar11[1];
                *(undefined4 *)(pbVar22 + 8) = puVar11[2];
                *(undefined4 *)(pbVar22 + 0xc) = puVar11[3];
                puVar11 = puVar11 + 4;
                pbVar22 = pbVar22 + 0x10;
                *(undefined4 *)pbVar22 = *puVar11;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              pbVar5 = pbVar18 + ((int)pbVar5 - (int)abStack_140);
            }
            else {
              pbVar5 = pbVar5 + (-0x10 - (int)piVar4);
            }
            *piVar4 = (int)pbVar5;
            iVar19 = iVar13 + 1;
            iVar3 = fn_82CE5410();
            if ((int)(param_1[2] & 0x3fffffffU) < iVar19) {
              iVar6 = (param_1[2] & 0x3fffffffU) << 1;
              if (iVar6 <= iVar19) {
                iVar6 = iVar19;
              }
              fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1,iVar6,4);
            }
            param_1[1] = iVar19;
            *(int **)(iVar13 * 4 + *param_1) = piVar4;
            iVar3 = fn_82CE5410();
            (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),piVar17,0x200);
            return;
          }
          lVar20 = lVar20 + 1;
          piVar15 = *(int **)(iVar19 + *param_1);
          iVar19 = iVar19 + 4;
          piVar21 = piVar15 + 4;
          piVar16 = (int *)((int)piVar15 + *piVar15 + 0x10);
          piVar14 = piVar17;
          piVar17 = piVar15;
        }
        piVar15 = piVar14;
      } while (pbVar5 + 0x80 <= pbVar22);
      if (bVar2) break;
      bVar2 = true;
      pbVar18 = pbVar5 + (-0x10 - (int)piVar4);
      pbVar5 = &stack0x00000000 + -0x140;
      pbVar22 = &stack0x00000000 + -0xc0;
    }
    iVar6 = (int)pbVar5 - (int)(&stack0x00000000 + -0x140);
    if (iVar6 <= 0x1f0 - (int)pbVar18) {
      lVar25 = (longlong)(iVar6 >> 4);
      puVar11 = (undefined4 *)(&stack0x00000000 + -0x144);
      pbVar5 = (byte *)((int)piVar4 + (int)(pbVar18 + 0xc));
      do {
        *(undefined4 *)(pbVar5 + 4) = puVar11[1];
        *(undefined4 *)(pbVar5 + 8) = puVar11[2];
        *(undefined4 *)(pbVar5 + 0xc) = puVar11[3];
        puVar11 = puVar11 + 4;
        pbVar5 = pbVar5 + 0x10;
        *(undefined4 *)pbVar5 = *puVar11;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      pbVar18 = pbVar18 + iVar6;
      if ((int)pbVar18 < 0x1f0) {
        pbVar5 = &stack0x00000000 + -0x140;
        goto LAB_82d710bc;
      }
      bVar2 = false;
    }
    *piVar4 = (int)pbVar18;
    if ((int)lVar20 <= iVar13) {
      iVar7 = fn_82CE5410();
      uVar1 = param_1[1];
      lVar25 = (ulonglong)uVar1 + 1;
      iVar23 = (int)lVar25;
      if ((int)(param_1[2] & 0x3fffffffU) < iVar23) {
        lVar9 = ((ulonglong)(uint)param_1[2] & 0x3fffffff) << 1;
        if ((int)lVar9 <= iVar23) {
          lVar9 = lVar25;
        }
        fn_82CE6310(*(undefined4 *)(iVar7 + 0x10),param_1,lVar9,4);
      }
      fn_82CF6B28(iVar19 + *param_1 + 4,iVar19 + *param_1,
                   ((ulonglong)uVar1 - lVar20 & 0x3fffffff) << 2);
      param_1[1] = iVar23;
      lVar20 = lVar20 + 1;
      iVar19 = iVar19 + 4;
    }
    iVar13 = iVar13 + 1;
    *(int **)(iVar3 + *param_1) = piVar4;
    iVar3 = iVar3 + 4;
    if (piVar14 == (int *)0x0) {
      iVar7 = fn_82CE5410();
      piVar4 = (int *)(**(code **)(**(int **)(iVar7 + 0x10) + 4))(*(int **)(iVar7 + 0x10),0x200);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = 0;
      }
    }
    else {
      piVar15 = (int *)0x0;
      piVar4 = piVar14;
    }
    pbVar5 = (byte *)(piVar4 + 4);
    pbVar22 = (byte *)(piVar4 + 0x80);
    if (bVar2) {
      lVar25 = (longlong)(iVar6 >> 4);
      piVar14 = (int *)(&stack0x00000000 + -0x14c);
      piVar12 = piVar4 + 6;
      do {
        piVar12[-2] = piVar14[3];
        piVar14 = piVar14 + 4;
        piVar12[-1] = *piVar14;
        *piVar12 = *(int *)(abStack_140 + (int)piVar12 + -(int)pbVar5);
        piVar12[1] = *(int *)((int)piVar12 + (int)(abStack_140 + -(int)pbVar5 + 4));
        piVar12 = piVar12 + 4;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      pbVar5 = pbVar5 + iVar6;
      bVar2 = false;
    }
  } while( true );
}

