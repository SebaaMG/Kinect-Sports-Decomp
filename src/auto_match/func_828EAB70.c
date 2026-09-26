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
extern int fn_825089A0();
extern int fn_82880620();
extern int fn_82880698();
extern int fn_828EA790();
extern int fn_82F622E0();
extern unsigned int stack0x00000024;


undefined4 * fn_828EAB70(undefined4 *param_1,int param_2,int *param_3)

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
  if (*(char *)((int)param_3 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  fn_828EA790(&stack0x00000024);
  piVar8 = piStack00000024;
  piVar9 = (int *)*param_3;
  if (*(char *)((int)piVar9 + 0x15) == '\0') {
    piVar11 = piVar9;
    if ((*(char *)(param_3[2] + 0x15) == '\0') &&
       (piVar11 = (int *)piStack00000024[2], piStack00000024 != param_3)) {
      piVar9[1] = (int)piStack00000024;
      *piStack00000024 = *param_3;
      piVar9 = piStack00000024;
      if (piStack00000024 != (int *)param_3[2]) {
        piVar9 = (int *)piStack00000024[1];
        if (*(char *)((int)piVar11 + 0x15) == '\0') {
          piVar11[1] = (int)piVar9;
        }
        *piVar9 = (int)piVar11;
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
      uVar3 = *(undefined1 *)(piStack00000024 + 5);
      *(undefined1 *)(piStack00000024 + 5) = *(undefined1 *)(param_3 + 5);
      *(undefined1 *)(param_3 + 5) = uVar3;
      goto LAB_828ead6c;
    }
  }
  else {
    piVar11 = (int *)param_3[2];
  }
  piVar9 = (int *)param_3[1];
  if (*(char *)((int)piVar11 + 0x15) == '\0') {
    piVar11[1] = (int)piVar9;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_2 + 4) + 4) = piVar11;
  }
  else if ((int *)*piVar9 == param_3) {
    *piVar9 = (int)piVar11;
  }
  else {
    piVar9[2] = (int)piVar11;
  }
  if ((int *)**(undefined4 **)(param_2 + 4) == param_3) {
    piVar10 = piVar9;
    if (*(char *)((int)piVar11 + 0x15) == '\0') {
      cVar2 = *(char *)(*piVar11 + 0x15);
      piVar4 = (int *)*piVar11;
      piVar10 = piVar11;
      while (piVar7 = piVar4, cVar2 == '\0') {
        piVar4 = (int *)*piVar7;
        cVar2 = *(char *)((int)piVar4 + 0x15);
        piVar10 = piVar7;
      }
    }
    **(undefined4 **)(param_2 + 4) = piVar10;
  }
  iVar5 = *(int *)(param_2 + 4);
  if (*(int **)(iVar5 + 8) == param_3) {
    if (*(char *)((int)piVar11 + 0x15) == '\0') {
      cVar2 = *(char *)(piVar11[2] + 0x15);
      piVar10 = (int *)piVar11[2];
      piVar4 = piVar11;
      while (piVar7 = piVar10, cVar2 == '\0') {
        piVar10 = (int *)piVar7[2];
        cVar2 = *(char *)((int)piVar10 + 0x15);
        piVar4 = piVar7;
      }
      *(int **)(iVar5 + 8) = piVar4;
    }
    else {
      *(int **)(iVar5 + 8) = piVar9;
    }
  }
LAB_828ead6c:
  if (*(char *)(param_3 + 5) == '\x01') {
    if (piVar11 != *(int **)(*(int *)(param_2 + 4) + 4)) {
      do {
        if (*(char *)(piVar11 + 5) != '\x01') break;
        piVar10 = (int *)*piVar9;
        if (piVar11 == piVar10) {
          piVar10 = (int *)piVar9[2];
          if (*(char *)(piVar10 + 5) == '\0') {
            *(undefined1 *)(piVar10 + 5) = 1;
            *(undefined1 *)(piVar9 + 5) = 0;
            fn_82880698(param_2,piVar9);
            piVar10 = (int *)piVar9[2];
          }
          if (*(char *)((int)piVar10 + 0x15) == '\0') {
            if ((*(char *)(*piVar10 + 0x14) != '\x01') || (*(char *)(piVar10[2] + 0x14) != '\x01'))
            {
              if (*(char *)(piVar10[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar10 + 0x14) = 1;
                *(undefined1 *)(piVar10 + 5) = 0;
                fn_82880620(param_2,piVar10);
                piVar10 = (int *)piVar9[2];
              }
              *(undefined1 *)(piVar10 + 5) = *(undefined1 *)(piVar9 + 5);
              *(undefined1 *)(piVar9 + 5) = 1;
              *(undefined1 *)(piVar10[2] + 0x14) = 1;
              fn_82880698(param_2,piVar9);
              break;
            }
LAB_828eae98:
            *(undefined1 *)(piVar10 + 5) = 0;
          }
        }
        else {
          if (*(char *)(piVar10 + 5) == '\0') {
            *(undefined1 *)(piVar10 + 5) = 1;
            *(undefined1 *)(piVar9 + 5) = 0;
            fn_82880620(param_2,piVar9);
            piVar10 = (int *)*piVar9;
          }
          if (*(char *)((int)piVar10 + 0x15) == '\0') {
            if ((*(char *)(piVar10[2] + 0x14) == '\x01') && (*(char *)(*piVar10 + 0x14) == '\x01'))
            goto LAB_828eae98;
            if (*(char *)(*piVar10 + 0x14) == '\x01') {
              *(undefined1 *)(piVar10[2] + 0x14) = 1;
              *(undefined1 *)(piVar10 + 5) = 0;
              fn_82880698(param_2,piVar10);
              piVar10 = (int *)*piVar9;
            }
            *(undefined1 *)(piVar10 + 5) = *(undefined1 *)(piVar9 + 5);
            *(undefined1 *)(piVar9 + 5) = 1;
            *(undefined1 *)(*piVar10 + 0x14) = 1;
            fn_82880620(param_2,piVar9);
            break;
          }
        }
        bVar1 = piVar9 != *(int **)(*(int *)(param_2 + 4) + 4);
        piVar11 = piVar9;
        piVar9 = (int *)piVar9[1];
      } while (bVar1);
    }
    *(undefined1 *)(piVar11 + 5) = 1;
  }
  piVar9 = (int *)fn_825089A0();
  (**(code **)(*piVar9 + 0x28))(piVar9,param_3);
  if (*(int *)(param_2 + 8) != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = piVar8;
  return param_1;
}

