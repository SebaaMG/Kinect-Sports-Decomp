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
extern int fn_8265CA20();
extern int fn_8289DEB8();
extern int fn_8289E0B0();
extern int fn_828B55B0();
extern int fn_828E5F60();
extern int fn_82F622E0();
extern unsigned int stack0x00000024;


undefined4 * fn_828E7248(undefined4 *param_1,int param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piStack00000024;
  
  piStack00000024 = param_3;
  if (*(char *)((int)param_3 + 0x1d) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  fn_828E5F60(&stack0x00000024);
  piVar8 = piStack00000024;
  piVar11 = (int *)*param_3;
  if (*(char *)((int)piVar11 + 0x1d) == '\0') {
    piVar10 = piVar11;
    if ((*(char *)(param_3[2] + 0x1d) == '\0') &&
       (piVar10 = (int *)piStack00000024[2], piStack00000024 != param_3)) {
      piVar11[1] = (int)piStack00000024;
      *piStack00000024 = *param_3;
      piVar11 = piStack00000024;
      if (piStack00000024 != (int *)param_3[2]) {
        piVar11 = (int *)piStack00000024[1];
        if (*(char *)((int)piVar10 + 0x1d) == '\0') {
          piVar10[1] = (int)piVar11;
        }
        *piVar11 = (int)piVar10;
        piStack00000024[2] = param_3[2];
        *(int **)(param_3[2] + 4) = piStack00000024;
      }
      if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
        *(int **)(*(int *)(param_2 + 4) + 4) = piStack00000024;
      }
      else {
        puVar6 = (undefined4 *)param_3[1];
        if ((int *)*puVar6 == param_3) {
          *puVar6 = piStack00000024;
        }
        else {
          puVar6[2] = piStack00000024;
        }
      }
      piStack00000024[1] = param_3[1];
      uVar3 = *(undefined1 *)(piStack00000024 + 7);
      *(undefined1 *)(piStack00000024 + 7) = *(undefined1 *)(param_3 + 7);
      *(undefined1 *)(param_3 + 7) = uVar3;
      goto LAB_828e7444;
    }
  }
  else {
    piVar10 = (int *)param_3[2];
  }
  piVar11 = (int *)param_3[1];
  if (*(char *)((int)piVar10 + 0x1d) == '\0') {
    piVar10[1] = (int)piVar11;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_2 + 4) + 4) = piVar10;
  }
  else if ((int *)*piVar11 == param_3) {
    *piVar11 = (int)piVar10;
  }
  else {
    piVar11[2] = (int)piVar10;
  }
  if ((int *)**(undefined4 **)(param_2 + 4) == param_3) {
    piVar9 = piVar11;
    if (*(char *)((int)piVar10 + 0x1d) == '\0') {
      cVar2 = *(char *)(*piVar10 + 0x1d);
      piVar4 = (int *)*piVar10;
      piVar9 = piVar10;
      while (piVar7 = piVar4, cVar2 == '\0') {
        piVar4 = (int *)*piVar7;
        cVar2 = *(char *)((int)piVar4 + 0x1d);
        piVar9 = piVar7;
      }
    }
    **(undefined4 **)(param_2 + 4) = piVar9;
  }
  iVar5 = *(int *)(param_2 + 4);
  if (*(int **)(iVar5 + 8) == param_3) {
    if (*(char *)((int)piVar10 + 0x1d) == '\0') {
      cVar2 = *(char *)(piVar10[2] + 0x1d);
      piVar9 = (int *)piVar10[2];
      piVar4 = piVar10;
      while (piVar7 = piVar9, cVar2 == '\0') {
        piVar9 = (int *)piVar7[2];
        cVar2 = *(char *)((int)piVar9 + 0x1d);
        piVar4 = piVar7;
      }
      *(int **)(iVar5 + 8) = piVar4;
    }
    else {
      *(int **)(iVar5 + 8) = piVar11;
    }
  }
LAB_828e7444:
  if (*(char *)(param_3 + 7) == '\x01') {
    if (piVar10 != *(int **)(*(int *)(param_2 + 4) + 4)) {
      do {
        if (*(char *)(piVar10 + 7) != '\x01') break;
        piVar9 = (int *)*piVar11;
        if (piVar10 == piVar9) {
          piVar9 = (int *)piVar11[2];
          if (*(char *)(piVar9 + 7) == '\0') {
            *(undefined1 *)(piVar9 + 7) = 1;
            *(undefined1 *)(piVar11 + 7) = 0;
            fn_8289E0B0(param_2,piVar11);
            piVar9 = (int *)piVar11[2];
          }
          if (*(char *)((int)piVar9 + 0x1d) == '\0') {
            if ((*(char *)(*piVar9 + 0x1c) != '\x01') || (*(char *)(piVar9[2] + 0x1c) != '\x01')) {
              if (*(char *)(piVar9[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*piVar9 + 0x1c) = 1;
                *(undefined1 *)(piVar9 + 7) = 0;
                fn_8289DEB8(param_2,piVar9);
                piVar9 = (int *)piVar11[2];
              }
              *(undefined1 *)(piVar9 + 7) = *(undefined1 *)(piVar11 + 7);
              *(undefined1 *)(piVar11 + 7) = 1;
              *(undefined1 *)(piVar9[2] + 0x1c) = 1;
              fn_8289E0B0(param_2,piVar11);
              break;
            }
LAB_828e7570:
            *(undefined1 *)(piVar9 + 7) = 0;
          }
        }
        else {
          if (*(char *)(piVar9 + 7) == '\0') {
            *(undefined1 *)(piVar9 + 7) = 1;
            *(undefined1 *)(piVar11 + 7) = 0;
            fn_8289DEB8(param_2,piVar11);
            piVar9 = (int *)*piVar11;
          }
          if (*(char *)((int)piVar9 + 0x1d) == '\0') {
            if ((*(char *)(piVar9[2] + 0x1c) == '\x01') && (*(char *)(*piVar9 + 0x1c) == '\x01'))
            goto LAB_828e7570;
            if (*(char *)(*piVar9 + 0x1c) == '\x01') {
              *(undefined1 *)(piVar9[2] + 0x1c) = 1;
              *(undefined1 *)(piVar9 + 7) = 0;
              fn_8289E0B0(param_2,piVar9);
              piVar9 = (int *)*piVar11;
            }
            *(undefined1 *)(piVar9 + 7) = *(undefined1 *)(piVar11 + 7);
            *(undefined1 *)(piVar11 + 7) = 1;
            *(undefined1 *)(*piVar9 + 0x1c) = 1;
            fn_8289DEB8(param_2,piVar11);
            break;
          }
        }
        bVar1 = piVar11 != *(int **)(*(int *)(param_2 + 4) + 4);
        piVar10 = piVar11;
        piVar11 = (int *)piVar11[1];
      } while (bVar1);
    }
    *(undefined1 *)(piVar10 + 7) = 1;
  }
  fn_828B55B0(param_3 + 4);
  fn_8265CA20(param_3);
  if (*(int *)(param_2 + 8) != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = piVar8;
  return param_1;
}

