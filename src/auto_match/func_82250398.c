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
extern int fn_82230300();
extern int fn_822508C0();
extern int fn_822509A0();
extern int fn_823D6300();
extern int fn_8265CA20();
extern int fn_82F622E0();
extern unsigned int stack0x00000024;


undefined4 * fn_82250398(undefined4 *param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piStack00000024;
  
  piStack00000024 = param_3;
  if (*(char *)((int)param_3 + 0x49) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  fn_822509A0(&stack0x00000024);
  piVar4 = piStack00000024;
  piVar7 = (int *)*param_3;
  if (*(char *)((int)piVar7 + 0x49) == '\0') {
    piVar8 = piVar7;
    if ((*(char *)(param_3[2] + 0x49) == '\0') &&
       (piVar8 = (int *)piStack00000024[2], piStack00000024 != param_3)) {
      piVar7[1] = (int)piStack00000024;
      *piStack00000024 = *param_3;
      piVar7 = piStack00000024;
      if (piStack00000024 != (int *)param_3[2]) {
        piVar7 = (int *)piStack00000024[1];
        if (*(char *)((int)piVar8 + 0x49) == '\0') {
          piVar8[1] = (int)piVar7;
        }
        *piVar7 = (int)piVar8;
        piStack00000024[2] = param_3[2];
        *(int **)(param_3[2] + 4) = piStack00000024;
      }
      if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
        *(int **)(*(int *)(param_2 + 4) + 4) = piStack00000024;
      }
      else {
        puVar3 = (undefined4 *)param_3[1];
        if ((int *)*puVar3 == param_3) {
          *puVar3 = piStack00000024;
        }
        else {
          puVar3[2] = piStack00000024;
        }
      }
      piStack00000024[1] = param_3[1];
      uVar1 = *(undefined1 *)(piStack00000024 + 0x12);
      *(undefined1 *)(piStack00000024 + 0x12) = *(undefined1 *)(param_3 + 0x12);
      *(undefined1 *)(param_3 + 0x12) = uVar1;
      goto LAB_82250580;
    }
  }
  else {
    piVar8 = (int *)param_3[2];
  }
  piVar7 = (int *)param_3[1];
  if (*(char *)((int)piVar8 + 0x49) == '\0') {
    piVar8[1] = (int)piVar7;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_2 + 4) + 4) = piVar8;
  }
  else if ((int *)*piVar7 == param_3) {
    *piVar7 = (int)piVar8;
  }
  else {
    piVar7[2] = (int)piVar8;
  }
  if ((int *)**(undefined4 **)(param_2 + 4) == param_3) {
    piVar6 = piVar7;
    if (*(char *)((int)piVar8 + 0x49) == '\0') {
      piVar5 = (int *)*piVar8;
      piVar6 = piVar8;
      while (piVar2 = piVar5, *(char *)((int)piVar2 + 0x49) == '\0') {
        piVar6 = piVar2;
        piVar5 = (int *)*piVar2;
      }
    }
    **(undefined4 **)(param_2 + 4) = piVar6;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 8) == param_3) {
    piVar6 = piVar7;
    if (*(char *)((int)piVar8 + 0x49) == '\0') {
      piVar5 = (int *)piVar8[2];
      piVar6 = piVar8;
      while (piVar2 = piVar5, *(char *)((int)piVar2 + 0x49) == '\0') {
        piVar6 = piVar2;
        piVar5 = (int *)piVar2[2];
      }
    }
    *(int **)(*(int *)(param_2 + 4) + 8) = piVar6;
  }
LAB_82250580:
  if (*(char *)(param_3 + 0x12) == '\x01') {
    if (piVar8 != *(int **)(*(int *)(param_2 + 4) + 4)) {
      do {
        piVar6 = piVar7;
        if (*(char *)(piVar8 + 0x12) != '\x01') break;
        piVar7 = (int *)*piVar6;
        if (piVar8 == piVar7) {
          piVar7 = (int *)piVar6[2];
          if (*(char *)(piVar7 + 0x12) == '\0') {
            *(undefined1 *)(piVar7 + 0x12) = 1;
            *(undefined1 *)(piVar6 + 0x12) = 0;
            fn_823D6300(param_2,piVar6);
            piVar7 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar7 + 0x49) == '\0') {
            if ((*(char *)(*piVar7 + 0x48) != '\x01') || (*(char *)(piVar7[2] + 0x48) != '\x01')) {
              if (*(char *)(piVar7[2] + 0x48) == '\x01') {
                *(undefined1 *)(*piVar7 + 0x48) = 1;
                *(undefined1 *)(piVar7 + 0x12) = 0;
                fn_822508C0(param_2,piVar7);
                piVar7 = (int *)piVar6[2];
              }
              *(undefined1 *)(piVar7 + 0x12) = *(undefined1 *)(piVar6 + 0x12);
              *(undefined1 *)(piVar6 + 0x12) = 1;
              *(undefined1 *)(piVar7[2] + 0x48) = 1;
              fn_823D6300(param_2,piVar6);
              break;
            }
LAB_822506ac:
            *(undefined1 *)(piVar7 + 0x12) = 0;
          }
        }
        else {
          if (*(char *)(piVar7 + 0x12) == '\0') {
            *(undefined1 *)(piVar7 + 0x12) = 1;
            *(undefined1 *)(piVar6 + 0x12) = 0;
            fn_822508C0(param_2,piVar6);
            piVar7 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar7 + 0x49) == '\0') {
            if ((*(char *)(piVar7[2] + 0x48) == '\x01') && (*(char *)(*piVar7 + 0x48) == '\x01'))
            goto LAB_822506ac;
            if (*(char *)(*piVar7 + 0x48) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0x48) = 1;
              *(undefined1 *)(piVar7 + 0x12) = 0;
              fn_823D6300(param_2,piVar7);
              piVar7 = (int *)*piVar6;
            }
            *(undefined1 *)(piVar7 + 0x12) = *(undefined1 *)(piVar6 + 0x12);
            *(undefined1 *)(piVar6 + 0x12) = 1;
            *(undefined1 *)(*piVar7 + 0x48) = 1;
            fn_822508C0(param_2,piVar6);
            break;
          }
        }
        piVar7 = (int *)piVar6[1];
        piVar8 = piVar6;
      } while (piVar6 != *(int **)(*(int *)(param_2 + 4) + 4));
    }
    *(undefined1 *)(piVar8 + 0x12) = 1;
  }
  fn_82230300(param_3 + 10,1,0);
  fn_82230300(param_3 + 3,1,0);
  fn_8265CA20(param_3);
  if (*(int *)(param_2 + 8) != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = piVar4;
  return param_1;
}

