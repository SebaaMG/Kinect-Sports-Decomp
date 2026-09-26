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
extern int fn_82D465A8();
extern unsigned int lbl_821354F4;


undefined4 *
fn_82D48058(double param_1,double param_2,undefined4 *param_3,undefined8 param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  int aiStack_40 [16];
  
  fn_82D465A8(param_3,param_4,1);
  *param_3 = &lbl_821354F4;
  puVar7 = param_3 + 0x18;
  param_3[0x18] = 0;
  param_3[0x19] = 0;
  param_3[0x1a] = 0x80000000;
  *(undefined1 *)(param_3 + 0x1b) = 0;
  iVar3 = fn_82CE5410();
  uVar2 = param_3[0x1a] & 0x3fffffff;
  piVar1 = *(int **)(iVar3 + 0x10);
  if ((int)uVar2 < param_5[1]) {
    if ((param_3[0x1a] & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*puVar7,uVar2,2);
    }
    aiStack_40[0] = param_5[1];
    uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,aiStack_40,2);
    *puVar7 = uVar4;
    param_3[0x1a] = aiStack_40[0];
  }
  uVar2 = param_5[1];
  uVar5 = (ulonglong)uVar2;
  puVar6 = (undefined2 *)*puVar7;
  param_3[0x19] = uVar2;
  if (0 < (int)uVar2) {
    iVar3 = *param_5 - (int)puVar6;
    do {
      *puVar6 = *(undefined2 *)(iVar3 + (int)puVar6);
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  param_3[0x1d] = (float)param_2;
  param_3[0x1c] = (float)param_1;
  return param_3;
}

