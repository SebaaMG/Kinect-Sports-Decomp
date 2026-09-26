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
extern int fn_82ABDBE8();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82AF4E80();
extern int fn_82AF6BC8();
extern int fn_82AFA378();
extern int fn_82B0FC78();
extern int fn_82B84350();
extern int fn_82B8AC10();
extern int fn_82B8D3D0();
extern unsigned int iStack00000014;
extern unsigned int uStack0000003c;


void fn_82AFBD10(int param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6,
                  uint param_7,ulonglong param_8)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char cVar14;
  uint uVar9;
  undefined8 uVar5;
  uint uVar10;
  undefined2 uVar13;
  int iVar11;
  int iVar12;
  ulonglong uVar15;
  int *piVar17;
  ulonglong uVar16;
  uint *puVar18;
  uint *puVar20;
  ulonglong uVar19;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  undefined4 *puVar24;
  uint uVar25;
  undefined4 *puVar26;
  uint uVar27;
  undefined4 *puVar28;
  int iStack00000014;
  uint uStack0000003c;
  
  iStack00000014 = param_1;
  uStack0000003c = param_6;
  if ((param_2 != 0) && (param_5 != 0)) {
    if (param_2 == param_5) {
      if (param_6 != 0) {
        return;
      }
    }
    else {
      fn_82B8D3D0(param_1,param_2,param_5,1,0);
    }
  }
  uVar6 = fn_82AF4E80(param_1,param_2,param_3,param_5,param_6);
  uVar7 = fn_82B84350(param_1,*(undefined4 *)(param_3 + 0x1c),0,uVar6);
  uVar22 = param_3;
  uVar10 = param_5;
  if (param_5 == 0) {
    uVar22 = param_6;
    uVar10 = param_2;
  }
  uVar27 = uVar7 & 0xfffffffe;
  puVar20 = (uint *)((uVar10 & 0xfffffffe) + 0x24);
  uVar21 = 0;
  uVar9 = 0;
  *(uint *)(uVar27 + 0x24) = *puVar20;
  *(uint *)(*puVar20 & 0xfffffffe) = uVar27;
  *(uint *)(uVar27 + 0x28) = uVar10 & 0xfffffffe;
  *puVar20 = uVar27 + 0x28;
  if ((param_2 == 0) || (param_5 == 0)) {
    uVar27 = *(uint *)(uVar10 + 8) >> 0x13;
    uVar19 = (ulonglong)uVar27 & 7;
    if ((uVar27 & 7) != 0) {
      uVar27 = 0;
      puVar26 = (undefined4 *)(uVar7 + 0x28);
      puVar28 = (undefined4 *)(uVar10 + 0x2c);
      do {
        uVar25 = 0;
        if (uVar9 != 0) {
          uVar8 = *puVar28;
          puVar24 = (undefined4 *)(uVar7 + 0x2c);
          do {
            cVar14 = fn_82ABDBE8(uVar8,*puVar24);
            if (cVar14 != '\0') break;
            uVar25 = uVar25 + 1;
            puVar24 = puVar24 + 1;
          } while (uVar25 < uVar9);
        }
        if (uVar25 == uVar9) {
          uVar8 = fn_82AD1978(uVar7,*puVar28);
          uVar9 = uVar9 + 1;
          puVar26 = puVar26 + 1;
          *puVar26 = uVar8;
        }
        uVar19 = uVar19 - 1;
        uVar21 = uVar21 & ~(3 << (uVar27 & 0x3f)) | uVar25 << (uVar27 & 0x3f);
        puVar28 = puVar28 + 1;
        uVar27 = uVar27 + 2;
      } while (uVar19 != 0);
    }
    uVar19 = 0;
    uVar27 = *(uint *)(uVar22 + 8) >> 0xe;
    if ((uVar27 & 7) != 0) {
      puVar26 = (undefined4 *)((uVar9 + 10) * 4 + uVar7);
      do {
        uVar16 = 0;
        uVar15 = uVar19;
        if (uVar22 == uStack0000003c) {
          if ((param_8 & 0xffffffff) != 0) {
            uVar25 = 0;
            do {
              uVar15 = uVar16;
              if ((int)uVar19 + param_4 == (param_7 >> (uVar25 & 0x3f) & 3)) break;
              uVar16 = uVar16 + 1;
              uVar25 = uVar25 + 2;
              uVar15 = uVar19;
            } while ((uVar16 & 0xffffffff) < (param_8 & 0xffffffff));
          }
LAB_82afc110:
          uVar5 = fn_82AD18C0(iStack00000014,uVar22,uVar15);
          uVar8 = fn_82AD1978(uVar7,uVar5);
          uVar9 = uVar9 + 1;
          puVar26 = puVar26 + 1;
          *puVar26 = uVar8;
        }
        else {
          if ((param_8 & 0xffffffff) == 0) goto LAB_82afc110;
          uVar25 = 0;
          do {
            if (((ulonglong)(param_7 >> (uVar25 & 0x3f)) & 3) == (uVar19 & 0xffffffff)) break;
            uVar16 = uVar16 + 1;
            uVar25 = uVar25 + 2;
          } while ((uVar16 & 0xffffffff) < (param_8 & 0xffffffff));
          if ((param_8 & 0xffffffff) <= (uVar16 & 0xffffffff)) goto LAB_82afc110;
        }
        uVar19 = uVar19 + 1;
      } while ((uVar19 & 0xffffffff) < ((ulonglong)uVar27 & 7));
    }
  }
  else {
    if (param_2 != param_5) {
      puVar26 = (undefined4 *)(uVar7 + 0x2c);
      for (uVar22 = 0; uVar9 = *(uint *)(param_2 + 8) >> 0x13 & 7, uVar22 < uVar9;
          uVar22 = uVar22 + 1) {
        uVar8 = fn_82AD1978(uVar7,*(undefined4 *)((param_2 - uVar7) + (int)puVar26));
        *puVar26 = uVar8;
        puVar26 = puVar26 + 1;
      }
    }
    uVar27 = 0;
    puVar26 = (undefined4 *)((uVar9 + 10) * 4 + uVar7);
    piVar23 = (int *)(param_5 + 0x2c);
    for (uVar22 = 0; iVar1 = iStack00000014, uVar22 < (*(uint *)(param_5 + 8) >> 0x13 & 7);
        uVar22 = uVar22 + 1) {
      iVar1 = *piVar23;
      if (*(uint *)(iVar1 + 0xc) == param_3) {
        uVar25 = 0;
        if (uVar9 != 0) {
          puVar28 = (undefined4 *)(uVar7 + 0x2c);
          do {
            cVar14 = fn_82ABDBE8(*puVar28,iVar1);
            if (cVar14 != '\0') {
              uVar21 = uVar21 & ~(3 << (uVar27 & 0x3f)) | uVar25 << (uVar27 & 0x3f);
              break;
            }
            uVar25 = uVar25 + 1;
            puVar28 = puVar28 + 1;
          } while (uVar25 < uVar9);
        }
        if ((param_2 == param_5) && (uVar9 <= uVar25)) goto LAB_82afbeec;
      }
      else {
LAB_82afbeec:
        uVar8 = fn_82AD1978(uVar7,iVar1);
        uVar25 = uVar9 << (uVar27 & 0x3f);
        puVar26 = puVar26 + 1;
        *puVar26 = uVar8;
        uVar9 = uVar9 + 1;
        uVar21 = uVar21 & ~(3 << (uVar27 & 0x3f)) | uVar25;
      }
      piVar23 = piVar23 + 1;
      uVar27 = uVar27 + 2;
    }
    if (param_2 != param_5) {
      piVar23 = (int *)(param_2 + 4);
      while (iVar11 = *piVar23, iVar11 != 0) {
        if (*(int *)(iVar11 + 0x10) != 0) {
          piVar17 = (int *)(*(int *)(iVar11 + 0xc) + 4);
          for (iVar12 = *piVar17; iVar12 != iVar11; iVar12 = *(int *)(iVar12 + 8)) {
            piVar17 = (int *)(iVar12 + 8);
          }
          *piVar17 = *(int *)(iVar11 + 8);
          *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(uVar7 + 4);
          *(int *)(uVar7 + 4) = iVar11;
          *(uint *)(iVar11 + 0xc) = uVar7;
        }
        if (*piVar23 == iVar11) {
          piVar23 = (int *)(iVar11 + 8);
        }
      }
      if (uVar9 < uVar6) {
        uVar9 = fn_82AF6BC8(iStack00000014,param_2,uVar7,uVar9,param_3,uStack0000003c);
      }
      fn_82B8AC10(iVar1,param_2,*(undefined4 *)(iVar1 + 0x28c),1);
    }
  }
  if (uVar9 < uVar6) {
    fn_82AF6BC8(iStack00000014,uVar10,uVar7,uVar9,param_3,uStack0000003c);
  }
  iVar1 = iStack00000014;
  puVar20 = (uint *)(uVar10 + 4);
  while (puVar2 = (uint *)*puVar20, puVar2 != (uint *)0x0) {
    if (puVar2[4] != 0) {
      puVar18 = (uint *)(puVar2[3] + 4);
      for (puVar3 = (uint *)*puVar18; puVar3 != puVar2; puVar3 = (uint *)puVar3[2]) {
        puVar18 = puVar3 + 2;
      }
      *puVar18 = puVar2[2];
      puVar2[2] = *(uint *)(uVar7 + 4);
      *(uint **)(uVar7 + 4) = puVar2;
      uVar22 = *puVar2;
      puVar2[3] = uVar7;
      *puVar2 = ((((uVar21 >> (uVar22 >> 10 & 6) & 3) << 2 | uVar21 >> (uVar22 >> 8 & 6) & 3) << 2 |
                 uVar21 >> (uVar22 >> 6 & 6) & 3) << 2 | uVar21 >> (uVar22 >> 4 & 6) & 3) << 5 |
                uVar22 & 0xffffe01f;
    }
    if ((uint *)*puVar20 == puVar2) {
      puVar20 = puVar2 + 2;
    }
  }
  fn_82B8AC10(iStack00000014,uVar10,*(undefined4 *)(iStack00000014 + 0x28c),1);
  fn_82B0FC78(iVar1,uVar7);
  uVar22 = *(uint *)(uVar7 + 8);
  *(uint *)(uVar7 + 8) = uVar22 | 0x1000000;
  if ((((*(uint *)(uVar10 + 8) >> 0x17 & 1) == 0) &&
      (uVar10 = param_3, (*(uint *)(param_3 + 8) >> 0x17 & 1) == 0)) &&
     ((uStack0000003c == 0 ||
      (uVar10 = uStack0000003c, (*(uint *)(uStack0000003c + 8) >> 0x17 & 1) == 0))))
  goto LAB_82afc2e8;
  *(uint *)(uVar7 + 8) = uVar22 | 0x1800000;
  uVar13 = fn_82ADD120(uVar10);
  *(undefined2 *)(uVar7 + 0x12) = uVar13;
  puVar20 = *(uint **)(iVar1 + 0x294);
  if ((puVar20[1] & 1) == 0) {
    uVar22 = *puVar20 & 0xfffffffe;
    iVar11 = uVar22 - 4;
    if ((iVar11 == 0) || (*(uint *)(uVar22 + 8) < *(int *)(uVar22 + 4) + 1U)) goto LAB_82afc2c4;
  }
  else {
LAB_82afc2c4:
    iVar11 = fn_82AD6090(puVar20,1);
  }
  iVar12 = *(int *)(iVar11 + 8);
  *(int *)(iVar11 + 8) = iVar12 + 1;
  *(uint *)((iVar12 + 4) * 4 + iVar11) = uVar7;
