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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_80;
extern int fn_82CE5410();
extern int fn_82D3ECE0();
extern int fn_82D40130();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x82d3ff9c) */

void fn_82D3FC68(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  undefined8 in_r0;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 auVar21 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fStack_80;
  float fStack_78;
  float fStack_74;
  
  uVar7 = ZEXT48(&stack0x00000000);
  piVar11 = (int *)(param_1 + 0x54);
  iVar9 = 0;
  iVar8 = fn_82CE5410();
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar18 = 0x80000000;
  if (0 < (int)uVar1) {
    iVar9 = (**(code **)(**(int **)(iVar8 + 0x10) + 0xc))(*(int **)(iVar8 + 0x10),uVar7 - 0x7c,0x10)
    ;
    uVar18 = uVar1;
  }
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar19 = (ulonglong)uVar1;
  iVar8 = *piVar11;
  if (0 < (int)uVar1) {
    uVar20 = uVar19;
    iVar16 = iVar9;
    do {
      puVar2 = (undefined4 *)((iVar8 - iVar9) + iVar16 & 0xfffffff0);
      uVar22 = puVar2[1];
      uVar23 = puVar2[2];
      uVar24 = puVar2[3];
      puVar3 = (undefined4 *)((int)in_r0 + iVar16 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar22;
      puVar3[2] = uVar23;
      puVar3[3] = uVar24;
      iVar16 = iVar16 + 0x10;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  iVar8 = *(int *)(param_1 + 0x4c);
  piVar10 = (int *)fn_82CE5410();
  iVar16 = *piVar10;
  *piVar10 = (iVar8 * 0x10 + 0x7fU & 0xffffff80) + iVar16;
  fn_82D3ECE0(param_1,uVar7 - 0x60);
  fVar6 = lbl_821AAD20;
  iVar8 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x60) + 0x18)) {
    iVar12 = uVar1 * 0x10 + iVar9;
    do {
      if ((int)uVar19 == 0) goto LAB_82d3ff54;
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x60) + 0x14) + iVar8) != '\0') {
        vectorSubtractFloatingPoint(in_vs45,in_vs32);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs44,in_vs32); memcpy(auVar21, &_vt0, 16); }{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs36,in_vs37); memcpy(in_vs32, &_vt1, 16); }
        uVar22 = storeVectorElementWordIndexed(in_vs35,0,uVar7 - 0x78);
        *(undefined4 *)(uVar7 - 0x78) = uVar22;
        iVar5 = (int)in_r0;
        if (fStack_78 == fVar6) {
          puVar2 = (undefined4 *)(iVar5 + iVar9 & 0xfffffff0);
          uVar22 = puVar2[1];
          uVar23 = puVar2[2];
          uVar24 = puVar2[3];
          puVar3 = (undefined4 *)(iVar5 + *(int *)(param_1 + 0x58) * 0x10 + *piVar11 & 0xfffffff0);
          *puVar3 = *puVar2;
          puVar3[1] = uVar22;
          puVar3[2] = uVar23;
          puVar3[3] = uVar24;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        }
        else {
          iVar14 = 0;
          iVar15 = 1;{ V16 _vt2 = loadVectorLeftIndexed128(in_r0,uVar7 - 0x70); memcpy(in_vs44, &_vt2, 16); }
          uVar22 = storeVectorElementWordIndexed(auVar21,0,uVar7 - 0x74);
          *(undefined4 *)(uVar7 - 0x74) = uVar22;
          if (1 < (int)uVar19) {
            lVar13 = uVar19 - 1;
            fVar4 = fStack_74;
            do {
              uVar22 = storeVectorElementWordIndexed(in_vs44,0,uVar7 - 0x80);
              *(undefined4 *)(uVar7 - 0x80) = uVar22;
              if (fVar4 < fStack_80) {
                fVar4 = fStack_80;
                iVar14 = iVar15;
              }
              iVar15 = iVar15 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          uVar19 = uVar19 - 1;
          puVar17 = (undefined8 *)(iVar14 * 0x10 + iVar9);
          iVar12 = iVar12 + -0x10;
          puVar2 = (undefined4 *)(iVar5 + (int)puVar17 & 0xfffffff0);
          uVar22 = puVar2[1];
          uVar23 = puVar2[2];
          uVar24 = puVar2[3];
          puVar3 = (undefined4 *)(iVar5 + *(int *)(param_1 + 0x58) * 0x10 + *piVar11 & 0xfffffff0);
          *puVar3 = *puVar2;
          puVar3[1] = uVar22;
          puVar3[2] = uVar23;
          puVar3[3] = uVar24;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
          if ((int)uVar19 != iVar14) {
            iVar5 = iVar12 - (int)puVar17;
            lVar13 = 2;
            do {
              *puVar17 = *(undefined8 *)(iVar5 + (int)puVar17);
              puVar17 = puVar17 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(*(int *)(param_1 + 0x60) + 0x18));
  }
  if (0 < (int)uVar19) {
    uVar22 = *(undefined4 *)(param_1 + 0x58);
    iVar8 = fn_82CE5410();
    fn_82D40130(piVar11,*(undefined4 *)(iVar8 + 0x10),uVar22,0,iVar9,uVar19);
  }
LAB_82d3ff54:
  piVar11 = (int *)fn_82CE5410();
  *piVar11 = iVar16;
  fn_82CE5410();
  iVar8 = fn_82CE5410();
  if ((uVar18 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))
              (*(int **)(iVar8 + 0x10),iVar9,uVar18 & 0x3fffffff,0x10);
  }
  return;
}

