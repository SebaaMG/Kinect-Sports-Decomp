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
extern unsigned int *auStack_58;
extern int fn_82E3BF28();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;
extern unsigned int lbl_8214C020;
extern unsigned int lbl_8214C030;


longlong fn_82E3CC08(int *param_1,short *param_2,byte *param_3,undefined8 *param_4,
                      longlong *param_5,undefined4 *param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar6;
  longlong lVar5;
  byte *pbVar7;
  int *piVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *apiStack_60 [2];
  undefined1 auStack_58 [88];
  
  piVar8 = param_1 + 2;
  fn_82E50CB8(piVar8);
  if ((((param_2 == (short *)0x0) || (param_3 == (byte *)0x0)) ||
      ((param_4 == (undefined8 *)0x0 && (param_6 == (undefined4 *)0x0)))) || (*param_2 != 0x14)) {
LAB_82e3ce10:
    fn_82E50F10(piVar8);
    return -0x7ff8ffa9;
  }
  pbVar6 = (byte *)&lbl_8202E618;
  pbVar4 = pbVar6;
  pbVar7 = param_3;
  do {
    bVar1 = *pbVar4;
    bVar2 = *pbVar7;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    pbVar7 = pbVar7 + 1;
  } while (pbVar4 != &lbl_8202E628);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_82e3ce10;
  lVar9 = 0;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
    uVar10 = *(ulonglong *)(param_2 + 4);
    pbVar4 = param_3;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar4;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar6 != &lbl_8202E628);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      uVar10 = uVar10 / 10000 + *(longlong *)(param_1 + 0x16);
    }
    apiStack_60[0] = (int *)0x0;
    iVar3 = fn_82E3BF28(param_1 + 0x6b,param_3,apiStack_60,auStack_58);
    if (iVar3 == 0) {
      lVar9 = -0x3ff2b9aa;
      goto LAB_82e3ce00;
    }
    if (param_5 != (longlong *)0x0) {
      *param_5 = -1;
    }
    lVar9 = (**(code **)(*apiStack_60[0] + 0x10))
                      (apiStack_60[0],uVar10,(uint)param_1[0x11] >> 1 & 1,param_4,param_5);
    if (lVar9 < 0) goto LAB_82e3ce00;
    if ((param_5 != (longlong *)0x0) && (lVar5 = *param_5, lVar5 != -1)) {
      if (*(longlong *)(param_1 + 0x16) * 10000 < lVar5) {
        *param_5 = lVar5 + *(longlong *)(param_1 + 0x16) * -10000;
      }
      else {
        *param_5 = 0;
      }
    }
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
    pbVar7 = &lbl_8214C020;
    pbVar4 = param_3;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar4;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar7 != &lbl_8214C030);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      lVar9 = (**(code **)(*param_1 + 0x44))(param_1,param_2,param_3,param_6);
    }
  }
LAB_82e3ce00:
  fn_82E50F10(piVar8);
  return lVar9;
}

