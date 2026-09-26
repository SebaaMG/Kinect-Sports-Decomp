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
extern unsigned int *auStack_8c;
extern int fn_82E5E1F0();
extern int fn_82E5E6C0();
extern int fn_82E5E7D8();
extern int fn_82E5FD40();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_821537B8;
extern unsigned int lbl_821537C8;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_a0;


longlong fn_82E60088(int *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  short sVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uStack_a0;
  int *piStack_9c;
  int *piStack_98;
  uint uStack_94;
  uint uStack_90;
  uint auStack_8c [3];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if ((param_1 == (int *)0x0) || (param_2 == (uint *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  piStack_98 = (int *)0x0;
  piStack_9c = (int *)0x0;
  uStack_94 = 0;
  lVar5 = (**(code **)(*param_1 + 0x84))(param_1,&uStack_94);
  piVar7 = piStack_9c;
  piVar8 = piStack_98;
  if (lVar5 < 0) goto LAB_82e6047c;
  uVar14 = 0;
  bVar3 = true;
  bVar4 = false;
  uVar13 = 0;
  sVar12 = 0;
  uVar15 = 0;
  if (uStack_94 != 0) {
    bVar3 = true;
    do {
      uStack_a0 = uStack_a0 & 0xffff;
      lVar5 = (**(code **)(*param_1 + 0x88))(param_1,uVar15,&uStack_a0,&piStack_98);
      piVar7 = piStack_9c;
      piVar8 = piStack_98;
      if ((lVar5 < 0) ||
         (lVar5 = (**(code **)(*piStack_98 + 0x90))(piStack_98,&piStack_9c), piVar7 = piStack_9c,
         piVar8 = piStack_98, lVar5 < 0)) goto LAB_82e6047c;
      if (piStack_9c == (int *)0x0) {
        lVar5 = -0x3ff2c945;
        piVar7 = (int *)0x0;
        break;
      }
      uStack_90 = 0;
      lVar5 = (**(code **)(*piStack_9c + 0x88))(piStack_9c,&uStack_90);
      piVar7 = piStack_9c;
      piVar8 = piStack_98;
      if (lVar5 < 0) goto LAB_82e6047c;
      uStack_80 = lbl_8202E618;
      uStack_7c = lbl_8202E61C;
      uStack_78 = lbl_8202E620;
      uStack_74 = lbl_8202E624;
      bVar3 = (bool)(uStack_90 == 0 & bVar3);
      lVar5 = (**(code **)(*piStack_9c + 0x84))(piStack_9c,&uStack_80);
      piVar7 = piStack_9c;
      piVar8 = piStack_98;
      if (lVar5 < 0) goto LAB_82e6047c;
      pbVar9 = (byte *)&uStack_80;
      pbVar11 = &lbl_821537B8;
      do {
        bVar1 = *pbVar11;
        bVar2 = *pbVar9;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar9 = pbVar9 + 1;
      } while (pbVar11 != &lbl_821537C8);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        bVar4 = true;
      }
      auStack_8c[0] = 0;
      iVar6 = fn_82E5FD40(piStack_9c,auStack_8c);
      if (iVar6 != 0) {
        lVar5 = fn_82E5E6C0(piStack_98);
        if ((uVar13 & 0xffffffff) < (lVar5 + (ulonglong)auStack_8c[0] & 0xffffffff)) {
          uVar13 = lVar5 + (ulonglong)auStack_8c[0];
        }
        sVar12 = sVar12 + 1;
      }
      if (piStack_9c != (int *)0x0) {
        (**(code **)(*piStack_9c + 8))();
        piStack_9c = (int *)0x0;
      }
      auStack_8c[0] = 0;
      lVar5 = fn_82E5E1F0(piStack_98,0xffffffff8214c2a0,auStack_8c,0);
      piVar7 = piStack_9c;
      piVar8 = piStack_98;
      if (lVar5 < 0) goto LAB_82e6047c;
      uVar14 = auStack_8c[0] + uVar14;
      if (piStack_98 != (int *)0x0) {
        (**(code **)(*piStack_98 + 8))(piStack_98);
        piStack_98 = (int *)0x0;
      }
      piVar8 = (int *)0x0;
      uVar15 = uVar15 + 1;
      piVar7 = piStack_9c;
    } while ((uVar15 & 0xffffffff) < (ulonglong)uStack_94);
  }
  if ((int)lVar5 < 0) goto LAB_82e6047c;
  *param_2 = uVar14 / 0x50;
  if (uVar14 / 0x50 < 400) {
    *param_2 = 400;
  }
  if ((bVar3) && (bVar4)) {
    *param_2 = 64000;
    goto LAB_82e6047c;
  }
  auStack_8c[0] = 0;
  lVar5 = fn_82E5E7D8(param_1,auStack_8c);
  piVar7 = piStack_9c;
  piVar8 = piStack_98;
  if (lVar5 < 0) goto LAB_82e6047c;
  if (auStack_8c[0] < 0x55731) {
    if (0x5a4 < *param_2) {
      uVar10 = 0x5a4;
      goto LAB_82e60390;
    }
  }
  else if (8000 < *param_2) {
    uVar10 = 8000;
LAB_82e60390:
    *param_2 = uVar10;
  }
  if (auStack_8c[0] < uVar14) {
    *param_2 = *param_2 << 1;
  }
  uStack_90 = 0;
  iVar6 = (**(code **)(*param_1 + 0x1c))(param_1,0xffffffff8214c280,&uStack_90);
  if ((iVar6 == 0) && (uStack_90 < *param_2)) {
    *param_2 = uStack_90;
  }
  if ((ulonglong)*param_2 < (uVar13 + 0x1d & 0xffffffff)) {
    *param_2 = (uint)(uVar13 + 0x1d);
  }
  uStack_a0 = 0;
  iVar6 = (**(code **)(*param_1 + 0x1c))(param_1,0xffffffff8214c270,&uStack_a0);
  if ((iVar6 == 0) && (*param_2 < uStack_a0)) {
    *param_2 = uStack_a0;
  }
  piVar7 = piStack_9c;
  piVar8 = piStack_98;
  if ((uStack_94 == 1) && (sVar12 == 1)) {
    uVar13 = uVar13 + 0x11;
    trapWord(6,uVar13,0);
    *param_2 = (int)((ulonglong)(*param_2 - 0xc) / (uVar13 & 0xffffffff)) * (int)uVar13 + 0xc;
  }
LAB_82e6047c:
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
    piStack_98 = (int *)0x0;
    piVar7 = piStack_9c;
  }
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))();
  }
  return lVar5;
}

