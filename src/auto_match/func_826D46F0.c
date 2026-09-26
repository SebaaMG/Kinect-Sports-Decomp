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
extern unsigned int *auStack_110;
extern unsigned int *auStack_168;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_218;
extern unsigned int *auStack_270;
extern unsigned int *auStack_2c8;
extern unsigned int *auStack_2d6;
extern unsigned int *auStack_2fc;
extern unsigned int *auStack_31c;
extern unsigned int *auStack_37c;
extern unsigned int *auStack_3dc;
extern unsigned int *auStack_43c;
extern unsigned int *auStack_448;
extern unsigned int *auStack_45c;
extern unsigned int *auStack_b8;
extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82699580();
extern int fn_826C6248();
extern int fn_826C7400();
extern int fn_826C9648();
extern int fn_826D2B68();
extern int fn_82F68CC0();
extern unsigned int iStack_320;
extern unsigned int iStack_380;
extern unsigned int iStack_390;
extern unsigned int iStack_3e0;
extern unsigned int iStack_3f0;
extern unsigned int iStack_440;
extern unsigned int uStack_2d8;
extern unsigned int uStack_2e0;
extern unsigned int uStack_336;
extern unsigned int uStack_338;
extern unsigned int uStack_33c;
extern unsigned int uStack_340;
extern unsigned int uStack_344;
extern unsigned int uStack_348;
extern unsigned int uStack_34c;
extern unsigned int uStack_350;
extern unsigned int uStack_354;
extern unsigned int uStack_358;
extern unsigned int uStack_35c;
extern unsigned int uStack_396;
extern unsigned int uStack_398;
extern unsigned int uStack_39c;
extern unsigned int uStack_3a0;
extern unsigned int uStack_3a4;
extern unsigned int uStack_3a8;
extern unsigned int uStack_3ac;
extern unsigned int uStack_3b0;
extern unsigned int uStack_3b4;
extern unsigned int uStack_3b8;
extern unsigned int uStack_3bc;
extern unsigned int uStack_3f4;
extern unsigned int uStack_3f6;
extern unsigned int uStack_3f8;
extern unsigned int uStack_3fc;
extern unsigned int uStack_400;
extern unsigned int uStack_404;
extern unsigned int uStack_408;
extern unsigned int uStack_40c;
extern unsigned int uStack_410;
extern unsigned int uStack_414;
extern unsigned int uStack_418;
extern unsigned int uStack_41c;
extern unsigned int uStack_44c;
extern unsigned int uStack_450;
extern unsigned int uStack_460;


/* WARNING: Type propagation algorithm not settling */

