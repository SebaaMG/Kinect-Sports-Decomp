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
extern unsigned int *auStack_90;
extern int fn_82C12F10();
extern int fn_82C13260();
extern int fn_82C13430();
extern int fn_82C13690();
extern int fn_82C13F10();
extern int fn_82C14238();
extern int fn_82C145D0();
extern int fn_82C14A80();
extern int fn_82C15620();
extern unsigned int lbl_820ED068;
extern unsigned int lbl_820ED078;
extern unsigned int lbl_820ED088;
extern unsigned int lbl_820ED098;
extern unsigned int lbl_820ED0A8;
extern unsigned int lbl_820ED0B8;
extern unsigned int lbl_82154998;
extern unsigned int lbl_821549A8;
extern unsigned int lbl_82154AA8;
extern unsigned int lbl_82154AB8;
extern unsigned int lbl_82154B18;
extern unsigned int lbl_82154B28;


undefined8 fn_82C159B8(ulonglong *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  short sVar4;
  short sVar5;
  byte *pbVar6;
  uint uVar8;
  byte *pbVar9;
  ulonglong uVar7;
  uint auStack_90 [4];
  byte abStack_80 [128];
  
  sVar5 = 0;
  sVar4 = 0;
  if (param_1 == (ulonglong *)0x0) {
    return 2;
  }
  *param_1 = 0;
  uVar3 = fn_82C13260(param_1,param_2);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar8 = *(int *)(param_1 + 2) + 0x32;
  *(uint *)(param_1 + 2) = uVar8;
  param_1[5] = (ulonglong)uVar8;
  if (*param_1 < (ulonglong)uVar8 - 0x32) {
    do {
      uVar3 = fn_82C12F10(param_1,abStack_80,auStack_90);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      pbVar6 = abStack_80;
      pbVar9 = &lbl_82154AA8;
      do {
        bVar1 = *pbVar9;
        bVar2 = *pbVar6;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar9 = pbVar9 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar9 != (byte *)&lbl_82154AB8);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        sVar4 = sVar4 + 1;
        if (param_1[5] < (ulonglong)(auStack_90[0] - 0x18) + *param_1) {
          return 1;
        }
        uVar3 = fn_82C13430(param_1,auStack_90[0],param_2);
        goto LAB_82c15d98;
      }
      pbVar6 = abStack_80;
      pbVar9 = &lbl_82154B18;
      do {
        bVar1 = *pbVar9;
        bVar2 = *pbVar6;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar9 = pbVar9 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar9 != &lbl_82154B28);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
LAB_82c15d60:
        sVar5 = sVar5 + 1;
        if (param_1[5] < (ulonglong)(auStack_90[0] - 0x18) + *param_1) {
          return 1;
        }
        uVar3 = fn_82C13690(param_1,auStack_90[0],param_2);
LAB_82c15d98:
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      else {
        pbVar6 = abStack_80;
        pbVar9 = &lbl_820ED098;
        do {
          bVar1 = *pbVar9;
          bVar2 = *pbVar6;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar9 = pbVar9 + 1;
          pbVar6 = pbVar6 + 1;
        } while (pbVar9 != &lbl_820ED0A8);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) goto LAB_82c15d60;
        pbVar6 = abStack_80;
        pbVar9 = &lbl_820ED068;
        do {
          bVar1 = *pbVar9;
          bVar2 = *pbVar6;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar9 = pbVar9 + 1;
          pbVar6 = pbVar6 + 1;
        } while (pbVar9 != (byte *)&lbl_820ED078);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          if (param_1[5] < ((ulonglong)auStack_90[0] - 0x18 & 0xffffffff) + *param_1) {
            return 1;
          }
          uVar3 = fn_82C13F10(param_1);
          goto LAB_82c15d98;
        }
        pbVar6 = abStack_80;
        pbVar9 = (byte *)&lbl_82154998;
        do {
          bVar1 = *pbVar9;
          bVar2 = *pbVar6;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar9 = pbVar9 + 1;
          pbVar6 = pbVar6 + 1;
        } while (pbVar9 != &lbl_821549A8);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          pbVar6 = abStack_80;
          pbVar9 = (byte *)&lbl_820ED078;
          do {
            bVar1 = *pbVar9;
            bVar2 = *pbVar6;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar9 = pbVar9 + 1;
            pbVar6 = pbVar6 + 1;
          } while (pbVar9 != &lbl_820ED088);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            uVar7 = ((ulonglong)auStack_90[0] - 0x18 & 0xffffffff) + *param_1;
            if (param_1[5] < uVar7) {
              return 1;
            }
            if ((int)param_2 == 0) {
              *param_1 = uVar7;
            }
            else {
              fn_82C145D0(param_1);
            }
            goto LAB_82c15da0;
          }
          pbVar6 = abStack_80;
          pbVar9 = &lbl_820ED088;
          do {
            bVar1 = *pbVar9;
            bVar2 = *pbVar6;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar9 = pbVar9 + 1;
            pbVar6 = pbVar6 + 1;
          } while (pbVar9 != &lbl_820ED098);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            if (param_1[5] < ((ulonglong)auStack_90[0] - 0x18 & 0xffffffff) + *param_1) {
              return 1;
            }
            uVar3 = fn_82C14A80(param_1);
          }
          else {
            pbVar6 = abStack_80;
            pbVar9 = &lbl_820ED0A8;
            do {
              bVar1 = *pbVar9;
              bVar2 = *pbVar6;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar9 = pbVar9 + 1;
              pbVar6 = pbVar6 + 1;
            } while (pbVar9 != &lbl_820ED0B8);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
              *param_1 = ((ulonglong)auStack_90[0] - 0x18 & 0xffffffff) + *param_1;
              goto LAB_82c15da0;
            }
            if (param_1[5] < (ulonglong)(auStack_90[0] - 0x18) + *param_1) {
              return 1;
            }
            uVar3 = fn_82C15620(param_1,auStack_90[0],param_2);
          }
          goto LAB_82c15d98;
        }
        if (param_1[5] < ((ulonglong)auStack_90[0] - 0x18 & 0xffffffff) + *param_1) {
          return 1;
        }
        fn_82C14238(param_1);
      }
LAB_82c15da0:;} while (*param_1 < param_1[5] - 0x32);
  }
  if (((sVar4 == 1) && (sVar5 != 0)) && (*param_1 == param_1[5] - 0x32)) {
    return 0;
  }
  return 1;
}

