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
#define CONCAT13(h,l) ((U32)((((U8)(h)) << 24) | ((U32)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define TBLr 0
extern unsigned int *auStack_3120;
extern unsigned int *auStack_32c0;
extern unsigned int fStack_100;
extern int fn_82CE5410();
extern int fn_82CE8E78();
extern int fn_82D7D528();
extern int fn_82D80CB8();
extern int fn_82D80CE8();
extern int fn_82D9C790();
extern int fn_82DB0170();
extern int fn_82DB61C8();
extern int fn_82DC9F60();
extern unsigned int iStack_314c;
extern unsigned int iStack_3150;
extern unsigned int iStack_32d8;
extern unsigned int iStack_32dc;
extern unsigned int iStack_32e0;
extern unsigned int iStack_32e4;
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821426A8;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323B520;
extern unsigned int uStack0000001c;
extern unsigned int uStack_3158;
extern unsigned int uStack_3160;
extern unsigned int uStack_319c;
extern unsigned int uStack_32c4;
extern unsigned int uStack_32d0;
extern unsigned int uStack_32d4;
extern unsigned int uStack_32e8;
extern unsigned int uStack_32ea;
extern unsigned int uStack_3308;
extern unsigned int uStack_3310;
extern unsigned int uStack_b0;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_82DC39A0(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar5;
  int iVar6;
  undefined8 uVar4;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar12;
  uint *puVar13;
  ulonglong uVar11;
  undefined4 *puVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  double dVar22;
  undefined4 uStack0000001c;
  undefined4 uStack_3310;
  uint uStack_3308;
  undefined **ppuStack_32f0;
  undefined2 uStack_32ea;
  undefined4 uStack_32e8;
  int iStack_32e4;
  int iStack_32e0;
  int iStack_32dc;
  int iStack_32d8;
  undefined4 uStack_32d4;
  undefined4 uStack_32d0;
  undefined4 uStack_32c4;
  uint auStack_32c0 [68];
  int aiStack_31b0 [5];
  undefined4 uStack_319c;
  undefined8 uStack_3160;
  undefined8 uStack_3158;
  int iStack_3150;
  int iStack_314c;
  undefined1 *puStack_3130;
  undefined ***pppuStack_312c;
  undefined1 auStack_3120 [12320];
  float fStack_100;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_b0;
  
  uStack0000001c = param_2;
  fn_82D9C790(aiStack_31b0,param_1 + 0x1c);
  ppuStack_32f0 = &lbl_821426A8;
  uStack_e0 = lbl_821AAD20;
  dVar22 = (double)lbl_82134508;
  fStack_100 = lbl_82134508;
  uStack_dc = lbl_821AAD20;
  pppuStack_312c = &ppuStack_32f0;
  uStack_32ea = 1;
  auStack_32c0[0] = 0x10;
  auStack_32c0[1] = 0;
  auStack_32c0[2] = 0x100;
  iStack_32e4 = 0;
  iStack_32e0 = 0;
  iStack_32dc = 0;
  iStack_32d8 = 0;
  uStack_32d0 = 0;
  uStack_3160 = *(undefined8 *)(param_3 + 0x30);
  uStack_3158 = *(undefined8 *)(param_3 + 0x38);
  if (*param_3 == '\r') {
    iVar6 = *(int *)(param_3 + 0x14);
    iVar5 = KeTlsGetValue(lbl_8323B4A0);
    puVar14 = *(undefined4 **)(iVar5 + 4);
    if (puVar14 < *(undefined4 **)(iVar5 + 0xc)) {
      *puVar14 = "TtNarrowPhase";
      uVar4 = TBLr;
      puVar14[1] = (int)uVar4;
      *(undefined4 **)(iVar5 + 4) = puVar14 + 3;
    }
    iVar5 = *(int *)(param_3 + 0x40) * 4;
    iVar7 = *(int *)(param_3 + 0x40) + 1;
    lVar15 = (ulonglong)*(ushort *)(param_3 + 0x28) - 1;
    uVar21 = *(uint *)(iVar5 + *(int *)(iVar6 + 0x5c));
    if (iVar7 == *(int *)(iVar6 + 0x60)) {
      iVar12 = *(int *)(iVar6 + 0x58);
    }
    else {
      iVar12 = 0x200;
    }
    uVar16 = uVar21 + 0x80;
    uVar17 = iVar12 + uVar21;
    if (uVar21 + 0x80 < uVar17) {
      uVar18 = -(uint)(uVar21 + 0x100 < uVar17) & uVar21 + 0x100;
    }
    else {
      uVar16 = 0;
      uVar18 = 0;
    }
    do {
      puStack_3130 = auStack_3120;
      uVar2 = *(undefined4 *)(uVar21 + 0x10);
      uVar3 = *(undefined4 *)(uVar21 + 0x14);
      uVar19 = param_1[0x3c];
      iVar12 = *(char *)(uVar21 + 0xc) * 0x40 + aiStack_31b0[0];
      iStack_3150 = iVar12 + 0x1c20;
      uStack_319c = *(undefined4 *)(iVar12 + 0x1c30);
      fStack_100 = (float)dVar22;
      uStack_b0 = 0;
      fn_82D7D528(uVar21,aiStack_31b0,&puStack_3130,*(undefined4 *)(uVar21 + 8));
      if (puStack_3130 != auStack_3120) {
        (**(code **)(**(int **)(uVar21 + 8) + 0x18))
                  (*(int **)(uVar21 + 8),uVar2,uVar3,aiStack_31b0,&puStack_3130);
      }
      if ((double)fStack_100 != dVar22) {
        lVar20 = (ulonglong)uVar19 + 0x100;
        RtlEnterCriticalSection(lVar20);
        fn_82DB61C8((ulonglong)uVar19,&puStack_3130,uVar21);
        RtlLeaveCriticalSection(lVar20);
      }
      if (iStack_32d8 == 0) {
        uStack_32d0 = 0;
      }
      else if (iStack_32d8 < 1) {
        uStack_3310 = CONCAT13(1,(((U64)(uStack_3310) >> 8) & 0xFFFFFF));
        *(ulonglong *)((int)auStack_32c0 + auStack_32c0[0] + auStack_32c0[1]) =
             CONCAT44(uStack_3310,uStack_32d4);
        auStack_32c0[1] = auStack_32c0[1] + 0x10;
      }
      else {
        iVar12 = auStack_32c0[0] + auStack_32c0[1];
        uStack_3308 = uStack_3308 & 0xffffff;
        *(undefined4 *)((int)auStack_32c0 + iVar12 + 8) = uStack_32d0;
        *(undefined4 *)((int)auStack_32c0 + iVar12 + 4) = uStack_32d4;
        *(uint *)((int)auStack_32c0 + iVar12) = uStack_3308;
        uStack_32d0 = 0;
        auStack_32c0[1] = auStack_32c0[1] + 0x10;
      }
      iStack_32d8 = 0;
      if (lbl_8323B520 == 1) break;
      uVar19 = uVar18;
      if (uVar18 != 0) {
        uVar19 = uVar18 + 0x80;
        if (uVar17 <= uVar19) {
          lVar15 = lVar15 + -1;
          iVar5 = iVar5 + 4;
          iVar7 = iVar7 + 1;
          if (lVar15 < 0) {
            uVar19 = 0;
            goto LAB_82dc3d0c;
          }
          puVar13 = (uint *)(iVar5 + *(int *)(iVar6 + 0x5c));
          uVar19 = *puVar13;
          if (0 < (int)lVar15) {
            uVar11 = (ulonglong)puVar13[1];
            dataCacheBlockTouch(uVar11);
            dataCacheBlockTouch(uVar11 + 0x80);
            dataCacheBlockTouch(uVar11 + 0x100);
            dataCacheBlockTouch(uVar11 + 0x180);
          }
          if (iVar7 == *(int *)(iVar6 + 0x60)) {
            iVar12 = *(int *)(iVar6 + 0x58);
          }
          else {
            iVar12 = 0x200;
          }
          uVar17 = uVar19 + iVar12;
        }
        dataCacheBlockTouch((ulonglong)*(uint *)(uVar19 + 8));
        dataCacheBlockTouch((ulonglong)*(uint *)(uVar19 + 0x10));
        dataCacheBlockTouch((ulonglong)*(uint *)(uVar19 + 0x10) + 0xd0);
        dataCacheBlockTouch((ulonglong)*(uint *)(uVar19 + 0x14));
        dataCacheBlockTouch((ulonglong)*(uint *)(uVar19 + 0x14) + 0xd0);
      }
LAB_82dc3d0c:
      bVar1 = uVar16 != 0;
      uVar21 = uVar16;
      uVar16 = uVar18;
      uVar18 = uVar19;
    } while (bVar1);
    if (*(int *)(param_3 + 0x20) == 0) {
      if (((iStack_32dc != 0 || iStack_32e0 != 0) || iStack_32e4 != 0) || (auStack_32c0[1] != 0)) {
        fn_82D80CB8(*param_1,iVar6);
        fn_82DB0170(iVar6 + 8,&uStack_32e8);
        if (auStack_32c0[1] != 0) {
          fn_82DC9F60(*param_1,(int)auStack_32c0 + auStack_32c0[0]);
        }
        fn_82D80CE8(*param_1,iVar6);
      }
    }
    else {
      puVar14 = *(undefined4 **)((*(short *)(param_3 + 0x24) + 3) * 4 + *(int *)(param_3 + 0x20));
      *puVar14 = uStack_32e8;
      puVar14[1] = iStack_32e4;
      puVar14[2] = iStack_32e0;
      puVar14[3] = iStack_32dc;
      if (auStack_32c0[1] != 0) {
        lVar15 = (longlong)((int)auStack_32c0[1] >> 4);
        if (0 < lVar15) {
          puVar8 = (undefined4 *)((int)puVar14 + puVar14[4] + 0xc);
          puVar10 = (undefined4 *)((int)&uStack_32c4 + auStack_32c0[0]);
          do {
            puVar8[1] = puVar10[1];
            puVar8[2] = puVar10[2];
            puVar8[3] = puVar10[3];
            puVar10 = puVar10 + 4;
            puVar8 = puVar8 + 4;
            *puVar8 = *puVar10;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        puVar14[5] = auStack_32c0[1];
      }
    }
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar14 = *(undefined4 **)(iVar6 + 4);
    if (*(undefined4 **)(iVar6 + 0xc) <= puVar14) goto LAB_82dc412c;
    pcVar9 = "EtNarrowPhase";
  }
  else {
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar14 = *(undefined4 **)(iVar6 + 4);
    if (puVar14 < *(undefined4 **)(iVar6 + 0xc)) {
      *puVar14 = "TtNarrowPhaseTOI";
      uVar4 = TBLr;
      puVar14[1] = (int)uVar4;
      *(undefined4 **)(iVar6 + 4) = puVar14 + 3;
    }
    iVar6 = 0;
    if (*(short *)(param_3 + 0x28) != 0) {
      iVar5 = (uint)*(ushort *)(param_3 + 0x2a) * (uint)*(ushort *)(param_3 + 0x24) * 4;
      do {
        iVar7 = *(int *)(*(int *)(param_3 + 0x2c) + iVar5);
        if (param_3[0x40] == '\0') {
          iVar12 = *(char *)(iVar7 + 0xc) * 0x40 + aiStack_31b0[0];
          iStack_3150 = iVar12 + 0x1c20;
          uStack_319c = *(undefined4 *)(iVar12 + 0x1c30);
        }
        else {
          iStack_3150 = aiStack_31b0[0] + 0x1de0;
          uStack_319c = *(undefined4 *)(*(char *)(iVar7 + 0xc) * 0x40 + aiStack_31b0[0] + 0x1c30);
        }
        puStack_3130 = auStack_3120;
        fStack_100 = (float)dVar22;
        uStack_b0 = 0;
        fn_82D7D528(iVar7,aiStack_31b0,&puStack_3130,*(undefined4 *)(iVar7 + 8));
        if (puStack_3130 != auStack_3120) {
          (**(code **)(**(int **)(iVar7 + 8) + 0x18))
                    (*(int **)(iVar7 + 8),*(undefined4 *)(iVar7 + 0x10),
                     *(undefined4 *)(iVar7 + 0x14),aiStack_31b0,&puStack_3130);
        }
        if ((double)fStack_100 != dVar22) {
          uVar21 = param_1[0x3c];
          RtlEnterCriticalSection((ulonglong)uVar21 + 0x100);
          fn_82DB61C8(param_1[0x3c],&puStack_3130,iVar7);
          RtlLeaveCriticalSection((ulonglong)uVar21 + 0x100);
        }
        if (iStack_32d8 == 0) {
          uStack_32d0 = 0;
        }
        else {
          if (iStack_32d8 < 1) {
            uStack_3310 = CONCAT13(1,(((U64)(uStack_3310) >> 8) & 0xFFFFFF));
            *(ulonglong *)((int)auStack_32c0 + auStack_32c0[0] + auStack_32c0[1]) =
                 CONCAT44(uStack_3310,uStack_32d4);
          }
          else {
            iVar7 = auStack_32c0[0] + auStack_32c0[1];
            uStack_3308 = uStack_3308 & 0xffffff;
            *(uint *)((int)auStack_32c0 + iVar7) = uStack_3308;
            *(undefined4 *)((int)auStack_32c0 + iVar7 + 4) = uStack_32d4;
            *(undefined4 *)((int)auStack_32c0 + iVar7 + 8) = uStack_32d0;
            uStack_32d0 = 0;
          }
          auStack_32c0[1] = auStack_32c0[1] + 0x10;
        }
        iStack_32d8 = 0;
        if (lbl_8323B520 == 1) break;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < (int)(uint)*(ushort *)(param_3 + 0x28));
    }
    puVar14 = *(undefined4 **)((*(short *)(param_3 + 0x24) + 3) * 4 + *(int *)(param_3 + 0x20));
    *puVar14 = uStack_32e8;
    puVar14[1] = iStack_32e4;
    puVar14[2] = iStack_32e0;
    puVar14[3] = iStack_32dc;
    if (auStack_32c0[1] != 0) {
      lVar15 = (longlong)((int)auStack_32c0[1] >> 4);
      if (0 < lVar15) {
        puVar8 = (undefined4 *)((int)puVar14 + puVar14[4] + 0xc);
        puVar10 = (undefined4 *)((int)&uStack_32c4 + auStack_32c0[0]);
        do {
          puVar8[1] = puVar10[1];
          puVar8[2] = puVar10[2];
          puVar8[3] = puVar10[3];
          puVar10 = puVar10 + 4;
          puVar8 = puVar8 + 4;
          *puVar8 = *puVar10;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      puVar14[5] = auStack_32c0[1];
    }
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar14 = *(undefined4 **)(iVar6 + 4);
    if (*(undefined4 **)(iVar6 + 0xc) <= puVar14) goto LAB_82dc412c;
    pcVar9 = "EtNarrowPhaseTOI";
  }
  *puVar14 = pcVar9;
  uVar4 = TBLr;
  puVar14[1] = (int)uVar4;
  *(undefined4 **)(iVar6 + 4) = puVar14 + 3;
LAB_82dc412c:
  uVar4 = fn_82CE8E78(uStack0000001c,param_3,param_3,0);
  ppuStack_32f0 = &lbl_8212FC60;
  if (iStack_314c != 0) {
    iVar6 = fn_82CE5410();
    (**(code **)(**(int **)(iVar6 + 0x10) + 8))(*(int **)(iVar6 + 0x10),iStack_314c,0x200);
  }
  return uVar4;
}

