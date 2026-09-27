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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_118;
extern unsigned int *auStack_120;
extern unsigned int *auStack_128;
extern unsigned int *auStack_130;
extern unsigned int *auStack_f0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_8225F160();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229ACA0();
extern int fn_8229AD30();
extern int fn_8229B0E0();
extern int fn_8229F4F8();
extern int fn_8229F5A8();
extern int fn_8229F618();
extern int fn_8229FAB8();
extern int fn_822ABA88();
extern int fn_822ABAF8();
extern int fn_822ABF20();
extern int fn_822ACAD8();
extern int fn_822AF138();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_822C9B00();
extern int fn_82359698();
extern int fn_82366AE8();
extern int fn_823693A0();
extern int fn_82369A00();
extern int fn_8236B080();
extern int fn_8236C428();
extern int fn_823C2148();
extern int fn_823C4238();
extern int fn_823C4850();
extern int fn_823C4F28();
extern int fn_823CA708();
extern int fn_823D3A38();
extern int fn_823D4CE0();
extern int fn_823D6368();
extern int fn_823E91A8();
extern int fn_824CCD80();
extern int fn_824FE498();
extern int fn_82522588();
extern int fn_82526C70();
extern int fn_825603C8();
extern int fn_825604A0();
extern int fn_826728E8();
extern int fn_82672C20();
extern int fn_82A1EFC0();
extern unsigned int iStack_114;
extern unsigned int iStack_11c;
extern unsigned int iStack_124;
extern unsigned int iStack_12c;
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82191F44;
extern unsigned int lbl_82195518;
extern unsigned int lbl_82196750;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D19D0;
extern unsigned int lbl_831D19D8;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_83276554;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_108;
extern unsigned int uStack_f8;


