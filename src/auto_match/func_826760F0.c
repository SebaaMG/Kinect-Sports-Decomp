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
extern unsigned int *auStack_74;
extern unsigned int *auStack_8c;
extern int fn_8262FEC8();
extern int fn_8263C550();
extern int fn_82675868();
extern int fn_82675B10();
extern int fn_8267A0E0();
extern int fn_8267A538();
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267FD48();
extern int fn_82680500();
extern int fn_826805A8();
extern int fn_826809F0();
extern int fn_82680AC8();
extern int fn_828F1498();
extern int fn_82A1DDC0();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_90;


undefined8 fn_826760F0(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar8;
  int iVar9;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar11;
  undefined8 uVar10;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint *puVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uStack_90;
  uint auStack_8c [3];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint auStack_74 [29];
  
  if (param_1[7] == 0) {
    return 0;
  }
  if (*(int *)(param_1[7] + 0xd8) == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x44))();
  if ((param_2 == (int *)0x0) || (param_2[4] == 0)) {
    fn_8267A538(param_1,0);
    return 1;
  }
  iVar17 = *param_2;
  if (iVar17 == 1) {
    iVar17 = 4;
    param_1[0xd] = 0x18280186;
  }
  else {
    if (iVar17 == 2) {
      iVar17 = 3;
      iVar9 = 0x1a200152;
    }
    else {
      if (iVar17 == 9) {
        iVar17 = 1;
        param_1[0xd] = 0x4900102;
        goto LAB_826761dc;
      }
      if (iVar17 == 10) {
        iVar17 = 1;
        iVar9 = 0x1a200052;
      }
      else if (iVar17 == 0xb) {
        iVar17 = 1;
        iVar9 = 0x1a200053;
      }
      else {
        if (iVar17 != 0xc) {
          return 0;
        }
        iVar17 = 1;
        iVar9 = 0x1a200054;
      }
    }
    param_1[0xd] = iVar9;
  }
