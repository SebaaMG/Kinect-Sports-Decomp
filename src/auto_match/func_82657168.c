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
extern unsigned int *__imp__KeCertMonitorData;
extern unsigned int *__imp__KeDebugMonitorData;
extern unsigned int *auStack_7f0;
extern unsigned int *auStack_828;
extern unsigned int *auStack_8a8;
extern unsigned int *auStack_8b0;
extern unsigned int *auStack_8bc;
extern unsigned int *auStack_8c0;
extern int fn_82645740();
extern int fn_8264DA70();
extern int fn_8264DB08();
extern int fn_82656468();
extern int fn_82656D40();
extern int fn_82A1E108();
extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A29B68();
extern int fn_82A29CD8();
extern int fn_82A29FE0();
extern int fn_82F68CC0();
extern unsigned int lbl_83275D94;
extern unsigned int lbl_83275D95;
extern unsigned int lbl_83275D97;
extern unsigned int uRam831e79a4;
extern unsigned int uRam8329f804;
extern unsigned int uStack_82c;
extern unsigned int uStack_830;
extern unsigned int uStack_834;
extern unsigned int uStack_838;
extern unsigned int uStack_83c;
extern unsigned int uStack_840;
extern unsigned int uStack_844;
extern unsigned int uStack_848;
extern unsigned int uStack_84c;
extern unsigned int uStack_850;
extern unsigned int uStack_866;
extern unsigned int uStack_868;
extern U64 storeWordConditionalIndexed();


