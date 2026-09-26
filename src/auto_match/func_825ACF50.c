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
extern int fn_82248B90();
extern int fn_822B5400();
extern int fn_824C0808();
extern int fn_8265CA20();
extern int fn_828B55B0();
extern int fn_82F622E0();
extern unsigned int stack0x00000024;


undefined4 * fn_825ACF50(undefined4 *param_1,int param_2,int *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piStack00000024;
  
  piStack00000024 = param_3;
  if (*(char *)((int)param_3 + 0x19) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  fn_82248B90(&stack0x00000024);
  piVar5 = piStack00000024;
  piVar9 = (int *)*param_3;
  if (*(char *)((int)piVar9 + 0x19) == '\0') {
    piVar8 = piVar9;
    if ((*(char *)(param_3[2] + 0x19) == '\0') &&
       (piVar8 = (int *)piStack00000024[2], piStack00000024 != param_3)) {
      piVar9[1] = (int)piStack00000024;
      *piStack00000024 = *param_3;
      piVar9 = piStack00000024;
      if (piStack00000024 != (int *)param_3[2]) {
        piVar9 = (int *)piStack00000024[1];
        if (*(char *)((int)piVar8 + 0x19) == '\0') {
          piVar8[1] = (int)piVar9;
        }
        *piVar9 = (int)piVar8;
        piStack00000024[2] = param_3[2];
        *(int **)(param_3[2] + 4) = piStack00000024;
      }
      if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
        *(int **)(*(int *)(param_2 + 4) + 4) = piStack00000024;
      }
      else {
        puVar4 = (undefined4 *)param_3[1];
        if ((int *)*puVar4 == param_3) {
          *puVar4 = piStack00000024;
        }
        else {
          puVar4[2] = piStack00000024;
        }
      }
      piStack00000024[1] = param_3[1];
      uVar2 = *(undefined1 *)(piStack00000024 + 6);
      *(undefined1 *)(piStack00000024 + 6) = *(undefined1 *)(param_3 + 6);
      *(undefined1 *)(param_3 + 6) = uVar2;
      goto LAB_825ad138;
    }
  }
  else {
    piVar8 = (int *)param_3[2];
  }
  piVar9 = (int *)param_3[1];
  if (*(char *)((int)piVar8 + 0x19) == '\0') {
    piVar8[1] = (int)piVar9;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_2 + 4) + 4) = piVar8;
  }
  else if ((int *)*piVar9 == param_3) {
    *piVar9 = (int)piVar8;
  }
  else {
    piVar9[2] = (int)piVar8;
  }
  if ((int *)**(undefined4 **)(param_2 + 4) == param_3) {
    piVar7 = piVar9;
    if (*(char *)((int)piVar8 + 0x19) == '\0') {
      piVar6 = (int *)*piVar8;
      piVar7 = piVar8;
      while (piVar3 = piVar6, *(char *)((int)piVar3 + 0x19) == '\0') {
        piVar7 = piVar3;
        piVar6 = (int *)*piVar3;
      }
    }
    **(undefined4 **)(param_2 + 4) = piVar7;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 8) == param_3) {
    piVar7 = piVar9;
    if (*(char *)((int)piVar8 + 0x19) == '\0') {
      piVar6 = (int *)piVar8[2];
      piVar7 = piVar8;
      while (piVar3 = piVar6, *(char *)((int)piVar3 + 0x19) == '\0') {
        piVar7 = piVar3;
        piVar6 = (int *)piVar3[2];
      }
    }
    *(int **)(*(int *)(param_2 + 4) + 8) = piVar7;
  }
LAB_825ad138:
  if (*(char *)(param_3 + 6) == '\x01') {
    if (piVar8 != *(int **)(*(int *)(param_2 + 4) + 4)) {
      do {
        if (*(char *)(piVar8 + 6) != '\x01') break;
        piVar7 = (int *)*piVar9;
        if (piVar8 == piVar7) {
          piVar7 = (int *)piVar9[2];
          if (*(char *)(piVar7 + 6) == '\0') {
            *(undefined1 *)(piVar7 + 6) = 1;
            *(undefined1 *)(piVar9 + 6) = 0;
            fn_822B5400(param_2,piVar9);
            piVar7 = (int *)piVar9[2];
          }
          if (*(char *)((int)piVar7 + 0x19) == '\0') {
            if ((*(char *)(*piVar7 + 0x18) != '\x01') || (*(char *)(piVar7[2] + 0x18) != '\x01')) {
              if (*(char *)(piVar7[2] + 0x18) == '\x01') {
                *(undefined1 *)(*piVar7 + 0x18) = 1;
                *(undefined1 *)(piVar7 + 6) = 0;
                fn_824C0808(param_2,piVar7);
                piVar7 = (int *)piVar9[2];
              }
              *(undefined1 *)(piVar7 + 6) = *(undefined1 *)(piVar9 + 6);
              *(undefined1 *)(piVar9 + 6) = 1;
              *(undefined1 *)(piVar7[2] + 0x18) = 1;
              fn_822B5400(param_2,piVar9);
              break;
            }
LAB_825ad264:
            *(undefined1 *)(piVar7 + 6) = 0;
          }
        }
        else {
          if (*(char *)(piVar7 + 6) == '\0') {
            *(undefined1 *)(piVar7 + 6) = 1;
            *(undefined1 *)(piVar9 + 6) = 0;
            fn_824C0808(param_2,piVar9);
            piVar7 = (int *)*piVar9;
          }
          if (*(char *)((int)piVar7 + 0x19) == '\0') {
            if ((*(char *)(piVar7[2] + 0x18) == '\x01') && (*(char *)(*piVar7 + 0x18) == '\x01'))
            goto LAB_825ad264;
            if (*(char *)(*piVar7 + 0x18) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0x18) = 1;
              *(undefined1 *)(piVar7 + 6) = 0;
              fn_822B5400(param_2,piVar7);
              piVar7 = (int *)*piVar9;
            }
            *(undefined1 *)(piVar7 + 6) = *(undefined1 *)(piVar9 + 6);
            *(undefined1 *)(piVar9 + 6) = 1;
            *(undefined1 *)(*piVar7 + 0x18) = 1;
            fn_824C0808(param_2,piVar9);
            break;
          }
        }
        bVar1 = piVar9 != *(int **)(*(int *)(param_2 + 4) + 4);
        piVar8 = piVar9;
        piVar9 = (int *)piVar9[1];
      } while (bVar1);
    }
    *(undefined1 *)(piVar8 + 6) = 1;
  }
  fn_828B55B0(param_3 + 3);
  fn_8265CA20(param_3);
  if (*(int *)(param_2 + 8) != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = piVar5;
  return param_1;
}

