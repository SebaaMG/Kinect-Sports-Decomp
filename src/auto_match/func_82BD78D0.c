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
extern int fn_82BD7F18();
extern int fn_82BDD190();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_82BD78D0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int aiStack_70 [28];
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 8);
  iVar9 = 0;
  uVar8 = 1;
  lVar13 = 2;
  piVar10 = aiStack_70;
  piVar5 = (int *)(param_1 + 8);
  do {
    if (*piVar5 == 0) {
      *piVar10 = 0;
    }
    else {
      if (piVar5[2] == 1) {
        *piVar10 = *(int *)(*piVar5 + 8);
      }
      else {
        *piVar10 = 0;
      }
      if (*piVar10 != 0) {
        iVar9 = iVar9 + 1;
      }
    }
    piVar5 = piVar5 + 1;
    piVar10 = piVar10 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  if ((piVar3 != (int *)0x0) && (iVar9 != 0)) {
    uVar8 = 0;
    while (((param_2 != 0 && (param_2 = param_2 + -1, piVar3 != (int *)0x0)) && (iVar9 != 0))) {
      fn_82F68CC0(param_1 + 0x1f80,
                   (ulonglong)*(uint *)(*piVar3 + 8) + (ulonglong)*(uint *)(*piVar3 + 4),
                   *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18));
      iVar11 = param_1 + 0x1d00;
      iVar2 = fn_82BDD190(param_1 + 0x20,0,param_1 + 0x1f80,iVar11);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(iVar11,0,0x280);
      }
      piVar10 = aiStack_70;
      lVar13 = 2;
      piVar5 = (int *)(param_1 + 8);
      do {
        piVar1 = (int *)*piVar10;
        if (piVar1 != (int *)0x0) {
          lVar12 = 0x280;
          if ((uint)(*(int *)(*piVar1 + 0xc) - *(int *)(*piVar1 + 4)) < 0x281) {
            lVar12 = (ulonglong)*(uint *)(*piVar1 + 0xc) - (ulonglong)*(uint *)(*piVar1 + 4);
          }
          fn_82F68CC0((ulonglong)*(uint *)(*piVar1 + 8) + (ulonglong)*(uint *)(*piVar1 + 4),iVar11,
                       lVar12);
          iVar2 = *piVar1;
          uVar4 = (ulonglong)*(uint *)(iVar2 + 4) + lVar12;
          uVar6 = (ulonglong)*(uint *)(iVar2 + 0xc);
          if ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 0xc)) {
            uVar6 = uVar4;
          }
          *(int *)(iVar2 + 4) = (int)uVar6;
          if ((uVar6 & 0xffffffff) == (ulonglong)*(uint *)(*piVar1 + 0xc)) {
            iVar2 = fn_82BD7F18(*piVar5,piVar1);
            *piVar10 = iVar2;
            if (iVar2 == 0) {
              iVar9 = iVar9 + -1;
            }
          }
        }
        lVar13 = lVar13 + -1;
        piVar5 = piVar5 + 1;
        piVar10 = piVar10 + 1;
      } while (lVar13 != 0);
      iVar2 = *piVar3;
      uVar7 = *(uint *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 4) + 0x280U < *(uint *)(iVar2 + 0xc)) {
        uVar7 = *(int *)(iVar2 + 4) + 0x280;
      }
      *(uint *)(iVar2 + 4) = uVar7;
      if (uVar7 == *(uint *)(*piVar3 + 0xc)) {
        piVar3 = (int *)fn_82BD7F18(*(undefined4 *)(param_1 + 4),piVar3);
      }
    }
  }
  return uVar8;
}

