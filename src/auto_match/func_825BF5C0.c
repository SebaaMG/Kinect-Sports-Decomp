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
extern int fn_8256DBA0();
extern int fn_82587028();
extern int fn_825BF7D8();
extern int fn_8265CA20();


int * fn_825BF5C0(int *param_1,int param_2,uint *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined1 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  uVar5 = *(uint *)(param_2 + 0x20);
  uVar4 = fn_8256DBA0(param_2,param_3);
  uVar4 = uVar4 & uVar5;
  if (*(uint *)(param_2 + 0x24) <= uVar4) {
    uVar4 = (uVar4 - (uVar5 >> 1)) - 1;
  }
  iVar7 = uVar4 * 8;
  puVar10 = *(undefined4 **)(param_2 + 4);
  piVar9 = (int *)(param_2 + 4);
  piVar6 = (int *)(*(int *)(param_2 + 0x10) + iVar7);
  puVar1 = (undefined4 *)*piVar6;
  if ((puVar10 != puVar1) && (puVar10 = *(undefined4 **)piVar6[1], puVar10 != puVar1)) {
    do {
      puVar10 = (undefined4 *)puVar10[1];
      if ((uint)puVar10[2] <= *param_3) {
        if (*param_3 <= (uint)puVar10[2]) {
          if (param_4 != (int *)*piVar9) {
            *(int *)param_4[1] = *param_4;
            *(int *)(*param_4 + 4) = param_4[1];
            fn_8265CA20(param_4);
            *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
          }
          uVar8 = 0;
          *param_1 = (int)puVar10;
          goto LAB_825bf7c4;
        }
        puVar10 = (undefined4 *)*puVar10;
        break;
      }
    } while (puVar10 != puVar1);
  }
  puVar1 = (undefined4 *)*param_4;
  if (puVar10 != puVar1) {
    *(undefined4 **)param_4[1] = puVar1;
    *(undefined4 **)puVar1[1] = puVar10;
    *(int **)puVar10[1] = param_4;
    iVar2 = puVar10[1];
    puVar10[1] = puVar1[1];
    puVar1[1] = param_4[1];
    param_4[1] = iVar2;
  }
  piVar6 = (int *)(*(int *)(param_2 + 0x10) + iVar7);
  if ((undefined4 *)*piVar6 == (undefined4 *)*piVar9) {
    *piVar6 = (int)param_4;
    *(int **)(*(int *)(param_2 + 0x10) + iVar7 + 4) = param_4;
  }
  else if ((undefined4 *)*piVar6 == puVar10) {
    *piVar6 = (int)param_4;
  }
  else {
    piVar3 = *(int **)piVar6[1];
    piVar6[1] = (int)piVar3;
    if (piVar3 != param_4) {
      iVar7 = *(int *)(param_2 + 0x10) + iVar7;
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(*(int *)(iVar7 + 4) + 4);
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
    fn_82587028(param_2);
    fn_825BF7D8(param_2,*piVar9);
  }
  uVar8 = 1;
  *param_1 = (int)param_4;
LAB_825bf7c4:
  *(undefined1 *)(param_1 + 1) = uVar8;
  return param_1;
}

