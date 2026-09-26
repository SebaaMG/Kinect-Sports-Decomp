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
extern int fn_82587858();
extern int fn_8265CA20();
extern int fn_82F65C10();


int * fn_825875C0(int *param_1,int param_2,uint *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  
  uVar4 = fn_82F65C10(*param_3 & 0x7fffffff ^ 0x5eadbeef,0x1f31d);
  uVar4 = (uVar4 & 0xffffffff) * 0x41a7 + (uVar4 >> 0x20) * -0xb14;
  if ((longlong)uVar4 < 0) {
    uVar4 = uVar4 - 0x80000001;
  }
  uVar4 = *(uint *)(param_2 + 0x20) & uVar4;
  iVar5 = (int)uVar4;
  if (*(uint *)(param_2 + 0x24) <= uVar4) {
    iVar5 = (iVar5 - (*(uint *)(param_2 + 0x20) >> 1)) + -1;
  }
  iVar5 = iVar5 * 8;
  puVar8 = *(undefined4 **)(param_2 + 4);
  piVar6 = (int *)(iVar5 + *(int *)(param_2 + 0x10));
  puVar1 = (undefined4 *)*piVar6;
  if ((puVar8 != puVar1) && (puVar8 = *(undefined4 **)piVar6[1], puVar8 != puVar1)) {
    do {
      puVar8 = (undefined4 *)puVar8[1];
      if ((uint)puVar8[2] <= *param_3) {
        if (*param_3 <= (uint)puVar8[2]) {
          if (param_4 != *(int **)(param_2 + 4)) {
            *(int *)param_4[1] = *param_4;
            *(int *)(*param_4 + 4) = param_4[1];
            fn_8265CA20(param_4);
            *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
          }
          uVar7 = 0;
          *param_1 = (int)puVar8;
          goto LAB_8258778c;
        }
        puVar8 = (undefined4 *)*puVar8;
        break;
      }
    } while (puVar8 != puVar1);
  }
  puVar1 = (undefined4 *)*param_4;
  if (puVar8 != puVar1) {
    *(undefined4 **)param_4[1] = puVar1;
    *(undefined4 **)puVar1[1] = puVar8;
    *(int **)puVar8[1] = param_4;
    iVar2 = puVar8[1];
    puVar8[1] = puVar1[1];
    puVar1[1] = param_4[1];
    param_4[1] = iVar2;
  }
  piVar6 = (int *)(iVar5 + *(int *)(param_2 + 0x10));
  if ((undefined4 *)*piVar6 == *(undefined4 **)(param_2 + 4)) {
    *piVar6 = (int)param_4;
    *(int **)(iVar5 + *(int *)(param_2 + 0x10) + 4) = param_4;
  }
  else if ((undefined4 *)*piVar6 == puVar8) {
    *piVar6 = (int)param_4;
  }
  else {
    piVar3 = *(int **)piVar6[1];
    piVar6[1] = (int)piVar3;
    if (piVar3 != param_4) {
      iVar5 = iVar5 + *(int *)(param_2 + 0x10);
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(*(int *)(iVar5 + 4) + 4);
    }
  }
  fn_82587858(param_2);
  uVar7 = 1;
  *param_1 = (int)param_4;
LAB_8258778c:
  *(undefined1 *)(param_1 + 1) = uVar7;
  return param_1;
}

