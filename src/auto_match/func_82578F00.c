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
extern int fn_82577FB0();
extern int fn_82578308();
extern int fn_82578430();
extern int fn_82578538();
extern int fn_82578668();
extern int fn_825787A8();
extern int fn_825C8590();
extern int fn_8262FEC8();
extern int fn_8263CBB0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_8265CA60();
extern int fn_82A938E8();
extern int fn_82A93F70();
extern unsigned int lbl_8320A898;


void fn_82578F00(int param_1,int param_2,int param_3,int *param_4)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  undefined4 uVar6;
  ulonglong uVar5;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  bool bVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  iVar10 = (int)in_r0;
  puVar2 = *(ushort **)(param_1 + 0x34);
  if ((param_2 < (*(int *)(puVar2 + 4) - *(int *)(puVar2 + 2)) / (int)(uint)*puVar2) &&
     (iVar8 = (uint)*puVar2 * param_2 + *(int *)(puVar2 + 2), *(int *)(iVar8 + 0x10) == 0)) {
    lVar11 = -1;
    *(undefined4 *)(iVar8 + 0x138) = 0;
    *(undefined4 *)(iVar8 + 0x140) = 0;
    *(undefined4 *)(iVar8 + 0x144) = 0;
    lVar12 = lVar11;
    if (param_4 != (int *)0x0) {
      lVar12 = 0;
      if (0 < *param_4) {
        iVar9 = 0;
LAB_82578f90:
        if (*(int *)(iVar9 + param_4[1]) != param_2) goto code_r0x82578f9c;
        lVar11 = lVar12;
        if ((int)lVar12 != -1) {
          iVar9 = (int)lVar12 * 0xa0;
          iVar10 = param_4[1] + iVar9;
          *(int *)(iVar8 + 0x138) = iVar10;
          uVar3 = *(uint *)(iVar10 + 4);
          *(uint *)(iVar8 + 0x13c) = uVar3;
          lVar11 = ((ulonglong)uVar3 & 0x3fffffff) << 2;
          if (0x3fffffff < uVar3) {
            lVar11 = -1;
          }
          uVar6 = fn_8265CA60(lVar11);
          iVar10 = (int)in_r0;
          *(undefined4 *)(iVar8 + 0x140) = uVar6;
          iVar13 = 0;
          if (0 < *(int *)(iVar8 + 0x13c)) {
            iVar15 = 0;
            iVar14 = 0;
            do {
              uVar6 = fn_8265C9E0(0x20);
              *(undefined4 *)(iVar15 + *(int *)(iVar8 + 0x140)) = uVar6;
              iVar10 = *(int *)(param_4[1] + iVar9 + 8) + iVar14;
              uVar3 = *(uint *)(iVar10 + 8);
              fn_82A938E8((ulonglong)*(uint *)(iVar10 + 4) * 0x24,0,0,0,
                                *(undefined4 *)(iVar15 + *(int *)(iVar8 + 0x140)));
              fn_82A93F70(*(undefined4 *)(iVar15 + *(int *)(iVar8 + 0x140)),
                                (ulonglong)*(uint *)(param_4[1] + iVar9 + 0x10) +
                                (ulonglong)uVar3 * 0xc);
              iVar10 = (int)in_r0;
              iVar13 = iVar13 + 1;
              iVar14 = iVar14 + 0x24;
              iVar15 = iVar15 + 4;
            } while (iVar13 < *(int *)(iVar8 + 0x13c));
          }
          lVar18 = 4;
          lVar11 = 0;
          iVar9 = iVar8 + 0x30;
          do {
            uVar5 = lVar12 * 10 + 2 + lVar11;
            lVar11 = lVar11 + 1;
            puVar16 = (undefined4 *)((int)((uVar5 & 0xffffffff) << 4) + param_4[1] & 0xfffffff0);
            uVar6 = puVar16[1];
            uVar19 = puVar16[2];
            uVar20 = puVar16[3];
            puVar4 = (undefined4 *)(iVar10 + iVar9 & 0xfffffff0);
            *puVar4 = *puVar16;
            puVar4[1] = uVar6;
            puVar4[2] = uVar19;
            puVar4[3] = uVar20;
            iVar9 = iVar9 + 0x10;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          goto LAB_825790c4;
        }
      }
LAB_82578fbc:
      param_4 = (int *)0x0;
      lVar12 = lVar11;
    }
LAB_825790c4:
    if (param_3 == 0) {
      if (param_4 == (int *)0x0) {
        return;
      }
      lVar18 = 4;
      lVar11 = 0;
      iVar8 = iVar8 + 0x30;
      do {
        uVar5 = lVar12 * 10 + 2 + lVar11;
        lVar11 = lVar11 + 1;
        puVar16 = (undefined4 *)((int)((uVar5 & 0xffffffff) << 4) + param_4[1] & 0xfffffff0);
        uVar6 = puVar16[1];
        uVar19 = puVar16[2];
        uVar20 = puVar16[3];
        puVar4 = (undefined4 *)(iVar10 + iVar8 & 0xfffffff0);
        *puVar4 = *puVar16;
        puVar4[1] = uVar6;
        puVar4[2] = uVar19;
        puVar4[3] = uVar20;
        iVar8 = iVar8 + 0x10;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    else {
      iVar8 = iVar8 + 0x30;
      lVar11 = 4;
      iVar9 = param_3;
      do {
        puVar16 = (undefined4 *)(iVar10 + iVar9 & 0xfffffff0);
        uVar6 = puVar16[1];
        uVar19 = puVar16[2];
        uVar20 = puVar16[3];
        iVar9 = iVar9 + 0x10;
        puVar4 = (undefined4 *)(iVar10 + iVar8 & 0xfffffff0);
        *puVar4 = *puVar16;
        puVar4[1] = uVar6;
        puVar4[2] = uVar19;
        puVar4[3] = uVar20;
        iVar8 = iVar8 + 0x10;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if ((param_3 != 0) || (param_4 != (int *)0x0)) {
      bVar17 = param_3 != 0;
      iVar10 = (uint)**(ushort **)(param_1 + 0x34) * param_2 +
               *(int *)(*(ushort **)(param_1 + 0x34) + 2);
      puVar16 = (undefined4 *)(iVar10 + 0x10);
      if (*(int *)(iVar10 + 0x10) == 0) {
        fn_82577FB0(puVar16,bVar17,param_4 != (int *)0x0);
        fn_825787A8(puVar16,iVar10 + 0x150,bVar17);
        fn_82578668(puVar16);
        fn_82578538(puVar16);
        fn_82578430(puVar16);
        fn_82578308(puVar16,iVar10 + 0x150);
        *puVar16 = 1;
      }
      uVar1 = **(ushort **)(param_1 + 0x34);
      uVar3 = *(uint *)(*(ushort **)(param_1 + 0x34) + 2);
      uVar5 = fn_8265C9E0(0x90);
      if ((uVar5 & 0xffffffff) == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)fn_825C8590(uVar5,*(undefined4 *)(param_1 + 4),param_1,
                                          (longlong)(int)(uint)uVar1 * (longlong)param_2 +
                                          (ulonglong)uVar3,bVar17,param_4 != (int *)0x0);
      }
      if (piVar7 != (int *)0x0) {
        if (*piVar7 == 0) {
          *(int **)((*(int *)(param_1 + 8) + 3) * 4 + param_1) = piVar7;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
        else {
          if (piVar7[0x21] != 0) {
            fn_8263CBB0(lbl_8320A898,6,0,0x2000000);
            fn_8262FEC8(piVar7[0x21]);
            piVar7[0x21] = 0;
          }
          fn_8265CA20(piVar7);
        }
      }
    }
  }
  return;
code_r0x82578f9c:
  lVar12 = lVar12 + 1;
  iVar9 = iVar9 + 0xa0;
  if (*param_4 <= (int)lVar12) goto LAB_82578fbc;
  goto LAB_82578f90;
}

