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
extern int fn_8248F8E8();
extern int fn_82491E88();
extern int fn_824973B0();
extern int fn_82497430();
extern int fn_8249A4F0();
extern unsigned int lbl_821BEBB0;
extern unsigned int lbl_821BEBB8;


int * fn_8249A2E0(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined1 uVar8;
  int *piVar9;
  
  iVar4 = fn_824973B0(param_2,param_3);
  iVar4 = iVar4 * 8;
  iVar7 = *(int *)(param_2 + 4);
  piVar9 = (int *)(param_2 + 4);
  piVar6 = (int *)(iVar4 + *(int *)(param_2 + 0x10));
  iVar1 = *piVar6;
  if ((iVar7 != iVar1) && (iVar7 = *(int *)piVar6[1], iVar7 != iVar1)) {
    do {
      iVar7 = *(int *)(iVar7 + 4);
      if (*param_3 == *(int *)(iVar7 + 0x10)) {
        if (param_4 != (int *)*piVar9) {
          *(int *)param_4[1] = *param_4;
          *(int *)(*param_4 + 4) = param_4[1];
          param_4[8] = (int)&lbl_821BEBB8;
          fn_82491E88(param_4 + 0x1c);
          param_4[8] = (int)&lbl_821BEBB0;
          fn_8248F8E8(param_4);
          *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
        }
        uVar8 = 0;
        *param_1 = iVar7;
        goto LAB_8249a4dc;
      }
    } while (iVar7 != iVar1);
  }
  iVar1 = *param_4;
  if (iVar7 != iVar1) {
    *(int *)param_4[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar7;
    **(undefined4 **)(iVar7 + 4) = param_4;
    iVar2 = *(int *)(iVar7 + 4);
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(iVar1 + 4) = param_4[1];
    param_4[1] = iVar2;
  }
  piVar6 = (int *)(iVar4 + *(int *)(param_2 + 0x10));
  if (*piVar6 == *piVar9) {
    *piVar6 = (int)param_4;
    *(int **)(iVar4 + *(int *)(param_2 + 0x10) + 4) = param_4;
  }
  else if (*piVar6 == iVar7) {
    *piVar6 = (int)param_4;
  }
  else {
    piVar3 = *(int **)piVar6[1];
    piVar6[1] = (int)piVar3;
    if (piVar3 != param_4) {
      iVar4 = iVar4 + *(int *)(param_2 + 0x10);
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(*(int *)(iVar4 + 4) + 4);
    }
  }
  uVar5 = *(uint *)(param_2 + 0x24);
  if (*(float *)(param_2 + 0x28) < (float)((double)*(uint *)(param_2 + 8) / (double)uVar5)) {
    iVar7 = 0;
    do {
      if (0x1ffffffe < uVar5) break;
      iVar7 = iVar7 + 1;
      uVar5 = uVar5 << 1;
    } while (iVar7 < 3);
    fn_82497430(param_2);
    fn_8249A4F0(param_2,*piVar9);
  }
  uVar8 = 1;
  *param_1 = (int)param_4;
LAB_8249a4dc:
  *(undefined1 *)(param_1 + 1) = uVar8;
  return param_1;
}

