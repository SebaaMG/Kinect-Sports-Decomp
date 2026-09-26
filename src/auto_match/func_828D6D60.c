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
extern int fn_828B3640();
extern int fn_828B36D0();
extern int fn_828D6A20();
extern int fn_828D6AF8();
extern unsigned int iStack_50;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined4 * fn_828D6D60(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined1 auStack_40 [64];
  
  uStack_58 = *(uint *)(param_3 + 8);
  piVar6 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    piVar6 = (int *)*param_2;
  }
  uStack_68 = *(uint *)(param_4 + 8);
  piVar4 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    piVar4 = (int *)*param_2;
  }
  uStack_48 = param_2[3];
  uVar8 = (ulonglong)uStack_68 - (ulonglong)uStack_58;
  lVar5 = (ulonglong)(uint)param_2[4] + (ulonglong)uStack_48;
  uVar7 = (ulonglong)uStack_58 - (ulonglong)uStack_48;
  if ((uVar7 & 0xffffffff) < (lVar5 - (ulonglong)uStack_68 & 0xffffffff)) {
    uStack_70 = 0;
    uStack_6c = 0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uStack_70 = *(undefined4 *)*piVar4;
    }
    uStack_60 = 0;
    uStack_5c = 0;
    if ((piVar6 != (int *)0x0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
      uStack_60 = *(undefined4 *)*piVar6;
    }
    iStack_50 = *param_2;
    uStack_4c = 0;
    fn_828D6A20(auStack_40,&iStack_50,&uStack_60,&uStack_70);
    uVar3 = uVar8 & 0xffffffff;
    while (uVar3 != 0) {
      fn_828B3640(param_2);
      uVar8 = uVar8 - 1;
      uVar3 = uVar8;
    }
  }
  else {
    uStack_60 = 0;
    uStack_5c = 0;
    if ((piVar6 != (int *)0x0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
      uStack_60 = *(undefined4 *)*piVar6;
    }
    iStack_50 = *param_2;
    uStack_4c = 0;
    uStack_48 = (uint)lVar5;
    uStack_70 = 0;
    uStack_6c = 0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uStack_70 = *(undefined4 *)*piVar4;
    }
    fn_828D6AF8(auStack_40,&uStack_70,&iStack_50,&uStack_60);
    uVar3 = uVar8 & 0xffffffff;
    while (uVar3 != 0) {
      fn_828B36D0(param_2);
      uVar8 = uVar8 - 1;
      uVar3 = uVar8;
    }
  }
  piVar6 = (int *)0x0;
  iVar1 = param_2[3];
  if (((int *)*param_2 != (int *)0x0) &&
     (puVar2 = *(undefined4 **)*param_2, puVar2 != (undefined4 *)0x0)) {
    piVar6 = (int *)*puVar2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar1 + (int)uVar7;
  if ((piVar6 != (int *)0x0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar6;
  }
  return param_1;
}

