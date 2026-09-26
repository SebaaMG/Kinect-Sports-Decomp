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
extern unsigned int lbl_82017AEC;


void fn_827C67E8(int *param_1,short *param_2,longlong param_3,int param_4,int *param_5)

{
  short sVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  
  param_3 = *param_2 - param_3;
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  iVar3 = 0;
  if ((int)param_3 != 0) {
    do {
      param_3 = (longlong)((int)param_3 >> 1);
      iVar3 = iVar3 + 1;
    } while (param_3 != 0);
    if (0xb < iVar3) {
      *(undefined4 *)(*param_1 + 0x14) = 6;
      (**(code **)*param_1)(param_1);
    }
  }
  uVar6 = 0;
  piVar5 = (int *)&lbl_82017AEC;
  *(int *)(iVar3 * 4 + param_4) = *(int *)(iVar3 * 4 + param_4) + 1;
  do {
    sVar1 = param_2[*piVar5];
    iVar3 = (int)sVar1;
    if (sVar1 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      if (0xf < (int)uVar6) {
        lVar4 = ((uVar6 - 0x10 & 0xffffffff) >> 4) + 1;
        uVar6 = uVar6 - (lVar4 * 0x10 & 0xfffffff0U);
        do {
          param_5[0xf0] = param_5[0xf0] + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (sVar1 < 0) {
        iVar3 = -(int)sVar1;
      }
      iVar3 = iVar3 >> 1;
      lVar4 = 1;
      if (iVar3 != 0) {
        do {
          iVar3 = iVar3 >> 1;
          lVar4 = lVar4 + 1;
        } while (iVar3 != 0);
        if (10 < (int)lVar4) {
          *(undefined4 *)(*param_1 + 0x14) = 6;
          (**(code **)*param_1)(param_1);
        }
      }
      uVar2 = uVar6 & 0xfffffff;
      uVar6 = 0;
      iVar3 = (int)((uVar2 * 0x10 + lVar4 & 0xffffffff) << 2);
      *(int *)(iVar3 + (int)param_5) = *(int *)(iVar3 + (int)param_5) + 1;
    }
    piVar5 = piVar5 + 1;
  } while ((int)piVar5 < -0x7dfe8418);
  if (0 < (int)uVar6) {
    *param_5 = *param_5 + 1;
  }
  return;
}

