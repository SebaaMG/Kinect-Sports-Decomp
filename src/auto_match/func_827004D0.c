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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82273CD8();
extern int fn_8267B890();
extern int fn_8267BDA8();
extern int fn_82682D30();
extern int fn_82689C60();
extern int fn_82693A98();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_826B44A0();
extern int fn_826BD078();
extern unsigned int iStack_a0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831E7E64;


undefined8
fn_827004D0(int param_1,uint param_2,undefined8 param_3,ulonglong param_4,float *param_5,
             ulonglong param_6)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  char cVar12;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar17;
  ulonglong uVar16;
  ulonglong uVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 uVar24;
  int iStack_a0;
  float *pfStack_9c;
  int aiStack_98 [2];
  longlong alStack_90 [2];
  char acStack_80 [128];
  
  if (*(int **)(param_1 + 0x68) != (int *)0x0) {
    iVar8 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
    aiStack_98[0] = fn_82694700((ulonglong)*(uint *)(iVar8 + 0x78) + 0x254,param_3);
    *(int *)(aiStack_98[0] + 8) = *(int *)(aiStack_98[0] + 8) + 1;
    acStack_80[0] = '\0';
    cVar12 = fn_826B44A0(iVar8,aiStack_98,acStack_80,0,0,0,0);
    if ((((cVar12 != '\0') && (acStack_80[0] == '\x06')) &&
        (iVar9 = fn_82696958(acStack_80,iVar8), iVar9 != 0)) &&
       (iVar10 = (**(code **)(*(int *)(iVar9 + 0x10) + 8))(iVar9 + 0x10), iVar10 == 7)) {
      *(undefined4 *)(*(int *)(param_1 + 0x9e8) + 0x18) = 0;
      fn_82689C60((ulonglong)*(uint *)(param_1 + 0x9e8) + 8,1);
      uVar18 = (ulonglong)*(uint *)(iVar9 + 0x38);
      if (param_2 == 0) {
        if ((param_6 & 0xffffffff) <= uVar18) {
          uVar18 = param_6;
        }
        if ((uVar18 & 0xffffffff) != 0) {
          lVar15 = (param_4 & 0x3fffffff) << 2;
          do {
            iVar10 = *(int *)((int)lVar15 + *(int *)(iVar9 + 0x34));
            if (iVar10 == 0) {
              *param_5 = 0.0;
            }
            else {
              dVar23 = (double)fn_826972E0(iVar10,iVar8);
              alStack_90[0] = (longlong)(int)dVar23;
              *param_5 = (float)(int)dVar23;
            }
            uVar18 = uVar18 - 1;
            lVar15 = lVar15 + 4;
            param_5 = param_5 + 1;
          } while (uVar18 != 0);
        }
      }
      else if (param_2 == 1) {
        if ((param_6 & 0xffffffff) <= uVar18) {
          uVar18 = param_6;
        }
        if ((uVar18 & 0xffffffff) != 0) {
          lVar15 = (param_4 & 0x3fffffff) << 2;
          uVar24 = lbl_82005710;
          do {
            iVar10 = *(int *)((int)lVar15 + *(int *)(iVar9 + 0x34));
            if (iVar10 == 0) {
              *(undefined8 *)param_5 = uVar24;
            }
            else {
              uVar22 = fn_826972E0(iVar10,iVar8);
              *(undefined8 *)param_5 = uVar22;
            }
            uVar18 = uVar18 - 1;
            lVar15 = lVar15 + 4;
            param_5 = param_5 + 2;
          } while (uVar18 != 0);
        }
      }
      else if (param_2 < 3) {
        if ((param_6 & 0xffffffff) <= uVar18) {
          uVar18 = param_6;
        }
        if ((uVar18 & 0xffffffff) != 0) {
          lVar15 = (param_4 & 0x3fffffff) << 2;
          dVar23 = (double)lbl_821AAD20;
          do {
            iVar10 = *(int *)((int)lVar15 + *(int *)(iVar9 + 0x34));
            if (iVar10 == 0) {
              *param_5 = (float)dVar23;
            }
            else {
              dVar21 = (double)fn_826972E0(iVar10,iVar8);
              *param_5 = (float)dVar21;
            }
            uVar18 = uVar18 - 1;
            lVar15 = lVar15 + 4;
            param_5 = param_5 + 1;
          } while (uVar18 != 0);
        }
      }
      else if (param_2 == 3) {
        if ((param_6 & 0xffffffff) <= uVar18) {
          uVar18 = param_6;
        }
        uVar16 = 1;
        if ((uVar18 & 0xffffffff) != 0) {
          uVar16 = uVar18;
        }
        fn_82689C60((ulonglong)*(uint *)(param_1 + 0x9e8) + 8,uVar16);
        if ((uVar18 & 0xffffffff) != 0) {
          lVar15 = (param_4 & 0x3fffffff) << 2;
          do {
            iVar10 = *(int *)((int)lVar15 + *(int *)(iVar9 + 0x34));
            if (iVar10 == 0) {
              *param_5 = 0.0;
            }
            else {
              fn_82696D38(&pfStack_9c,iVar10,iVar8,0xffffffffffffffff,0);
              pfVar7 = pfStack_9c;
              *param_5 = *pfStack_9c;
              iVar10 = *(int *)(*(int *)(param_1 + 0x9e8) + 0x18);
              *(int *)(*(int *)(param_1 + 0x9e8) + 0x18) = iVar10 + 1;
              iVar10 = iVar10 * 4;
              iVar17 = *(int *)(*(int *)(param_1 + 0x9e8) + 8);
              pfStack_9c[2] = (float)((int)pfStack_9c[2] + 1);
              iVar11 = *(int *)(iVar17 + iVar10);
              lVar14 = (ulonglong)*(uint *)(iVar11 + 8) - 1;
              *(int *)(iVar11 + 8) = (int)lVar14;
              if (lVar14 == 0) {
                fn_826944C8();
              }
              *(float **)(iVar17 + iVar10) = pfVar7;
              fVar3 = pfStack_9c[2];
              pfStack_9c[2] = (float)((ulonglong)(uint)fVar3 - 1);
              if ((ulonglong)(uint)fVar3 - 1 == 0) {
                fn_826944C8(pfStack_9c);
              }
            }
            uVar18 = uVar18 - 1;
            lVar15 = lVar15 + 4;
            param_5 = param_5 + 1;
          } while (uVar18 != 0);
        }
      }
      else if (param_2 < 5) {
        iVar10 = 0;
        uVar16 = uVar18;
        if ((param_6 & 0xffffffff) <= uVar18) {
          uVar16 = param_6;
        }
        uVar13 = 1;
        if ((uVar16 & 0xffffffff) != 0) {
          uVar13 = uVar16;
        }
        fn_82689C60((ulonglong)*(uint *)(param_1 + 0x9e8) + 8,uVar13);
        if (uVar18 != 0) {
          iVar17 = 0;
          lVar15 = (param_4 & 0x3fffffff) << 2;
          do {
            iVar11 = *(int *)((int)lVar15 + *(int *)(iVar9 + 0x34));
            if (iVar11 != 0) {
              fn_82696D38(&iStack_a0,iVar11,iVar8,0xffffffffffffffff,0);
              iVar6 = iStack_a0;
              iVar11 = *(int *)(*(int *)(param_1 + 0x9e8) + 8);
              *(int *)(iStack_a0 + 8) = *(int *)(iStack_a0 + 8) + 1;
              iVar4 = *(int *)(iVar11 + iVar17);
              lVar14 = (ulonglong)*(uint *)(iVar4 + 8) - 1;
              *(int *)(iVar4 + 8) = (int)lVar14;
              if (lVar14 == 0) {
                fn_826944C8();
              }
              *(int *)(iVar11 + iVar17) = iVar6;
              iVar11 = fn_82693A98(&iStack_a0);
              iVar10 = iVar11 + iVar10 + 1;
              lVar14 = (ulonglong)*(uint *)(iStack_a0 + 8) - 1;
              *(int *)(iStack_a0 + 8) = (int)lVar14;
              if (lVar14 == 0) {
                fn_826944C8(iStack_a0);
              }
            }
            uVar18 = uVar18 - 1;
            iVar17 = iVar17 + 4;
            lVar15 = lVar15 + 4;
          } while (uVar18 != 0);
        }
        piVar1 = *(int **)(param_1 + 0x9e8);
        uVar5 = iVar10 * 2 + 0xfffU & 0xfffff000;
        uVar2 = piVar1[1];
        if ((uVar2 < uVar5) || ((uVar5 < uVar2 && (0x1000 < uVar2 - uVar5)))) {
          if (*piVar1 == 0) {
            iVar8 = fn_8267B890(lbl_831E7E64,uVar5,0);
          }
          else {
            iVar8 = fn_8267BDA8();
          }
          *piVar1 = iVar8;
          piVar1[1] = uVar5;
        }
        puVar19 = (undefined2 *)*piVar1;
        if ((uVar16 & 0xffffffff) != 0) {
          iVar8 = 0;
          do {
            alStack_90[0] =
                 CONCAT44(**(undefined4 **)(*(int *)(*(int *)(param_1 + 0x9e8) + 8) + iVar8),
                          ((uint)(alStack_90[0])));
            puVar20 = puVar19;
            while (iVar9 = fn_826BD078(alStack_90), iVar9 != 0) {
              *puVar20 = (short)iVar9;
              puVar20 = puVar20 + 1;
            }
            *puVar20 = 0;
            uVar16 = uVar16 - 1;
            *(undefined2 **)(iVar8 + (int)param_5) = puVar19;
            puVar19 = puVar20 + 1;
            iVar8 = iVar8 + 4;
          } while (uVar16 != 0);
        }
        fn_82689C60((ulonglong)*(uint *)(param_1 + 0x9e8) + 8,1);
      }
      else if (param_2 == 5) {
        if ((param_6 & 0xffffffff) <= uVar18) {
          uVar18 = param_6;
        }
        if ((uVar18 & 0xffffffff) != 0) {
          lVar15 = (param_4 & 0x3fffffff) << 2;
          do {
            iVar10 = *(int *)((int)lVar15 + *(int *)(iVar9 + 0x34));
            fn_82273CD8(param_5,0);
            if (iVar10 == 0) {
              fn_82273CD8(param_5,0);
            }
            else {
              fn_82682D30(param_1,iVar8,iVar10,param_5);
            }
            uVar18 = uVar18 - 1;
            lVar15 = lVar15 + 4;
            param_5 = param_5 + 4;
          } while (uVar18 != 0);
        }
      }
      fn_82696330(acStack_80);
      lVar15 = (ulonglong)*(uint *)(aiStack_98[0] + 8) - 1;
      *(int *)(aiStack_98[0] + 8) = (int)lVar15;
      if (lVar15 == 0) {
        fn_826944C8(aiStack_98[0]);
      }
      return 1;
    }
    fn_82696330(acStack_80);
    lVar15 = (ulonglong)*(uint *)(aiStack_98[0] + 8) - 1;
    *(int *)(aiStack_98[0] + 8) = (int)lVar15;
    if (lVar15 == 0) {
      fn_826944C8(aiStack_98[0]);
    }
  }
  return 0;
}

