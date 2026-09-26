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
extern int fn_82381BC0();
extern int fn_82595448();
extern int fn_825954B8();
extern int fn_8265CA20();
extern int fn_82F622E0();
extern int iRam8329700c;
extern unsigned int *lbl_83297008;
extern unsigned int stack0x0000001c;


undefined4 * fn_825950A0(undefined4 *param_1,int *param_2)

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
  if (*(char *)((int)param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  fn_82381BC0(&stack0x0000001c);
  piVar5 = piStack0000001c;
  piVar9 = (int *)*param_2;
  if (*(char *)((int)piVar9 + 0x15) == '\0') {
    piVar8 = piVar9;
    if ((*(char *)(param_2[2] + 0x15) == '\0') &&
       (piVar8 = (int *)piStack0000001c[2], piStack0000001c != param_2)) {
      piVar9[1] = (int)piStack0000001c;
      *piStack0000001c = *param_2;
      piVar9 = piStack0000001c;
      if (piStack0000001c != (int *)param_2[2]) {
        piVar9 = (int *)piStack0000001c[1];
        if (*(char *)((int)piVar8 + 0x15) == '\0') {
          piVar8[1] = (int)piVar9;
        }
        *piVar9 = (int)piVar8;
        piStack0000001c[2] = param_2[2];
        *(int **)(param_2[2] + 4) = piStack0000001c;
      }
      if ((int *)lbl_83297008[1] == param_2) {
        lbl_83297008[1] = piStack0000001c;
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
      uVar2 = *(undefined1 *)(piStack0000001c + 5);
      *(undefined1 *)(piStack0000001c + 5) = *(undefined1 *)(param_2 + 5);
      *(undefined1 *)(param_2 + 5) = uVar2;
      goto LAB_82595298;
    }
  }
  else {
    piVar8 = (int *)param_2[2];
  }
  piVar9 = (int *)param_2[1];
  if (*(char *)((int)piVar8 + 0x15) == '\0') {
    piVar8[1] = (int)piVar9;
  }
  if ((int *)lbl_83297008[1] == param_2) {
    lbl_83297008[1] = piVar8;
  }
  else if ((int *)*piVar9 == param_2) {
    *piVar9 = (int)piVar8;
  }
  else {
    piVar9[2] = (int)piVar8;
  }
  if ((int *)*lbl_83297008 == param_2) {
    piVar7 = piVar9;
    if (*(char *)((int)piVar8 + 0x15) == '\0') {
      piVar6 = (int *)*piVar8;
      piVar7 = piVar8;
      while (piVar3 = piVar6, *(char *)((int)piVar3 + 0x15) == '\0') {
        piVar7 = piVar3;
        piVar6 = (int *)*piVar3;
      }
    }
    *lbl_83297008 = piVar7;
  }
  if ((int *)lbl_83297008[2] == param_2) {
    piVar7 = piVar9;
    if (*(char *)((int)piVar8 + 0x15) == '\0') {
      piVar6 = (int *)piVar8[2];
      piVar7 = piVar8;
      while (piVar3 = piVar6, *(char *)((int)piVar3 + 0x15) == '\0') {
        piVar7 = piVar3;
        piVar6 = (int *)piVar3[2];
      }
    }
    lbl_83297008[2] = piVar7;
  }
LAB_82595298:
  if (*(char *)(param_2 + 5) == '\x01') {
    if (piVar8 != (int *)lbl_83297008[1]) {
      do {
        if (*(char *)(piVar8 + 5) != '\x01') break;
        piVar7 = (int *)*piVar9;
        if (piVar8 == piVar7) {
          piVar7 = (int *)piVar9[2];
          if (*(char *)(piVar7 + 5) == '\0') {
            *(undefined1 *)(piVar7 + 5) = 1;
            *(undefined1 *)(piVar9 + 5) = 0;
            fn_82595448(piVar9);
            piVar7 = (int *)piVar9[2];
          }
          if (*(char *)((int)piVar7 + 0x15) == '\0') {
            if ((*(char *)(*piVar7 + 0x14) != '\x01') || (*(char *)(piVar7[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar7[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar7 + 0x14) = 1;
                *(undefined1 *)(piVar7 + 5) = 0;
                fn_825954B8(piVar7);
                piVar7 = (int *)piVar9[2];
              }
              *(undefined1 *)(piVar7 + 5) = *(undefined1 *)(piVar9 + 5);
              *(undefined1 *)(piVar9 + 5) = 1;
              *(undefined1 *)(piVar7[2] + 0x14) = 1;
              fn_82595448(piVar9);
              break;
            }
LAB_825953b4:
            *(undefined1 *)(piVar7 + 5) = 0;
          }
        }
        else {
          if (*(char *)(piVar7 + 5) == '\0') {
            *(undefined1 *)(piVar7 + 5) = 1;
            *(undefined1 *)(piVar9 + 5) = 0;
            fn_825954B8(piVar9);
            piVar7 = (int *)*piVar9;
          }
          if (*(char *)((int)piVar7 + 0x15) == '\0') {
            if ((*(char *)(piVar7[2] + 0x14) == '\x01') && (*(char *)(*piVar7 + 0x14) == '\x01'))
            goto LAB_825953b4;
            if (*(char *)(*piVar7 + 0x14) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0x14) = 1;
              *(undefined1 *)(piVar7 + 5) = 0;
              fn_82595448(piVar7);
              piVar7 = (int *)*piVar9;
            }
            *(undefined1 *)(piVar7 + 5) = *(undefined1 *)(piVar9 + 5);
            *(undefined1 *)(piVar9 + 5) = 1;
            *(undefined1 *)(*piVar7 + 0x14) = 1;
            fn_825954B8(piVar9);
            break;
          }
        }
        bVar1 = piVar9 != (int *)lbl_83297008[1];
        piVar8 = piVar9;
        piVar9 = (int *)piVar9[1];
      } while (bVar1);
    }
    *(undefined1 *)(piVar8 + 5) = 1;
  }
  fn_8265CA20(param_2);
  if (iRam8329700c != 0) {
    iRam8329700c = iRam8329700c + -1;
  }
  *param_1 = piVar5;
  return param_1;
}

