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
extern unsigned int *auStack_60;
extern int fn_82E3ECE0();
extern int fn_82E3EEB0();
extern int fn_82E3F048();
extern int fn_82E3F220();
extern unsigned int lbl_82154AD8;
extern unsigned int lbl_82154AE8;
extern unsigned int lbl_82154AF8;


longlong fn_82E3FE10(undefined8 param_1,int *param_2,int *param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piStack_70;
  int *piStack_6c;
  longlong lStack_68;
  ulonglong auStack_60 [2];
  byte abStack_50 [16];
  byte abStack_40 [64];
  
  if ((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) {
    return -0x7fffbffd;
  }
  piStack_6c = (int *)0x0;
  piStack_70 = (int *)0x0;
  lStack_68 = 0;
  lVar3 = (**(code **)(*param_2 + 0x14))(param_2,0,&lStack_68);
  if (-1 < lVar3) {
    auStack_60[0] = 0;
    lVar3 = (**(code **)(*param_3 + 0x10))(param_3,auStack_60);
    if (-1 < lVar3) {
      if ((ulonglong)(lStack_68 + param_4) <= auStack_60[0]) {
        iVar4 = (**(code **)*param_2)(param_2,0xffffffff82154c88,&piStack_6c);
        if (-1 < iVar4) {
          lVar3 = fn_82E3EEB0(param_1,piStack_6c,param_3,param_4);
          goto LAB_82e4002c;
        }
        iVar4 = (**(code **)*param_2)(param_2,0xffffffff82154c98,&piStack_70);
        if ((iVar4 < 0) ||
           (lVar3 = (**(code **)(*piStack_70 + 0xc))(piStack_70,abStack_50), lVar3 < 0))
        goto LAB_82e4002c;
        pbVar6 = abStack_50;
        pbVar5 = &lbl_82154AD8;
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar5;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != abStack_40);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          lVar3 = fn_82E3ECE0(param_1,piStack_70,param_3,param_4);
          goto LAB_82e4002c;
        }
        pbVar6 = abStack_50;
        pbVar5 = (byte *)&lbl_82154AE8;
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar5;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != abStack_40);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          lVar3 = fn_82E3F048(param_1,piStack_70,param_3,param_4);
          goto LAB_82e4002c;
        }
        pbVar6 = abStack_50;
        pbVar5 = (byte *)&lbl_82154AF8;
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar5;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != abStack_40);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          lVar3 = fn_82E3F220(param_1,piStack_70,param_3,param_4);
          goto LAB_82e4002c;
        }
      }
      lVar3 = -0x7ff8ffa9;
    }
  }
LAB_82e4002c:
  if (piStack_6c != (int *)0x0) {
    (**(code **)(*piStack_6c + 8))();
    piStack_6c = (int *)0x0;
  }
  if (piStack_70 != (int *)0x0) {
    (**(code **)(*piStack_70 + 8))();
  }
  return lVar3;
}

