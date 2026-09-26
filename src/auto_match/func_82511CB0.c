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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82248B90();
extern int fn_822B5400();
extern int fn_824C0808();
extern int fn_8265CA20();
extern int fn_82F622E0();
extern unsigned int stack0x00000024;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_82511CB0(undefined4 *param_1,int param_2,int *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  uint *puVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  char in_RESERVE;
  byte bVar14;
  int *piStack00000024;
  
  piStack00000024 = param_3;
  if (*(char *)((int)param_3 + 0x19) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  fn_82248B90(&stack0x00000024);
  piVar6 = piStack00000024;
  piVar13 = (int *)*param_3;
  if (*(char *)((int)piVar13 + 0x19) == '\0') {
    piVar12 = piVar13;
    if ((*(char *)(param_3[2] + 0x19) == '\0') &&
       (piVar12 = (int *)piStack00000024[2], piStack00000024 != param_3)) {
      piVar13[1] = (int)piStack00000024;
      *piStack00000024 = *param_3;
      if (piStack00000024 == (int *)param_3[2]) {
        bVar1 = true;
        piVar13 = piStack00000024;
      }
      else {
        piVar13 = (int *)piStack00000024[1];
        bVar1 = *(char *)((int)piVar12 + 0x19) == '\0';
        if (bVar1) {
          piVar12[1] = (int)piVar13;
        }
        *piVar13 = (int)piVar12;
        piStack00000024[2] = param_3[2];
        *(int **)(param_3[2] + 4) = piStack00000024;
      }
      bVar14 = bVar1 << 1;
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
      goto LAB_82511e98;
    }
  }
  else {
    piVar12 = (int *)param_3[2];
  }
  piVar13 = (int *)param_3[1];
  bVar1 = *(char *)((int)piVar12 + 0x19) == '\0';
  if (bVar1) {
    piVar12[1] = (int)piVar13;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_2 + 4) + 4) = piVar12;
  }
  else if ((int *)*piVar13 == param_3) {
    *piVar13 = (int)piVar12;
  }
  else {
    piVar13[2] = (int)piVar12;
  }
  if ((int *)**(undefined4 **)(param_2 + 4) == param_3) {
    piVar10 = piVar13;
    if (*(char *)((int)piVar12 + 0x19) == '\0') {
      piVar7 = (int *)*piVar12;
      piVar10 = piVar12;
      while (piVar3 = piVar7, *(char *)((int)piVar3 + 0x19) == '\0') {
        piVar10 = piVar3;
        piVar7 = (int *)*piVar3;
      }
    }
    bVar1 = false;
    **(undefined4 **)(param_2 + 4) = piVar10;
  }
  bVar14 = bVar1 << 1;
  if (*(int **)(*(int *)(param_2 + 4) + 8) == param_3) {
    piVar10 = piVar13;
    if (*(char *)((int)piVar12 + 0x19) == '\0') {
      piVar7 = (int *)piVar12[2];
      piVar10 = piVar12;
      while (piVar3 = piVar7, *(char *)((int)piVar3 + 0x19) == '\0') {
        piVar10 = piVar3;
        piVar7 = (int *)piVar3[2];
      }
    }
    bVar14 = 0;
    *(int **)(*(int *)(param_2 + 4) + 8) = piVar10;
  }
LAB_82511e98:
  if (*(char *)(param_3 + 6) == '\x01') {
    if (piVar12 != *(int **)(*(int *)(param_2 + 4) + 4)) {
      do {
        if (*(char *)(piVar12 + 6) != '\x01') break;
        piVar10 = (int *)*piVar13;
        if (piVar12 == piVar10) {
          piVar10 = (int *)piVar13[2];
          if (*(char *)(piVar10 + 6) == '\0') {
            *(undefined1 *)(piVar10 + 6) = 1;
            *(undefined1 *)(piVar13 + 6) = 0;
            fn_822B5400(param_2,piVar13);
            piVar10 = (int *)piVar13[2];
          }
          bVar1 = *(char *)((int)piVar10 + 0x19) == '\0';
          bVar14 = bVar1 << 1;
          if (bVar1) {
            if ((*(char *)(*piVar10 + 0x18) != '\x01') || (*(char *)(piVar10[2] + 0x18) != '\x01'))
            {
              if (*(char *)(piVar10[2] + 0x18) == '\x01') {
                *(undefined1 *)(*piVar10 + 0x18) = 1;
                *(undefined1 *)(piVar10 + 6) = 0;
                fn_824C0808(param_2,piVar10);
                piVar10 = (int *)piVar13[2];
              }
              *(undefined1 *)(piVar10 + 6) = *(undefined1 *)(piVar13 + 6);
              *(undefined1 *)(piVar13 + 6) = 1;
              *(undefined1 *)(piVar10[2] + 0x18) = 1;
              fn_822B5400(param_2,piVar13);
              break;
            }
LAB_82511fc4:
            *(undefined1 *)(piVar10 + 6) = 0;
          }
        }
        else {
          if (*(char *)(piVar10 + 6) == '\0') {
            *(undefined1 *)(piVar10 + 6) = 1;
            *(undefined1 *)(piVar13 + 6) = 0;
            fn_824C0808(param_2,piVar13);
            piVar10 = (int *)*piVar13;
          }
          bVar1 = *(char *)((int)piVar10 + 0x19) == '\0';
          bVar14 = bVar1 << 1;
          if (bVar1) {
            if ((*(char *)(piVar10[2] + 0x18) == '\x01') && (*(char *)(*piVar10 + 0x18) == '\x01'))
            goto LAB_82511fc4;
            if (*(char *)(*piVar10 + 0x18) == '\x01') {
              *(undefined1 *)(piVar10[2] + 0x18) = 1;
              *(undefined1 *)(piVar10 + 6) = 0;
              fn_822B5400(param_2,piVar10);
              piVar10 = (int *)*piVar13;
            }
            *(undefined1 *)(piVar10 + 6) = *(undefined1 *)(piVar13 + 6);
            *(undefined1 *)(piVar13 + 6) = 1;
            *(undefined1 *)(*piVar10 + 0x18) = 1;
            fn_824C0808(param_2,piVar13);
            break;
          }
        }
        bVar1 = piVar13 != *(int **)(*(int *)(param_2 + 4) + 4);
        piVar12 = piVar13;
        piVar13 = (int *)piVar13[1];
      } while (bVar1);
    }
    *(undefined1 *)(piVar12 + 6) = 1;
  }
  piVar13 = (int *)param_3[5];
  if (ZEXT48(piVar13) != 0) {
    lVar8 = ZEXT48(piVar13) + 8;
    do {
      puVar9 = (uint *)lVar8;
      lVar11 = (ulonglong)*puVar9 - 1;
      if (in_RESERVE != '\0') {
        uVar5 = storeWordConditionalIndexed(lVar11,0,lVar8);
        *puVar9 = uVar5;
        bVar14 = 2;
      }
    } while (!(bool)(bVar14 >> 1 & 1));
    if ((int)lVar11 == 0) {
      (**(code **)(*piVar13 + 4))();
    }
  }
  fn_8265CA20(param_3);
  if (*(int *)(param_2 + 8) != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = piVar6;
  return param_1;
}