void fn_826D46F0(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  int *piVar16;
  int *piVar17;
  uint uStack_460;
  uint auStack_45c [3];
  uint uStack_450;
  uint uStack_44c;
  uint auStack_448 [2];
  int iStack_440;
  undefined1 auStack_43c [32];
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined2 uStack_3f8;
  undefined1 uStack_3f6;
  byte bStack_3f5;
  undefined4 uStack_3f4;
  int iStack_3f0;
  int iStack_3e0;
  undefined1 auStack_3dc [32];
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined2 uStack_398;
  undefined1 uStack_396;
  byte bStack_395;
  int iStack_390;
  int iStack_380;
  undefined1 auStack_37c [32];
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined2 uStack_338;
  undefined1 uStack_336;
  byte bStack_335;
  int iStack_320;
  undefined1 auStack_31c [32];
  undefined4 auStack_2fc [7];
  undefined4 uStack_2e0;
  undefined2 uStack_2d8;
  undefined1 auStack_2d6 [14];
  undefined1 auStack_2c8 [88];
  undefined1 auStack_270 [88];
  undefined1 auStack_218 [88];
  undefined1 auStack_1c0 [88];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [88];
  undefined1 auStack_b8 [88];
  int aiStack_60 [24];
  
  piVar14 = *(int **)(param_2 + 0x28);
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  auStack_45c[1] = 0;
  uVar11 = auStack_448[0];
  uVar10 = auStack_45c[0];
  uVar12 = uStack_450;
  uVar13 = uStack_44c;
  if (piVar14 == (int *)(param_2 + 0x24)) {
    return;
  }
  do {
    bVar1 = *(byte *)(piVar14 + 0xd);
    if (bVar1 == 0) {
      fn_826C6248(&iStack_440);
      piVar16 = piVar14 + 4;
      (**(code **)(*(int *)piVar14[4] + 0x20))((int *)piVar14[4],&iStack_440);
      piVar17 = &iStack_320;
      lVar15 = 7;
      do {
        fn_826C6248(piVar17);
        lVar15 = lVar15 + -1;
        piVar17 = piVar17 + 0x16;
      } while (-1 < lVar15);
      piVar17 = (int *)piVar14[9];
      if (piVar17 != (int *)*piVar16) {
        (**(code **)(*piVar17 + 0x20))(piVar17,&iStack_320);
        bStack_3f5 = bStack_3f5 | 1;
        uStack_400 = uStack_2e0;
      }
      iVar7 = piVar14[0xc];
      if (iVar7 != *piVar16) {
        iVar2 = piVar14[9];
        if (iVar2 != iVar7) {
          (**(code **)(*(int *)piVar14[0xc] + 0x20))((int *)piVar14[0xc],auStack_2c8);
        }
        bStack_3f5 = bStack_3f5 | 2;
        uStack_3fc = auStack_2fc[(uint)(iVar2 != iVar7) * 0x16 + 8];
      }
      iVar7 = piVar14[5];
      if (iVar7 != *piVar16) {
        if (piVar14[9] == iVar7) {
          iVar7 = 0;
        }
        else if (piVar14[0xc] == iVar7) {
          iVar7 = 1;
        }
        else {
          (**(code **)(*(int *)piVar14[5] + 0x20))((int *)piVar14[5],auStack_270);
          iVar7 = 2;
        }
        bStack_3f5 = bStack_3f5 | 4;
        uStack_41c = auStack_2fc[iVar7 * 0x16];
        uStack_418 = auStack_2fc[iVar7 * 0x16 + 1];
        uStack_414 = auStack_2fc[iVar7 * 0x16 + 2];
        uStack_410 = auStack_2fc[iVar7 * 0x16 + 3];
        uStack_40c = auStack_2fc[iVar7 * 0x16 + 4];
        uStack_408 = auStack_2fc[iVar7 * 0x16 + 5];
      }
      iVar7 = piVar14[6];
      if (iVar7 != *piVar16) {
        if (piVar14[9] == iVar7) {
          iVar7 = 0;
        }
        else if (piVar14[0xc] == iVar7) {
          iVar7 = 1;
        }
        else if (piVar14[5] == iVar7) {
          iVar7 = 2;
        }
        else {
          (**(code **)(*(int *)piVar14[6] + 0x20))((int *)piVar14[6],auStack_218);
          iVar7 = 3;
        }
        fn_82F68CC0(auStack_43c,auStack_31c + iVar7 * 0x58,0x20);
        bStack_3f5 = bStack_3f5 | 8;
      }
      iVar7 = piVar14[8];
      if (iVar7 != *piVar16) {
        if (piVar14[9] == iVar7) {
          iVar7 = 0;
        }
        else if (piVar14[0xc] == iVar7) {
          iVar7 = 1;
        }
        else if (piVar14[5] == iVar7) {
          iVar7 = 2;
        }
        else if (piVar14[6] == iVar7) {
          iVar7 = 3;
        }
        else {
          (**(code **)(*(int *)piVar14[8] + 0x20))((int *)piVar14[8],auStack_1c0);
          iVar7 = 4;
        }
        bStack_3f5 = bStack_3f5 | 0x80;
        uStack_3f6 = auStack_2d6[iVar7 * 0x58];
      }
      iVar7 = piVar14[10];
      if (iVar7 != *piVar16) {
        if (piVar14[9] == iVar7) {
          iVar7 = 0;
        }
        else if (piVar14[0xc] == iVar7) {
          iVar7 = 1;
        }
        else if (piVar14[5] == iVar7) {
          iVar7 = 2;
        }
        else if (piVar14[6] == iVar7) {
          iVar7 = 3;
        }
        else if (piVar14[8] == iVar7) {
          iVar7 = 4;
        }
        else {
          (**(code **)(*(int *)piVar14[10] + 0x20))((int *)piVar14[10],auStack_168);
          iVar7 = 5;
        }
        bStack_3f5 = bStack_3f5 | 0x40;
        uStack_3f8 = (&uStack_2d8)[iVar7 * 0x2c];
      }
      iVar7 = piVar14[0xb];
      if (iVar7 != *piVar16) {
        if (piVar14[9] == iVar7) {
          iVar7 = 0;
        }
        else if (piVar14[0xc] == iVar7) {
          iVar7 = 1;
        }
        else if (piVar14[5] == iVar7) {
          iVar7 = 2;
        }
        else if (piVar14[6] == iVar7) {
          iVar7 = 3;
        }
        else if (piVar14[8] == iVar7) {
          iVar7 = 4;
        }
        else if (piVar14[10] == iVar7) {
          iVar7 = 5;
        }
        else {
          (**(code **)(*(int *)piVar14[0xb] + 0x20))((int *)piVar14[0xb],auStack_110);
          iVar7 = 6;
        }
        bStack_3f5 = bStack_3f5 | 0x10;
        uStack_404 = auStack_2fc[iVar7 * 0x16 + 6];
      }
      iVar7 = piVar14[7];
      if (iVar7 != *piVar16) {
        if (piVar14[9] == iVar7) {
          iVar7 = 0;
        }
        else if (piVar14[0xc] == iVar7) {
          iVar7 = 1;
        }
        else if (piVar14[5] == iVar7) {
          iVar7 = 2;
        }
        else if (piVar14[6] == iVar7) {
          iVar7 = 3;
        }
        else if (piVar14[8] == iVar7) {
          iVar7 = 4;
        }
        else if (piVar14[10] == iVar7) {
          iVar7 = 5;
        }
        else if (piVar14[0xb] == iVar7) {
          iVar7 = 6;
        }
        else {
          (**(code **)(*(int *)piVar14[7] + 0x20))((int *)piVar14[7],auStack_b8);
          iVar7 = 7;
        }
        iVar2 = (&iStack_320)[iVar7 * 0x16];
        if (iVar2 != 0) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        }
        if (iStack_440 != 0) {
          fn_8267C498();
        }
        iStack_440 = (&iStack_320)[iVar7 * 0x16];
        bStack_3f5 = bStack_3f5 | 0x20;
      }
      piVar17 = aiStack_60;
      lVar15 = 7;
      do {
        piVar17 = piVar17 + -0x16;
        if (*piVar17 != 0) {
          fn_8267C498();
        }
        lVar15 = lVar15 + -1;
      } while (-1 < lVar15);
      iVar7 = (**(code **)(*param_1 + 0x5c))(param_1);
      if (iStack_3f0 == 0) {
        bVar3 = true;
        puVar9 = auStack_448;
        uVar11 = *(uint *)(*(int *)(iVar7 + 0x78) + 8);
        *(int *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1;
        auStack_448[0] = uVar11;
      }
      else {
        bVar6 = true;
        uStack_44c = fn_82694700((ulonglong)*(uint *)(iVar7 + 0x78) + 0x254);
        puVar9 = &uStack_44c;
        *(int *)(uStack_44c + 8) = *(int *)(uStack_44c + 8) + 1;
        uVar13 = uStack_44c;
      }
      uStack_460 = *puVar9;
      *(int *)(uStack_460 + 8) = *(int *)(uStack_460 + 8) + 1;
      if (bVar6) {
        lVar15 = (ulonglong)*(uint *)(uVar13 + 8) - 1;
        *(int *)(uVar13 + 8) = (int)lVar15;
        bVar6 = false;
        if (lVar15 == 0) {
          fn_826944C8(uVar13);
          bVar6 = false;
        }
      }
      if (bVar3) {
        bVar3 = false;
        lVar15 = (ulonglong)*(uint *)(uVar11 + 8) - 1;
        *(int *)(uVar11 + 8) = (int)lVar15;
        if (lVar15 == 0) {
          fn_826944C8(uVar11);
        }
      }
      uVar8 = 4;
      if ((*(byte *)((int)piVar14 + 0x35) & 2) != 0) {
        uVar8 = 6;
      }
      fn_826D2B68(param_1,&iStack_440,&uStack_460,uStack_3f4,0,piVar14[2],uVar8,0);
      lVar15 = (ulonglong)*(uint *)(uStack_460 + 8) - 1;
      *(int *)(uStack_460 + 8) = (int)lVar15;
      iVar7 = iStack_440;
      if (lVar15 == 0) {
        fn_826944C8(uStack_460);
        iVar7 = iStack_440;
      }
LAB_826d5908:
      if (iVar7 != 0) {
        fn_8267C498();
      }
    }
    else {
      if (bVar1 == 1) {
        fn_826C6248(&iStack_380);
        piVar16 = piVar14 + 4;
        (**(code **)(*(int *)piVar14[4] + 0x20))((int *)piVar14[4],&iStack_380);
        piVar17 = &iStack_320;
        lVar15 = 7;
        do {
          fn_826C6248(piVar17);
          lVar15 = lVar15 + -1;
          piVar17 = piVar17 + 0x16;
        } while (-1 < lVar15);
        piVar17 = (int *)piVar14[9];
        if (piVar17 != (int *)*piVar16) {
          (**(code **)(*piVar17 + 0x20))(piVar17,&iStack_320);
          bStack_335 = bStack_335 | 1;
          uStack_340 = uStack_2e0;
        }
        iVar7 = piVar14[0xc];
        if (iVar7 != *piVar16) {
          iVar2 = piVar14[9];
          if (iVar2 != iVar7) {
            (**(code **)(*(int *)piVar14[0xc] + 0x20))((int *)piVar14[0xc],auStack_2c8);
          }
          bStack_335 = bStack_335 | 2;
          uStack_33c = auStack_2fc[(uint)(iVar2 != iVar7) * 0x16 + 8];
        }
        iVar7 = piVar14[5];
        if (iVar7 != *piVar16) {
          if (piVar14[9] == iVar7) {
            iVar7 = 0;
          }
          else if (piVar14[0xc] == iVar7) {
            iVar7 = 1;
          }
          else {
            (**(code **)(*(int *)piVar14[5] + 0x20))((int *)piVar14[5],auStack_270);
            iVar7 = 2;
          }
          bStack_335 = bStack_335 | 4;
          uStack_35c = auStack_2fc[iVar7 * 0x16];
          uStack_358 = auStack_2fc[iVar7 * 0x16 + 1];
          uStack_354 = auStack_2fc[iVar7 * 0x16 + 2];
          uStack_350 = auStack_2fc[iVar7 * 0x16 + 3];
          uStack_34c = auStack_2fc[iVar7 * 0x16 + 4];
          uStack_348 = auStack_2fc[iVar7 * 0x16 + 5];
        }
        iVar7 = piVar14[6];
        if (iVar7 != *piVar16) {
          if (piVar14[9] == iVar7) {
            iVar7 = 0;
          }
          else if (piVar14[0xc] == iVar7) {
            iVar7 = 1;
          }
          else if (piVar14[5] == iVar7) {
            iVar7 = 2;
          }
          else {
            (**(code **)(*(int *)piVar14[6] + 0x20))((int *)piVar14[6],auStack_218);
            iVar7 = 3;
          }
          fn_82F68CC0(auStack_37c,auStack_31c + iVar7 * 0x58,0x20);
          bStack_335 = bStack_335 | 8;
        }
        iVar7 = piVar14[8];
        if (iVar7 != *piVar16) {
          if (piVar14[9] == iVar7) {
            iVar7 = 0;
          }
          else if (piVar14[0xc] == iVar7) {
            iVar7 = 1;
          }
          else if (piVar14[5] == iVar7) {
            iVar7 = 2;
          }
          else if (piVar14[6] == iVar7) {
            iVar7 = 3;
          }
          else {
            (**(code **)(*(int *)piVar14[8] + 0x20))((int *)piVar14[8],auStack_1c0);
            iVar7 = 4;
          }
          bStack_335 = bStack_335 | 0x80;
          uStack_336 = auStack_2d6[iVar7 * 0x58];
        }
        iVar7 = piVar14[10];
        if (iVar7 != *piVar16) {
          if (piVar14[9] == iVar7) {
            iVar7 = 0;
          }
          else if (piVar14[0xc] == iVar7) {
            iVar7 = 1;
          }
          else if (piVar14[5] == iVar7) {
            iVar7 = 2;
          }
          else if (piVar14[6] == iVar7) {
            iVar7 = 3;
          }
          else if (piVar14[8] == iVar7) {
            iVar7 = 4;
          }
          else {
            (**(code **)(*(int *)piVar14[10] + 0x20))((int *)piVar14[10],auStack_168);
            iVar7 = 5;
          }
          bStack_335 = bStack_335 | 0x40;
          uStack_338 = (&uStack_2d8)[iVar7 * 0x2c];
        }
        iVar7 = piVar14[0xb];
        if (iVar7 != *piVar16) {
          if (piVar14[9] == iVar7) {
            iVar7 = 0;
          }
          else if (piVar14[0xc] == iVar7) {
            iVar7 = 1;
          }
          else if (piVar14[5] == iVar7) {
            iVar7 = 2;
          }
          else if (piVar14[6] == iVar7) {
            iVar7 = 3;
          }
          else if (piVar14[8] == iVar7) {
            iVar7 = 4;
          }
          else if (piVar14[10] == iVar7) {
            iVar7 = 5;
          }
          else {
            (**(code **)(*(int *)piVar14[0xb] + 0x20))((int *)piVar14[0xb],auStack_110);
            iVar7 = 6;
          }
          bStack_335 = bStack_335 | 0x10;
          uStack_344 = auStack_2fc[iVar7 * 0x16 + 6];
        }
        iVar7 = piVar14[7];
        if (iVar7 != *piVar16) {
          if (piVar14[9] == iVar7) {
            iVar7 = 0;
          }
          else if (piVar14[0xc] == iVar7) {
            iVar7 = 1;
          }
          else if (piVar14[5] == iVar7) {
            iVar7 = 2;
          }
          else if (piVar14[6] == iVar7) {
            iVar7 = 3;
          }
          else if (piVar14[8] == iVar7) {
            iVar7 = 4;
          }
          else if (piVar14[10] == iVar7) {
            iVar7 = 5;
          }
          else if (piVar14[0xb] == iVar7) {
            iVar7 = 6;
          }
          else {
            (**(code **)(*(int *)piVar14[7] + 0x20))((int *)piVar14[7],auStack_b8);
            iVar7 = 7;
          }
          iVar2 = (&iStack_320)[iVar7 * 0x16];
          if (iVar2 != 0) {
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          }
          if (iStack_380 != 0) {
            fn_8267C498();
          }
          iStack_380 = (&iStack_320)[iVar7 * 0x16];
          bStack_335 = bStack_335 | 0x20;
        }
        piVar17 = aiStack_60;
        lVar15 = 7;
        do {
          piVar17 = piVar17 + -0x16;
          if (*piVar17 != 0) {
            fn_8267C498();
          }
          lVar15 = lVar15 + -1;
        } while (-1 < lVar15);
        fn_82699580(param_1 + 0x2a,&iStack_380);
        *(uint *)(param_1[0x28] + 0xb00) = *(uint *)(param_1[0x28] + 0xb00) | 0x400;
        iVar7 = iStack_380;
        goto LAB_826d5908;
      }
      if (bVar1 < 3) {
        fn_826C6248(&iStack_3e0);
        piVar16 = piVar14 + 4;
        (**(code **)(*(int *)piVar14[4] + 0x20))((int *)piVar14[4],&iStack_3e0);
        piVar17 = &iStack_320;
        lVar15 = 7;
        do {
          fn_826C6248(piVar17);
          lVar15 = lVar15 + -1;
          piVar17 = piVar17 + 0x16;
        } while (-1 < lVar15);
        piVar17 = (int *)piVar14[9];
        if (piVar17 != (int *)*piVar16) {
          (**(code **)(*piVar17 + 0x20))(piVar17,&iStack_320);
          bStack_395 = bStack_395 | 1;
          uStack_3a0 = uStack_2e0;
        }
        iVar7 = piVar14[0xc];
        if (iVar7 != *piVar16) {
          iVar2 = piVar14[9];
          if (iVar2 != iVar7) {
            (**(code **)(*(int *)piVar14[0xc] + 0x20))((int *)piVar14[0xc],auStack_2c8);
          }
          bStack_395 = bStack_395 | 2;
          uStack_39c = auStack_2fc[(uint)(iVar2 != iVar7) * 0x16 + 8];
        }
        iVar7 = piVar14[5];
        if (iVar7 != *piVar16) {
          if (piVar14[9] == iVar7) {
            iVar7 = 0;
          }
          else if (piVar14[0xc] == iVar7) {
            iVar7 = 1;
          }
          else {
            (**(code **)(*(int *)piVar14[5] + 0x20))((int *)piVar14[5],auStack_270);
            iVar7 = 2;
          }
          bStack_395 = bStack_395 | 4;
          uStack_3bc = auStack_2fc[iVar7 * 0x16];
          uStack_3b8 = auStack_2fc[iVar7 * 0x16 + 1];
          uStack_3b4 = auStack_2fc[iVar7 * 0x16 + 2];
          uStack_3b0 = auStack_2fc[iVar7 * 0x16 + 3];
          uStack_3ac = auStack_2fc[iVar7 * 0x16 + 4];
          uStack_3a8 = auStack_2fc[iVar7 * 0x16 + 5];
        }
        iVar7 = piVar14[6];
        if (iVar7 != *piVar16) {
          if (piVar14[9] == iVar7) {
            iVar7 = 0;
          }
          else if (piVar14[0xc] == iVar7) {
            iVar7 = 1;
          }
          else if (piVar14[5] == iVar7) {
            iVar7 = 2;
          }
          else {
            (**(code **)(*(int *)piVar14[6] + 0x20))((int *)piVar14[6],auStack_218);
            iVar7 = 3;
          }
          fn_82F68CC0(auStack_3dc,auStack_31c + iVar7 * 0x58,0x20);
          bStack_395 = bStack_395 | 8;
        }
        iVar7 = piVar14[8];
        if (iVar7 != *piVar16) {
          if (piVar14[9] == iVar7) {
            iVar7 = 0;
          }
          else if (piVar14[0xc] == iVar7) {
            iVar7 = 1;
          }
          else if (piVar14[5] == iVar7) {
            iVar7 = 2;
          }
          else if (piVar14[6] == iVar7) {
            iVar7 = 3;
          }
          else {
            (**(code **)(*(int *)piVar14[8] + 0x20))((int *)piVar14[8],auStack_1c0);
            iVar7 = 4;
          }
          bStack_395 = bStack_395 | 0x80;
          uStack_396 = auStack_2d6[iVar7 * 0x58];
        }
        iVar7 = piVar14[10];
        if (iVar7 != *piVar16) {
          if (piVar14[9] == iVar7) {
            iVar7 = 0;
          }
          else if (piVar14[0xc] == iVar7) {
            iVar7 = 1;
          }
          else if (piVar14[5] == iVar7) {
            iVar7 = 2;
          }
          else if (piVar14[6] == iVar7) {
            iVar7 = 3;
          }
          else if (piVar14[8] == iVar7) {
            iVar7 = 4;
          }
          else {
            (**(code **)(*(int *)piVar14[10] + 0x20))((int *)piVar14[10],auStack_168);
            iVar7 = 5;
          }
          bStack_395 = bStack_395 | 0x40;
          uStack_398 = (&uStack_2d8)[iVar7 * 0x2c];
        }
        iVar7 = piVar14[0xb];
        if (iVar7 != *piVar16) {
          if (piVar14[9] == iVar7) {
            iVar7 = 0;
          }
          else if (piVar14[0xc] == iVar7) {
            iVar7 = 1;
          }
          else if (piVar14[5] == iVar7) {
            iVar7 = 2;
          }
          else if (piVar14[6] == iVar7) {
            iVar7 = 3;
          }
          else if (piVar14[8] == iVar7) {
            iVar7 = 4;
          }
          else if (piVar14[10] == iVar7) {
            iVar7 = 5;
          }
          else {
            (**(code **)(*(int *)piVar14[0xb] + 0x20))((int *)piVar14[0xb],auStack_110);
            iVar7 = 6;
          }
          bStack_395 = bStack_395 | 0x10;
          uStack_3a4 = auStack_2fc[iVar7 * 0x16 + 6];
        }
        iVar7 = piVar14[7];
        if (iVar7 != *piVar16) {
          if (piVar14[9] == iVar7) {
            iVar7 = 0;
          }
          else if (piVar14[0xc] == iVar7) {
            iVar7 = 1;
          }
          else if (piVar14[5] == iVar7) {
            iVar7 = 2;
          }
          else if (piVar14[6] == iVar7) {
            iVar7 = 3;
          }
          else if (piVar14[8] == iVar7) {
            iVar7 = 4;
          }
          else if (piVar14[10] == iVar7) {
            iVar7 = 5;
          }
          else if (piVar14[0xb] == iVar7) {
            iVar7 = 6;
          }
          else {
            (**(code **)(*(int *)piVar14[7] + 0x20))((int *)piVar14[7],auStack_b8);
            iVar7 = 7;
          }
          iVar2 = (&iStack_320)[iVar7 * 0x16];
          if (iVar2 != 0) {
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          }
          if (iStack_3e0 != 0) {
            fn_8267C498();
          }
          iStack_3e0 = (&iStack_320)[iVar7 * 0x16];
          bStack_395 = bStack_395 | 0x20;
        }
        piVar17 = aiStack_60;
        lVar15 = 7;
        do {
          piVar17 = piVar17 + -0x16;
          if (*piVar17 != 0) {
            fn_8267C498();
          }
          lVar15 = lVar15 + -1;
        } while (-1 < lVar15);
        iVar7 = (**(code **)(*param_1 + 0x5c))(param_1);
        if (iStack_390 == 0) {
          bVar5 = true;
          puVar9 = auStack_45c;
          uVar10 = *(uint *)(*(int *)(iVar7 + 0x78) + 8);
          *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
          auStack_45c[0] = uVar10;
        }
        else {
          bVar4 = true;
          uStack_450 = fn_82694700((ulonglong)*(uint *)(iVar7 + 0x78) + 0x254);
          puVar9 = &uStack_450;
          *(int *)(uStack_450 + 8) = *(int *)(uStack_450 + 8) + 1;
          uVar12 = uStack_450;
        }
        auStack_45c[2] = *puVar9;
        *(int *)(auStack_45c[2] + 8) = *(int *)(auStack_45c[2] + 8) + 1;
        if (bVar4) {
          lVar15 = (ulonglong)*(uint *)(uVar12 + 8) - 1;
          *(int *)(uVar12 + 8) = (int)lVar15;
          bVar4 = false;
          if (lVar15 == 0) {
            fn_826944C8(uVar12);
            bVar4 = false;
          }
        }
        if (bVar5) {
          lVar15 = (ulonglong)*(uint *)(uVar10 + 8) - 1;
          *(int *)(uVar10 + 8) = (int)lVar15;
          bVar5 = false;
          if (lVar15 == 0) {
            fn_826944C8(uVar10);
            bVar5 = false;
          }
        }
        fn_826C9648(param_1,&iStack_3e0,auStack_45c + 2);
        lVar15 = (ulonglong)*(uint *)(auStack_45c[2] + 8) - 1;
        *(int *)(auStack_45c[2] + 8) = (int)lVar15;
        iVar7 = iStack_3e0;
        if (lVar15 == 0) {
          fn_826944C8(auStack_45c[2]);
          iVar7 = iStack_3e0;
        }
        goto LAB_826d5908;
      }
      if (bVar1 == 3) {
        auStack_45c[1] = 0x40000;
        fn_826C7400(param_1,piVar14[3],auStack_45c + 1);
      }
    }
    if (piVar14 == *(int **)(param_2 + 0x24)) {
      return;
    }
    piVar14 = (int *)piVar14[1];
  } while( true );
}

