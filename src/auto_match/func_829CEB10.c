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
#define TBLr 0
extern unsigned int *auStack_c0;
extern int fn_82645740();
extern int fn_82657F68();
extern int fn_82657F78();
extern int fn_829C5910();
extern int fn_829C92A0();
extern int fn_829C9680();
extern int fn_829C9C30();
extern int fn_829C9D18();
extern int fn_829C9EF8();
extern int fn_829C9FE0();
extern int fn_829CB450();
extern int fn_829CB7D8();
extern int fn_829CBC38();
extern int fn_829CCD78();
extern int fn_829CD010();
extern int fn_829CDB48();
extern int fn_829CE110();
extern int fn_829CE958();
extern int fn_829CFB48();
extern int fn_829CFCC0();
extern int fn_829CFD70();
extern int fn_829D2868();
extern int fn_829D2900();
extern int fn_829D4BE0();
extern int fn_829F4D98();
extern int fn_829F5120();
extern int fn_82A2ABE0();
extern int iRam83217314;
extern int iRam83217318;
extern int iRam8321731c;
extern int iRam83217330;
extern int iRam83217338;
extern unsigned int lbl_83215008;
extern unsigned int lbl_83215018;
extern unsigned int lbl_8321501C;
extern unsigned int lbl_83215034;
extern unsigned int lbl_83215044;
extern unsigned int lbl_83215054;
extern unsigned int lbl_8321505C;
extern unsigned int lbl_83215070;
extern unsigned int lbl_83215078;
extern unsigned int lbl_83215280;
extern unsigned int lbl_83215A60;
extern unsigned int lbl_83217140;
extern unsigned int lbl_83217144;
extern unsigned int lbl_83217148;
extern unsigned int lbl_83217324;
extern unsigned int lbl_83217328;
extern unsigned int lbl_83217334;
extern unsigned int lbl_8321733C;
extern unsigned int lbl_832177A0;
extern unsigned int uRam83215014;
extern unsigned int uRam83217276;
extern unsigned int uRam83217277;
extern unsigned int uRam83217278;
extern unsigned int uRam8321727c;
extern unsigned int uRam832172ec;
extern unsigned int uRam832172f0;
extern unsigned int uRam832172f4;
extern unsigned int uRam832172f8;
extern unsigned int uRam832172fc;
extern unsigned int uRam83217300;
extern unsigned int uRam83217308;
extern unsigned int uRam83217310;
extern unsigned int uRam83217320;
extern unsigned int uStack_e0;
extern U64 storeWordConditionalIndexed();


