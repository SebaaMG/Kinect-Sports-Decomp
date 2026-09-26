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
extern int fn_824A1BB0();
extern int fn_824A1C20();
extern int fn_8265CA20();
extern int fn_82F622E0();
extern int iRam83292c88;
extern unsigned int *lbl_83292C84;


undefined4 * fn_824A1758(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  if (*(char *)((int)param_2 + 0x19) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  piVar7 = (int *)param_2[2];
  piVar6 = param_2 + 2;
  if (*(char *)((int)piVar7 + 0x19) == '\0') {
    piVar8 = (int *)*piVar7;
    while (piVar5 = piVar8, *(char *)((int)piVar5 + 0x19) == '\0') {
      piVar7 = piVar5;
      piVar8 = (int *)*piVar5;
    }
  }
  else {
    piVar8 = (int *)param_2[1];
    piVar5 = param_2;
    while ((piVar7 = piVar8, *(char *)((int)piVar7 + 0x19) == '\0' && (piVar5 == (int *)piVar7[2])))
    {
      piVar5 = piVar7;
      piVar8 = (int *)piVar7[1];
    }
  }
  piVar8 = (int *)*param_2;
  if (*(char *)((int)piVar8 + 0x19) == '\0') {
    piVar5 = piVar8;
    if ((*(char *)(*piVar6 + 0x19) == '\0') && (piVar5 = (int *)piVar7[2], piVar7 != param_2)) {
      piVar8[1] = (int)piVar7;
      *piVar7 = *param_2;
      piVar8 = piVar7;
      if (piVar7 != (int *)*piVar6) {
        piVar8 = (int *)piVar7[1];
        if (*(char *)((int)piVar5 + 0x19) == '\0') {
          piVar5[1] = (int)piVar8;
        }
        *piVar8 = (int)piVar5;
        piVar7[2] = *piVar6;
        *(int **)(*piVar6 + 4) = piVar7;
      }
      if ((int *)lbl_83292C84[1] == param_2) {
        lbl_83292C84[1] = piVar7;
      }
      else {
        puVar3 = (undefined4 *)param_2[1];
        if ((int *)*puVar3 == param_2) {
          *puVar3 = piVar7;
        }
        else {
          puVar3[2] = piVar7;
        }
      }
      piVar7[1] = param_2[1];
      uVar1 = *(undefined1 *)(piVar7 + 6);
      *(undefined1 *)(piVar7 + 6) = *(undefined1 *)(param_2 + 6);
      *(undefined1 *)(param_2 + 6) = uVar1;
      goto LAB_824a19a0;
    }
  }
  else {
    piVar5 = (int *)*piVar6;
  }
  piVar8 = (int *)param_2[1];
  if (*(char *)((int)piVar5 + 0x19) == '\0') {
    piVar5[1] = (int)piVar8;
  }
  if ((int *)lbl_83292C84[1] == param_2) {
    lbl_83292C84[1] = piVar5;
  }
  else if ((int *)*piVar8 == param_2) {
    *piVar8 = (int)piVar5;
  }
  else {
    piVar8[2] = (int)piVar5;
  }
  if ((int *)*lbl_83292C84 == param_2) {
    piVar6 = piVar8;
    if (*(char *)((int)piVar5 + 0x19) == '\0') {
      piVar4 = (int *)*piVar5;
      piVar6 = piVar5;
      while (piVar2 = piVar4, *(char *)((int)piVar2 + 0x19) == '\0') {
        piVar6 = piVar2;
        piVar4 = (int *)*piVar2;
      }
    }
    *lbl_83292C84 = piVar6;
  }
  if ((int *)lbl_83292C84[2] == param_2) {
    piVar6 = piVar8;
    if (*(char *)((int)piVar5 + 0x19) == '\0') {
      piVar4 = (int *)piVar5[2];
      piVar6 = piVar5;
      while (piVar2 = piVar4, *(char *)((int)piVar2 + 0x19) == '\0') {
        piVar6 = piVar2;
        piVar4 = (int *)piVar2[2];
      }
    }
    lbl_83292C84[2] = piVar6;
  }
LAB_824a19a0:
  if (*(char *)(param_2 + 6) == '\x01') {
    if (piVar5 != (int *)lbl_83292C84[1]) {
      do {
        piVar6 = piVar8;
        if (*(char *)(piVar5 + 6) != '\x01') break;
        piVar8 = (int *)*piVar6;
        if (piVar5 == piVar8) {
          piVar8 = (int *)piVar6[2];
          if (*(char *)(piVar8 + 6) == '\0') {
            *(undefined1 *)(piVar8 + 6) = 1;
            *(undefined1 *)(piVar6 + 6) = 0;
            fn_824A1BB0(piVar6);
            piVar8 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar8 + 0x19) == '\0') {
            if ((*(char *)(*piVar8 + 0x18) != '\x01') || (*(char *)(piVar8[2] + 0x18) != '\x01')) {
              if (*(char *)(piVar8[2] + 0x18) == '\x01') {
                *(undefined1 *)(*piVar8 + 0x18) = 1;
                *(undefined1 *)(piVar8 + 6) = 0;
                fn_824A1C20(piVar8);
                piVar8 = (int *)piVar6[2];
              }
              *(undefined1 *)(piVar8 + 6) = *(undefined1 *)(piVar6 + 6);
              *(undefined1 *)(piVar6 + 6) = 1;
              *(undefined1 *)(piVar8[2] + 0x18) = 1;
              fn_824A1BB0(piVar6);
              break;
            }
LAB_824a1abc:
            *(undefined1 *)(piVar8 + 6) = 0;
          }
        }
        else {
          if (*(char *)(piVar8 + 6) == '\0') {
            *(undefined1 *)(piVar8 + 6) = 1;
            *(undefined1 *)(piVar6 + 6) = 0;
            fn_824A1C20(piVar6);
            piVar8 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar8 + 0x19) == '\0') {
            if ((*(char *)(piVar8[2] + 0x18) == '\x01') && (*(char *)(*piVar8 + 0x18) == '\x01'))
            goto LAB_824a1abc;
            if (*(char *)(*piVar8 + 0x18) == '\x01') {
              *(undefined1 *)(piVar8[2] + 0x18) = 1;
              *(undefined1 *)(piVar8 + 6) = 0;
              fn_824A1BB0(piVar8);
              piVar8 = (int *)*piVar6;
            }
            *(undefined1 *)(piVar8 + 6) = *(undefined1 *)(piVar6 + 6);
            *(undefined1 *)(piVar6 + 6) = 1;
            *(undefined1 *)(*piVar8 + 0x18) = 1;
            fn_824A1C20(piVar6);
            break;
          }
        }
        piVar8 = (int *)piVar6[1];
        piVar5 = piVar6;
      } while (piVar6 != (int *)lbl_83292C84[1]);
    }
    *(undefined1 *)(piVar5 + 6) = 1;
  }
  fn_8265CA20(param_2);
  if (iRam83292c88 != 0) {
    iRam83292c88 = iRam83292c88 + -1;
  }
  *param_1 = piVar7;
  return param_1;
}

