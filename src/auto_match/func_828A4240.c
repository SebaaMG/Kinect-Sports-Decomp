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
extern unsigned int *auStack_40;
extern int fn_825089A0();
extern int fn_828A3658();
extern int fn_828C5A90();
extern unsigned int iStack_48;
extern unsigned int iStack_58;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_828A4240(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined1 auStack_40 [64];
  
  uVar8 = param_1[4];
  if (param_2 < uVar8) {
    piVar3 = (int *)*param_1;
    uStack_60 = 0;
    iStack_58 = param_1[3] + uVar8;
    uStack_5c = 0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uStack_60 = *(undefined4 *)*piVar3;
    }
    piVar5 = (int *)0x0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      piVar5 = *(int **)*piVar3;
    }
    iStack_48 = param_1[3] + param_2;
    piVar3 = (int *)0x0;
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      piVar3 = *(int **)*piVar5;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uStack_50 = *(undefined4 *)*piVar3;
    }
    fn_828C5A90(auStack_40,param_1,&uStack_50,&uStack_60);
  }
  else {
    while (uVar8 < param_2) {
      if (((param_1[4] + param_1[3] & 3U) == 0) && ((uint)param_1[2] <= param_1[4] + 4U >> 2)) {
        fn_828A3658(param_1,1);
      }
      uVar8 = param_1[4];
      uVar1 = param_1[3];
      uVar6 = ((ulonglong)uVar8 + (ulonglong)uVar1 & 0xffffffff) >> 2;
      if ((uint)param_1[2] <= uVar6) {
        uVar6 = uVar6 - (uint)param_1[2];
      }
      iVar2 = (int)((uVar6 & 0x3fffffff) << 2);
      if (*(int *)(iVar2 + param_1[1]) == 0) {
        piVar3 = (int *)fn_825089A0();
        uVar4 = (**(code **)(*piVar3 + 0x24))(piVar3,0x10,1);
        *(undefined4 *)(iVar2 + param_1[1]) = uVar4;
      }
      lVar7 = (ulonglong)*(uint *)(iVar2 + param_1[1]) +
              ((ulonglong)uVar8 + (ulonglong)uVar1 & 3) * 4;
      if (lVar7 != 0) {
        *(undefined4 *)lVar7 = 0;
      }
      uVar8 = param_1[4] + 1;
      param_1[4] = uVar8;
    }
  }
  return;
}

