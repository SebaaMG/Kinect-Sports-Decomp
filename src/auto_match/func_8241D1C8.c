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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_8227B5E0();
extern int fn_82292B40();
extern int fn_82293CA8();
extern int fn_8229A000();
extern int fn_8229AAF8();
extern int fn_8229AE10();
extern int fn_8229CFB8();
extern int fn_8229F618();
extern int fn_822ABA88();
extern int fn_823598B0();
extern int fn_82359928();
extern int fn_8235CC60();
extern int fn_82360BB0();
extern int fn_82414950();
extern int fn_82417F58();
extern int fn_82418250();
extern int fn_8241E390();
extern int fn_8241F350();
extern int fn_824BD9D8();
extern int fn_824CCFC8();
extern int fn_82536590();
extern int fn_82672C20();
extern int fn_8288B760();
extern unsigned int iStack_3c;
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;


void fn_8241D1C8(double param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  int iVar6;
  longlong lVar5;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  byte in_xer_so;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  fVar4 = lbl_821CC160;
  uVar7 = param_2[0xac];
  if (uVar7 == 0) {
    puVar14 = param_2 + 2;
    uVar7 = param_2[2];
    piVar10 = (int *)(param_2[6] * 0x1ac + uVar7);
    if (piVar10[9] != 0) {
      param_2[0xac] = 6;
      uVar7 = *(uint *)(*param_2 + 0xc60);
      param_2[0xae] = 1;
      param_2[0xad] = uVar7;
      piVar10[9] = 0;
      return;
    }
    uVar13 = 0;
    uVar11 = 0;
    uVar12 = (int)(param_2[3] - *puVar14) / 0x1ac;
    if (uVar12 != 0) {
      iVar6 = 0;
      do {
        if (((uVar11 == param_2[6]) || (*(int *)(iVar6 + uVar7) != *piVar10)) &&
           (*(int *)(iVar6 + uVar7 + 0x20) == 0)) {
          return;
        }
        uVar11 = uVar11 + 1;
        iVar6 = iVar6 + 0x1ac;
      } while (uVar11 < uVar12);
    }
    uVar7 = *param_2;
    if (param_2 == *(uint **)(uVar7 + 0x2b20)) {
      if (*(int *)(uVar7 + 0x2c9c) == 3) {
        fn_82536590(uVar7 + 0x1488,0);
      }
      *(undefined4 *)(uVar7 + 0x2c9c) = 1;
    }
    if (-1 < *(int *)(param_2[6] * 0x1ac + *puVar14 + 0xc)) {
      if (*(int *)(*(int *)(*param_2 + 0xd4) + 0x183c) == 0) {
        puVar8 = (undefined4 *)fn_8229AE10(auStack_40);
        fn_82672C20(*puVar8,0xffffffff821aa744,0,0);
        if (iStack_3c != 0) {
          fn_822315A0();
        }
      }
      else {
        fn_8229F618(*(undefined4 *)(*(int *)(*param_2 + 0xd4) + 0xc));
      }
    }
    if (param_2 == *(uint **)(*param_2 + 0x2b20)) {
      fn_8229CFB8(*(undefined4 *)(*(int *)(*param_2 + 0xd4) + 0x1854),0,0);
    }
    uVar7 = *param_2;
    if (param_2 == *(uint **)(uVar7 + 0x2b20)) {
      fn_823598B0(uVar7,0);
      fn_82359928(uVar7,0);
      *(undefined4 *)(uVar7 + 0xf0) = 0;
      if (*(int *)(*param_2 + 0xc00) != 0) {
        (**(code **)(*(int *)param_2[1] + 0x70))
                  ((int *)param_2[1],(ulonglong)param_2[6] * 0x1ac + (ulonglong)*puVar14);
        fn_8241F350(param_2,(ulonglong)param_2[6] * 0x1ac + (ulonglong)*puVar14);
      }
      uVar12 = 0;
      uVar7 = (int)(param_2[3] - *puVar14) / 0x1ac;
      if (uVar7 != 0) {
        iVar6 = 0;
        do {
          if (*(int *)(iVar6 + *puVar14 + 0x20) == 0) goto LAB_8241db0c;
          uVar12 = uVar12 + 1;
          iVar6 = iVar6 + 0x1ac;
        } while ((bool)((byte)((uVar12 < uVar7) << 3 | in_xer_so) >> 3));
      }
      (**(code **)(*(int *)param_2[1] + 100))();
      if ((*(int *)(*param_2 + 0xc00) == 0) && ((int)(param_2[3] - *puVar14) / 0x1ac != 0)) {
        lVar5 = 0;
        do {
          (**(code **)(*(int *)param_2[1] + 0x70))((int *)param_2[1],lVar5 + (ulonglong)*puVar14);
          fn_8241F350(param_2,lVar5 + (ulonglong)*puVar14);
          uVar13 = uVar13 + 1;
          lVar5 = lVar5 + 0x1ac;
        } while (uVar13 < (uint)((int)(param_2[3] - *puVar14) / 0x1ac));
      }
    }
LAB_8241db0c:
    if ((param_2 == *(uint **)(*param_2 + 0x2b20)) && (*(int *)(*param_2 + 0xc28) == 0)) {
      param_2[0xac] = 1;
      return;
    }
    fn_82418250(param_2,1,0);
    return;
  }
  if (uVar7 == 1) {
    iVar9 = 0;
    bVar3 = false;
    iVar6 = fn_82417F58(param_2);
    if (iVar6 != 0) {
      if (*(int *)(iVar6 + 0x24) == 0) {
        bVar3 = true;
        lVar5 = (ulonglong)*(uint *)(iVar6 + 0x29c) - 8;
        iVar9 = (int)lVar5 - ((*(uint *)(iVar6 + 0x29c) - 9) + (uint)(lVar5 == 0));
      }
      else {
        iVar9 = lbl_832975B0;
        if (lbl_832975B0 == 0) {
          iVar9 = fn_82250A18();
        }
        if (*(char *)(iVar9 + 4) == '\0') {
          if (*(int *)(iVar6 + 0x24) != 0) {
            if (*(int *)(iVar6 + 0x168) == 0) {
              uVar7 = *(uint *)(iVar6 + 0x16c);
            }
            else {
              uVar7 = fn_8288B760();
              uVar7 = uVar7 & 0xff;
            }
            if (((uVar7 != 0) && (*(int *)(iVar6 + 0x24) != 0)) &&
               (iVar6 = fn_824CCFC8(), iVar6 != 0)) goto LAB_8241d6fc;
          }
LAB_8241d84c:
          iVar9 = 0;
        }
        else {
LAB_8241d6fc:
          uVar7 = *param_2;
          if (((*(int *)(uVar7 + 0xc14) == 0) ||
              ((*(int *)(uVar7 + 0x2bb0) == 3 && (*(float *)(uVar7 + 0x2b34) == lbl_821CC160)))) ||
             (*(int *)(uVar7 + 0x2b3c) == 0)) {
            fVar4 = lbl_821CC160;
            if (*(int *)(uVar7 + 0x2b30) != 0) {
              fVar4 = *(float *)(uVar7 + 0x614);
            }
            if ((*(float *)(uVar7 + 0x2bb8) <= fVar4) &&
               (*(float *)(uVar7 + 0x2b24) <= lbl_821CC160)) goto LAB_8241d84c;
          }
          iVar9 = 1;
        }
      }
    }
    uVar7 = *param_2;
    if (param_2 == *(uint **)(uVar7 + 0x2b20)) {
      if (iVar9 != 0) {
        return;
      }
      iVar6 = fn_82360BB0(uVar7);
      if ((iVar6 == 0) && (!bVar3)) {
        return;
      }
      if (*(int *)(uVar7 + 0x2b40) != 0) {
        return;
      }
      if (param_2[0x9f] != 0) {
        return;
      }
      if (param_2[0xb3] != 0) {
        return;
      }
      if (param_2[0xc] != 0) {
        return;
      }
    }
    (**(code **)(*(int *)param_2[1] + 0x58))();
    uVar7 = *param_2;
    param_2[0xb7] = 2;
    if (*(int *)(uVar7 + 0xc44) == 0) {
      param_2[0xac] = 6;
      uVar7 = *(uint *)(uVar7 + 0xc60);
    }
    else {
      param_2[0x21] = 2;
      param_2[0x6d] = 5;
      fn_8235CC60(uVar7,1);
      if (param_2 == *(uint **)(*param_2 + 0x2b20)) {
        fn_8229A000(*(undefined4 *)(*(int *)(*param_2 + 0xd4) + 0x20));
      }
      (**(code **)(*(int *)param_2[1] + 0x50))();
      param_2[0xac] = 2;
      uVar7 = *(uint *)(*param_2 + 0x710);
    }
    goto LAB_8241d860;
  }
  if (uVar7 < 3) {
    fVar1 = -(float)((double)(float)param_2[0xad] - param_1);
    fVar2 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar2 = (float)((double)(float)param_2[0xad] - param_1);
    }
    param_2[0xad] = (uint)fVar2;
    if (fVar2 != fVar4) {
      return;
    }
    if (*(int *)(*param_2 + 0xc48) != 0) {
      fn_8241E390(param_2);
    }
    param_2[0x6d] = 0;
    fn_82536590((ulonglong)*param_2 + 0x14dc,0);
    param_2[0xac] = 3;
    uVar7 = *(uint *)(*param_2 + 0x714);
    goto LAB_8241d860;
  }
  if (uVar7 != 3) {
    if (4 < uVar7) {
      if (uVar7 != 5) {
        if (6 < uVar7) {
          return;
        }
        fVar1 = -(float)((double)(float)param_2[0xad] - param_1);
        fVar2 = lbl_821CC160;
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                      (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
          fVar2 = (float)((double)(float)param_2[0xad] - param_1);
        }
        param_2[0xad] = (uint)fVar2;
        if (fVar2 != fVar4) {
          return;
        }
        param_2[0xb7] = 2;
        param_2[0xac] = 7;
        return;
      }
      fVar1 = -(float)((double)(float)param_2[0xad] - param_1);
      fVar2 = lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar2 = (float)((double)(float)param_2[0xad] - param_1);
      }
      param_2[0xad] = (uint)fVar2;
      if (fVar2 != fVar4) {
        return;
      }
      param_2[0xac] = 6;
      uVar7 = *(uint *)(*param_2 + 0xc60);
      goto LAB_8241d860;
    }
    fVar1 = -(float)((double)(float)param_2[0xad] - param_1);
    fVar2 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar2 = (float)((double)(float)param_2[0xad] - param_1);
    }
    param_2[0xad] = (uint)fVar2;
    if (fVar2 != fVar4) {
      return;
    }
    if (param_2 == *(uint **)(*param_2 + 0x2b20)) {
      fn_8229AAF8(*(undefined4 *)(*param_2 + 0xd4));
    }
    if ((param_2[0xb2] == 0) && (param_2 == *(uint **)(*param_2 + 0x2b20))) {
      fn_824BD9D8(*(undefined4 *)(*param_2 + 0x90));
    }
    if (param_2[0xb2] != 0) {
      iVar6 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar6 = fn_82250A18();
      }
      if (*(char *)(iVar6 + 4) == '\0') {
        uVar7 = *(uint *)(*param_2 + 0x720);
        goto LAB_8241d384;
      }
    }
    uVar7 = *(uint *)(*param_2 + 0x71c);
