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
extern int fn_822B5400();
extern int fn_824C0808();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern U64 storeWordConditionalIndexed();


undefined4 *
fn_825143C8(undefined4 *param_1,int param_2,char param_3,undefined4 *param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  int *piVar9;
  char in_RESERVE;
  byte in_cr0;
  
  if (0x15555553 < *(uint *)(param_2 + 8)) {
    piVar9 = (int *)param_5[5];
    if (ZEXT48(piVar9) != 0) {
      lVar6 = ZEXT48(piVar9) + 8;
      do {
        puVar7 = (uint *)lVar6;
        lVar8 = (ulonglong)*puVar7 - 1;
        if (in_RESERVE != '\0') {
          uVar5 = storeWordConditionalIndexed(lVar8,0,lVar6);
          *puVar7 = uVar5;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)lVar8 == 0) {
        (**(code **)(*piVar9 + 4))();
      }
    }
    fn_8265CA20(param_5);
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82197e58);
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *(undefined4 **)(param_2 + 4)) {
    (*(undefined4 **)(param_2 + 4))[1] = param_5;
    **(undefined4 **)(param_2 + 4) = param_5;
    iVar2 = *(int *)(param_2 + 4);
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_5;
      if (param_4 == (undefined4 *)**(int **)(param_2 + 4)) {
        **(int **)(param_2 + 4) = (int)param_5;
      }
      goto LAB_825144b4;
    }
    param_4[2] = param_5;
    iVar2 = *(int *)(param_2 + 4);
    if (param_4 != *(undefined4 **)(iVar2 + 8)) goto LAB_825144b4;
  }
  *(int **)(iVar2 + 8) = param_5;
LAB_825144b4:
  cVar1 = *(char *)(param_5[1] + 0x18);
  piVar9 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_2 + 4);
      *param_1 = param_5;
      *(undefined1 *)(*(int *)(iVar2 + 4) + 0x18) = 1;
      return param_1;
    }
    piVar3 = (int *)piVar9[1];
    piVar4 = (int *)piVar3[1];
    if (piVar3 == (int *)*piVar4) {
      iVar2 = piVar4[2];
      if (*(char *)(iVar2 + 0x18) == '\0') {
LAB_82514544:
        *(undefined1 *)(piVar9[1] + 0x18) = 1;
        *(undefined1 *)(iVar2 + 0x18) = 1;
        *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x18) = 0;
        piVar9 = *(int **)(piVar9[1] + 4);
      }
      else {
        if (piVar9 == (int *)piVar3[2]) {
          fn_822B5400(param_2);
          piVar9 = piVar3;
        }
        *(undefined1 *)(piVar9[1] + 0x18) = 1;
        *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x18) = 0;
        fn_824C0808(param_2,*(undefined4 *)(piVar9[1] + 4));
      }
    }
    else {
      iVar2 = *piVar4;
      if (*(char *)(iVar2 + 0x18) == '\0') goto LAB_82514544;
      if (piVar9 == (int *)*piVar3) {
        fn_824C0808(param_2);
        piVar9 = piVar3;
      }
      *(undefined1 *)(piVar9[1] + 0x18) = 1;
      *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x18) = 0;
      fn_822B5400(param_2,*(undefined4 *)(piVar9[1] + 4));
    }
    cVar1 = *(char *)(piVar9[1] + 0x18);
  } while( true );
}

