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
extern int fn_8256BDE0();
extern int fn_825E7D78();
extern int fn_8265CA20();


int * fn_825E7BF0(int *param_1,int param_2,uint *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  
  iVar4 = fn_8256BDE0(param_2,param_3);
  iVar4 = iVar4 * 8;
  puVar7 = *(undefined4 **)(param_2 + 4);
  piVar5 = (int *)(iVar4 + *(int *)(param_2 + 0x10));
  puVar1 = (undefined4 *)*piVar5;
  if ((puVar7 != puVar1) && (puVar7 = *(undefined4 **)piVar5[1], puVar7 != puVar1)) {
    do {
      puVar7 = (undefined4 *)puVar7[1];
      if ((uint)puVar7[2] <= *param_3) {
        if (*param_3 <= (uint)puVar7[2]) {
          if (param_4 != *(int **)(param_2 + 4)) {
            *(int *)param_4[1] = *param_4;
            *(int *)(*param_4 + 4) = param_4[1];
            fn_8265CA20(param_4);
            *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
          }
          uVar6 = 0;
          *param_1 = (int)puVar7;
          goto LAB_825e7d68;
        }
        puVar7 = (undefined4 *)*puVar7;
        break;
      }
    } while (puVar7 != puVar1);
  }
  puVar1 = (undefined4 *)*param_4;
  if (puVar7 != puVar1) {
    *(undefined4 **)param_4[1] = puVar1;
    *(undefined4 **)puVar1[1] = puVar7;
    *(int **)puVar7[1] = param_4;
    iVar2 = puVar7[1];
    puVar7[1] = puVar1[1];
    puVar1[1] = param_4[1];
    param_4[1] = iVar2;
  }
  piVar5 = (int *)(iVar4 + *(int *)(param_2 + 0x10));
  if ((undefined4 *)*piVar5 == *(undefined4 **)(param_2 + 4)) {
    *piVar5 = (int)param_4;
    *(int **)(iVar4 + *(int *)(param_2 + 0x10) + 4) = param_4;
  }
  else if ((undefined4 *)*piVar5 == puVar7) {
    *piVar5 = (int)param_4;
  }
  else {
    piVar3 = *(int **)piVar5[1];
    piVar5[1] = (int)piVar3;
    if (piVar3 != param_4) {
      iVar4 = iVar4 + *(int *)(param_2 + 0x10);
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(*(int *)(iVar4 + 4) + 4);
    }
  }
  fn_825E7D78(param_2);
  uVar6 = 1;
  *param_1 = (int)param_4;
LAB_825e7d68:
  *(undefined1 *)(param_1 + 1) = uVar6;
  return param_1;
}

