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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_8262FEC8();
extern int fn_8262FFB0();
extern int fn_8263B758();
extern int fn_8263C538();
extern int fn_8263C550();
extern int fn_8263C638();
extern int fn_8263C708();
extern int fn_8263C710();
extern int fn_828F2760();
extern int fn_828F2880();
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_f0;


ulonglong fn_828F29B0(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  bool bVar1;
  int iVar3;
  ulonglong uVar2;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uStack_f0;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined1 auStack_c0 [24];
  uint uStack_a8;
  uint uStack_a4;
  
  if ((param_1 & 0xffffffff) == 0) {
    return 0xffffffff8876086c;
  }
  iVar3 = fn_8262FFB0(param_1);
  if (iVar3 == 3) {
    uVar7 = (ulonglong)uStack_f0;
    uVar6 = param_1;
LAB_828f2a28:
    uVar5 = (ulonglong)uStack_f0;
  }
  else {
    if (iVar3 != 0x11) {
      if (iVar3 != 0x12) {
        return 0xffffffff8876086c;
      }
      uVar6 = (ulonglong)uStack_f0;
      uVar7 = param_1;
      goto LAB_828f2a28;
    }
    uVar6 = (ulonglong)uStack_f0;
    uVar7 = (ulonglong)uStack_f0;
    uVar5 = param_1;
  }
  if ((int)param_4 != -1) goto LAB_828f2a84;
  if (iVar3 == 3) {
    fn_8263B758(uVar6,0,auStack_c0);
    if (((uStack_a8 - 1 & uStack_a8) != 0) || ((uStack_a4 - 1 & uStack_a4) != 0)) {
      uVar4 = 0;
LAB_828f2bb8:
      if (uVar4 == 0) goto LAB_828f2a7c;
    }
  }
  else {
    if (iVar3 == 0x11) {
      fn_8263C708(uVar5,0,auStack_e0);
      if ((uStack_d0 - 1 & uStack_d0) != 0) goto LAB_828f2a7c;
      uStack_a8 = uStack_cc - 1 & uStack_cc;
    }
    else {
      uVar4 = uStack_f0;
      if (iVar3 != 0x12) goto LAB_828f2bb8;
      fn_8263B758(uVar7,0,auStack_c0);
      uStack_a8 = uStack_a8 - 1 & uStack_a8;
      uStack_c8 = uStack_a4;
    }
    if ((uStack_a8 != 0) || ((uStack_c8 - 1 & uStack_c8) != 0)) {
LAB_828f2a7c:
      param_4 = 0x80004;
      goto LAB_828f2a84;
    }
  }
  param_4 = 5;
LAB_828f2a84:
  if (iVar3 == 0x12) {
    param_4 = param_4 | 0x70000;
  }
  uVar8 = param_4 | 0x600000;
  if ((param_4 & 0x400000) == 0) {
    uVar8 = param_4 << 0x20 | param_4 & 0xff9fffff;
  }
  uVar2 = fn_8263C538(param_1);
  param_3 = -(ulonglong)(param_3 != 0xffffffffffffffff) & param_3;
  if ((uVar2 & 0xffffffff) <= (param_3 & 0xffffffff)) {
    return 0xffffffff8876086c;
  }
  uVar15 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar11 = 0;
  uVar9 = 6;
  if (iVar3 != 0x12) {
    uVar9 = 1;
  }
  if (((uVar8 & 0xff) == 2) || (bVar1 = false, (uVar8 & 0xff) == 5)) {
    bVar1 = true;
  }
  uVar10 = 0;
  uVar14 = uVar13;
  if (uVar9 != 0) {
    uVar17 = (ulonglong)uStack_f0;
    do {
      if (iVar3 == 3) {
        uVar15 = fn_8263C550(uVar6,param_3);
        uVar14 = uVar15;
LAB_828f2bf4:
        uVar17 = -(ulonglong)(uVar14 == 0) & 0xffffffff8007000e;
      }
      else {
        if (iVar3 == 0x11) {
          uVar12 = fn_8263C710(uVar5,param_3);
          uVar14 = uVar12;
          goto LAB_828f2bf4;
        }
        if (iVar3 == 0x12) {
          uVar15 = fn_8263C638(uVar7,uVar10,param_3);
          uVar14 = uVar15;
          goto LAB_828f2bf4;
        }
      }
      uVar14 = uVar13;
      uVar16 = param_3;
      if ((int)uVar17 < 0) goto LAB_828f2d88;
LAB_828f2d48:
      uVar16 = uVar16 + 1;
      uVar14 = uVar13;
      if ((uVar16 & 0xffffffff) < (uVar2 & 0xffffffff)) {
        if (iVar3 == 3) {
          uVar13 = fn_8263C550(uVar6,uVar16);
          uVar14 = uVar13;
LAB_828f2c64:
          uVar17 = -(ulonglong)(uVar14 == 0) & 0xffffffff8007000e;
          uVar14 = uVar13;
        }
        else {
          if (iVar3 == 0x11) {
            uVar11 = fn_8263C710(uVar5,uVar16);
            uVar14 = uVar11;
            goto LAB_828f2c64;
          }
          if (iVar3 == 0x12) {
            uVar13 = fn_8263C638(uVar7,uVar10,uVar16);
            uVar14 = uVar13;
            goto LAB_828f2c64;
          }
        }
        if (-1 < (int)uVar17) {
          if (iVar3 == 3) {
LAB_828f2c8c:
            uVar17 = fn_828F2760(uVar14,param_2,0,uVar15,param_2,0,uVar8,0);
          }
          else if (iVar3 == 0x11) {
            uVar17 = fn_828F2880(uVar11,param_2,0,uVar12,param_2,0,uVar8,0);
          }
          else if (iVar3 == 0x12) goto LAB_828f2c8c;
          if (-1 < (int)uVar17) {
            if (!bVar1) goto LAB_828f2d1c;
            if ((uVar15 & 0xffffffff) != 0) {
              fn_8262FEC8(uVar15);
            }
            if ((uVar12 & 0xffffffff) != 0) {
              fn_8262FEC8(uVar12);
            }
            uVar13 = 0;
            uVar12 = uVar11;
            uVar15 = uVar14;
            goto LAB_828f2d40;
          }
        }
        goto LAB_828f2d88;
      }
      if ((uVar15 & 0xffffffff) != 0) {
        fn_8262FEC8(uVar15);
        uVar15 = 0;
      }
      if ((uVar12 & 0xffffffff) != 0) {
        fn_8262FEC8(uVar12);
        uVar12 = 0;
      }
      uVar10 = uVar10 + 1;
    } while ((uVar10 & 0xffffffff) < uVar9);
  }
  uVar17 = 0;
LAB_828f2d88:
  if ((uVar15 & 0xffffffff) != 0) {
    fn_8262FEC8(uVar15);
  }
  if ((uVar12 & 0xffffffff) != 0) {
    fn_8262FEC8(uVar12);
  }
  if ((uVar14 & 0xffffffff) != 0) {
    fn_8262FEC8(uVar14);
  }
  if ((uVar11 & 0xffffffff) != 0) {
    fn_8262FEC8(uVar11);
    return uVar17;
  }
  return uVar17;
LAB_828f2d1c:
  uVar13 = uVar14;
  if ((uVar14 & 0xffffffff) != 0) {
    fn_8262FEC8(uVar14);
    uVar13 = 0;
  }
  if ((uVar11 & 0xffffffff) != 0) {
    fn_8262FEC8(uVar11);
LAB_828f2d40:
    uVar11 = 0;
  }
  goto LAB_828f2d48;
}

