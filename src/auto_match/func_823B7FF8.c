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
extern int fn_822507E0();
extern int fn_82250928();
extern int fn_823B9060();
extern int fn_8265CA20();
extern int fn_828696A0();
extern int fn_82F622E0();
extern unsigned int stack0x00000024;


undefined4 * fn_823B7FF8(undefined4 *param_1,int param_2,int *param_3)

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
  if (*(char *)((int)param_3 + 0x35) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  fn_82250928(&stack0x00000024);
  piVar4 = piStack00000024;
  piVar8 = (int *)*param_3;
  if (*(char *)((int)piVar8 + 0x35) == '\0') {
    piVar7 = piVar8;
    if ((*(char *)(param_3[2] + 0x35) != '\0') ||
       (piVar7 = (int *)piStack00000024[2], piStack00000024 == param_3)) goto LAB_823b8074;
    piVar8[1] = (int)piStack00000024;
    *piStack00000024 = *param_3;
    piVar8 = piStack00000024;
    if (piStack00000024 != (int *)param_3[2]) {
      piVar8 = (int *)piStack00000024[1];
      if (*(char *)((int)piVar7 + 0x35) == '\0') {
        piVar7[1] = (int)piVar8;
      }
      *piVar8 = (int)piVar7;
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
    uVar1 = *(undefined1 *)(piStack00000024 + 0xd);
    *(undefined1 *)(piStack00000024 + 0xd) = *(undefined1 *)(param_3 + 0xd);
    *(undefined1 *)(param_3 + 0xd) = uVar1;
  }
  else {
    piVar7 = (int *)param_3[2];
LAB_823b8074:
    piVar8 = (int *)param_3[1];
    if (*(char *)((int)piVar7 + 0x35) == '\0') {
      piVar7[1] = (int)piVar8;
    }
    if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
      *(int **)(*(int *)(param_2 + 4) + 4) = piVar7;
    }
    else if ((int *)*piVar8 == param_3) {
      *piVar8 = (int)piVar7;
    }
    else {
      piVar8[2] = (int)piVar7;
    }
    if ((int *)**(undefined4 **)(param_2 + 4) == param_3) {
      piVar6 = piVar8;
      if (*(char *)((int)piVar7 + 0x35) == '\0') {
        piVar5 = (int *)*piVar7;
        piVar6 = piVar7;
        while (piVar2 = piVar5, *(char *)((int)piVar2 + 0x35) == '\0') {
          piVar6 = piVar2;
          piVar5 = (int *)*piVar2;
        }
      }
      **(undefined4 **)(param_2 + 4) = piVar6;
    }
    if (*(int **)(*(int *)(param_2 + 4) + 8) == param_3) {
      piVar6 = piVar8;
      if (*(char *)((int)piVar7 + 0x35) == '\0') {
        piVar5 = (int *)piVar7[2];
        piVar6 = piVar7;
        while (piVar2 = piVar5, *(char *)((int)piVar2 + 0x35) == '\0') {
          piVar6 = piVar2;
          piVar5 = (int *)piVar2[2];
        }
      }
      *(int **)(*(int *)(param_2 + 4) + 8) = piVar6;
    }
  }
  if (*(char *)(param_3 + 0xd) != '\x01') {
LAB_823b836c:
    fn_823B9060(param_3 + 6);
    fn_8265CA20(param_3[6]);
    param_3[6] = 0;
    fn_8265CA20(param_3);
    if (*(int *)(param_2 + 8) != 0) {
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
    }
    *param_1 = piVar4;
    return param_1;
  }
LAB_823b830c:
  if ((piVar7 == *(int **)(*(int *)(param_2 + 4) + 4)) || (*(char *)(piVar7 + 0xd) != '\x01'))
  goto LAB_823b8368;
  piVar6 = (int *)*piVar8;
  if (piVar7 == piVar6) {
    piVar6 = (int *)piVar8[2];
    if (*(char *)(piVar6 + 0xd) == '\0') {
      *(undefined1 *)(piVar6 + 0xd) = 1;
      *(undefined1 *)(piVar8 + 0xd) = 0;
      fn_828696A0(param_2,piVar8);
      piVar6 = (int *)piVar8[2];
    }
    if (*(char *)((int)piVar6 + 0x35) == '\0') {
      if ((*(char *)(*piVar6 + 0x34) != '\x01') || (*(char *)(piVar6[2] + 0x34) != '\x01')) {
        if (*(char *)(piVar6[2] + 0x34) == '\x01') {
          *(undefined1 *)(*piVar6 + 0x34) = 1;
          *(undefined1 *)(piVar6 + 0xd) = 0;
          fn_822507E0(param_2,piVar6);
          piVar6 = (int *)piVar8[2];
        }
        *(undefined1 *)(piVar6 + 0xd) = *(undefined1 *)(piVar8 + 0xd);
        *(undefined1 *)(piVar8 + 0xd) = 1;
        *(undefined1 *)(piVar6[2] + 0x34) = 1;
        fn_828696A0(param_2,piVar8);
        goto LAB_823b8368;
      }
LAB_823b8300:
      *(undefined1 *)(piVar6 + 0xd) = 0;
    }
  }
  else {
    if (*(char *)(piVar6 + 0xd) == '\0') {
      *(undefined1 *)(piVar6 + 0xd) = 1;
      *(undefined1 *)(piVar8 + 0xd) = 0;
      fn_822507E0(param_2,piVar8);
      piVar6 = (int *)*piVar8;
    }
    if (*(char *)((int)piVar6 + 0x35) == '\0') {
      if ((*(char *)(piVar6[2] + 0x34) == '\x01') && (*(char *)(*piVar6 + 0x34) == '\x01'))
      goto LAB_823b8300;
      if (*(char *)(*piVar6 + 0x34) == '\x01') {
        *(undefined1 *)(piVar6[2] + 0x34) = 1;
        *(undefined1 *)(piVar6 + 0xd) = 0;
        fn_828696A0(param_2,piVar6);
        piVar6 = (int *)*piVar8;
      }
      *(undefined1 *)(piVar6 + 0xd) = *(undefined1 *)(piVar8 + 0xd);
      *(undefined1 *)(piVar8 + 0xd) = 1;
      *(undefined1 *)(*piVar6 + 0x34) = 1;
      fn_822507E0(param_2,piVar8);
LAB_823b8368:
      *(undefined1 *)(piVar7 + 0xd) = 1;
      goto LAB_823b836c;
    }
  }
  piVar7 = piVar8;
  piVar8 = (int *)piVar8[1];
  goto LAB_823b830c;
}