void fn_823BF2B8(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  int in_r0;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined8 uVar4;
  undefined8 *puVar12;
  ulonglong uVar13;
  float *pfVar15;
  ulonglong uVar14;
  int iVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_130 [4];
  int iStack_12c;
  undefined1 auStack_128 [4];
  int iStack_124;
  undefined1 auStack_120 [4];
  int iStack_11c;
  undefined1 auStack_118 [4];
  int iStack_114;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [112];

  param_1[0x381] = 0;
  param_1[899] = 0;
  param_1[0x382] = 1;
  dVar21 = (double)lbl_821CA460;
  *(float *)(param_1[0x4d8] + 4) = lbl_821CA460;
  iVar6 = 0;
  *(undefined1 *)(param_1 + 0x4d4) = 0;
  param_1[0x10c] = 0;
  param_1[0x3c] = 1;
  fVar2 = lbl_821CC160;
  dVar23 = (double)lbl_821CC160;
  do {
    iVar7 = 0;
    lVar19 = 7;
    do {
      param_1[(iVar6 + iVar7) * 3 + 0xdc] = (int)fVar2;
      param_1[(iVar6 + iVar7) * 3 + 0xdd] = (int)fVar2;
      param_1[(iVar6 + 0x4a + iVar7) * 3] = 0;
      iVar7 = iVar7 + 1;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    iVar6 = iVar6 + 7;
  } while (iVar6 < 0xe);
  fn_8236C428(param_1);
  param_1[0x3bf] = (int)(float)dVar23;
  param_1[0x3b4] = (int)(float)dVar23;
  puVar9 = (undefined4 *)((uint)(param_1 + 0x3a4) & 0xfffffff0);
  *puVar9 = in_register_000104d0;
  puVar9[1] = in_register_000104d4;
  puVar9[2] = in_register_000104d8;
  puVar9[3] = in_vr77;
  param_1[0x3aa] = 0;
  piVar10 = param_1 + 0x3b8;
  param_1[0x3b8] = -1;
  param_1[0x3a8] = -1;
  puVar9 = (undefined4 *)((uint)(param_1 + 0x3ac) & 0xfffffff0);
  *puVar9 = in_register_000104d0;
  puVar9[1] = in_register_000104d4;
  puVar9[2] = in_register_000104d8;
  puVar9[3] = in_vr77;
  param_1[0x3be] = 2;
  puVar9 = (undefined4 *)((uint)(param_1 + 0x3b0) & 0xfffffff0);
  *puVar9 = in_register_000104d0;
  puVar9[1] = in_register_000104d4;
  puVar9[2] = in_register_000104d8;
  puVar9[3] = in_vr77;
  param_1[0x3a9] = 3;
  for (piVar8 = param_1 + 0x3b5; piVar8 != piVar10; piVar8 = piVar8 + 1) {
    *piVar8 = 0;
  }
  fn_8236B080(param_1);
  pfVar15 = (float *)(param_1 + 0x4db);
  lVar19 = 3;
  do {
    pfVar15[1] = 0.0;
    pfVar15 = pfVar15 + 2;
    *pfVar15 = (float)dVar23;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  fn_824FE498(param_1[900]);
  fn_823C2148(param_1,1,1);
  if (param_1[0x268] != 0) {
    *(undefined4 *)(param_1[0x268] + 0x120) = 0;
  }
  param_1[0x268] = 0;
  param_1[0x269] = 0;
  param_1[0x26a] = 0;
  param_1[0x26d] = -1;
  param_1[0x26c] = -1;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  if ((param_1[0x107] != 0) || (param_1[0x108] != -1)) {
    param_1[0x10a] = (int)(float)dVar23;
    param_1[0x107] = 0;
    param_1[0x108] = -1;
    param_1[0x109] = -1;
  }
  puVar9 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar11 = *puVar9;
  uVar24 = puVar9[1];
  uVar25 = puVar9[2];
  uVar26 = puVar9[3];
  param_1[0x3bc] = (int)(float)dVar23;
  puVar9 = (undefined4 *)((uint)(param_1 + 0x118) & 0xfffffff0);
  *puVar9 = uVar11;
  puVar9[1] = uVar24;
  puVar9[2] = uVar25;
  puVar9[3] = uVar26;
  fn_82A1EFC0(param_1 + 0x424,0,0x2a0);
  param_1[0x352] = -1;
  iVar6 = 0;
  param_1[0x389] = 0;
  if ((((int *)param_1[2])[1] - *(int *)param_1[2] & 0xfffffffcU) != 0) {
    iVar16 = 0;
    iVar7 = 0x59;
    do {
      piVar8 = *(int **)(*(int *)param_1[2] + iVar16);
      *(uint *)(*(int *)(piVar8[4] * 4 + *piVar8) + 0x18) =
           (uint)LZCOUNT(*(int *)(*(int *)(piVar8[4] * 4 + *piVar8) + 0x10) - param_1[0x389]) >> 5;
      iVar5 = *(int *)(piVar8[4] * 4 + *piVar8);
      fn_82526C70(iVar5 + 0x28,0x20,0xffffffff821ac494);
      if (*(int *)(iVar5 + 0x18) == 0) {
        uVar3 = 0xffffffff821ac49c;
      }
      else {
        uVar3 = fn_822ABF20(iVar5);
      }
      fn_822ABAF8(iVar5,uVar3);
      fn_822AF138(*(undefined4 *)(iVar16 + param_1[3]),5);
      if ((iVar6 != param_1[0x389]) || (uVar3 = 0x1b, param_1[0x130] != 0)) {
        uVar3 = 0x16;
      }
      uVar17 = 0;
      if (*(int *)(*(int *)(piVar8[4] * 4 + *piVar8) + 8) != 0) {
        do {
          param_1[(iVar7 + (int)uVar17) * 0xc] = (int)uVar17;
          iVar5 = fn_822ABA88(*(undefined4 *)(piVar8[4] * 4 + *piVar8),uVar17);
          fn_822AF138(*(undefined4 *)(iVar5 + 0x110),uVar3);
          fn_822C9B00(*(undefined4 *)(iVar5 + 0x114));
          (**(code **)(**(int **)(iVar5 + 0x114) + 4))();
          uVar17 = uVar17 + 1;
        } while ((uVar17 & 0xffffffff) < (ulonglong)*(uint *)(*(int *)(piVar8[4] * 4 + *piVar8) + 8)
                );
      }
      iVar6 = iVar6 + 1;
      iVar16 = iVar16 + 4;
      iVar7 = iVar7 + 7;
    } while (iVar6 < ((int *)param_1[2])[1] - *(int *)param_1[2] >> 2);
  }
  fn_82359698(param_1,1);
  uVar3 = 1;
  piVar8 = *(int **)(param_1[0x389] * 4 + *(int *)param_1[2]);
  if (param_1[0x130] == 0) {
    uVar3 = 5;
  }
  uVar3 = fn_822ABA88(*(undefined4 *)(piVar8[4] * 4 + *piVar8),uVar3);
  fn_823693A0(param_1,uVar3);
  iVar6 = param_1[0x130];
  if (iVar6 != 0) {
    if (*(char *)(iVar6 + 0x148) == '\x01') {
      iVar6 = *(int *)(*(int *)param_1[300] + 0xd4);
      if (((*(int *)(iVar6 + 0x2c) != 2) || (*(int *)(iVar6 + 0x30) != 0)) ||
         (*(int *)(iVar6 + 0x34) != 0)) {
        *(undefined4 *)(iVar6 + 0x30) = 0;
        *(undefined4 *)(iVar6 + 0x34) = 0;
        *(undefined4 *)(iVar6 + 0x2c) = 2;
        fn_8229F4F8(*(undefined4 *)(iVar6 + 0xc),3);
        if (*(int *)(*(int *)(iVar6 + 0xc) + 0x58) == 0) {
          fn_8229F5A8();
        }
      }
      *piVar10 = 0;
      param_1[0x3b9] = 0;
      fn_82359698(param_1,0xc);
      fn_823D3A38(param_1[0x388],*piVar10,param_1[0x3b9]);
      iVar6 = *piVar10 * 4;
      uVar1 = (uint)((ulonglong)LZCOUNT(*piVar10) >> 3) & 4;
      piVar8 = *(int **)(iVar6 + *(int *)param_1[2]);
      uVar11 = *(undefined4 *)(uVar1 + *(int *)param_1[2]);
      fn_822ACAD8(*(undefined4 *)(*(int *)(piVar8[4] * 4 + *piVar8) + 0x48),0xffffffff821ac494
                        ,0xffffffff821af8ec);
      fn_822AF138(*(undefined4 *)(iVar6 + param_1[3]),9);
      fn_822AF138(*(undefined4 *)(uVar1 + param_1[3]),10);
      fn_823E91A8(param_1,piVar8,uVar11,param_1[0x3b9]);
      uVar3 = fn_822ABA88(*(undefined4 *)(piVar8[4] * 4 + *piVar8),param_1[0x3b9]);
      fn_823693A0(param_1,uVar3);
      fn_823C4850(param_1,piVar8);
      fn_823C4850(param_1,uVar11);
      uVar3 = fn_822ABA88(*(undefined4 *)(piVar8[4] * 4 + *piVar8),param_1[0x3b9]);
      fn_82369A00(param_1,param_1[900],uVar3,2);
    }
    else if (*(char *)(iVar6 + 0x148) == '\x02') {
      iVar7 = *(int *)(*(int *)param_1[300] + 0xd4);
      if (*(int *)(iVar6 + 0x168) < 1) {
        if (((*(int *)(iVar7 + 0x2c) != 3) || (*(int *)(iVar7 + 0x30) != 0)) ||
           (*(int *)(iVar7 + 0x34) != 0)) {
          *(undefined4 *)(iVar7 + 0x2c) = 3;
          uVar3 = 3;
          goto LAB_823bfbd4;
        }
      }
      else if (((*(int *)(iVar7 + 0x2c) != 1) || (*(int *)(iVar7 + 0x30) != 0)) ||
              (*(int *)(iVar7 + 0x34) != 0)) {
        *(undefined4 *)(iVar7 + 0x2c) = 1;
        uVar3 = 4;
LAB_823bfbd4:
        *(undefined4 *)(iVar7 + 0x30) = 0;
        *(undefined4 *)(iVar7 + 0x34) = 0;
        fn_8229F4F8(*(undefined4 *)(iVar7 + 0xc),uVar3);
        if (*(int *)(*(int *)(iVar7 + 0xc) + 0x58) == 0) {
          fn_8229F5A8();
        }
      }
      *piVar10 = 1;
      param_1[0x3b9] = 1;
      fn_82359698(param_1,0xb);
      fn_823D4CE0(param_1[0x388],*piVar10,param_1[0x3b9]);
      fn_823C4238(param_1);
    }
    piVar8 = (int *)param_1[0xc];
    if (piVar8 != (int *)param_1[0xd]) {
      dVar22 = (double)lbl_8218EC10;
      do {
        iVar6 = *piVar8;
        if (*(int *)(iVar6 + 0x22c) != 1) {
          uVar3 = fn_824CCD80(*(undefined4 *)(iVar6 + 0x10));
          fn_825603C8(uVar3,iVar6 + 0x20,1);
          *(undefined4 *)(iVar6 + 0x22c) = 1;
        }
        piVar10 = (int *)fn_82522588(auStack_120,piVar8);
        iVar6 = *piVar10;
        *(undefined4 *)(iVar6 + 0x2a4) = 0;
        fn_823CA708(iVar6,3);
        iVar7 = *(int *)(iVar6 + 0x260);
        *(undefined4 *)(iVar6 + 0x294) = 0;
        if (iVar7 < 2) {
          iVar7 = 2;
        }
        *(int *)(iVar6 + 0x260) = iVar7;
        if (iStack_11c != 0) {
          fn_822315A0();
        }
        puVar9 = (undefined4 *)fn_82522588(auStack_118,piVar8);
        (**(code **)(*(int *)*puVar9 + 4))(dVar22);
        if (iStack_114 != 0) {
          fn_822315A0();
        }
        piVar8 = piVar8 + 2;
      } while (piVar8 != (int *)param_1[0xd]);
    }
    goto LAB_823bfcf8;
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 0x50) = 1;
  }
  param_1[0x39c] = 0;
  param_1[0x39b] = 0;
  iVar6 = (**(code **)(*param_1 + 200))(param_1);
  if (iVar6 == 1) {
    iVar7 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar7 = fn_82250A18();
    }
    iVar16 = 1;
    if (*(char *)(iVar7 + 4) != '\0') goto LAB_823bf700;
  }
  else {
LAB_823bf700:
    iVar16 = 0;
  }
  uVar1 = (uint)LZCOUNT(iVar6) >> 5;
  iVar7 = *(int *)(*(int *)param_1[300] + 0xd4);
  if (((*(int *)(iVar7 + 0x2c) != 0) || (*(int *)(iVar7 + 0x30) != iVar16)) ||
     (*(uint *)(iVar7 + 0x34) != uVar1)) {
    *(int *)(iVar7 + 0x30) = iVar16;
    *(uint *)(iVar7 + 0x34) = uVar1;
    *(undefined4 *)(iVar7 + 0x2c) = 0;
    if (iVar16 == 0) {
      uVar3 = 8;
      if (uVar1 == 0) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 9;
    }
    fn_8229F4F8(*(undefined4 *)(iVar7 + 0xc),uVar3);
    if (*(int *)(*(int *)(iVar7 + 0xc) + 0x58) == 0) {
      fn_8229F5A8();
    }
  }
  if (iVar6 == 0) {
    iVar6 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar6 = fn_82250A18();
    }
    if (*(char *)(iVar6 + 4) == '\0') {
      iVar6 = *(int *)param_1[0xc];
      if (*(int *)(iVar6 + 0x22c) != 1) {
        uVar3 = fn_824CCD80(*(undefined4 *)(iVar6 + 0x10));
        fn_825603C8(uVar3,iVar6 + 0x20,1);
        *(undefined4 *)(iVar6 + 0x22c) = 1;
      }
      iVar6 = *(int *)(param_1[0xc] + 8);
    }
    else {
      fn_82366AE8(*(undefined4 *)param_1[0xc],param_1[0x33] == 0);
      iVar6 = *(int *)(param_1[0xc] + 8);
      if (*(int *)(iVar6 + 0x22c) != 0) {
        fn_825604A0(iVar6 + 0x20);
        *(undefined4 *)(iVar6 + 0x22c) = 0;
      }
      fn_82366AE8(*(undefined4 *)(param_1[0xc] + 0x10),param_1[0x33] == 1);
      iVar6 = *(int *)(param_1[0xc] + 0x18);
    }
    if (*(int *)(iVar6 + 0x22c) != 0) {
      fn_825604A0(iVar6 + 0x20);
      *(undefined4 *)(iVar6 + 0x22c) = 0;
    }
  }
  else if (iVar6 == 1) {
    iVar6 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar6 = fn_82250A18();
    }
    if (*(char *)(iVar6 + 4) == '\0') {
      iVar6 = *(int *)param_1[0xc];
      if (*(int *)(iVar6 + 0x22c) != 1) {
        uVar3 = fn_824CCD80(*(undefined4 *)(iVar6 + 0x10));
        fn_825603C8(uVar3,iVar6 + 0x20,1);
        *(undefined4 *)(iVar6 + 0x22c) = 1;
      }
      iVar6 = *(int *)(param_1[0xc] + 8);
      goto LAB_823bf7fc;
    }
  }
  else if (iVar6 == 3) {
    iVar6 = *(int *)param_1[0xc];
LAB_823bf7fc:
    if (*(int *)(iVar6 + 0x22c) != 1) {
      uVar3 = fn_824CCD80(*(undefined4 *)(iVar6 + 0x10));
      fn_825603C8(uVar3,iVar6 + 0x20,1);
      *(undefined4 *)(iVar6 + 0x22c) = 1;
    }
  }
  uVar17 = (ulonglong)(uint)param_1[0xc];
  if (uVar17 != (uint)param_1[0xd]) {
    dVar22 = (double)lbl_8218EC10;
    do {
      piVar8 = (int *)fn_82522588(auStack_130,uVar17);
      iVar6 = *piVar8;
      iVar7 = *(int *)(iVar6 + 0x290);
      *(undefined4 *)(iVar6 + 0x2a4) = 0;
      if (iVar7 != 0x16) {
        if ((iVar7 == 5) || (iVar7 == 0x11)) {
          *(undefined4 *)(iVar6 + 0x368) = 1;
        }
        iVar7 = *(int *)(iVar6 + 0x260);
        *(undefined4 *)(iVar6 + 0x364) = 0;
        *(undefined4 *)(iVar6 + 0x290) = 0x16;
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        *(float *)(iVar6 + 0x29c) = (float)dVar23;
        *(int *)(iVar6 + 0x260) = iVar7;
      }
      iVar7 = *(int *)(iVar6 + 0x260);
      *(undefined4 *)(iVar6 + 0x294) = 0;
      if (iVar7 < 2) {
        iVar7 = 2;
      }
      *(int *)(iVar6 + 0x260) = iVar7;
      if (iStack_12c != 0) {
        fn_822315A0();
      }
      puVar9 = (undefined4 *)fn_82522588(auStack_128,uVar17);
      (**(code **)(*(int *)*puVar9 + 4))(dVar22);
      if (iStack_124 != 0) {
        fn_822315A0();
      }
      uVar17 = uVar17 + 8;
    } while ((uVar17 & 0xffffffff) != (ulonglong)(uint)param_1[0xd]);
  }
  param_1[0x4cc] = lbl_82191F44;
  param_1[0x4cd] = (int)(float)dVar23;
