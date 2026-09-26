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
extern unsigned char bRam83215698;
extern int fn_8264D6C0();
extern int fn_829C9EF8();
extern int iRam83215a3c;
extern int iRam83217300;
extern int iRam83217304;
extern int iRam83217308;
extern int iRam8321730c;
extern unsigned int iStack_90;
extern unsigned int lbl_8315C3E8;
extern unsigned int lbl_83215058;
extern unsigned int lbl_8321505C;
extern unsigned int lbl_83215064;
extern unsigned int lbl_83215280;
extern unsigned int *lbl_83215284;
extern unsigned int lbl_83215A30;
extern unsigned int uRam83214fe4;
extern unsigned int uRam832154c0;
extern unsigned int uRam8321569c;
extern unsigned int uRam832156a0;
extern unsigned int uRam832156a4;
extern unsigned int uRam832156a8;
extern unsigned int uRam83215a34;
extern unsigned int uRam83217310;
extern unsigned int uStack_8c;
extern U64 storeWordConditionalIndexed();


void fn_829CD450(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  char in_RESERVE;
  byte in_cr0;
  int iStack_90;
  uint uStack_8c;
  
  uVar11 = uRam832154c0;
  puVar14 = (uint *)0x0;
  iRam83217304 = iRam83217304 + 1;
  uVar3 = TBLr;
  uStack_8c = 0;
  iStack_90 = param_1;
  uVar4 = XamXStudioRequest(0x1004,&iStack_90);
  uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)uStack_8c;
  uVar5 = KfAcquireSpinLock(0xffffffff8321506c);
  puVar1 = *(uint **)(param_1 + 0x10);
  puVar1[1] = param_2;
  *puVar1 = *puVar1 & 0xfffffffe;
  if ((-1 < (int)param_2) && (param_3 != uRam83214fe4)) {
    puVar1[1] = 0xc0000206;
  }
  puVar1[0x17] = (uint)uVar3;
  puVar1[0x18] = uVar11;
  puVar1[0x16] = puVar1[0x12];
  if (-1 < (int)puVar1[1]) {
    if ((uVar4 & 1) != 0) {
      uVar11 = uRam83215a34;
      if (uRam83215a34 == 0xffffffff) {
        uVar11 = (uint)bRam83215698;
      }
      *(char *)(puVar1 + 0xd) = (char)uVar11;
    }
    uVar11 = (uint)bRam83215698;
    uVar10 = uRam83215a34;
    uVar8 = uVar11;
    bVar9 = bRam83215698;
    if (uVar11 != *(byte *)(puVar1 + 0xd)) {
      do {
        uVar12 = uVar11 + 1;
        uVar11 = uVar12 & 0xff;
        bRam83215698 = (byte)uVar12;
        if (uVar10 != 0xffffffff) {
          uVar16 = 0;
          iVar7 = 0;
          uVar12 = 0;
          do {
            iVar18 = 0;
            uVar17 = 0;
            do {
              iVar2 = (uVar12 + iVar18) * 4;
              if (uVar11 == *(uint *)(iVar2 + -0x7cdea7e0)) {
                iVar13 = iVar7 + uVar17;
                iVar6 = RtlCompareMemory(0xffffffff832156a0,(uint *)(iVar13 + -0x7cdea890),0xc);
                if ((iVar6 != 0xc) || (uRam8321569c != uVar16)) {
                  uRam832156a0 = *(uint *)(iVar13 + -0x7cdea890);
                  uRam832156a4 = *(uint *)(iVar13 + -0x7cdea88c);
                  uRam832156a8 = *(uint *)(iVar13 + -0x7cdea888);
                  iRam83215a3c = 1;
                  uRam8321569c = uVar16;
                }
                *(undefined4 *)(iVar2 + -0x7cdea7e0) = 0xffffffff;
                uVar11 = (uint)bRam83215698;
                uVar10 = uRam83215a34;
                uVar8 = uVar11;
                if (uRam83215a34 == uVar11) {
                  uVar10 = 0xffffffff;
                  uRam83215a34 = 0xffffffff;
                }
              }
              uVar17 = uVar17 + 0x5c;
              iVar18 = iVar18 + 1;
            } while (uVar17 < 0xb8);
            uVar12 = uVar12 + 0x61;
            uVar16 = uVar16 + 1;
            iVar7 = iVar7 + 0x184;
          } while (uVar12 < 0xc2);
        }
        bVar9 = (byte)uVar8;
      } while (uVar11 != *(byte *)(puVar1 + 0xd));
    }
    if ((((lbl_83215A30 != 0) || (bVar9 = bRam83215698, iRam83215a3c != 0)) ||
        (uVar10 != 0xffffffff)) &&
       ((bRam83215698 = bVar9, (uVar4 & 1) == 0 && (puVar14 = puVar1, iRam83215a3c != 0)))) {
      iRam83215a3c = iRam83215a3c + -1;
    }
  }
  if (-1 < (int)puVar1[1]) {
    if (puVar14 == (uint *)0x0) {
      puVar1[0x1b] = uRam832156a0;
      puVar1[0x1c] = uRam832156a4;
      puVar1[0x1d] = uRam832156a8;
      puVar1[0x1e] = uRam8321569c;
      if (lbl_83215284 != (uint *)0x0) {
        *lbl_83215284 = *lbl_83215284 & 0xfffffffb;
        if ((*lbl_83215284 & 2) == 0) {
          puVar14 = lbl_83215284;
        }
        iRam83217300 = iRam83217300 + 1;
      }
      *puVar1 = *puVar1 | 4;
      if (uRam83217310 != 0xffffffff) {
        iRam8321730c = (puVar1[0x12] - uRam83217310) + iRam8321730c + -1;
      }
      uRam83217310 = puVar1[0x12];
      lbl_83215284 = puVar1;
      fn_8264D6C0((ulonglong)puVar1[0x1a] + (ulonglong)lbl_83215064,
                   (ulonglong)puVar1[0x1a] + (ulonglong)lbl_83215064 + (ulonglong)uRam83214fe4,1);
      puVar15 = puVar14;
      goto LAB_829cd800;
    }
    if ((-1 < (int)puVar1[1]) && (puVar15 = puVar14, puVar14 == (uint *)0x0)) goto LAB_829cd800;
  }
  iStack_90 = 0;
  iRam83217308 = iRam83217308 + 1;
  uStack_8c = 0;
  iVar18 = 0;
  uVar19 = 0;
  iVar7 = (*(code *)lbl_8315C3E8)(&iStack_90);
  if ((iVar7 < 0) || ((uStack_8c == 0 || (uStack_8c == 1)))) {
LAB_829cd7d4:
    sync(0);
    lbl_83215058 = uVar19;
    lbl_8321505C = iVar18;
    puVar15 = puVar1;
    if (iVar18 != 0) goto LAB_829cd800;
  }
  else {
    if (uStack_8c == 2) {
      uVar19 = 1;
      iVar18 = 1;
      goto LAB_829cd7d4;
    }
    if (((uStack_8c == 3) || (uStack_8c == 4)) || (uStack_8c == 5)) {
      uVar19 = 1;
      goto LAB_829cd7d4;
    }
    if ((uStack_8c != 6) && (uStack_8c != 7)) goto LAB_829cd7d4;
  }
  lbl_8321505C = 0;
  puVar15 = puVar14;
LAB_829cd800:
  KfReleaseSpinLock(0xffffffff8321506c,uVar5);
  if (puVar15 != (uint *)0x0) {
    fn_829C9EF8(puVar15);
  }
  do {
    uVar4 = (ulonglong)lbl_83215280;
    if (in_RESERVE != '\0') {
      lbl_83215280 = storeWordConditionalIndexed(uVar4 - 1,0,0xffffffff83215280);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((int)(uVar4 - 1) == 0) {
    sync(0);
    KeSetEvent(0xffffffff83215618,1,0);
  }
  return;
}

