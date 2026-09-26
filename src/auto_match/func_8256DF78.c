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
extern int fn_8256E120();
extern int fn_8265CA20();


int * fn_8256DF78(int *param_1,int param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar6 = fn_8256DBA0(param_2,param_3);
  uVar6 = uVar6 & uVar1;
  if (*(uint *)(param_2 + 0x24) <= uVar6) {
    uVar6 = (uVar6 - (uVar1 >> 1)) - 1;
  }
  iVar5 = uVar6 * 8;
  puVar9 = *(undefined4 **)(param_2 + 4);
  piVar7 = (int *)(*(int *)(param_2 + 0x10) + iVar5);
  puVar2 = (undefined4 *)*piVar7;
  if ((puVar9 != puVar2) && (puVar9 = *(undefined4 **)piVar7[1], puVar9 != puVar2)) {
    do {
      puVar9 = (undefined4 *)puVar9[1];
      if ((uint)puVar9[2] <= *param_3) {
        if (*param_3 <= (uint)puVar9[2]) {
          if (param_4 != *(int **)(param_2 + 4)) {
            *(int *)param_4[1] = *param_4;
            *(int *)(*param_4 + 4) = param_4[1];
            fn_8265CA20(param_4);
            *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
          }
          uVar8 = 0;
          *param_1 = (int)puVar9;
          goto LAB_8256e110;
        }
        puVar9 = (undefined4 *)*puVar9;
        break;
      }
    } while (puVar9 != puVar2);
  }
  puVar2 = (undefined4 *)*param_4;
  if (puVar9 != puVar2) {
    *(undefined4 **)param_4[1] = puVar2;
    *(undefined4 **)puVar2[1] = puVar9;
    *(int **)puVar9[1] = param_4;
    iVar3 = puVar9[1];
    puVar9[1] = puVar2[1];
    puVar2[1] = param_4[1];
    param_4[1] = iVar3;
  }
  piVar7 = (int *)(*(int *)(param_2 + 0x10) + iVar5);
  if ((undefined4 *)*piVar7 == *(undefined4 **)(param_2 + 4)) {
    *piVar7 = (int)param_4;
    *(int **)(*(int *)(param_2 + 0x10) + iVar5 + 4) = param_4;
  }
  else if ((undefined4 *)*piVar7 == puVar9) {
    *piVar7 = (int)param_4;
  }
  else {
    piVar4 = *(int **)piVar7[1];
    piVar7[1] = (int)piVar4;
    if (piVar4 != param_4) {
      iVar5 = *(int *)(param_2 + 0x10) + iVar5;
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(*(int *)(iVar5 + 4) + 4);
    }
  }
  fn_8256E120(param_2);
  uVar8 = 1;
  *param_1 = (int)param_4;
LAB_8256e110:
  *(undefined1 *)(param_1 + 1) = uVar8;
  return param_1;
}

