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
extern int fn_82CE5410();
extern int fn_82D3BE58();
extern int fn_82D40860();
extern unsigned int lbl_8205751C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82D68AD0(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  param_2 = param_2 - (int)param_1;
  param_4 = param_4 - (int)param_1;
  dVar8 = (double)lbl_8205751C;
  lVar5 = 2;
  do {
    if (*(int *)(param_2 + (int)param_1) == 0) {
      *(undefined4 *)(param_4 + (int)param_1) = 0;
    }
    else {
      iVar1 = **(int **)*param_1;
      iVar3 = fn_82CE5410();
      iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x40);
      *(undefined2 *)(iVar3 + 4) = 0x40;
      dVar7 = (double)*(float *)(iVar1 + 0x10);
      dVar6 = (double)fn_82D40860(iVar1);
      uVar4 = fn_82D3BE58((double)(float)((double)(float)(dVar6 + dVar7) + dVar8),iVar3,
                           iVar1 + 0x20,iVar1 + 0x30);
      if (param_3 != (undefined4 *)0x0) {
        uVar2 = *(undefined4 *)(*(int *)*param_1 + 8);
        param_3[3] = *(int *)*param_1;
        param_3[2] = uVar2;
      }
      *param_3 = uVar4;
      param_3[1] = 0xffffffff;
      *(undefined4 *)(param_4 + (int)param_1) = *(undefined4 *)*param_1;
      *(undefined4 **)*param_1 = param_3;
    }
    lVar5 = lVar5 + -1;
    param_3 = param_3 + 4;
    param_1 = param_1 + 1;
  } while (lVar5 != 0);
  return;
}

