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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82E3A380();
extern int fn_82E3A4E8();
extern int fn_82E3A690();
extern int fn_82E3A938();
extern int fn_82E3FE10();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_82154AC8;
extern unsigned int lbl_82154AD8;
extern unsigned int lbl_82154AE8;
extern unsigned int lbl_82154AF8;
extern unsigned int lbl_82154B08;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


ulonglong fn_82E406B8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4
                       )

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piStack_60;
  int *piStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  piStack_60 = (int *)0x0;
  piStack_5c = (int *)0x0;
  uStack_58 = 0;
  uStack_50 = lbl_8202E618;
  uStack_4c = lbl_8202E61C;
  uStack_48 = lbl_8202E620;
  uStack_44 = lbl_8202E624;
  uVar3 = fn_82E3A380();
  if (-1 < (longlong)uVar3) {
    pbVar7 = (byte *)&uStack_50;
    pbVar6 = (byte *)&lbl_82154AC8;
    *param_4 = uStack_58;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar7;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar6 != &lbl_82154AD8);
    pbVar7 = (byte *)&lbl_82154AF8;
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      pbVar6 = (byte *)&uStack_50;
      pbVar5 = &lbl_82154AD8;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar6;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar5 != (byte *)&lbl_82154AE8);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        pbVar6 = (byte *)&uStack_50;
        pbVar5 = (byte *)&lbl_82154AE8;
        do {
          bVar1 = *pbVar5;
          bVar2 = *pbVar6;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
        } while (pbVar5 != (byte *)&lbl_82154AF8);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          pbVar5 = (byte *)&uStack_50;
          pbVar6 = pbVar7;
          do {
            bVar1 = *pbVar6;
            bVar2 = *pbVar5;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar6 = pbVar6 + 1;
            pbVar5 = pbVar5 + 1;
          } while (pbVar6 != &lbl_82154B08);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_82e408dc;
        }
      }
    }
    pbVar6 = (byte *)&uStack_50;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != &lbl_82154B08);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      uVar3 = fn_82E3A938(param_1,CONCAT44(uStack_50,uStack_4c),CONCAT44(uStack_48,uStack_44),
                            &piStack_60);
      if (-1 < (longlong)uVar3) {
        uVar3 = fn_82E3A4E8(param_1,param_2,param_3,piStack_60);
        if (-1 < (longlong)uVar3) {
          iVar4 = (**(code **)*piStack_60)(piStack_60,0xffffffff82154c98,&piStack_5c);
          if ((iVar4 < 0) ||
             (uVar3 = fn_82E3A690(param_1,piStack_5c,param_2,param_3), -1 < (longlong)uVar3)) {
            uVar3 = fn_82E3FE10(param_1,piStack_60,param_2,param_3);
            uVar3 = ((uVar3 & 0xffffffff) >> 0x1f) - 1 & uVar3;
          }
        }
      }
    }
  }
LAB_82e408dc:
  if (piStack_60 != (int *)0x0) {
    (**(code **)(*piStack_60 + 8))();
    piStack_60 = (int *)0x0;
  }
  if (piStack_5c != (int *)0x0) {
    (**(code **)(*piStack_5c + 8))();
  }
  return uVar3;
}

