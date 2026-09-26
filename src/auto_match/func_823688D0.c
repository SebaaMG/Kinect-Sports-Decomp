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
extern int fn_82250A18();
extern int fn_82359AC8();
extern int fn_823CC7A0();
extern int fn_824B8348();
extern int fn_824B8440();
extern int fn_824B8548();
extern int fn_824BB8C8();
extern int fn_828EA5F8();
extern int fn_828EA840();
extern unsigned int lbl_82005748;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_98;


void fn_823688D0(int param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  char cVar9;
  undefined8 uVar8;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  int aiStack_a0 [2];
  undefined8 uStack_98;
  
  if ((*(int *)(param_1 + 0xa0) == 0) || (*(int *)(*(int *)(param_1 + 0xa0) + 0x40) != 1)) {
    iVar15 = 0;
    if (((*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) & 0xfffffffcU) != 0) {
      iVar14 = 0;
      dVar16 = (double)lbl_82005748;
      do {
        aiStack_a0[0] = 0;
        aiStack_a0[1] = 0;
        piVar5 = *(int **)(iVar14 + *(int *)(param_1 + 0x20));
        piVar13 = (int *)*piVar5;
        uVar6 = piVar5[1] - (int)piVar13 >> 2;
        lVar12 = (longlong)(int)uVar6;
        if (lVar12 != 0) {
          if (1 < uVar6) {
            aiStack_a0[1] = piVar13[1];
          }
          aiStack_a0[0] = *piVar13;
        }
        if (0 < (int)uVar6) {
          piVar13 = aiStack_a0;
          do {
            iVar3 = *(int *)(*piVar13 + 0x34);
            if (iVar3 != 0) {
              cVar9 = fn_828EA5F8(iVar3);
              if (cVar9 != '\0') {
                cVar9 = fn_828EA840(iVar3);
                if (*(int *)(param_1 + 0x4c0) == 0) {
                  if (lbl_832975B0 == 0) {
                    fn_82250A18();
                  }
                    /* WARNING: Subroutine does not return */
                  fn_823CC7A0();
                }
                cVar1 = *(char *)(*(int *)(param_1 + 0x4c0) + 0x148);
                if (cVar1 == '\x01') {
                  uVar6 = *(uint *)(*(int *)(param_1 + 0xe20) + 0x94);
                  fVar2 = *(float *)(*(int *)(param_1 + 0xe20) + 0x98);
                  if (*(uint *)(*(int *)(iVar3 + 0x100) + 0x8c4) < uVar6) {
                    *(uint *)(*(int *)(iVar3 + 0x100) + 0x8c4) = uVar6;
                  }
                  uStack_98 = (ulonglong)((double)fVar2 * dVar16);
                  uVar7 = uStack_98;
                  if ((ulonglong)*(uint *)(*(int *)(iVar3 + 0x100) + 0x8c8) <
                      (uStack_98 & 0xffffffff)) {
                    *(int *)(*(int *)(iVar3 + 0x100) + 0x8c8) = (((U64)(uStack_98) >> 32) & 0xFFFFFFFF);
                  }
                  *(int *)(*(int *)(iVar3 + 0x100) + 0x8cc) =
                       *(int *)(*(int *)(iVar3 + 0x100) + 0x8cc) + 1;
                  *(int *)(*(int *)(iVar3 + 0x100) + 0x8d0) =
                       (((U64)(uStack_98) >> 32) & 0xFFFFFFFF) + *(int *)(*(int *)(iVar3 + 0x100) + 0x8d0);
                  uStack_98 = uVar7;
                  if (cVar9 != '\0') {
                    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0xe20) + 0x94);
                    uVar8 = fn_82359AC8(param_1);
                    fn_824B8440(iVar3,uVar8,uVar4);
                    uVar8 = fn_824B8548();
                    uVar10 = 0;
                    uVar11 = 1;
LAB_82368bd4:
                    fn_824BB8C8(uVar8,iVar3,0,uVar10,uVar11);
                  }
                }
                else if (cVar1 == '\x02') {
                  uVar6 = *(uint *)(*(int *)(param_1 + 0xe20) + 0x94);
                  fVar2 = *(float *)(*(int *)(param_1 + 0xe20) + 0x98);
                  if (*(uint *)(*(int *)(iVar3 + 0x100) + 0x8b8) < uVar6) {
                    *(uint *)(*(int *)(iVar3 + 0x100) + 0x8b8) = uVar6;
                  }
                  *(int *)(*(int *)(iVar3 + 0x100) + 0x8bc) =
                       *(int *)(*(int *)(iVar3 + 0x100) + 0x8bc) + 1;
                  uStack_98 = (ulonglong)((double)fVar2 * dVar16);
                  *(int *)(*(int *)(iVar3 + 0x100) + 0x8c0) =
                       (int)uStack_98 + *(int *)(*(int *)(iVar3 + 0x100) + 0x8c0);
                  if (cVar9 != '\0') {
                    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0xe20) + 0x94);
                    uVar8 = fn_82359AC8(param_1);
                    fn_824B8348(iVar3,uVar8,uVar4);
                    uVar8 = fn_824B8548();
                    uVar10 = 1;
                    uVar11 = 0;
                    goto LAB_82368bd4;
                  }
                }
              }
            }
            lVar12 = lVar12 + -1;
            piVar13 = piVar13 + 1;
          } while (lVar12 != 0);
        }
        iVar15 = iVar15 + 1;
        iVar14 = iVar14 + 4;
      } while (iVar15 < (*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 2);
    }
  }
  return;
}

