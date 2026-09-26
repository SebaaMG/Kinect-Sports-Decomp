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
extern int fn_82A21458();
extern unsigned int lbl_83219B94;


int * fn_82A22408(longlong param_1,char param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  *param_3 = 0;
  piVar7 = (int *)0x0;
  piVar6 = (int *)0x0;
  piVar4 = (int *)0x0;
  RtlEnterCriticalSection(lbl_83219B94);
  piVar1 = *(int **)(lbl_83219B94 + 0x2c);
  piVar5 = (int *)(lbl_83219B94 + 0x2c);
  iVar3 = lbl_83219B94;
  if (piVar1 == (int *)(lbl_83219B94 + 0x2c)) {
LAB_82a225bc:
    piVar1 = (int *)*piVar5;
    piVar6 = (int *)0x0;
    piVar4 = (int *)0x0;
    if (piVar1 == piVar5) goto LAB_82a22510;
    do {
      uVar2 = piVar1[7];
      if ((((uVar2 & 0x80) == 0) && ((uVar2 & 0x40) == 0)) &&
         (((uVar2 & 0x20) == 0 &&
          ((((uVar2 & 8) == 0 && ((piVar1[8] & 0x80000000U) == 0)) &&
           (*(char *)((int)piVar1 + 0x19) == param_2)))))) {
        if (param_1 < (longlong)(ulonglong)(uint)piVar1[2]) {
          *param_3 = 1;
          iVar3 = lbl_83219B94;
        }
        else {
          if (((piVar6 == (int *)0x0) || (*(byte *)(piVar1 + 6) < *(byte *)(piVar6 + 6))) ||
             ((uint)piVar1[4] < (uint)piVar6[4])) {
            piVar6 = piVar1;
          }
          if ((piVar4 == (int *)0x0) || ((piVar4[7] & 0xffffff00U) < (piVar6[7] & 0xffffff00U))) {
            piVar4 = piVar6;
          }
        }
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)(iVar3 + 0x2c));
    if (piVar6 == (int *)0x0) goto LAB_82a22510;
    piVar7 = piVar6;
    if (*(char *)(piVar6 + 6) == *(char *)(piVar4 + 6)) {
      piVar7 = piVar4;
    }
    piVar6 = piVar7;
    if (piVar7 == (int *)0x0) goto LAB_82a22510;
  }
  else {
    do {
      uVar2 = piVar1[7];
      if ((((((uVar2 & 0x80) == 0) && ((uVar2 & 0x40) == 0)) && ((uVar2 & 0x20) == 0)) &&
          (((uVar2 & 8) == 0 && ((piVar1[8] & 0x80000000U) == 0)))) &&
         (*(char *)((int)piVar1 + 0x19) == param_2)) {
        if ((piVar1[5] != 0) && (piVar7 == (int *)0x0)) {
          piVar7 = piVar1;
        }
        if (param_1 < (longlong)(ulonglong)(uint)piVar1[2]) {
          *param_3 = 1;
          iVar3 = lbl_83219B94;
        }
        else if (((uVar2 & 2) != 0) && (piVar4 = piVar1, piVar6 == (int *)0x0)) {
          piVar6 = piVar1;
        }
      }
      piVar1 = (int *)*piVar1;
      piVar5 = (int *)(iVar3 + 0x2c);
    } while (piVar1 != piVar5);
    if (piVar4 != (int *)0x0) {
      piVar7 = piVar4;
      if (piVar4 != piVar5) {
        do {
          uVar2 = piVar7[7];
          if (((((uVar2 & 0x80) == 0) && ((uVar2 & 0x40) == 0)) && ((uVar2 & 0x20) == 0)) &&
             ((((uVar2 & 8) == 0 && ((piVar7[8] & 0x80000000U) == 0)) &&
              (*(char *)((int)piVar7 + 0x19) == param_2)))) {
            if (param_1 < (longlong)(ulonglong)(uint)piVar7[2]) {
              *param_3 = 1;
              iVar3 = lbl_83219B94;
            }
            else if ((uint)piVar4[4] <= (uint)piVar7[4]) goto LAB_82a22504;
          }
          piVar7 = (int *)*piVar7;
          piVar5 = (int *)(iVar3 + 0x2c);
        } while (piVar7 != piVar5);
      }
LAB_82a225a4:
      if (piVar6 != (int *)0x0) {
        fn_82A21458(iVar3,piVar6);
        iVar3 = lbl_83219B94;
        goto LAB_82a22510;
      }
      goto LAB_82a225bc;
    }
    if (piVar7 == (int *)0x0) goto LAB_82a225a4;
  }
LAB_82a22504:
  fn_82A21458(iVar3,piVar7);
  iVar3 = lbl_83219B94;
  piVar6 = piVar7;
LAB_82a22510:
  RtlLeaveCriticalSection(iVar3);
  return piVar6;
}

