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
extern int fn_82BDC9A8();
extern int fn_82F68CC0();


undefined8 fn_82BD76F0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong lVar10;
  int aiStack_70 [28];
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 8);
  iVar7 = 0;
  uVar8 = 1;
  lVar10 = 2;
  piVar9 = aiStack_70;
  piVar4 = (int *)(param_1 + 8);
  do {
    if (*piVar4 == 0) {
      *piVar9 = 0;
    }
    else {
      if (piVar4[2] == 1) {
        *piVar9 = *(int *)(*piVar4 + 8);
      }
      else {
        *piVar9 = 0;
      }
      if (*piVar9 != 0) {
        iVar7 = iVar7 + 1;
      }
    }
    piVar4 = piVar4 + 1;
    piVar9 = piVar9 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if ((piVar3 != (int *)0x0) && (iVar7 != 0)) {
    while ((uVar8 = 0, param_2 != 0 &&
           ((param_2 = param_2 + -1, piVar3 != (int *)0x0 && (iVar7 != 0))))) {
      fn_82F68CC0(param_1 + 0x1e80,
                   (ulonglong)*(uint *)(*piVar3 + 8) + (ulonglong)*(uint *)(*piVar3 + 4),
                   *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18));
      fn_82BDC9A8(param_1 + 0x40,0,param_1 + 0x1e80,param_1 + 0x2100);
      piVar9 = aiStack_70;
      lVar10 = 2;
      piVar4 = (int *)(param_1 + 8);
      do {
        piVar1 = (int *)*piVar9;
        if (piVar1 != (int *)0x0) {
          fn_82F68CC0((ulonglong)*(uint *)(*piVar1 + 8) + (ulonglong)*(uint *)(*piVar1 + 4),
                       param_1 + 0x2100,0x28);
          iVar2 = *piVar1;
          uVar6 = *(uint *)(iVar2 + 0xc);
          if (*(int *)(iVar2 + 4) + 0x28U < *(uint *)(iVar2 + 0xc)) {
            uVar6 = *(int *)(iVar2 + 4) + 0x28;
          }
          *(uint *)(iVar2 + 4) = uVar6;
          if (uVar6 == *(uint *)(*piVar1 + 0xc)) {
            iVar2 = fn_82BD7F18(*piVar4,piVar1);
            *piVar9 = iVar2;
            if (iVar2 == 0) {
              iVar7 = iVar7 + -1;
            }
          }
        }
        lVar10 = lVar10 + -1;
        piVar4 = piVar4 + 1;
        piVar9 = piVar9 + 1;
      } while (lVar10 != 0);
      iVar2 = *piVar3;
      uVar5 = *(int *)(iVar2 + 4) + *(int *)(*(int *)(param_1 + 0x18) + 0x18);
      uVar6 = *(uint *)(iVar2 + 0xc);
      if (uVar5 < *(uint *)(iVar2 + 0xc)) {
        uVar6 = uVar5;
      }
      *(uint *)(iVar2 + 4) = uVar6;
      if (uVar6 == *(uint *)(*piVar3 + 0xc)) {
        piVar3 = (int *)fn_82BD7F18(*(undefined4 *)(param_1 + 4),piVar3);
      }
    }
  }
  return uVar8;
}

