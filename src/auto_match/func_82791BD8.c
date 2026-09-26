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
extern int fn_82791650();


undefined4 *
fn_82791BD8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  bVar4 = false;
  piVar7 = param_1 + 5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  fn_82791650(piVar7,param_2,param_4);
  param_1[7] = param_3;
  param_1[8] = 0;
  uVar1 = param_1[6];
  if (((int)uVar1 < 0) || (bVar3 = false, *(uint *)(*piVar7 + 4) <= uVar1)) {
    bVar3 = true;
  }
  if (!bVar3) {
    piVar5 = (int *)(uVar1 * 0xc + *(int *)*piVar7);
    iVar6 = (int)param_4;
    if ((*piVar5 <= iVar6) && (iVar6 <= piVar5[1] + *piVar5 + -1)) {
      bVar4 = true;
    }
    iVar2 = *piVar5;
    if (bVar4) {
      param_1[8] = iVar2;
    }
    else if (iVar2 < iVar6) {
      param_1[8] = iVar2;
      param_1[8] = *(int *)(param_1[6] * 0xc + *(int *)*piVar7 + 4) + iVar2;
      if ((int)param_1[6] < *(int *)(*piVar7 + 4)) {
        param_1[6] = param_1[6] + 1;
      }
    }
  }
  return param_1;
}

