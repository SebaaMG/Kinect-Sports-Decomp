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
extern unsigned int *auStack_164;
extern unsigned int *auStack_50;
extern int fn_82230040();
extern int fn_822301D0();
extern int fn_824A7F80();
extern int fn_824A7FF8();
extern int fn_824A8410();
extern int fn_824A8B48();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;


/* WARNING: Type propagation algorithm not settling */

void fn_824A8118(int **param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int *piStack_190;
  int *piStack_18c;
  undefined **ppuStack_180;
  int *apiStack_17c [6];
  undefined1 auStack_164 [276];
  undefined1 auStack_50 [80];
  
  if ((int *)0x1 < param_1[1]) {
    piStack_18c = (int *)0x0;
    piVar4 = (int *)fn_8265C9E0(0x10);
    if (piVar4 == (int *)0x0) {
      apiStack_17c[0] = (int *)0x0;
      ppuStack_180 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_180);
    }
    *piVar4 = (int)piVar4;
    piVar4[1] = (int)piVar4;
    ppiVar5 = apiStack_17c;
    lVar10 = 0x19;
    piStack_190 = piVar4;
    do {
      ppiVar5 = ppiVar5 + 3;
      fn_824A7F80(ppiVar5);
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
    uVar7 = 0;
    piVar6 = (int *)0x0;
    while (param_1[1] != (int *)0x0) {
      iVar9 = *piVar4;
      piVar1 = (int *)**param_1;
      iVar2 = *piVar1;
      if (&piStack_190 != param_1) {
        if (piVar6 == (int *)0x1ffffffe) {
                    /* WARNING: Subroutine does not return */
          fn_82F622A8(0xffffffff8219852c);
        }
        piVar6 = (int *)((int)piVar6 + 1);
        param_1[1] = (int *)((int)param_1[1] + -1);
        piStack_18c = piVar6;
      }
      uVar8 = 0;
      *(int *)piVar1[1] = iVar2;
      **(int **)(iVar2 + 4) = iVar9;
      **(int **)(iVar9 + 4) = (int)piVar1;
      iVar3 = *(int *)(iVar9 + 4);
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar2 + 4);
      *(int *)(iVar2 + 4) = piVar1[1];
      piVar1[1] = iVar3;
      if (uVar7 == 0) {
LAB_824a8284:
        ppiVar5 = apiStack_17c + uVar8 * 3 + 3;
        if (ppiVar5 != &piStack_190) {
          piStack_190 = *ppiVar5;
          *ppiVar5 = piVar4;
          piStack_18c = apiStack_17c[uVar8 * 3 + 4];
          apiStack_17c[uVar8 * 3 + 4] = piVar6;
          piVar6 = piStack_18c;
          piVar4 = piStack_190;
        }
        if (uVar8 == uVar7) {
          uVar7 = uVar7 + 1;
        }
      }
      else {
        ppiVar5 = apiStack_17c;
        do {
          ppiVar5 = ppiVar5 + 3;
          if (ppiVar5[1] == (int *)0x0) break;
          fn_824A8410(ppiVar5,&piStack_190);
          if (ppiVar5 != &piStack_190) {
            piVar4 = *ppiVar5;
            *ppiVar5 = piStack_190;
            piVar6 = ppiVar5[1];
            ppiVar5[1] = piStack_18c;
            piStack_190 = piVar4;
            piStack_18c = piVar6;
          }
          uVar8 = uVar8 + 1;
          piVar6 = piStack_18c;
          piVar4 = piStack_190;
        } while (uVar8 < uVar7);
        if (uVar8 != 0x19) goto LAB_824a8284;
        fn_824A8410(auStack_50,&piStack_190);
        piVar6 = piStack_18c;
        piVar4 = piStack_190;
      }
    }
    if (1 < uVar7) {
      puVar11 = auStack_164;
      iVar9 = uVar7 - 1;
      do {
        fn_824A8410(puVar11,puVar11 + -0xc);
        iVar9 = iVar9 + -1;
        puVar11 = puVar11 + 0xc;
      } while (iVar9 != 0);
    }
    fn_824A8B48(param_1,**param_1,apiStack_17c + uVar7 * 3);
    fn_822301D0(apiStack_17c + 3,0xc,0x1a,0xffffffff824a7ff8);
    fn_824A7FF8(&piStack_190);
  }
  return;
}

