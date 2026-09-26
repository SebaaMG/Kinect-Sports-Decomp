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
extern unsigned int fStack_8c;
extern int fn_825089A0();
extern int fn_8287CA18();
extern int fn_8287DDB0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82006848;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_8287E990(void)

{
  int *piVar1;
  int iVar3;
  int *piVar4;
  ulonglong uVar2;
  longlong lVar5;
  int iVar6;
  float *pfVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int *piStack_90;
  float fStack_8c;
  float afStack_88 [2];
  ulonglong uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  
  iVar3 = fn_82F6A548();
  piVar4 = (int *)fn_825089A0();
  uVar2 = (**(code **)(*piVar4 + 0xc))();
  lVar5 = *(longlong *)(iVar3 + 0x100);
  *(ulonglong *)(iVar3 + 0x100) = uVar2;
  *(ulonglong *)(iVar3 + 0x108) = uVar2 - lVar5;
  dVar9 = (double)lbl_821AAD20;
  if (999 < uVar2 - *(longlong *)(iVar3 + 0xe8)) {
    *(undefined1 *)(iVar3 + 0x110) = 0;
    piStack_90 = (int *)**(int **)(iVar3 + 0xf4);
    if (piStack_90 != *(int **)(iVar3 + 0xf4)) {
      do {
        fn_8287DDB0(iVar3,piStack_90 + 6,uVar2);
        fn_8287CA18(&piStack_90);
      } while (piStack_90 != *(int **)(iVar3 + 0xf4));
    }
    fn_8287DDB0(iVar3,iVar3,uVar2);
    uVar8 = 0;
    piVar4 = *(int **)(iVar3 + 0xf4);
    piVar1 = (int *)*piVar4;
    dVar11 = dVar9;
    dVar12 = dVar9;
    if (piVar1 != piVar4) {
      uStack_80 = (ulonglong)*(uint *)(iVar3 + 0x114);
      dVar10 = (double)uStack_80;
      piStack_90 = piVar1;
      do {
        if (piStack_90[0x29] == 0) {
          iVar6 = 1;
        }
        else {
          iVar6 = piStack_90[0x29] + -1;
        }
        if (*(int *)(piStack_90[0x1f] + iVar6 * 4) != 0) {
          dVar11 = (double)(float)((double)(float)piStack_90[0x2b] + dVar11);
        }
        dVar12 = (double)(float)((double)(float)piStack_90[0x2b] + dVar12);
        if (dVar10 < (double)(float)piStack_90[0x2b]) {
          uVar8 = uVar8 + 1;
        }
        fn_8287CA18(&piStack_90);
      } while (piStack_90 != piVar4);
    }
    if (dVar11 < (double)*(float *)(iVar3 + 0x94)) {
      if (*(char *)(iVar3 + 0x110) != '\0') {
        *(float *)(iVar3 + 0x94) = (float)(dVar12 + (double)lbl_82002AE0);
      }
    }
    else {
      dVar11 = (double)(float)(dVar11 - (double)*(float *)(iVar3 + 0x94));
      if (dVar9 < dVar11) {
        uStack_80 = uVar8 & 0xffffffff;
        dVar11 = (double)(float)(dVar11 / (double)uStack_80);
        piStack_90 = piVar1;
        if (piVar1 != piVar4) {
          do {
            uStack_78 = (ulonglong)*(uint *)(iVar3 + 0x114);
            if ((double)uStack_78 < (double)(float)piStack_90[0x2b]) {
              uStack_70 = (ulonglong)*(uint *)(iVar3 + 0x118);
              afStack_88[0] = (float)((double)(float)piStack_90[0x2b] - dVar11);
              fStack_8c = (float)uStack_78;
              pfVar7 = &fStack_8c;
              uStack_80 = CONCAT44((float)uStack_70,(((U64)(uStack_80) >> 32) & 0xFFFFFFFF));
              if ((double)uStack_78 <= (double)afStack_88[0]) {
                pfVar7 = afStack_88;
              }
              if ((float)uStack_70 < *pfVar7) {
                pfVar7 = (float *)&uStack_80;
              }
              piStack_90[0x2b] = (int)*pfVar7;
            }
            fn_8287CA18(&piStack_90);
          } while (piStack_90 != *(int **)(iVar3 + 0xf4));
        }
      }
    }
    *(ulonglong *)(iVar3 + 0xe8) = uVar2;
  }
  piStack_90 = (int *)**(int **)(iVar3 + 0xf4);
  if (piStack_90 != *(int **)(iVar3 + 0xf4)) {
    dVar11 = (double)lbl_82006848;
    do {
      if ((double)(float)piStack_90[0x2b] <= dVar9) {
        piStack_90[0x30] = 0;
      }
      else {
        uStack_70 = (uVar2 & 0xffffffff) - (*(ulonglong *)(piStack_90 + 0x34) & 0xffffffff) &
                    0xffffffff;
        dVar12 = (double)(float)((double)uStack_70 * dVar11) * (double)(float)piStack_90[0x2b] +
                 (double)(float)piStack_90[0x36];
        piStack_90[0x36] = (int)(float)dVar12;
        uStack_78 = (ulonglong)dVar12;
        uStack_80 = uStack_78 & 0xffffffff;
        piStack_90[0x30] = (((U64)(uStack_78) >> 32) & 0xFFFFFFFF);
        piStack_90[0x36] = (int)((float)piStack_90[0x36] - (float)uStack_80);
        if (2 < (uint)piStack_90[0x30]) {
          piStack_90[0x30] = 2;
        }
      }
      *(ulonglong *)(piStack_90 + 0x34) = uVar2;
      fn_8287CA18(&piStack_90);
    } while (piStack_90 != *(int **)(iVar3 + 0xf4));
  }
  fn_82F6A594();
  return;
}

