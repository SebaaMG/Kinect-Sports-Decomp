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
extern int fn_82E72660();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_821549E8;
extern unsigned int lbl_821549F8;
extern unsigned int lbl_82154A08;
extern unsigned int lbl_82154AD8;
extern unsigned int lbl_82154AE8;
extern unsigned int lbl_82154AF8;
extern unsigned int lbl_82154B08;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5e;
extern unsigned int uStack_60;


longlong fn_82E3B468(undefined8 param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  ushort uVar7;
  ushort uStack_60;
  undefined2 uStack_5e;
  int *piStack_5c;
  undefined4 auStack_58 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) || (param_4 == (undefined4 *)0x0)) {
    return -0x7fffbffd;
  }
  *param_4 = 0;
  piStack_5c = (int *)0x0;
  uStack_50 = lbl_8202E618;
  uStack_4c = lbl_8202E61C;
  uStack_48 = lbl_8202E620;
  uStack_44 = lbl_8202E624;
  lVar3 = (**(code **)(*param_2 + 0xc))(param_2,&uStack_50);
  if (-1 < lVar3) {
    pbVar5 = (byte *)&uStack_50;
    pbVar6 = &lbl_82154AD8;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar5;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar6 != (byte *)&lbl_82154AE8);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      puVar4 = &lbl_821549E8;
      uStack_40 = lbl_821549E8;
    }
    else {
      pbVar5 = (byte *)&uStack_50;
      pbVar6 = (byte *)&lbl_82154AE8;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar5;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar6 != (byte *)&lbl_82154AF8);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        puVar4 = &lbl_821549F8;
        uStack_40 = lbl_821549F8;
      }
      else {
        pbVar5 = (byte *)&uStack_50;
        pbVar6 = (byte *)&lbl_82154AF8;
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar5;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != &lbl_82154B08);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          lVar3 = -0x7ff8ffa9;
          goto LAB_82e3b6bc;
        }
        puVar4 = &lbl_82154A08;
        uStack_40 = lbl_82154A08;
      }
    }
    uStack_3c = puVar4[1];
    uStack_38 = puVar4[2];
    uStack_34 = puVar4[3];
    lVar3 = (**(code **)(*param_3 + 0x1c))(param_3,&uStack_40,&piStack_5c);
    if (-1 < lVar3) {
      uStack_60 = 0;
      lVar3 = (**(code **)(*param_2 + 0x30))(param_2,&uStack_60);
      if (-1 < lVar3) {
        uVar7 = 0;
        if (uStack_60 != 0) {
          do {
            uStack_5e = 0;
            lVar3 = (**(code **)(*param_2 + 0x34))(param_2,uVar7,&uStack_5e,auStack_58);
            if ((lVar3 < 0) ||
               (lVar3 = fn_82E72660(piStack_5c,uStack_5e,auStack_58[0]), lVar3 < 0))
            goto LAB_82e3b6bc;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uStack_60);
        }
        *param_4 = piStack_5c;
        (**(code **)(*piStack_5c + 4))();
      }
    }
  }
LAB_82e3b6bc:
  if (piStack_5c != (int *)0x0) {
    (**(code **)(*piStack_5c + 8))();
  }
  return lVar3;
}

