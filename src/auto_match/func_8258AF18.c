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
extern int fn_8258B170();
extern int fn_8258B3F8();
extern int fn_826237C0();
extern int fn_82A1EFC0();
extern unsigned int iStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_8258AF18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar14;
  ulonglong uVar13;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  int *piVar19;
  uint *puVar20;
  uint uStack_b0;
  uint uStack_ac;
  int iStack_a8;
  uint *puStack_a4;
  
  fn_8258B3F8(param_1 + 8,param_2,param_2 + 0x10,&uStack_b0,&uStack_ac);
  puVar20 = (uint *)(param_2 + 0x20);
  puStack_a4 = puVar20;
  fn_8258B170(param_1,param_2,puVar20,(uint *)(param_2 + 0x24));
  uVar8 = uStack_b0;
  iStack_a8 = *(int *)(param_1 + 0x24);
  iVar4 = (int)(uStack_b0 << 0xb | uStack_b0 >> 0x15) >> 0x16;
  iVar5 = (int)uStack_b0 >> 0x15;
  iVar16 = (int)(uStack_ac << 0x15 | uStack_ac >> 0xb) >> 0x15;
  iVar6 = (int)(uStack_ac << 0xb | uStack_ac >> 0x15) >> 0x16;
  uVar7 = (int)uStack_ac >> 0x15;
  iVar10 = (int)(uStack_b0 << 0x15 | uStack_b0 >> 0xb) >> 0x15;
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar10 <= iVar16) {
    iVar15 = iVar10 * iStack_a8;
    uStack_b0 = (iVar16 - iVar10) + 1;
    do {
      if (iVar4 <= iVar6) {
        lVar17 = ((longlong)iVar6 - (longlong)iVar4) + 1;
        piVar19 = (int *)((iVar2 * iVar4 + iVar15 + iVar5) * 4 + iVar1);
        do {
          if (iVar5 <= (int)uVar7) {
            iVar16 = (uVar7 - iVar5) + 1;
            piVar18 = piVar19;
LAB_8258affc:
            piVar14 = (int *)*piVar18;
            if (piVar14 == (int *)0x0) {
LAB_8258b068:
              puVar9 = *(undefined4 **)(param_1 + 0x78);
              if (puVar9 == *(undefined4 **)(param_1 + 0x7c)) {
                *(undefined4 *)(param_1 + 0x7c) = 0;
              }
              uStack_ac = uVar7;
              if (puVar9 == (undefined4 *)0x0) {
                puVar9 = (undefined4 *)
                         fn_826237C0(param_1 + 0x4c,*(undefined4 *)(param_1 + 0x40),
                                         *(undefined4 *)(param_1 + 0x48));
              }
              else {
                uVar3 = *puVar9;
                *puVar9 = 0;
                *(undefined4 *)(param_1 + 0x78) = uVar3;
                puVar9 = puVar9 + -1;
                *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
              }
                    /* WARNING: Subroutine does not return */
              fn_82A1EFC0(puVar9,0,0x80);
            }
            iVar10 = *piVar14;
            if (iVar10 == 0) {
              piVar14 = (int *)piVar14[0x1f];
              while( true ) {
                if (piVar14 == (int *)0x0) goto LAB_8258b068;
                iVar10 = *piVar14;
                if (iVar10 != 0) break;
                piVar14 = (int *)piVar14[0x1f];
              }
              iVar12 = 0;
              piVar11 = piVar14;
              do {
                piVar11 = piVar11 + 1;
                iVar12 = iVar12 + 1;
                if (*piVar11 == 0) goto LAB_8258b0e4;
              } while (iVar12 < 0x1e);
            }
            else {
              iVar12 = 0;
              piVar11 = piVar14;
              do {
                piVar11 = piVar11 + 1;
                iVar12 = iVar12 + 1;
                if (*piVar11 == 0) goto LAB_8258b0e4;
              } while (iVar12 < 0x1e);
            }
            goto LAB_8258b0ec;
          }
LAB_8258b140:
          lVar17 = lVar17 + -1;
          piVar19 = piVar19 + iVar2;
        } while (lVar17 != 0);
      }
      uVar13 = (ulonglong)uStack_b0;
      iVar15 = iVar15 + iStack_a8;
      uStack_b0 = (uint)(uVar13 - 1);
    } while (uVar13 - 1 != 0);
  }
  *puVar20 = uVar8;
  *(uint *)(param_2 + 0x24) = uStack_ac;
  return;
LAB_8258b0e4:
  piVar14[iVar12] = param_2;
LAB_8258b0ec:
  *piVar14 = iVar10 + -1;
  iVar16 = iVar16 + -1;
  piVar18 = piVar18 + 1;
  puVar20 = puStack_a4;
  if (iVar16 == 0) goto LAB_8258b140;
  goto LAB_8258affc;
}

