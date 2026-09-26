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
extern unsigned int *auStack_5c;
extern int fn_82E50BE8();
extern int fn_82E547F8();
extern int fn_82E55008();
extern int fn_82EE2D50();
extern int fn_82EE2FC8();
extern int fn_82EE32B8();
extern int fn_82EE3C50();
extern int fn_82EE3CE0();
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_8214C2F0;
extern unsigned int lbl_8214C300;
extern unsigned int lbl_8214C320;
extern unsigned int lbl_821549D8;
extern unsigned int lbl_821549E8;
extern unsigned int lbl_82154A68;
extern unsigned int lbl_82154A78;
extern unsigned int lbl_82154A88;
extern unsigned int lbl_82154B58;
extern unsigned int lbl_82154B68;
extern unsigned int lbl_82154B78;
extern unsigned int lbl_82154B88;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5e;
extern unsigned int uStack_60;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong fn_82E551A0(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar4;
  uint *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 uVar10;
  uint uVar11;
  ushort uStack_60;
  ushort uStack_5e;
  uint auStack_5c [3];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (param_2 == (int *)0x0) {
    return 0xffffffff80004003;
  }
  uStack_4c = lbl_8202E61C;
  uStack_48 = lbl_8202E620;
  uStack_44 = lbl_8202E624;
  uVar3 = (**(code **)(*param_2 + 0xc))(param_2,&uStack_50);
  if ((longlong)uVar3 < 0) {
    return uVar3;
  }
  pbVar8 = (byte *)&uStack_50;
  pbVar9 = &lbl_821549D8;
  do {
    bVar1 = *pbVar9;
    bVar2 = *pbVar8;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar9 = pbVar9 + 1;
    pbVar8 = pbVar8 + 1;
  } while (pbVar9 != (byte *)&lbl_821549E8);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    pbVar8 = (byte *)&uStack_50;
    pbVar9 = &lbl_82154A68;
    do {
      bVar1 = *pbVar9;
      bVar2 = *pbVar8;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar9 = pbVar9 + 1;
      pbVar8 = pbVar8 + 1;
    } while (pbVar9 != &lbl_82154A78);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      pbVar8 = (byte *)&uStack_50;
      pbVar9 = &lbl_82154A78;
      do {
        bVar1 = *pbVar9;
        bVar2 = *pbVar8;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar9 = pbVar9 + 1;
        pbVar8 = pbVar8 + 1;
      } while (pbVar9 != (byte *)&lbl_82154A88);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        return 0xffffffff80070057;
      }
    }
  }
  uVar3 = fn_82EE2FC8(param_2,&uStack_50);
  if ((longlong)uVar3 < 0) {
    return uVar3;
  }
  pbVar8 = (byte *)&uStack_50;
  pbVar9 = &lbl_82154B58;
  do {
    bVar1 = *pbVar9;
    bVar2 = *pbVar8;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar9 = pbVar9 + 1;
    pbVar8 = pbVar8 + 1;
  } while (pbVar9 != &lbl_82154B68);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    puVar7 = (undefined4 *)&lbl_8214C2F0;
    uVar10 = lbl_8214C2F0;
  }
  else {
    pbVar8 = (byte *)&uStack_50;
    pbVar9 = &lbl_82154B68;
    do {
      bVar1 = *pbVar9;
      bVar2 = *pbVar8;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar9 = pbVar9 + 1;
      pbVar8 = pbVar8 + 1;
    } while (pbVar9 != &lbl_82154B78);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      puVar7 = (undefined4 *)&lbl_8214C300;
      uVar10 = lbl_8214C300;
    }
    else {
      pbVar8 = (byte *)&uStack_50;
      pbVar9 = &lbl_82154B78;
      do {
        bVar1 = *pbVar9;
        bVar2 = *pbVar8;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar9 = pbVar9 + 1;
        pbVar8 = pbVar8 + 1;
      } while (pbVar9 != &lbl_82154B88);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        *(undefined4 *)(param_1 + 0x44) = uStack_50;
        *(undefined4 *)(param_1 + 0x48) = uStack_4c;
        *(undefined4 *)(param_1 + 0x4c) = uStack_48;
        uVar10 = uStack_44;
        goto LAB_82e553f8;
      }
      puVar7 = &lbl_8214C320;
      uVar10 = lbl_8214C320;
    }
  }
  *(undefined4 *)(param_1 + 0x44) = uVar10;
  *(undefined4 *)(param_1 + 0x48) = puVar7[1];
  *(undefined4 *)(param_1 + 0x4c) = puVar7[2];
  uVar10 = puVar7[3];
LAB_82e553f8:
  *(undefined4 *)(param_1 + 0x50) = uVar10;
  uStack_5e = 0;
  uVar3 = fn_82EE32B8(param_2,&uStack_5e);
  if (-1 < (longlong)uVar3) {
    iVar5 = fn_82EE2D50((int *)(param_1 + 0x54),uStack_5e,0xffffffffffffffff);
    if (iVar5 == 0) {
LAB_82e55434:
      uVar3 = 0xffffffff8007000e;
    }
    else {
      puVar6 = (uint *)0x0;
      uStack_60 = 0;
      uVar11 = 0;
      if (uStack_5e != 0) {
        do {
          uVar3 = fn_82EE3C50(param_2,uVar11,&uStack_60);
          auStack_5c[0] = (uint)uVar3;
          if ((longlong)uVar3 < 0) {
            return uVar3;
          }
          uVar4 = fn_82E50BE8(0xc,0,0,0,0);
          if ((uVar4 & 0xffffffff) == 0) {
            puVar6 = (uint *)0x0;
          }
          else {
            puVar6 = (uint *)fn_82E547F8(uVar4,uStack_60,auStack_5c);
            uVar3 = (ulonglong)auStack_5c[0];
          }
          if (puVar6 == (uint *)0x0) goto LAB_82e55434;
          if ((int)uVar3 < 0) goto LAB_82e5555c;
          puVar6[1] = (uint)uStack_60;
          if (uStack_60 != 0) {
            uVar4 = 0;
            do {
              uVar3 = fn_82EE3CE0(param_2,uVar11,uVar4,uVar4 * 2 + (ulonglong)*puVar6);
              if ((longlong)uVar3 < 0) goto LAB_82e5555c;
              uVar4 = uVar4 + 1 & 0xffff;
            } while (uVar4 < uStack_60);
          }
          if (*(uint *)(param_1 + 0x58) <= uVar11) {
            uVar3 = 0xffffffff8007000e;
            break;
          }
          iVar5 = uVar11 * 4;
          uVar11 = uVar11 + 1 & 0xffff;
          *(uint **)(iVar5 + *(int *)(param_1 + 0x54)) = puVar6;
          puVar6 = (uint *)0x0;
        } while (uVar11 < uStack_5e);
      }
      if ((int)uVar3 < 0) {
LAB_82e5555c:
        if (puVar6 != (uint *)0x0) {
          fn_82E55008(puVar6,1);
        }
      }
    }
  }
  return uVar3;
}

