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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82635B30();
extern int fn_82635BB0();
extern int fn_82635C30();
extern int fn_82635D20();
extern int fn_82635DB8();
extern int fn_82937A60();
extern int fn_8293C408();
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int lbl_8315ACF0;


undefined8 fn_8293C4C0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  ulonglong uVar9;
  char cVar11;
  int *piVar10;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  float *pfVar17;
  uint uVar18;
  longlong lVar19;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  float afStack_70 [28];
  
  uVar15 = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  iVar2 = *(int *)(param_2 + 0x34);
  if (iVar2 == 0xf5) {
    if (*(int *)(param_2 + 0x50) != 0) {
      fn_82937A60(param_1,0xffffffff82033164);
    }
    iVar2 = *(int *)(param_2 + 0x54);
    if (*(int *)(iVar2 + 0x10) != 2) {
      uVar5 = 0xffffffff820330ec;
LAB_8293cbb0:
      fn_82937A60(param_1,uVar5);
      return 0;
    }
    pfVar17 = afStack_70;
    piVar8 = (int *)(param_2 + 0x60);
    lVar19 = 4;
    do {
      iVar13 = *(int *)(*piVar8 + 0x10);
      if ((iVar13 == 2) || (iVar13 == 4)) {
        iVar13 = 2;
LAB_8293cb60:
        if (iVar13 == 5) goto LAB_8293cb08;
        fn_82937A60(param_1,0xffffffff82033140);
      }
      else {
        if ((iVar13 < 5) || (8 < iVar13)) goto LAB_8293cb60;
LAB_8293cb08:
        *pfVar17 = (float)*(double *)(*piVar8 + 0x18);
      }
      lVar19 = lVar19 + -1;
      piVar8 = piVar8 + 1;
      pfVar17 = pfVar17 + 1;
    } while (lVar19 != 0);
    uVar15 = *(uint *)(iVar2 + 0x18);
    uVar7 = 1 << (uVar15 & 0x1f);
    if ((*(uint *)(((uVar15 >> 5) + 0x36) * 4 + param_1) & uVar7) == 0) {
      iVar2 = (uVar15 >> 5) * 4;
      *(uint *)(iVar2 + param_1 + 0xd8) = *(uint *)(iVar2 + param_1 + 0xd8) | uVar7;
      uVar5 = fn_8293C408(param_1,1);
      fn_82635C30(uVar5,uVar15,afStack_70);
      return 0;
    }
    uVar5 = 0xffffffff82033110;
LAB_8293c8dc:
    fn_82937A60(param_1,uVar5,uVar15);
    return 0;
  }
  if (iVar2 == 0xf6) {
    if (*(int *)(param_2 + 0x50) != 0) {
      fn_82937A60(param_1,0xffffffff820332f4);
    }
    iVar2 = *(int *)(param_2 + 0x54);
    if (*(int *)(iVar2 + 0x10) != 7) {
      uVar5 = 0xffffffff8203318c;
      goto LAB_8293cbb0;
    }
    bVar6 = false;
    piVar8 = &iStack_80;
    piVar10 = (int *)(param_2 + 0x60);
    lVar19 = 4;
    do {
      iVar13 = *(int *)(*piVar10 + 0x10);
      if ((iVar13 == 2) || (iVar13 == 4)) {
        *piVar8 = *(int *)(*piVar10 + 0x18);
      }
      piVar10 = piVar10 + 1;
      piVar8 = piVar8 + 1;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    if ((iStack_80 < 0) || (0xff < iStack_80)) {
      fn_82937A60(param_1,0xffffffff820332b0);
      bVar6 = true;
    }
    if ((iStack_7c < 0) || (0xff < iStack_7c)) {
      fn_82937A60(param_1,0xffffffff82033268);
      bVar6 = true;
    }
    if ((iStack_78 < -0x80) || (0x7f < iStack_78)) {
      fn_82937A60(param_1,0xffffffff82033220);
      bVar6 = true;
    }
    if (iStack_74 != 0) {
      fn_82937A60(param_1,0xffffffff820331e4);
      bVar6 = true;
    }
    uVar15 = *(uint *)(iVar2 + 0x18);
    uVar7 = 1 << (uVar15 & 0x1f);
    if ((*(uint *)(((uVar15 >> 5) + 0x3e) * 4 + param_1) & uVar7) == 0) {
      if (bVar6) {
        return 0;
      }
      iVar2 = (uVar15 >> 5) * 4;
      *(uint *)(iVar2 + param_1 + 0xf8) = uVar7 | *(uint *)(iVar2 + param_1 + 0xf8);
      uVar5 = fn_8293C408(param_1,1);
      fn_82635BB0(uVar5,uVar15,&iStack_80);
      return 0;
    }
    uVar5 = 0xffffffff820331b4;
    goto LAB_8293c8dc;
  }
  if (iVar2 == 0xf7) {
    if (*(int *)(param_2 + 0x50) != 0) {
      fn_82937A60(param_1,0xffffffff82033370);
    }
    if (*(int *)(*(int *)(param_2 + 0x54) + 0x10) != 0xe) {
      uVar5 = 0xffffffff8203331c;
      goto LAB_8293cbb0;
    }
    uVar15 = *(uint *)(*(int *)(param_2 + 0x54) + 0x18);
    uVar7 = 1 << (uVar15 & 0x1f);
    iVar2 = *(int *)(*(int *)(param_2 + 0x60) + 0x18);
    if ((*(uint *)(((uVar15 >> 5) + 0x3f) * 4 + param_1) & uVar7) == 0) {
      iVar13 = (uVar15 >> 5) * 4;
      *(uint *)(iVar13 + param_1 + 0xfc) = uVar7 | *(uint *)(iVar13 + param_1 + 0xfc);
      uVar5 = fn_8293C408(param_1,1);
      fn_82635B30(uVar5,uVar15,iVar2 != 0);
      return 0;
    }
    uVar5 = 0xffffffff82033340;
    goto LAB_8293c8dc;
  }
  if (iVar2 != 0xf8) {
    return 0;
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    fn_82937A60(param_1,0xffffffff8203367c);
  }
  iVar2 = *(int *)(param_2 + 0x54);
  iVar13 = *(int *)(iVar2 + 0x10);
  uVar14 = (ulonglong)(*(uint *)(param_2 + 0x44) >> 0x16) & 1;
  uVar9 = (ulonglong)*(uint *)(param_2 + 0x4c);
  uVar3 = uVar9 & 0xf;
  uVar16 = (ulonglong)(*(uint *)(param_2 + 0x4c) >> 0x10) & 0xf;
  if ((*(uint *)(param_2 + 0x44) & 0x800000) != 0) {
    uVar14 = 2;
  }
  uVar7 = *(uint *)(iVar2 + 0x20);
  uVar18 = 0;
  do {
    uVar4 = uVar7 >> (uVar18 & 0x3f) & 7;
    if (uVar4 == 1) {
      uVar15 = uVar15 | 1;
    }
    else if (uVar4 == 2) {
      uVar15 = uVar15 | 2;
    }
    else if (uVar4 == 3) {
      uVar15 = uVar15 | 4;
    }
    else if (uVar4 == 4) {
      uVar15 = uVar15 | 8;
    }
    else {
      if (uVar4 == 5) {
        uVar5 = 0xffffffff820335d8;
        goto LAB_8293c61c;
      }
      if (uVar4 == 6) {
        uVar5 = 0xffffffff820335ec;
        goto LAB_8293c61c;
      }
      if (uVar4 == 7) {
        fn_82937A60(param_1,0xffffffff82033668);
      }
    }
    uVar18 = uVar18 + 3;
  } while ((int)uVar18 < 0xc);
  if ((*(int *)(param_1 + 0x40) == 0) && (iVar13 == 0)) {
    if ((uVar3 != 9) && ((uVar3 < 0xe || (0xf < uVar3)))) {
      uVar5 = 0xffffffff82033600;
      goto LAB_8293c61c;
    }
    uVar12 = (uVar9 & 0xf) * 0x10 + uVar16;
    uVar14 = uVar12 >> 5;
    uVar7 = 1 << ((uint)uVar12 & 0x1f);
    if ((*(uint *)(((int)uVar14 + 0x2d) * 4 + param_1) & uVar7) != 0) {
      if (uVar3 == 9) {
        uVar14 = 0xffffffff82031be0;
      }
      else if (uVar3 == 0xe) {
        uVar14 = 0xffffffff82031be8;
      }
      else {
        uVar14 = 0xffffffff82031bf4;
      }
      uVar5 = 0xffffffff820335b0;
      goto LAB_8293c69c;
    }
    iVar13 = (int)(uVar14 << 2);
    *(uint *)(iVar13 + param_1 + 0xb4) = uVar7 | *(uint *)(iVar13 + param_1 + 0xb4);
    uVar14 = (ulonglong)*(uint *)(iVar2 + 0x18);
    if (1 < uVar14) {
      uVar5 = 0xffffffff82033568;
      goto LAB_8293c61c;
    }
    iVar2 = *(uint *)(iVar2 + 0x18) + param_1;
    bVar1 = *(byte *)(iVar2 + 0xd4);
    uVar7 = bVar1 & uVar15;
    if (uVar7 == 0) {
      *(byte *)(iVar2 + 0xd4) = bVar1 | (byte)uVar15;
      uVar5 = fn_8293C408(param_1,1);
      fn_82635DB8(uVar5,uVar14,uVar15,(uVar9 & 0xf) << 4 | uVar16);
      return 0;
    }
    uVar5 = 0xffffffff82033520;
  }
  else {
    uVar16 = (uVar14 << 4 | uVar3) << 4 | uVar16;
    uVar9 = (uVar9 & 0xe) >> 1;
    uVar7 = 1 << ((uint)uVar16 & 0x1f);
    if ((*(uint *)(((int)uVar9 + 0x21) * 4 + param_1) & uVar7) != 0) {
      uVar5 = 0xffffffff820334e0;
      goto LAB_8293c61c;
    }
    iVar13 = (int)(uVar9 << 2);
    *(uint *)(iVar13 + param_1 + 0x84) = uVar7 | *(uint *)(iVar13 + param_1 + 0x84);
    uVar14 = (ulonglong)*(uint *)(iVar2 + 0x18);
    iVar13 = *(int *)(param_1 + 0x44);
    cVar11 = (-(iVar13 != 0) & 3U) + 0x6f;
    if (0xf < uVar14) {
      uVar14 = (ulonglong)cVar11;
      uVar5 = 0xffffffff820334b4;
      uVar16 = uVar14;
      goto LAB_8293c69c;
    }
    if (uVar3 == 9) {
      uVar5 = 0xffffffff82033468;
LAB_8293c61c:
      fn_82937A60(param_1,uVar5);
      return 0xffffffff80004005;
    }
    if (uVar3 == 0xe) {
      uVar5 = 0xffffffff82033410;
      goto LAB_8293c61c;
    }
    if (*(uint *)(iVar2 + 0x10) != (-(uint)(iVar13 == 0) & 6)) {
      if (iVar13 == 0) {
        uVar14 = 0xffffffff82032788;
      }
      else {
        uVar14 = 0xffffffff82032780;
      }
      uVar16 = (ulonglong)cVar11;
      uVar5 = 0xffffffff820333d8;
      goto LAB_8293c69c;
    }
    iVar2 = *(uint *)(iVar2 + 0x18) + param_1;
    bVar1 = *(byte *)(iVar2 + 0xa4);
    uVar7 = bVar1 & uVar15;
    if (uVar7 == 0) {
      *(byte *)(iVar2 + 0xa4) = bVar1 | (byte)uVar15;
      uVar5 = fn_8293C408(param_1,1);
      fn_82635D20(uVar5,uVar14,uVar15,uVar16);
      return 0;
    }
    uVar5 = 0xffffffff82033398;
  }
  uVar16 = ZEXT48((&lbl_8315ACF0)[uVar7]);
LAB_8293c69c:
  fn_82937A60(param_1,uVar5,uVar14,uVar16);
  return 0xffffffff80004005;
}

