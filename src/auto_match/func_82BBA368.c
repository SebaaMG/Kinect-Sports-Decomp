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
extern int fn_82AB15D0();
extern unsigned int lbl_820E0814;
extern unsigned int lbl_8316FF50;
extern unsigned int uStack_4c;


uint fn_82BBA368(int *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  char cVar3;
  int iVar2;
  undefined8 uVar4;
  uint uVar5;
  byte bVar7;
  uint uVar6;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  byte bStack_50;
  byte bStack_4f;
  byte bStack_4e;
  byte bStack_4d;
  undefined4 uStack_4c;
  byte abStack_48 [72];
  
  uStack_4c = param_1[0x20];
  iVar2 = 0;
  uVar9 = param_1[param_2 + 0x20];
  lVar10 = 4;
  do {
    if (abStack_48[iVar2] == 0) {
      bVar7 = 1;
    }
    else {
      bVar7 = abStack_48[iVar2 + -4];
    }
    abStack_48[iVar2 + -4] = bVar7;
    iVar2 = iVar2 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  uVar8 = 0;
  abStack_48[0] = 0;
  abStack_48[1] = 0;
  abStack_48[2] = 0;
  abStack_48[3] = 0;
  cVar3 = (**(code **)(*param_1 + 0x14))(param_1);
  bStack_4d = (byte)uVar9;
  bStack_50 = (byte)(uVar9 >> 0x18);
  if (cVar3 != '\0') {
    iVar2 = param_1[6];
    if ((*(uint *)(&lbl_8316FF50 + iVar2 * 0x34) >> 2 & 1) == 0) {
      if (iVar2 == 0x1c) {
        uVar9 = 0;
        iVar2 = 0;
        lVar10 = 3;
        do {
          pbVar1 = abStack_48 + iVar2;
          iVar2 = iVar2 + 1;
          uVar9 = *(uint *)(&lbl_820E0814 + (uint)*pbVar1 * 4) | uVar9;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        return uVar9;
      }
      if (iVar2 != 0x1d) {
        if (iVar2 == 0x1e) {
          uVar9 = 0;
          iVar2 = 0;
          lVar10 = 2;
          do {
            pbVar1 = abStack_48 + iVar2;
            iVar2 = iVar2 + 1;
            uVar9 = *(uint *)(&lbl_820E0814 + (uint)*pbVar1 * 4) | uVar9;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          return uVar9;
        }
        if ((iVar2 != 0x32) && ((iVar2 < 0x86 || (0x87 < iVar2)))) {
          if ((((U64)(uStack_4c) >> 0) & 0xFF) == '\0') {
            uVar5 = *(uint *)(&lbl_820E0814 + (uint)bStack_50 * 4);
          }
          else {
            uVar5 = 0;
          }
          if ((((U64)(uStack_4c) >> 8) & 0xFF) == '\0') {
            uVar6 = *(uint *)(&lbl_820E0814 + (uVar9 >> 0x10 & 0xff) * 4);
          }
          else {
            uVar6 = 0;
          }
          if ((((U64)(uStack_4c) >> 16) & 0xFF) == '\0') {
            uVar8 = *(uint *)(&lbl_820E0814 + (uVar9 >> 8 & 0xff) * 4);
          }
          else {
            uVar8 = 0;
          }
          uVar8 = uVar8 | uVar6 | uVar5;
          if ((char)uStack_4c == '\0') {
            uVar9 = *(uint *)(&lbl_820E0814 + (uVar9 & 0xff) * 4);
          }
          else {
            uVar9 = 0;
          }
          goto LAB_82bba578;
        }
      }
      uVar9 = 0;
      iVar2 = 0;
      lVar10 = 4;
      do {
        pbVar1 = abStack_48 + iVar2;
        iVar2 = iVar2 + 1;
        uVar9 = *(uint *)(&lbl_820E0814 + (uint)*pbVar1 * 4) | uVar9;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      return uVar9;
    }
    iVar2 = (**(code **)(*param_1 + 4))(param_1);
    if (iVar2 == 1) {
LAB_82bba72c:
      return *(uint *)(&lbl_820E0814 + (uint)bStack_4d * 4);
    }
    if (iVar2 == 2) {
      if (param_2 == 1) goto LAB_82bba72c;
      uVar8 = *(uint *)(&lbl_820E0814 + (uint)bStack_50 * 4);
      if (param_2 == 2) {
        return uVar8;
      }
      uVar4 = 0x27b;
    }
    else {
      uVar4 = 0x27f;
    }
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820e0950,uVar4);
    return uVar8;
  }
  cVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  if (cVar3 == '\0') {
    return 0x1010101;
  }
  iVar2 = *(int *)(param_1[0x2c] * 8 + *(int *)(param_3 + 0x58) + 4);
  bStack_4d = bStack_50;
  if (iVar2 == 1) goto LAB_82bba72c;
  bStack_4f = (byte)(uVar9 >> 0x10);
  if (iVar2 != 2) {
    bStack_4e = (byte)(uVar9 >> 8);
    if (iVar2 == 3) {
      uVar8 = *(uint *)(&lbl_820E0814 + (uint)bStack_50 * 4);
      uVar9 = *(uint *)(&lbl_820E0814 + (uint)bStack_4e * 4) |
              *(uint *)(&lbl_820E0814 + (uint)bStack_4f * 4);
      goto LAB_82bba578;
    }
    if ((iVar2 == 4) || (iVar2 != 5)) {
      uVar8 = *(uint *)(&lbl_820E0814 + (uVar9 & 0xff) * 4);
      uVar9 = *(uint *)(&lbl_820E0814 + (uint)bStack_4e * 4) |
              *(uint *)(&lbl_820E0814 + (uint)bStack_4f * 4) |
              *(uint *)(&lbl_820E0814 + (uint)bStack_50 * 4);
      goto LAB_82bba578;
    }
  }
  uVar9 = *(uint *)(&lbl_820E0814 + (uint)bStack_4f * 4);
  uVar8 = *(uint *)(&lbl_820E0814 + (uint)bStack_50 * 4);
LAB_82bba578:
  return uVar9 | uVar8;
}