undefined8 fn_829CEB10(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar9;
  undefined8 uVar8;
  undefined4 *puVar10;
  ulonglong uVar11;
  char in_RESERVE;
  byte in_cr0;
  longlong lVar12;
  undefined8 uStack_e0;
  undefined *apuStack_d8 [6];
  undefined1 auStack_c0 [192];
  
  lbl_83215078 = 1;
  iRam83217338 = 0;
LAB_829ceb58:
  bVar6 = false;
joined_r0x829ceb64:
  do {
    while ((lbl_8321505C == 0 && (lbl_83215018 == 0))) {
      iVar9 = fn_829CCD78(1);
      if (iVar9 == 0) {
        uStack_e0 = 0xfffffffffffb6c20;
        iVar9 = NtWaitForSingleObjectEx(uRam83215014,1,0,&uStack_e0);
        if (iVar9 == 0x102) {
          fn_829D2900();
          fn_829CFD70();
        }
      }
      lbl_83215078 = 1;
    }
    if (lbl_83215018 != 0) {
      fn_829CD010();
      goto LAB_829cf18c;
    }
    if (!bVar6) {
      iVar9 = fn_829C9D18();
      if (iVar9 < 0) goto joined_r0x829ceb64;
      bVar6 = true;
    }
    iVar9 = fn_829C9FE0();
  } while (iVar9 < 0);
  puVar10 = (undefined4 *)0x832178b0;
  lVar12 = 10;
  do {
    puVar10 = puVar10 + 1;
    *puVar10 = 0;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  lbl_83217334 = 0;
  lbl_83215A60 = 0;
  uRam832172ec = 0;
  uRam832172f0 = 0;
  uRam832172f4 = 0;
  uRam832172f8 = 0;
  uRam83217300 = 0;
  uRam83217308 = 0;
  iRam83217314 = 0;
  iRam83217338 = 1;
  iRam83217318 = 0;
  uRam832172fc = 0xffffffff;
  uRam83217310 = 0xffffffff;
  sync(0);
  fn_82657F68(lbl_8321501C,0xffffffff829ce950);
  fn_829D2868(0);
  fn_829CFCC0();
  apuStack_d8[0] = &lbl_83215034;
  apuStack_d8[1] = (undefined *)0x83215024;
  apuStack_d8[2] = &lbl_83215044;
  if (lbl_83217148 != 0) {
    fn_829D4BE0();
  }
  bVar6 = false;
  while( true ) {
    do {
      iVar9 = KeWaitForMultipleObjects(3,apuStack_d8,1,3,0,0,0,auStack_c0);
      puVar5 = apuStack_d8[iVar9];
      if ((lbl_83215018 == 0) && (lbl_8321505C == 1)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
        iRam83217338 = 0;
        sync(0);
        fn_829CB7D8(1);
        fn_82657F78(lbl_8321501C);
        fn_82645740(lbl_83215054);
      }
      if (puVar5 == (undefined *)0x83215024) {
        iRam83217318 = iRam83217318 + 1;
        if (bVar7) {
          uVar11 = 0;
          bVar1 = iRam83217330 != 0;
          if (!bVar1) {
            uVar11 = fn_829CE958();
          }
          uRam83217320 = (uint)bVar1;
          fn_829CDB48();
          if ((uVar11 & 0xffffffff) != 0) {
            do {
              iVar9 = iRam8321731c;
              if (in_RESERVE != '\0') {
                iRam8321731c = storeWordConditionalIndexed(uVar11,0,0xffffffff8321731c);
                in_cr0 = 2;
              }
            } while (!(bool)(in_cr0 >> 1 & 1));
            if (iVar9 != 0) {
              fn_829CE110(iVar9);
              iRam83217314 = iRam83217314 + 1;
              sync(0);
            }
          }
        }
      }
      else if (puVar5 == &lbl_83215034) {
        RtlEnterCriticalSection(0xffffffff8315c428);
        iVar9 = (&lbl_83217324)[lbl_8321733C];
        if ((iVar9 == 0) || (iVar2 = *(int *)(iVar9 + 0x34), iVar2 == 0)) {
          fn_829D2868(0);
          fn_829CFCC0();
        }
        else {
          if (iVar2 != 1) {
            fn_829CBC38(iVar2,iVar9);
            iRam83217330 = 0;
            sync(0);
            fn_829C92A0(iVar9);
            fn_829CE110(*(undefined4 *)(iVar9 + 0x34));
          }
          fn_829C9680(iVar9);
          if ((lbl_83217140 != 0) && ((iVar2 != 1 || (lbl_83217144 == 0)))) {
            KeSetEvent(lbl_83217140,1,0);
          }
          uVar8 = KfAcquireSpinLock(0xffffffff8321732c);
          (&lbl_83217324)[lbl_8321733C] = 0;
          lbl_8321733C = lbl_8321733C - 1 & 1;
          sync(0);
          KfReleaseSpinLock(0xffffffff8321732c,uVar8);
        }
        RtlLeaveCriticalSection(0xffffffff8315c428);
        if (uRam83217320 != 0) {
          uVar11 = fn_829CE958();
          if ((uVar11 & 0xffffffff) != 0) {
            do {
              iVar9 = iRam8321731c;
              if (in_RESERVE != '\0') {
                iRam8321731c = storeWordConditionalIndexed(uVar11,0,0xffffffff8321731c);
                in_cr0 = 2;
              }
            } while (!(bool)(in_cr0 >> 1 & 1));
            if (iVar9 != 0) {
              fn_829CE110(iVar9);
              iRam83217314 = iRam83217314 + 1;
              sync(0);
            }
          }
          uRam83217320 = 0;
        }
      }
      else if (puVar5 == &lbl_83215044) {
        fn_829D2868(0);
        fn_829CFCC0();
      }
      if ((iRam83217338 == 0) || (lbl_83217334 != 0)) {
        do {
          iVar9 = iRam8321731c;
          if (in_RESERVE != '\0') {
            iRam8321731c = storeWordConditionalIndexed(0,0,0xffffffff8321731c);
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        if (iVar9 != 0) {
          puVar3 = *(uint **)(iVar9 + 0x110);
          if (puVar3 != (uint *)0x0) {
            uVar8 = KfAcquireSpinLock(0xffffffff8321506c);
            uVar4 = *puVar3;
            *puVar3 = uVar4 & 0xfffffffd;
            if ((uVar4 & 4) == 0) {
              fn_829C9C30(puVar3);
            }
            KfReleaseSpinLock(0xffffffff8321506c,uVar8);
            *(undefined4 *)(iVar9 + 0x110) = 0;
          }
          puVar3 = *(uint **)(iVar9 + 0x114);
          if (puVar3 != (uint *)0x0) {
            uVar8 = KfAcquireSpinLock(0xffffffff8321506c);
            uVar4 = *puVar3;
            *puVar3 = uVar4 & 0xfffffffd;
            if ((uVar4 & 4) == 0) {
              fn_829C9EF8(puVar3);
            }
            KfReleaseSpinLock(0xffffffff8321506c,uVar8);
            *(undefined4 *)(iVar9 + 0x114) = 0;
          }
          if (*(int *)(iVar9 + 0x118) != 0) {
            fn_829CFB48(4);
          }
          *(undefined4 *)(&lbl_832177A0 + ((iVar9 + 0x7cde8bf0) / 0x130) * 4) = 0;
          iRam83217314 = iRam83217314 + 1;
          sync(0);
        }
      }
      uVar8 = TBLr;
      uRam83217277 = 1;
      uRam83217276 = 1;
      uRam83217278 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uRam8321727c = (undefined4)uVar8;
      fn_82A2ABE0(0x4e554920,0xffffffff83217274,0x78);
    } while (bVar7);
    uVar8 = KfAcquireSpinLock(0xffffffff8321732c);
    if ((lbl_83217324 != 0) || (bVar7 = false, lbl_83217328 != 0)) {
      bVar7 = true;
    }
    KfReleaseSpinLock(0xffffffff8321732c,uVar8);
    if ((lbl_83215018 == 1) && (!bVar7)) goto LAB_829cf0cc;
    if ((lbl_8321505C == 0) && (!bVar7)) break;
    KeSetEvent(0xffffffff83215034,1,0);
  }
  do {
    iVar9 = iRam8321731c;
    if (in_RESERVE != '\0') {
      iRam8321731c = storeWordConditionalIndexed(0,0,0xffffffff8321731c);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (iVar9 != 0) {
    fn_829CE110(iVar9);
  }
  goto LAB_829cf128;
LAB_829cf0cc:
  do {
    iVar9 = iRam8321731c;
    if (in_RESERVE != '\0') {
      iRam8321731c = storeWordConditionalIndexed(0,0,0xffffffff8321731c);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (iVar9 != 0) {
    fn_829CE110(iVar9);
  }
  bVar6 = true;
LAB_829cf128:
  iRam83217338 = 0;
  sync(0);
  fn_82657F78(lbl_8321501C);
  fn_829CD010();
  while ((lbl_83215070 != 0 || (lbl_83215280 != 0))) {
    KeWaitForSingleObject(0xffffffff83215618,3,0,0,0);
  }
  fn_829D2868(0);
  fn_829CFCC0();
  if (bVar6) {
LAB_829cf18c:
    fn_82645740(lbl_83215054);
    if (lbl_83215008 != 0) {
      fn_829F4D98();
    }
    fn_829C5910();
    fn_829CB450();
    fn_829F5120();
    return 0;
  }
  goto LAB_829ceb58;
}