LAB_82afc2e8:
  if ((*(uint *)(uVar7 + 8) >> 0x17 & 1) != 0) {
    piVar23 = (int *)(uVar7 + 0x2c);
    for (uVar22 = 0; uVar22 < (*(uint *)(uVar7 + 8) >> 0x13 & 7); uVar22 = uVar22 + 1) {
      iVar11 = *(int *)(*piVar23 + 0xc);
      if ((*(uint *)(iVar11 + 8) >> 0x17 & 1) == 0) {
        *(uint *)(iVar11 + 8) = *(uint *)(iVar11 + 8) | 0x800000;
        uVar13 = fn_82ADD120(uVar7);
        *(undefined2 *)(iVar11 + 0x12) = uVar13;
        *(uint *)(iVar11 + 0x10) = *(uint *)(iVar11 + 0x10) & 0xfff8ffff;
        puVar20 = *(uint **)(iVar1 + 0x294);
        if ((puVar20[1] & 1) == 0) {
          uVar10 = *puVar20 & 0xfffffffe;
          iVar12 = uVar10 - 4;
          if ((iVar12 == 0) || (*(uint *)(uVar10 + 8) < *(int *)(uVar10 + 4) + 1U))
          goto LAB_82afc374;
        }
        else {
LAB_82afc374:
          iVar12 = fn_82AD6090(puVar20,1);
        }
        iVar4 = *(int *)(iVar12 + 8);
        *(int *)(iVar12 + 8) = iVar4 + 1;
        *(int *)((iVar4 + 4) * 4 + iVar12) = iVar11;
      }
      piVar23 = piVar23 + 1;
    }
  }
  fn_82AFA378(iVar1,uVar7);
  return;
}

