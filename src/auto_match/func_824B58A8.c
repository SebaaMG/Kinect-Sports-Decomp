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
extern unsigned int *auStack_4c;
extern int fn_824B5980();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_50;


double fn_824B58A8(undefined8 param_1,undefined4 *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uStack_50;
  uint auStack_4c [19];
  
  (**(code **)*param_2)(param_2,auStack_4c,&uStack_50);
  lVar3 = 0;
  dVar7 = (double)lbl_821CC160;
  if (0 < param_3) {
    do {
      uVar2 = (ulonglong)uStack_50 - lVar3;
      uVar1 = (ulonglong)auStack_4c[0];
      if ((int)auStack_4c[0] < (int)uVar2) {
        uVar1 = uVar2;
      }
      uVar4 = (ulonglong)auStack_4c[0];
      if ((int)auStack_4c[0] < (int)(uVar2 - 1)) {
        uVar4 = uVar2 - 1;
      }
      dVar5 = (double)fn_824B5980(param_1,param_2,uVar1);
      dVar6 = (double)fn_824B5980(param_1,param_2,uVar4);
      if (ABS(dVar7) < ABS((double)(float)(dVar5 - dVar6))) {
        dVar7 = (double)(float)(dVar5 - dVar6);
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < param_3);
  }
  return dVar7;
}