LAB_823bfcf8:
  if ((param_2 == 0) && (param_3 == 0)) {
    lbl_83276554 = lbl_83276554 + 1;
    fn_823C4F28(param_1);
  }
  param_1[0x120] = (int)(float)dVar23;
  param_1[0x122] = 0;
  param_1[0x11f] = (int)(float)dVar23;
  param_1[0x121] = param_2;
  param_1[0x390] = lbl_831D19D0;
  if (param_1[0x130] == 0) {
    iVar6 = param_1[0x12f];
    puVar9 = (undefined4 *)(iVar6 + -4);
    lVar19 = 0x18;
    do {
      puVar9 = puVar9 + 1;
      *puVar9 = 0;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    *(undefined4 *)(iVar6 + 0x60) = 0;
    *(undefined4 *)(iVar6 + 100) = 0;
    puVar9 = (undefined4 *)(iVar6 + 100);
    lVar19 = 7;
    do {
      puVar9 = puVar9 + 1;
      *puVar9 = 0;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    puVar9 = (undefined4 *)(iVar6 + 0x80);
    lVar19 = 0x18;
    do {
      puVar9 = puVar9 + 1;
      *puVar9 = 0;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    *(undefined4 *)(iVar6 + 0xe4) = 0;
    *(undefined4 *)(iVar6 + 0xe8) = 0;
    puVar9 = (undefined4 *)(iVar6 + 0xe8);
    lVar19 = 7;
    do {
      puVar9 = puVar9 + 1;
      *puVar9 = 0;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    puVar9 = *(undefined4 **)(*(int *)(*(int *)param_1[300] + 0xd4) + 0xc);
    if (puVar9[0x16] == 0) {
      puVar9[4] = 1;
      piVar8 = &iStack_11c;
      lVar19 = 2;
      do {
        piVar8[3] = 0;
        piVar8 = piVar8 + 4;
        *piVar8 = 0;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fn_82273CD8(auStack_110,3);
      uStack_108 = lbl_82195518;
      uVar3 = lbl_82195518;
      fn_82273CD8(auStack_100,3);
      uStack_f8 = uVar3;
      fn_82672C20(*puVar9,0xffffffff821ab868,auStack_110,2);
      puVar9[4] = 1;
      puVar18 = auStack_f0;
      lVar19 = 1;
      do {
        puVar18 = puVar18 + -0x10;
        fn_82273C88(puVar18);
        lVar19 = lVar19 + -1;
      } while (-1 < lVar19);
    }
    else {
      fn_8229FAB8(puVar9,0,0);
    }
    fn_8229B0E0((double)(float)param_1[0x11e],*(undefined4 *)(*(int *)param_1[300] + 0xd4));
    iVar6 = lbl_831D19D8;
    param_1[0x32] = param_1[0x11e];
    param_1[0x30] = -1;
    param_1[0x31] = param_1[0x11e];
    param_1[0x2f] = iVar6;
  }
  *(undefined4 *)(param_1[300] + 0xe0) = 1;
  *(undefined1 *)(param_1 + 0x380) = 0;
  uVar11 = (**(code **)(*param_1 + 200))(param_1);
  iVar6 = fn_8225F160();
  *(undefined4 *)(iVar6 + 8) = uVar11;
  fn_8229ACA0(*(undefined4 *)(*(int *)param_1[300] + 0xd4),param_1[0x34]);
  fn_8229F5A8(*(undefined4 *)(*(int *)(*(int *)param_1[300] + 0xd4) + 0xc));
  fn_8229F618(*(undefined4 *)(*(int *)(*(int *)param_1[300] + 0xd4) + 0xc));
  if ((param_1[0x130] == 0) && (iVar6 = fn_8225F160(), *(int *)(iVar6 + 8) == 0)) {
    piVar8 = (int *)**(int **)param_1[2];
    uVar3 = fn_822ABA88(*(undefined4 *)(piVar8[4] * 4 + *piVar8),1);
    uVar4 = fn_822ABA88(*(undefined4 *)(piVar8[4] * 4 + *piVar8),0);
    fn_822B67F8(uVar3);
    uVar3 = fn_822B98A8();
    fn_822B67F8(uVar4);
    uVar4 = fn_822B98A8();
    puVar9 = *(undefined4 **)(*(int *)(*(int *)param_1[300] + 0xd4) + 0xc);
    fn_826728E8(*puVar9,0xffffffff821ab778,uVar4);
    fn_826728E8(*puVar9,0xffffffff821ab788,uVar3);
    piVar8 = *(int **)(*(int *)param_1[2] + 4);
    uVar3 = fn_822ABA88(*(undefined4 *)(piVar8[4] * 4 + *piVar8),1);
    uVar4 = fn_822ABA88(*(undefined4 *)(piVar8[4] * 4 + *piVar8),0);
    fn_822B67F8(uVar3);
    uVar3 = fn_822B98A8();
    fn_822B67F8(uVar4);
    uVar4 = fn_822B98A8();
    puVar9 = *(undefined4 **)(*(int *)(*(int *)param_1[300] + 0xd4) + 0xc);
    fn_826728E8(*puVar9,0xffffffff821ab798,uVar4);
    fn_826728E8(*puVar9,0xffffffff821ab7a8,uVar3);
  }
  else {
    fn_822ABA88(*(undefined4 *)
                  (((int *)**(int **)param_1[2])[4] * 4 + *(int *)**(int **)param_1[2]),0);
    fn_822B67F8();
    uVar3 = fn_822B98A8();
    fn_8229AD30(*(undefined4 *)(*(int *)param_1[300] + 0xd4),0,uVar3);
    fn_822ABA88(*(undefined4 *)
                  ((*(int **)(*(int *)param_1[2] + 4))[4] * 4 + **(int **)(*(int *)param_1[2] + 4)),
                 0);
    fn_822B67F8();
    uVar3 = fn_822B98A8();
    fn_8229AD30(*(undefined4 *)(*(int *)param_1[300] + 0xd4),1,uVar3);
  }
  uVar13 = (ulonglong)(uint)param_1[0x131];
  iVar6 = fn_823D6368(auStack_f0);
  uVar14 = uVar13 + 0x380;
  uVar17 = uVar13;
  if ((uVar13 & 0xffffffff) != (uVar14 & 0xffffffff)) {
    do {
      puVar12 = (undefined8 *)(iVar6 + -8);
      lVar19 = uVar17 - 8;
      lVar20 = 8;
      do {
        puVar12 = puVar12 + 1;
        lVar19 = lVar19 + 8;
        *(undefined8 *)lVar19 = *puVar12;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      uVar17 = uVar17 + 0x40;
    } while ((uVar17 & 0xffffffff) != (uVar14 & 0xffffffff));
  }
  for (; (uVar14 & 0xffffffff) != (uVar13 + 0x3b8 & 0xffffffff); uVar14 = uVar14 + 4) {
    *(undefined4 *)uVar14 = 0;
  }
  iVar6 = fn_8225F160();
  if (*(int *)(iVar6 + 8) == 0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    param_1[0x26b] =
         (int)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar21) *
              lbl_821916FC);
  }
  return;
}