LAB_8241d384:
    param_2[0xad] = uVar7;
    param_2[0xac] = 5;
    return;
  }
  uVar7 = *param_2;
  iVar6 = *(int *)(uVar7 + 0x184);
  if (iVar6 == 0) {
LAB_8241d3cc:
    iVar6 = 0;
  }
  else if (*(uint *)(iVar6 + 0xa48) < 2) {
    iVar6 = 1;
  }
  else {
    if (*(uint *)(iVar6 + 0xa48) == 6) goto LAB_8241d3cc;
    iVar6 = *(int *)(iVar6 + 0xa5c);
  }
  if (iVar6 != 0) {
    if (*(int *)(uVar7 + 0x184) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(uVar7 + 0x184) + 0xa58);
    }
    if (iVar6 == 0) {
      if (*(int *)(uVar7 + 0x184) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (uint)LZCOUNT(*(int *)(*(int *)(uVar7 + 0x184) + 0xa48) + -4) >> 5;
      }
      if (uVar7 == 0) {
        return;
      }
      if (param_2[0xad] == 0) {
        return;
      }
      fVar1 = -(float)((double)(float)param_2[0xad] - param_1);
      fVar2 = lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar2 = (float)((double)(float)param_2[0xad] - param_1);
      }
      param_2[0xad] = (uint)fVar2;
      if (fVar2 != fVar4) {
        return;
      }
      if (*(int *)(*param_2 + 0x184) == 0) {
        return;
      }
      fn_8227B5E0();
      return;
    }
  }
  if (*(int *)(uVar7 + 0x184) != 0) {
    iVar6 = *(int *)(uVar7 + 0x188);
    *(undefined4 *)(uVar7 + 0x188) = 0;
    *(undefined4 *)(uVar7 + 0x184) = 0;
    if (iVar6 != 0) {
      fn_822315A0();
    }
  }
  uVar7 = *param_2;
  if (*(int *)(uVar7 + 0xc48) == 0) {
    param_2[0xac] = 6;
    uVar7 = *(uint *)(uVar7 + 0xc60);
  }
  else {
    param_2[0x21] = 6;
    piVar10 = *(int **)(*(int *)(param_2[0xb0] * 0x1ac + param_2[2]) * 4 + **(int **)(uVar7 + 8));
    if (param_2 == *(uint **)(uVar7 + 0x2b20)) {
      lVar5 = fn_822ABA88((double)*(float *)(uVar7 + 0x718),
                           *(undefined4 *)(piVar10[4] * 4 + *piVar10),0);
      fn_82293CA8(*(undefined4 *)(uVar7 + 0xd4),param_2[0xb1],lVar5 + 0x30);
    }
    uVar7 = *param_2;
    if (param_2 == *(uint **)(uVar7 + 0x2b20)) {
      *(undefined4 *)(uVar7 + 0x2b30) = 0;
      *(undefined4 *)(uVar7 + 0x2b2c) = 0xd;
      *(undefined4 *)(uVar7 + 0x2b24) = lbl_8218EC10;
    }
    uVar7 = *param_2;
    if ((param_2 == *(uint **)(uVar7 + 0x2b20)) && (*(int *)(uVar7 + 0xc0c) != 0)) {
      fn_82536590(uVar7 + 0xe2c,0);
    }
    fn_82414950(*(undefined4 *)(*param_2 + 0x2b50),0,0x1a);
    fn_82536590((ulonglong)*param_2 + 0x14d0,0);
    fn_82292B40();
    param_2[0xac] = 4;
    uVar7 = *(uint *)(*param_2 + 0x718);
  }
LAB_8241d860:
  param_2[0xad] = uVar7;
  return;
}

