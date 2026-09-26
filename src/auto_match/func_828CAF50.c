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
extern unsigned int *auStack_80;
extern unsigned int *auStack_84;
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_8288C540();
extern int fn_8288CDC8();
extern int fn_8288E040();
extern int fn_828B1770();
extern int fn_828B22F0();
extern int fn_828B27A8();
extern int fn_828C8C90();
extern int fn_828C9918();
extern int fn_828CA8B8();
extern int fn_828CAAC8();
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;


void fn_828CAF50(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar10;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [128];
  
  if (*(char *)(param_3 + 0x26) == '\0') {
    cVar10 = fn_8288B760(param_2);
    bVar4 = true;
    if (cVar10 != '\0') goto LAB_828caf90;
  }
  else {
LAB_828caf90:
    bVar4 = false;
  }
  if (*(char *)(param_3 + 0x26) == '\0') {
    fn_8288B760(param_2);
  }
  if (*(char *)(param_3 + 0x26) != '\0') {
    cVar10 = fn_8288B760(param_2);
    bVar3 = true;
    if (cVar10 == '\0') goto LAB_828cafd4;
  }
  bVar3 = false;
LAB_828cafd4:
  puVar11 = (undefined4 *)(param_1 + 0x18);
  piVar1 = (int *)**(int **)(param_1 + 0x18);
  while ((piVar1 != *(int **)(param_1 + 0x18) && (*(int *)(piVar1[2] + 4) != param_2))) {
    piVar1 = (int *)*piVar1;
  }
  piVar7 = (int *)*puVar11;
  if ((piVar7 == piVar1) || (bVar5 = true, !bVar3)) {
    bVar5 = false;
  }
  iStack_90 = **(int **)(param_1 + 0xc);
  iVar8 = param_2;
  if ((int *)iStack_90 != *(int **)(param_1 + 0xc)) {
    do {
      iStack_8c = iVar8;
      iVar8 = iStack_90;
      iVar6 = iStack_90 + 0x18;
      puVar12 = (undefined4 *)(iStack_90 + 0x28);
      piVar2 = (int *)**(int **)(iStack_90 + 0x28);
      while ((piVar2 != *(int **)(iStack_90 + 0x28) && (*(int *)(piVar2[2] + 4) != param_2))) {
        piVar2 = (int *)*piVar2;
      }
      fn_8288E040(&iStack_88,iVar6,&iStack_8c);
      if (bVar4) {
        if (piVar2 != (int *)*puVar12) {
          iVar6 = (**(code **)(**(int **)(*(int *)(param_2 + 0x34) + 0x38) + 0xc))();
          iStack_90 = iVar6;
          fn_828C9918(&iStack_88,param_1 + 8,&iStack_90);
          if (iStack_88 == *(int *)(param_1 + 0xc)) {
            fn_828CAAC8(param_1,iVar6);
            piVar7 = (int *)fn_828C9918(auStack_80,param_1 + 8,&iStack_90);
            iStack_88 = *piVar7;
          }
          fn_828B27A8(iStack_88 + 0x28,*(undefined4 *)(iStack_88 + 0x28),piVar2 + 2);
          if (piVar2 != (int *)*puVar12) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
            fn_8265CA20(piVar2);
            *(int *)(iVar8 + 0x2c) = *(int *)(iVar8 + 0x2c) + -1;
          }
          break;
        }
      }
      else if (bVar3) {
        if ((piVar7 != piVar1) &&
           (iVar9 = (**(code **)(**(int **)(*(int *)(param_2 + 0x34) + 0x38) + 0xc))(),
           iVar9 == *(int *)(iVar8 + 0x10))) {
          fn_828B27A8(puVar12,*puVar12,piVar1 + 2);
          fn_828B1770(auStack_84,puVar11,piVar1);
          bVar5 = false;
        }
        if (iStack_88 != *(int *)(iVar8 + 0x1c)) {
          fn_8288CDC8(auStack_80,iVar6);
        }
      }
      else if ((piVar2 != (int *)*puVar12) &&
              (fn_828B27A8(puVar11,*puVar11,piVar2 + 2), piVar2 != (int *)*puVar12)) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        fn_8265CA20(piVar2);
        *(int *)(iVar8 + 0x2c) = *(int *)(iVar8 + 0x2c) + -1;
      }
      fn_828C8C90(&iStack_90);
      iVar8 = iStack_8c;
    } while (iStack_90 != *(int *)(param_1 + 0xc));
  }
  if (bVar5) {
    iStack_88 = (**(code **)(**(int **)(*(int *)(param_2 + 0x34) + 0x38) + 0xc))();
    iVar8 = fn_828CA8B8(param_1 + 8,&iStack_88);
    fn_8288C540(iVar8,*(undefined4 *)(*(int *)(iVar8 + 4) + 4));
    *(int *)(*(int *)(iVar8 + 4) + 4) = *(int *)(iVar8 + 4);
    *(undefined4 *)*(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar8 + 4);
    *(int *)(*(int *)(iVar8 + 4) + 8) = *(int *)(iVar8 + 4);
    *(undefined4 *)(iVar8 + 8) = 0;
    fn_828B22F0(iVar8 + 0x10);
    *(undefined8 *)(iVar8 + 0x20) = 0;
    *(undefined4 *)(iVar8 + 0x28) = 0;
    fn_828B27A8(iVar8 + 0x10,*(undefined4 *)(iVar8 + 0x10),piVar1 + 2);
    if (piVar1 != (int *)*puVar11) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      fn_8265CA20(piVar1);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    }
  }
  return;
}

