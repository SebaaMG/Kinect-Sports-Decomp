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
extern unsigned int fStack_c4;
extern int fn_82248B90();
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_825089A0();
extern int fn_8287C2C0();
extern int fn_8288BD68();
extern int fn_8288D868();
extern int fn_8288DD10();
extern int fn_8288DD48();
extern int fn_8288DDA0();
extern int fn_8288F948();
extern int fn_8288F9A0();
extern int fn_82893F40();
extern int fn_8289F0B8();
extern int fn_828A12E8();
extern int fn_828AECA0();
extern int fn_828AEF00();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_821961E0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


void fn_828D4968(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar15;
  undefined8 uVar3;
  uint uVar7;
  int *piVar8;
  longlong lVar4;
  int iVar9;
  int iVar10;
  ulonglong uVar5;
  uint uVar11;
  undefined8 uVar6;
  int *piVar12;
  int iVar13;
  int iVar14;
  int *piVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  float fStack_c4;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  char acStack_b0 [8];
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  
  fn_82F6A548();
  piVar16 = (int *)param_2;
  cVar15 = (**(code **)(*piVar16 + 0x18))(param_2);
  if (cVar15 != '\0') {
    uVar3 = fn_828A12E8(param_2);
    uVar7 = fn_8289F0B8(param_2);
    piVar8 = (int *)fn_825089A0();
    lVar4 = (**(code **)(*piVar8 + 0xc))();
    if (uVar7 != 0) {
      iVar9 = fn_828A12E8(param_2);
      iVar9 = **(int **)(iVar9 + 0x98);
      iStack_c8 = iVar9;
      iVar10 = fn_828A12E8(param_2);
      if (iVar9 != *(int *)(iVar10 + 0x98)) {
        dVar19 = (double)lbl_820145BC;
        dVar20 = (double)lbl_821AAD20;
        do {
          uVar1 = *(undefined4 *)(iVar9 + 0xc);
          iVar9 = fn_8288DD10(uVar3,uVar1);
          if (*(char *)(iVar9 + 0x38) != '\0') {
            uVar5 = fn_8288DD48(uVar3,uVar1);
            uVar11 = fn_8288DDA0(uVar3,uVar1);
            uStack_c0 = (ulonglong)uVar7;
            uStack_b8 = uVar5 & 0xffffffff;
            iVar9 = fn_8287C2C0((double)(float)((double)uStack_b8 / (double)uStack_c0));
            if (iVar9 + 2U <= uVar11) {
              uVar6 = fn_828A12E8(param_2);
              iVar9 = fn_8288F9A0(uVar6,uVar1);
              piVar8 = (int *)0x0;
              iStack_d0 = **(int **)(iVar9 + 4);
              dVar21 = dVar20;
              if ((int *)iStack_d0 != *(int **)(iVar9 + 4)) {
                do {
                  piVar12 = *(int **)(iStack_d0 + 0x14);
                  (**(code **)(*piVar12 + 0x20))(acStack_b0,piVar12);
                  if (acStack_b0[0] != '\0') {
                    (**(code **)(*piVar12 + 0x2c))(&fStack_c4,piVar12);
                    dVar17 = (double)fStack_c4;
                    if (((dVar21 < dVar17) && (dVar20 < dVar17)) &&
                       (5000 < (ulonglong)(lVar4 - *(longlong *)(piVar12 + 0x18)))) {
                      dVar21 = dVar17;
                      piVar8 = piVar12;
                    }
                  }
                  fn_82248B90(&iStack_d0);
                } while (iStack_d0 != *(int *)(iVar9 + 4));
                if (piVar8 != (int *)0x0) {
                  iVar9 = 0;
                  dVar21 = dVar20;
                  uVar6 = fn_828A12E8(param_2);
                  iVar10 = fn_8288F948(uVar6,uVar1);
                  iStack_cc = *(int *)piVar16[0x84];
                  if ((int *)iStack_cc != (int *)piVar16[0x84]) {
                    do {
                      iVar2 = *(int *)(iStack_cc + 0x10);
                      cVar15 = fn_828AECA0(iVar2);
                      if (cVar15 == '\0') {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = fn_828AEF00(iVar2);
                      }
                      uVar5 = 0;
                      piVar12 = (int *)fn_825089A0();
                      dVar18 = (double)*(float *)(iVar2 + 0x8c);
                      dVar17 = (double)(**(code **)(*piVar12 + 8))();
                      if ((uVar11 != 0) && (lbl_821961E0 < (float)(dVar17 - dVar18))) {
                        iStack_d0 = **(int **)(iVar10 + 4);
                        if ((int *)iStack_d0 != *(int **)(iVar10 + 4)) {
                          do {
                            iVar13 = fn_823AA970(*(undefined4 *)
                                                   (*(int *)(*(int *)(iStack_d0 + 0x14) + 0x34) +
                                                   0x38));
                            iVar14 = fn_823AA970(iVar2);
                            if (iVar13 == iVar14) {
                              uVar5 = uVar5 + 1;
                            }
                            fn_82248B90(&iStack_d0);
                          } while (iStack_d0 != *(int *)(iVar10 + 4));
                        }
                        uStack_a8 = uVar5 & 0xffffffff;
                        uVar5 = (ulonglong)uVar11;
                        if ((double)uStack_a8 == dVar20) {
                          dVar17 = (double)uVar5 * dVar19;
                          uStack_98 = uVar5;
                        }
                        else {
                          dVar17 = (double)uVar5 / (double)uStack_a8;
                          uStack_a0 = uVar5;
                        }
                        if (dVar21 < (double)(float)dVar17) {
                          dVar21 = (double)(float)dVar17;
                          iVar9 = iVar2;
                        }
                      }
                      fn_82381BC0(&iStack_cc);
                    } while (iStack_cc != piVar16[0x84]);
                    if ((iVar9 != 0) && (cVar15 = fn_8288D868(piVar8), cVar15 != '\0')) {
                      fn_82893F40(piVar8,iVar9,0);
                    }
                  }
                }
              }
            }
          }
          fn_8288BD68(&iStack_c8);
          iVar10 = fn_828A12E8(param_2);
          iVar9 = iStack_c8;
        } while (iStack_c8 != *(int *)(iVar10 + 0x98));
      }
    }
  }
  fn_82F6A594();
  return;
}

