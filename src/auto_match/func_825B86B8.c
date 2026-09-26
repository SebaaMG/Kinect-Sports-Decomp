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
extern int fn_8259BDA8();
extern int fn_825B8A60();
extern int fn_825B8AD0();
extern int fn_8265CA20();
extern int fn_82F622E0();
extern int iRam8329703c;
extern unsigned int *lbl_83297038;
extern unsigned int stack0x0000001c;


undefined4 * fn_825B86B8(undefined4 *param_1,int *param_2)

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
  int *piStack0000001c;
  
  piStack0000001c = param_2;
  if (*(char *)((int)param_2 + 0x11) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  fn_8259BDA8(&stack0x0000001c);
  piVar5 = piStack0000001c;
  piVar9 = (int *)*param_2;
  if (*(char *)((int)piVar9 + 0x11) == '\0') {
    piVar8 = piVar9;
    if ((*(char *)(param_2[2] + 0x11) == '\0') &&
       (piVar8 = (int *)piStack0000001c[2], piStack0000001c != param_2)) {
      piVar9[1] = (int)piStack0000001c;
      *piStack0000001c = *param_2;
      piVar9 = piStack0000001c;
      if (piStack0000001c != (int *)param_2[2]) {
        piVar9 = (int *)piStack0000001c[1];
        if (*(char *)((int)piVar8 + 0x11) == '\0') {
          piVar8[1] = (int)piVar9;
        }
        *piVar9 = (int)piVar8;
        piStack0000001c[2] = param_2[2];
        *(int **)(param_2[2] + 4) = piStack0000001c;
      }
      if ((int *)lbl_83297038[1] == param_2) {
        lbl_83297038[1] = piStack0000001c;
      }
      else {
        puVar4 = (undefined4 *)param_2[1];
        if ((int *)*puVar4 == param_2) {
          *puVar4 = piStack0000001c;
        }
        else {
          puVar4[2] = piStack0000001c;
        }
      }
      piStack0000001c[1] = param_2[1];
      uVar2 = *(undefined1 *)(piStack0000001c + 4);
      *(undefined1 *)(piStack0000001c + 4) = *(undefined1 *)(param_2 + 4);
      *(undefined1 *)(param_2 + 4) = uVar2;
      goto LAB_825b88b0;
    }
  }
  else {
    piVar8 = (int *)param_2[2];
  }
  piVar9 = (int *)param_2[1];
  if (*(char *)((int)piVar8 + 0x11) == '\0') {
    piVar8[1] = (int)piVar9;
  }
  if ((int *)lbl_83297038[1] == param_2) {
    lbl_83297038[1] = piVar8;
  }
  else if ((int *)*piVar9 == param_2) {
    *piVar9 = (int)piVar8;
  }
  else {
    piVar9[2] = (int)piVar8;
  }
  if ((int *)*lbl_83297038 == param_2) {
    piVar7 = piVar9;
    if (*(char *)((int)piVar8 + 0x11) == '\0') {
      piVar6 = (int *)*piVar8;
      piVar7 = piVar8;
      while (piVar3 = piVar6, *(char *)((int)piVar3 + 0x11) == '\0') {
        piVar7 = piVar3;
        piVar6 = (int *)*piVar3;
      }
    }
    *lbl_83297038 = piVar7;
  }
  if ((int *)lbl_83297038[2] == param_2) {
    piVar7 = piVar9;
    if (*(char *)((int)piVar8 + 0x11) == '\0') {
      piVar6 = (int *)piVar8[2];
      piVar7 = piVar8;
      while (piVar3 = piVar6, *(char *)((int)piVar3 + 0x11) == '\0') {
        piVar7 = piVar3;
        piVar6 = (int *)piVar3[2];
      }
    }
    lbl_83297038[2] = piVar7;
  }
LAB_825b88b0:
  if (*(char *)(param_2 + 4) == '\x01') {
    if (piVar8 != (int *)lbl_83297038[1]) {
      do {
        if (*(char *)(piVar8 + 4) != '\x01') break;
        piVar7 = (int *)*piVar9;
        if (piVar8 == piVar7) {
          piVar7 = (int *)piVar9[2];
          if (*(char *)(piVar7 + 4) == '\0') {
            *(undefined1 *)(piVar7 + 4) = 1;
            *(undefined1 *)(piVar9 + 4) = 0;
            fn_825B8A60(piVar9);
            piVar7 = (int *)piVar9[2];
          }
          if (*(char *)((int)piVar7 + 0x11) == '\0') {
            if ((*(char *)(*piVar7 + 0x10) != '\x01') || (*(char *)(piVar7[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar7[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar7 + 0x10) = 1;
                *(undefined1 *)(piVar7 + 4) = 0;
                fn_825B8AD0(piVar7);
                piVar7 = (int *)piVar9[2];
              }
              *(undefined1 *)(piVar7 + 4) = *(undefined1 *)(piVar9 + 4);
              *(undefined1 *)(piVar9 + 4) = 1;
              *(undefined1 *)(piVar7[2] + 0x10) = 1;
              fn_825B8A60(piVar9);
              break;
            }
LAB_825b89cc:
            *(undefined1 *)(piVar7 + 4) = 0;
          }
        }
        else {
          if (*(char *)(piVar7 + 4) == '\0') {
            *(undefined1 *)(piVar7 + 4) = 1;
            *(undefined1 *)(piVar9 + 4) = 0;
            fn_825B8AD0(piVar9);
            piVar7 = (int *)*piVar9;
          }
          if (*(char *)((int)piVar7 + 0x11) == '\0') {
            if ((*(char *)(piVar7[2] + 0x10) == '\x01') && (*(char *)(*piVar7 + 0x10) == '\x01'))
            goto LAB_825b89cc;
            if (*(char *)(*piVar7 + 0x10) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0x10) = 1;
              *(undefined1 *)(piVar7 + 4) = 0;
              fn_825B8A60(piVar7);
              piVar7 = (int *)*piVar9;
            }
            *(undefined1 *)(piVar7 + 4) = *(undefined1 *)(piVar9 + 4);
            *(undefined1 *)(piVar9 + 4) = 1;
            *(undefined1 *)(*piVar7 + 0x10) = 1;
            fn_825B8AD0(piVar9);
            break;
          }
        }
        bVar1 = piVar9 != (int *)lbl_83297038[1];
        piVar8 = piVar9;
        piVar9 = (int *)piVar9[1];
      } while (bVar1);
    }
    *(undefined1 *)(piVar8 + 4) = 1;
  }
  fn_8265CA20(param_2);
  if (iRam8329703c != 0) {
    iRam8329703c = iRam8329703c + -1;
  }
  *param_1 = piVar5;
  return param_1;
}