void fn_82657168(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  char in_RESERVE;
  byte bVar13;
  undefined1 auStack_8c0 [4];
  undefined4 auStack_8bc [3];
  undefined1 auStack_8b0 [5];
  char cStack_8ab;
  undefined1 auStack_8a8 [64];
  ushort uStack_868;
  ushort uStack_866;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  uint uStack_844;
  uint uStack_840;
  uint uStack_83c;
  uint uStack_838;
  uint uStack_834;
  undefined4 uStack_830;
  uint uStack_82c;
  undefined1 auStack_828 [56];
  undefined1 auStack_7f0 [2032];
  
  bVar13 = *(byte *)(param_1 + 0x5e7c);
  iVar11 = param_1 + 0x5c1c;
  if ((bVar13 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x5d88) != 0) {
      if ((bVar13 & 0x80) != 0) {
        bVar3 = (bVar13 & 0x40) == 0;
        bVar13 = bVar3 << 1;
        if (!bVar3) {
          fn_82A1E650(*(int *)(param_1 + 0x5d88),0xffffffffffffffff);
        }
        uVar5 = *(undefined4 *)(param_1 + 0x5c2c);
        fn_82645740(*(undefined4 *)(param_1 + 0x5e68));
        do {
          uVar7 = (ulonglong)uRam831e79a4;
          if (in_RESERVE != '\0') {
            uRam831e79a4 = storeWordConditionalIndexed((ulonglong)uRam8329f804,0,0xffffffff831e79a4)
            ;
            bVar13 = 2;
          }
        } while (!(bool)(bVar13 >> 1 & 1));
        uVar7 = (uVar7 - *(uint *)(param_1 + 0x5c24) & 0xffffffff) / 0x1800;
        if (0xd < uVar7) {
          uVar7 = 0xe;
        }
        uVar10 = *(uint *)(param_1 + 0x5e70);
        puVar9 = *(undefined4 **)(((*(int *)(param_1 + 0x5e64) + -1) * 4 & 4U) + iVar11);
        *(undefined4 *)(param_1 + 0x5d80) = *(undefined4 *)(param_1 + 0x5d98);
        *(undefined4 *)(param_1 + 0x5d84) = 0;
        uVar8 = ((ulonglong)*(ushort *)(param_1 + 0x5c28) + uVar7 * 0xc) * 0x200 & 0xfffffe00;
        uVar2 = *(undefined4 *)(((uVar10 >> 0x14 & 0x3f) + 5) * 4 + iVar11);
        *puVar9 = 0x9b58e71a;
        puVar9[1] = uVar10 >> 0x1c & 3;
        puVar9[2] = uVar5;
        puVar9[3] = (int)uVar7;
        fn_82A29FE0(uVar2,puVar9,uVar8,auStack_8c0,param_1 + 0x5d78);
        fn_82656D40(iVar11,uVar8);
        fn_82A1E650(*(undefined4 *)(param_1 + 0x5d88),0xffffffffffffffff);
        while (uRam831e79a4 != 0x1800) {
          fn_82A1E108(6);
        }
      }
      uVar10 = 0;
      auStack_8bc[0] = 0;
      if ((*(uint *)(param_1 + 0x5e70) & 0xfc000) != 0) {
        puVar9 = (undefined4 *)(param_1 + 0x5c2c);
        do {
          if (((*(byte *)(param_1 + 0x5e7c) & 0x20) == 0) &&
             (uVar4 = *(uint *)(param_1 + 0x5e70) >> 0x14 & 0x3f, uVar4 <= uVar10)) {
            if (uVar4 < uVar10) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined4 *)(param_1 + 0x5d98);
            }
          }
          else {
            uVar5 = puVar9[0x2a];
          }
          fn_82A29B68(puVar9[1],uVar5,auStack_8bc,0);
          puVar9 = puVar9 + 1;
          fn_82A29CD8(*puVar9);
          uVar10 = uVar10 + 1;
        } while (uVar10 < (*(uint *)(param_1 + 0x5e70) >> 0xe & 0x3f));
      }
      VdGetCurrentDisplayInformation(auStack_8b0);
      iVar11 = *(int *)(param_1 + 0x5e78) >> 0x1d;
      if (iVar11 == 0) {
        uStack_850 = 0x53a722b4;
      }
      else if (iVar11 == 1) {
        uStack_850 = 0x53a722b5;
      }
      else if (iVar11 == 2) {
        uStack_850 = 0x53a722b6;
      }
      uStack_84c = 0x10001;
      if ((iVar11 == 0) || (iVar11 == 1)) {
        uStack_840 = (uint)*(ushort *)(param_1 + 0x5d8c);
        uStack_83c = (uint)*(ushort *)(param_1 + 0x5d8e);
        uStack_838 = (uint)uStack_868;
        uStack_834 = (uint)uStack_866;
      }
      else if (iVar11 == 2) {
        uStack_840 = 400;
        uStack_83c = 0xe0;
        uStack_838 = 400;
        uStack_834 = 0xe0;
      }
      uStack_830 = KeQueryPerformanceFrequency();
      uVar10 = *(uint *)(param_1 + 0x5e70);
      bVar3 = (uVar10 >> 0x1a & 1) != 0;
      uStack_82c = (uint)bVar3;
      if ((uVar10 >> 0x1a & 2) != 0) {
        uStack_82c = bVar3 | 2;
      }
      if ((uVar10 & 0x80000000) == 0) {
        iVar11 = param_1 + 0x3b70;
      }
      else {
        iVar11 = *(int *)(param_1 + 0x5e6c);
      }
      if (cStack_8ab == '\x01') {
        uStack_82c = uStack_82c | 4;
        fn_8264DB08();
      }
      else {
        fn_8264DA70(auStack_7f0,iVar11,1);
      }
      uVar10 = *(uint *)(param_1 + 0x5e70);
      puVar6 = (undefined1 *)(param_1 + 0x3670);
      if ((uVar10 & 0x4000000) == 0) {
        puVar6 = auStack_8a8;
      }
      fn_82F68CC0(auStack_828,puVar6,0x38);
      if ((*(byte *)(param_1 + 0x5e7c) & 0x20) == 0) {
        uStack_848 = 0x800;
        uStack_844 = 0;
      }
      else {
        uStack_844 = uVar10 >> 0x14 & 0x3f;
        uStack_848 = *(undefined4 *)(param_1 + 0x5d98);
      }
      *(undefined4 *)(param_1 + 0x5d80) = 0;
      *(undefined4 *)(param_1 + 0x5d84) = 0;
      fn_82A29FE0(*(undefined4 *)(param_1 + 0x5c30),&uStack_850,0x800,auStack_8c0,
                        param_1 + 0x5d78);
      fn_82A1E650(*(undefined4 *)(param_1 + 0x5d88),0xffffffffffffffff);
      fn_82A1E658(*(undefined4 *)(param_1 + 0x5d88));
    }
    uVar10 = 0;
    piVar12 = (int *)(param_1 + 0x5c30);
    do {
      if (*piVar12 == -1) break;
      fn_82A1E658();
      uVar10 = uVar10 + 1;
      piVar12 = piVar12 + 1;
    } while (uVar10 < 0x29);
  }
  if ((int *)*__imp__KeCertMonitorData == (int *)0x0) {
    if (*__imp__KeDebugMonitorData == 0) goto LAB_82657538;
    pcVar1 = *(code **)(*__imp__KeDebugMonitorData + 0x18);
  }
  else {
    pcVar1 = *(code **)*__imp__KeCertMonitorData;
    if (pcVar1 == (code *)0x0) goto LAB_82657538;
  }
  (*pcVar1)(0x1b,0xffffffff821cd96c);
LAB_82657538:
  fn_82656468(param_1);
  ObDeleteSymbolicLink(0xffffffff831be888);
  lbl_83275D97 = 0;
  lbl_83275D94 = 0;
  lbl_83275D95 = 0;
  return;
}

