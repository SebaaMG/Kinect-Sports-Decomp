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
extern unsigned int *auStack_50;
extern int fn_8265CA20();
extern int fn_8288BA70();
extern int fn_828A10C8();
extern int fn_828A1AE8();
extern int fn_828A6130();
extern int fn_82F622E0();
extern unsigned int stack0x00000024;


undefined4 * fn_828A73E8(undefined4 *param_1,int param_2,int *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piStack00000024;
  undefined1 auStack_50 [80];
  
  piStack00000024 = param_3;
  if (*(char *)((int)param_3 + 0x29) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  fn_828A10C8(&stack0x00000024);
  piVar7 = piStack00000024;
  piVar9 = (int *)*param_3;
  if (*(char *)((int)piVar9 + 0x29) == '\0') {
    piVar10 = piVar9;
    if ((*(char *)(param_3[2] + 0x29) == '\0') &&
       (piVar10 = (int *)piStack00000024[2], piStack00000024 != param_3)) {
      piVar9[1] = (int)piStack00000024;
      *piStack00000024 = *param_3;
      piVar9 = piStack00000024;
      if (piStack00000024 != (int *)param_3[2]) {
        piVar9 = (int *)piStack00000024[1];
        if (*(char *)((int)piVar10 + 0x29) == '\0') {
          piVar10[1] = (int)piVar9;
        }
        *piVar9 = (int)piVar10;
        piStack00000024[2] = param_3[2];
        *(int **)(param_3[2] + 4) = piStack00000024;
      }
      if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
        *(int **)(*(int *)(param_2 + 4) + 4) = piStack00000024;
      }
      else {
        puVar5 = (undefined4 *)param_3[1];
        if ((int *)*puVar5 == param_3) {
          *puVar5 = piStack00000024;
        }
        else {
          puVar5[2] = piStack00000024;
        }
      }
      piStack00000024[1] = param_3[1];
      uVar2 = *(undefined1 *)(piStack00000024 + 10);
      *(undefined1 *)(piStack00000024 + 10) = *(undefined1 *)(param_3 + 10);
      *(undefined1 *)(param_3 + 10) = uVar2;
      goto LAB_828a75e4;
    }
  }
  else {
    piVar10 = (int *)param_3[2];
  }
  piVar9 = (int *)param_3[1];
  if (*(char *)((int)piVar10 + 0x29) == '\0') {
    piVar10[1] = (int)piVar9;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_2 + 4) + 4) = piVar10;
  }
  else if ((int *)*piVar9 == param_3) {
    *piVar9 = (int)piVar10;
  }
  else {
    piVar9[2] = (int)piVar10;
  }
  if ((int *)**(undefined4 **)(param_2 + 4) == param_3) {
    piVar8 = piVar9;
    if (*(char *)((int)piVar10 + 0x29) == '\0') {
      cVar1 = *(char *)(*piVar10 + 0x29);
      piVar3 = (int *)*piVar10;
      piVar8 = piVar10;
      while (piVar6 = piVar3, cVar1 == '\0') {
        piVar3 = (int *)*piVar6;
        cVar1 = *(char *)((int)piVar3 + 0x29);
        piVar8 = piVar6;
      }
    }
    **(undefined4 **)(param_2 + 4) = piVar8;
  }
  iVar4 = *(int *)(param_2 + 4);
  if (*(int **)(iVar4 + 8) == param_3) {
    if (*(char *)((int)piVar10 + 0x29) == '\0') {
      cVar1 = *(char *)(piVar10[2] + 0x29);
      piVar8 = (int *)piVar10[2];
      piVar3 = piVar10;
      while (piVar6 = piVar8, cVar1 == '\0') {
        piVar8 = (int *)piVar6[2];
        cVar1 = *(char *)((int)piVar8 + 0x29);
        piVar3 = piVar6;
      }
      *(int **)(iVar4 + 8) = piVar3;
    }
    else {
      *(int **)(iVar4 + 8) = piVar9;
    }
  }
LAB_828a75e4:
  if (*(char *)(param_3 + 10) == '\x01') {
    if (piVar10 != *(int **)(*(int *)(param_2 + 4) + 4)) {
      do {
        piVar8 = piVar9;
        if (*(char *)(piVar10 + 10) != '\x01') break;
        piVar9 = (int *)*piVar8;
        if (piVar10 == piVar9) {
          piVar9 = (int *)piVar8[2];
          if (*(char *)(piVar9 + 10) == '\0') {
            *(undefined1 *)(piVar9 + 10) = 1;
            *(undefined1 *)(piVar8 + 10) = 0;
            fn_828A1AE8(param_2,piVar8);
            piVar9 = (int *)piVar8[2];
          }
          if (*(char *)((int)piVar9 + 0x29) == '\0') {
            if ((*(char *)(*piVar9 + 0x28) != '\x01') || (*(char *)(piVar9[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar9[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar9 + 0x28) = 1;
                *(undefined1 *)(piVar9 + 10) = 0;
                fn_8288BA70(param_2,piVar9);
                piVar9 = (int *)piVar8[2];
              }
              *(undefined1 *)(piVar9 + 10) = *(undefined1 *)(piVar8 + 10);
              *(undefined1 *)(piVar8 + 10) = 1;
              *(undefined1 *)(piVar9[2] + 0x28) = 1;
              fn_828A1AE8(param_2,piVar8);
              break;
            }
LAB_828a7710:
            *(undefined1 *)(piVar9 + 10) = 0;
          }
        }
        else {
          if (*(char *)(piVar9 + 10) == '\0') {
            *(undefined1 *)(piVar9 + 10) = 1;
            *(undefined1 *)(piVar8 + 10) = 0;
            fn_8288BA70(param_2,piVar8);
            piVar9 = (int *)*piVar8;
          }
          if (*(char *)((int)piVar9 + 0x29) == '\0') {
            if ((*(char *)(piVar9[2] + 0x28) == '\x01') && (*(char *)(*piVar9 + 0x28) == '\x01'))
            goto LAB_828a7710;
            if (*(char *)(*piVar9 + 0x28) == '\x01') {
              *(undefined1 *)(piVar9[2] + 0x28) = 1;
              *(undefined1 *)(piVar9 + 10) = 0;
              fn_828A1AE8(param_2,piVar9);
              piVar9 = (int *)*piVar8;
            }
            *(undefined1 *)(piVar9 + 10) = *(undefined1 *)(piVar8 + 10);
            *(undefined1 *)(piVar8 + 10) = 1;
            *(undefined1 *)(*piVar9 + 0x28) = 1;
            fn_8288BA70(param_2,piVar8);
            break;
          }
        }
        piVar9 = (int *)piVar8[1];
        piVar10 = piVar8;
      } while (piVar8 != *(int **)(*(int *)(param_2 + 4) + 4));
    }
    *(undefined1 *)(piVar10 + 10) = 1;
  }
  fn_828A6130(auStack_50,param_3 + 6,*(undefined4 *)param_3[7]);
  fn_8265CA20(param_3[7]);
  fn_8265CA20(param_3);
  if (*(int *)(param_2 + 8) != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = piVar7;
  return param_1;
}

