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
extern unsigned int *auStack_70;
extern int fn_82E50330();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;
extern unsigned int uStack_58;


ulonglong fn_82EE21F8(byte *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint auStack_70 [4];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  byte abStack_50 [16];
  byte abStack_40 [64];
  
  if ((param_3 == (int *)0x0) || (param_2 == (int *)0x0)) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    uVar6 = 0;
    auStack_70[0] = 0;
    uStack_58 = 0;
    uVar3 = (**(code **)(*param_3 + 0xc))(param_3,auStack_70);
    if ((-1 < (longlong)uVar3) && (auStack_70[0] != 0)) {
      do {
        uVar3 = (**(code **)(*param_3 + 0x10))(param_3,uVar6,abStack_50);
        pbVar4 = (byte *)&lbl_8202E618;
        pbVar5 = param_1;
        if ((longlong)uVar3 < 0) break;
        do {
          bVar1 = *pbVar4;
          bVar2 = *pbVar5;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar4 != &lbl_8202E628);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
LAB_82ee22f4:
          uVar3 = (**(code **)(*param_3 + 0x14))(param_3,abStack_50,auStack_60);
          if ((longlong)uVar3 < 0) break;
          uVar3 = (**(code **)(*param_2 + 0x18))(param_2,abStack_50,auStack_60);
          uVar3 = -(ulonglong)(uVar3 != 0xffffffffc00d3e8e) & uVar3;
          if ((int)uVar3 < 0) break;
          fn_82E50330(auStack_60);
        }
        else {
          pbVar5 = abStack_50;
          pbVar4 = param_1;
          do {
            bVar1 = *pbVar5;
            bVar2 = *pbVar4;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar5 = pbVar5 + 1;
            pbVar4 = pbVar4 + 1;
          } while (pbVar5 != abStack_40);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) goto LAB_82ee22f4;
        }
        uVar6 = uVar6 + 1;
      } while ((uVar6 & 0xffffffff) < (ulonglong)auStack_70[0]);
    }
  }
  fn_82E50330(auStack_60);
  return uVar3;
}

