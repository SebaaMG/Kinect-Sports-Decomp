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
extern int fn_82F68CC0();


undefined8 fn_82BD94A0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  int *piVar6;
  ulonglong uVar5;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  int aiStack_70 [28];
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 8);
  iVar8 = 0;
  uVar7 = 1;
  lVar11 = 2;
  piVar9 = aiStack_70;
  piVar6 = (int *)(param_1 + 8);
  do {
    if (*piVar6 == 0) {
      *piVar9 = 0;
    }
    else {
      if (piVar6[2] == 1) {
        *piVar9 = *(int *)(*piVar6 + 8);
      }
      else {
        *piVar9 = 0;
      }
      if (*piVar9 != 0) {
        iVar8 = iVar8 + 1;
      }
    }
    piVar6 = piVar6 + 1;
    piVar9 = piVar9 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  if ((piVar3 != (int *)0x0) && (iVar8 != 0)) {
    uVar7 = 0;
    while (((param_2 != 0 && (param_2 = param_2 + -1, piVar3 != (int *)0x0)) && (iVar8 != 0))) {
      piVar6 = aiStack_70;
      lVar11 = 2;
      uVar10 = (ulonglong)*(uint *)(*piVar3 + 0xc) - (ulonglong)*(uint *)(*piVar3 + 4);
      do {
        piVar9 = (int *)*piVar6;
        if ((piVar9 != (int *)0x0) &&
           (((ulonglong)*(uint *)(*piVar9 + 0xc) - (ulonglong)*(uint *)(*piVar9 + 4) & 0xffffffff)
            <= (uVar10 & 0xffffffff))) {
          uVar10 = (ulonglong)*(uint *)(*piVar9 + 0xc) - (ulonglong)*(uint *)(*piVar9 + 4);
        }
        piVar6 = piVar6 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      piVar9 = aiStack_70;
      lVar11 = 2;
      piVar6 = (int *)(param_1 + 8);
      do {
        piVar1 = (int *)*piVar9;
        if (piVar1 != (int *)0x0) {
          fn_82F68CC0((ulonglong)*(uint *)(*piVar1 + 8) + (ulonglong)*(uint *)(*piVar1 + 4),
                       (ulonglong)*(uint *)(*piVar3 + 8) + (ulonglong)*(uint *)(*piVar3 + 4),uVar10)
          ;
          iVar2 = *piVar1;
          uVar4 = *(uint *)(iVar2 + 4) + uVar10;
          uVar5 = (ulonglong)*(uint *)(iVar2 + 0xc);
          if ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 0xc)) {
            uVar5 = uVar4;
          }
          *(int *)(iVar2 + 4) = (int)uVar5;
          if ((uVar5 & 0xffffffff) == (ulonglong)*(uint *)(*piVar1 + 0xc)) {
            iVar2 = fn_82BD7F18(*piVar6,piVar1);
            *piVar9 = iVar2;
            if (iVar2 == 0) {
              iVar8 = iVar8 + -1;
            }
          }
        }
        lVar11 = lVar11 + -1;
        piVar6 = piVar6 + 1;
        piVar9 = piVar9 + 1;
      } while (lVar11 != 0);
      iVar2 = *piVar3;
      uVar10 = *(uint *)(iVar2 + 4) + uVar10;
      uVar5 = (ulonglong)*(uint *)(iVar2 + 0xc);
      if ((uVar10 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 0xc)) {
        uVar5 = uVar10;
      }
      *(int *)(iVar2 + 4) = (int)uVar5;
      if ((uVar5 & 0xffffffff) == (ulonglong)*(uint *)(*piVar3 + 0xc)) {
        piVar3 = (int *)fn_82BD7F18(*(undefined4 *)(param_1 + 4),piVar3);
      }
    }
  }
  return uVar7;
}