LAB_826761dc:
  iVar9 = *param_2;
  uVar1 = param_2[1];
  uVar21 = (ulonglong)uVar1;
  uVar2 = param_2[2];
  uVar19 = (ulonglong)uVar2;
  if ((iVar9 < 10) || (bVar4 = true, 0xc < iVar9)) {
    bVar4 = false;
  }
  if ((bVar4) || (1 < (uint)param_2[6])) {
    uVar20 = 1;
    if ((ulonglong)(uint)param_2[6] != 0) {
      uVar20 = (ulonglong)(uint)param_2[6];
    }
  }
  else {
    uVar20 = 1;
    uVar5 = uVar21;
    for (uVar12 = uVar19; (1 < uVar5 || (1 < uVar12)); uVar12 = uVar12 >> 1) {
      uVar5 = uVar5 >> 1;
      uVar20 = uVar20 + 1;
    }
  }
  iVar8 = 0;
  if ((iVar9 < 10) || (bVar4 = true, 0xc < iVar9)) {
    bVar4 = false;
  }
  if ((!bVar4) && ((iVar9 == 2 || (iVar9 == 1)))) {
    uVar5 = fn_8267B890(lbl_831E7E64,0x30,0);
    if ((uVar5 & 0xffffffff) == 0) {
      iVar8 = 0;
    }
    else {
      iVar9 = *param_2;
      if (iVar9 == 2) {
        iVar9 = 1;
      }
      iVar8 = fn_826809F0(uVar5,iVar9,uVar21,uVar19);
    }
    if (iVar8 != 0) {
      if ((uVar21 == (uint)param_2[1]) && (uVar19 == (uint)param_2[2])) {
        if (*param_2 == 2) {
          uVar11 = 0;
          if (uVar19 != 0) {
            do {
              if (uVar21 != 0) {
                puVar14 = (undefined1 *)
                          (*(int *)(iVar8 + 0x14) * uVar11 + *(int *)(iVar8 + 0x18) + -1);
                puVar13 = (undefined1 *)(uVar11 * param_2[3] + param_2[4] + -1);
                uVar5 = uVar21;
                do {
                  puVar14[1] = puVar13[1];
                  puVar14[2] = puVar13[2];
                  puVar13 = puVar13 + 3;
                  puVar14[3] = *puVar13;
                  puVar14 = puVar14 + 4;
                  *puVar14 = 0xff;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar19);
          }
        }
        else if (*param_2 == 1) {
          fn_82A1DDC0(*(undefined4 *)(iVar8 + 0x18),param_2[4],
                            (longlong)param_2[3] * (longlong)param_2[2]);
        }
      }
      else {
        fn_82675B10(*(undefined4 *)(iVar8 + 0x18),uVar21,uVar19,*(undefined4 *)(iVar8 + 0x14),
                      param_2[4],(ulonglong)(uint)param_2[1],param_2[2],param_2[3]);
      }
      if (1 < (uint)param_2[6]) {
        uVar20 = 1;
      }
      if (*(int *)(iVar8 + 8) == 1) {
        uVar11 = 0;
        if (uVar19 != 0) {
          do {
            if (uVar21 != 0) {
              puVar15 = (uint *)(uVar11 * *(int *)(iVar8 + 0x14) + *(int *)(iVar8 + 0x18) + -4);
              uVar5 = uVar21;
              do {
                uVar3 = puVar15[1];
                puVar15 = puVar15 + 1;
                *puVar15 = uVar3 << 0x18 |
                           (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00 | uVar3 >> 0x18;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar19);
        }
        iVar17 = 4;
      }
    }
  }
  if (((uint)param_2[6] < 2) && (iVar17 != 1)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 1;
    if ((uVar20 - 1 & 0xffffffff) != 0) {
      uVar5 = uVar20 - 1;
    }
  }
  piVar16 = param_1 + 10;
  iVar9 = fn_8267A0E0(uVar21,uVar19,uVar5,0,param_1[0xd],piVar16);
  if (iVar9 != 0) {
LAB_8267648c:
    if (iVar8 != 0) {
      fn_8267C498(iVar8);
    }
    return 0;
  }
  iVar9 = *param_2;
  if ((iVar9 < 10) || (bVar4 = true, 0xc < iVar9)) {
    bVar4 = false;
  }
  uStack_78 = uVar1;
  auStack_74[0] = uVar2;
  if ((bVar4) || (1 < (uint)param_2[6])) {
    piVar18 = (int *)(iVar8 + 8);
    if (iVar8 == 0) {
      piVar18 = param_2;
    }
    iVar17 = param_1[0xd];
    uStack_80 = 0;
    uStack_7c = 0;
    if (iVar17 == 0x18280186) {
      iVar17 = 0x1a200086;
    }
    else if (iVar17 == 0x4900102) {
      iVar17 = 0x4900002;
    }
    uVar19 = 0;
    if ((uVar5 & 0xffffffff) != 0) {
      do {
        lVar6 = fn_8263C550(*piVar16,uVar19);
        if (lVar6 == 0) goto LAB_826765f8;
        uVar10 = fn_826805A8(piVar18,uVar19,auStack_8c,&uStack_90,0);
        auStack_74[0] = uStack_90;
        uStack_78 = auStack_8c[0];
        if ((*param_2 < 10) || (bVar4 = true, 0xc < *param_2)) {
          bVar4 = false;
        }
        if (bVar4) {
          uVar7 = fn_82680500(*piVar18,auStack_8c[0],1);
        }
        else {
          uVar7 = fn_8267FD48(*piVar18);
        }
        iVar9 = fn_828F1498(lVar6,0,0,uVar10,iVar17,uVar7,0,&uStack_80);
        fn_8262FEC8(lVar6);
        if (iVar9 != 0) goto LAB_826765f8;
        uVar19 = uVar19 + 1;
      } while ((uVar19 & 0xffffffff) < (uVar5 & 0xffffffff));
    }
    goto LAB_8267673c;
  }
  if ((iVar17 == 1) && (1 < (uVar5 & 0xffffffff))) {
    if (iVar8 == 0) {
      iVar8 = fn_82680AC8(iVar9,param_2[1],param_2[2],0);
      fn_82A1DDC0(*(undefined4 *)(iVar8 + 0x18),param_2[4],
                        (longlong)param_2[3] * (longlong)param_2[2]);
      goto LAB_8267651c;
    }
LAB_82676524:
    param_2 = (int *)(iVar8 + 8);
  }
  else {
LAB_8267651c:
    if (iVar8 != 0) goto LAB_82676524;
  }
  uVar19 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  if ((uVar5 & 0xffffffff) != 0) {
    do {
      lVar6 = fn_8263C550(*piVar16,uVar19);
      if (lVar6 == 0) goto LAB_826765f8;
      if (iVar17 == 1) {
        uVar10 = 0x4900002;
        uVar1 = uStack_78;
      }
      else {
        uVar1 = param_2[3];
        uVar10 = 0x1a200086;
      }
      iVar9 = fn_828F1498(lVar6,0,0,param_2[4],uVar10,uVar1,0,&uStack_80);
      fn_8262FEC8(lVar6);
      if (iVar9 != 0) goto LAB_826765f8;
      if ((uVar19 & 0xffffffff) < (uVar5 - 1 & 0xffffffff)) {
        fn_82675868(&uStack_78,auStack_74,param_2[4]);
      }
      uVar19 = uVar19 + 1;
    } while ((uVar19 & 0xffffffff) < (uVar5 & 0xffffffff));
  }
LAB_8267673c:
  fn_8267A538(param_1,0);
  if (iVar8 != 0) {
    fn_8267C498(iVar8);
  }
  return 1;
LAB_826765f8:
  (**(code **)(*param_1 + 0x44))(param_1);
  goto LAB_8267648c;
}

