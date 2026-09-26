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
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_821537A8;
extern unsigned int lbl_821537B8;
extern unsigned int lbl_82153828;
extern unsigned int lbl_82153830;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fn_82E5FD40(int *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 uVar8;
  uint uVar9;
  int aiStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar9 = 0;
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  aiStack_50[0] = 0;
  uVar8 = 0;
  uStack_40 = lbl_8202E618;
  uStack_3c = lbl_8202E61C;
  uStack_38 = lbl_8202E620;
  uStack_34 = lbl_8202E624;
  iVar5 = (**(code **)(*param_1 + 0x84))(param_1,&uStack_40);
  if (-1 < iVar5) {
    pbVar6 = (byte *)&uStack_40;
    pbVar7 = &lbl_821537A8;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != &lbl_821537B8);
    if (((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
       (iVar5 = (**(code **)(*param_1 + 0x90))(param_1,lbl_82153828,lbl_82153830,aiStack_50),
       -1 < iVar5)) {
      if (((aiStack_50[0] != 0) && (0x11 < *(uint *)(aiStack_50[0] + 0x40))) &&
         (psVar4 = *(short **)(aiStack_50[0] + 0x44), psVar4 != (short *)0x0)) {
        sVar3 = *psVar4;
        uVar8 = 1;
        if (((sVar3 == 1) || (sVar3 == -2)) || (sVar3 == 3)) {
          uVar9 = (uint)(((ulonglong)*(uint *)(psVar4 + 4) & 0x1fffffff) / 10);
        }
        else if ((sVar3 == 0x55) || (sVar3 == 0xb)) {
          uVar8 = 0;
        }
        else {
          uVar9 = (uint)(ushort)psVar4[6];
        }
      }
      goto LAB_82e5fe08;
    }
  }
  uVar8 = 0;
LAB_82e5fe08:
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar9;
  }
  if (aiStack_50[0] != 0) {
    (**(code **)(*param_1 + 0x94))(param_1,lbl_82153828,lbl_82153830);
  }
  return uVar8;
}

