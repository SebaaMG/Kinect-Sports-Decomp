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
extern int fn_82C8FB00();


int fn_830C10E0(int param_1,int param_2,longlong param_3,longlong param_4,longlong param_5,
                 longlong param_6,longlong param_7)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 *puVar23;
  longlong lVar24;
  undefined8 in_r0;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar29;
  longlong lVar28;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  short in_register_000103e0;
  short in_register_000103e2;
  short in_register_000103e4;
  short in_register_000103e6;
  short in_register_000103e8;
  short in_register_000103ea;
  short in_register_000103ec;
  short in_vr62;
  short in_register_000103f0;
  short in_register_000103f2;
  short in_register_000103f4;
  short in_register_000103f6;
  short in_register_000103f8;
  short in_register_000103fa;
  short in_register_000103fc;
  short in_vr63;
  
  uVar1 = *(ushort *)(param_1 + 0x32);
  uVar30 = (ulonglong)uVar1;
  uVar2 = *(ushort *)(param_1 + 0x4a);
  uVar3 = *(ushort *)(param_1 + 0x4c);
  piVar4 = *(int **)(param_1 + 0x160);
  lVar24 = uVar30 * 4;
  uVar5 = (int)(uint)uVar1 >> 1;
  lVar26 = uVar30 * 0x80 + param_5;
  if (1 < uVar1) {
    lVar31 = (uVar30 + 1) * 4 + (ulonglong)*(uint *)(param_1 + 0x15c);
    param_5 = param_5 - lVar26;
    lVar32 = uVar30 - 1;
    uVar33 = (ulonglong)*(uint *)(param_1 + 0x15c);
    do {
      lVar26 = lVar26 + 0x10;
      if ((*(int *)(uVar33 + 4) == 1) && (*(int *)uVar33 == 1)) {
        param_1 = fn_82C8FB00(param_5 + lVar26,uVar30 << 3);
      }
      if ((*(int *)lVar31 == 1) && (((int *)lVar31)[-1] == 1)) {
        param_1 = fn_82C8FB00(lVar26,uVar30 << 3);
      }
      lVar32 = lVar32 + -1;
      lVar31 = lVar31 + 4;
      uVar33 = uVar33 + 4;
    } while (lVar32 != 0);
  }
  iVar25 = (int)in_r0;
  if (1 < uVar5) {
    lVar31 = (longlong)(int)uVar5 + -1;
    lVar26 = param_7;
    do {
      lVar26 = lVar26 + 0x10;
      if ((piVar4[1] == 1) && (*piVar4 == 1)) {
        fn_82C8FB00((param_6 - param_7) + lVar26,lVar24);
        param_1 = fn_82C8FB00(lVar26,lVar24);
      }
      iVar25 = (int)in_r0;
      lVar31 = lVar31 + -1;
      piVar4 = piVar4 + 1;
    } while (lVar31 != 0);
  }
  iVar6 = (int)((uint)uVar1 << 3) >> 4;
  lVar26 = 0x10;
  do {
    lVar31 = (longlong)iVar6;
    iVar29 = param_2;
    if (iVar6 != 0) {
      do {
        altv207_13(in_vs43,in_vs41);
        altv207_13(in_vs32,in_vs43);
        uVar7 = (undefined1)in_register_000103e0;
        if (in_register_000103e0 < 0) {
          uVar7 = 0;
        }
        else if (0xff < in_register_000103e0) {
          uVar7 = 0xff;
        }
        uVar8 = (undefined1)in_register_000103e2;
        if (in_register_000103e2 < 0) {
          uVar8 = 0;
        }
        else if (0xff < in_register_000103e2) {
          uVar8 = 0xff;
        }
        uVar9 = (undefined1)in_register_000103e4;
        if (in_register_000103e4 < 0) {
          uVar9 = 0;
        }
        else if (0xff < in_register_000103e4) {
          uVar9 = 0xff;
        }
        uVar10 = (undefined1)in_register_000103e6;
        if (in_register_000103e6 < 0) {
          uVar10 = 0;
        }
        else if (0xff < in_register_000103e6) {
          uVar10 = 0xff;
        }
        uVar11 = (undefined1)in_register_000103e8;
        if (in_register_000103e8 < 0) {
          uVar11 = 0;
        }
        else if (0xff < in_register_000103e8) {
          uVar11 = 0xff;
        }
        uVar12 = (undefined1)in_register_000103ea;
        if (in_register_000103ea < 0) {
          uVar12 = 0;
        }
        else if (0xff < in_register_000103ea) {
          uVar12 = 0xff;
        }
        uVar13 = (undefined1)in_register_000103ec;
        if (in_register_000103ec < 0) {
          uVar13 = 0;
        }
        else if (0xff < in_register_000103ec) {
          uVar13 = 0xff;
        }
        uVar14 = (undefined1)in_vr62;
        if (in_vr62 < 0) {
          uVar14 = 0;
        }
        else if (0xff < in_vr62) {
          uVar14 = 0xff;
        }
        uVar15 = (undefined1)in_register_000103f0;
        if (in_register_000103f0 < 0) {
          uVar15 = 0;
        }
        else if (0xff < in_register_000103f0) {
          uVar15 = 0xff;
        }
        uVar16 = (undefined1)in_register_000103f2;
        if (in_register_000103f2 < 0) {
          uVar16 = 0;
        }
        else if (0xff < in_register_000103f2) {
          uVar16 = 0xff;
        }
        uVar17 = (undefined1)in_register_000103f4;
        if (in_register_000103f4 < 0) {
          uVar17 = 0;
        }
        else if (0xff < in_register_000103f4) {
          uVar17 = 0xff;
        }
        uVar18 = (undefined1)in_register_000103f6;
        if (in_register_000103f6 < 0) {
          uVar18 = 0;
        }
        else if (0xff < in_register_000103f6) {
          uVar18 = 0xff;
        }
        uVar19 = (undefined1)in_register_000103f8;
        if (in_register_000103f8 < 0) {
          uVar19 = 0;
        }
        else if (0xff < in_register_000103f8) {
          uVar19 = 0xff;
        }
        uVar20 = (undefined1)in_register_000103fa;
        if (in_register_000103fa < 0) {
          uVar20 = 0;
        }
        else if (0xff < in_register_000103fa) {
          uVar20 = 0xff;
        }
        uVar21 = (undefined1)in_register_000103fc;
        if (in_register_000103fc < 0) {
          uVar21 = 0;
        }
        else if (0xff < in_register_000103fc) {
          uVar21 = 0xff;
        }
        uVar22 = (undefined1)in_vr63;
        if (in_vr63 < 0) {
          uVar22 = 0;
        }
        else if (0xff < in_vr63) {
          uVar22 = 0xff;
        }
        puVar23 = (undefined1 *)(iVar25 + iVar29 & 0xfffffff0);
        *puVar23 = uVar7;
        puVar23[1] = uVar8;
        puVar23[2] = uVar9;
        puVar23[3] = uVar10;
        puVar23[4] = uVar11;
        puVar23[5] = uVar12;
        puVar23[6] = uVar13;
        puVar23[7] = uVar14;
        puVar23[8] = uVar15;
        puVar23[9] = uVar16;
        puVar23[10] = uVar17;
        puVar23[0xb] = uVar18;
        puVar23[0xc] = uVar19;
        puVar23[0xd] = uVar20;
        puVar23[0xe] = uVar21;
        puVar23[0xf] = uVar22;
        lVar31 = lVar31 + -1;
        iVar29 = iVar29 + 0x10;
      } while (lVar31 != 0);
    }
    lVar26 = lVar26 + -1;
    param_2 = (uint)uVar2 + param_2;
  } while (lVar26 != 0);
  lVar26 = (uVar30 & 0x3ffffffc) * 4;
  lVar31 = 8;
  do {
    uVar33 = 0;
    if ((int)lVar26 != 0) {
      lVar32 = ((lVar26 - 1U & 0xffffffff) >> 4) + 1;
      uVar33 = lVar32 * 0x10 & 0xfffffff0;
      param_1 = 0x10;
      do {
        altv300_21(in_vs39,in_vs43);
        altv300_23(in_vs35,in_vs41);
        altv300_21(in_vs32,in_vs41);
        altv300_21(in_vs32,in_vs43);
        altv300_23(in_vs36,in_vs43);
        altv300_23(in_vs36,in_vs37);
        altv300_21(in_vs32,in_vs40);
        altv300_23(in_vs36,in_vs40);
        altv300_27(in_vs38,in_vs42);
        altv300_29(in_vs37,in_vs36);
        altv300_27(in_vs32,in_vs42);
        altv300_29(in_vs42,in_vs36);
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
    }
    if ((int)uVar33 < (int)((uint)uVar1 << 2)) {
      lVar32 = lVar24 - uVar33;
      lVar27 = uVar33 + param_4;
      lVar28 = (uVar33 & 0x7fffffff) * 2 + param_7;
      do {
        uVar2 = *(ushort *)(((int)param_6 - (int)param_7) + (int)(ushort *)lVar28);
        uVar33 = (ulonglong)(short)uVar2;
        if (0xff < uVar2) {
          uVar33 = ((uVar33 & 0xffffffff) >> 0x1f) - 1 & 0xff;
        }
        ((undefined1 *)lVar27)[(int)param_3 - (int)param_4] = (char)uVar33;
        uVar2 = *(ushort *)lVar28;
        uVar33 = (ulonglong)(short)uVar2;
        if (0xff < uVar2) {
          uVar33 = ((uVar33 & 0xffffffff) >> 0x1f) - 1 & 0xff;
        }
        *(undefined1 *)lVar27 = (char)uVar33;
        lVar28 = lVar28 + 2;
        lVar27 = lVar27 + 1;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
    }
    lVar31 = lVar31 + -1;
    param_3 = (ulonglong)uVar3 + param_3;
    param_4 = (ulonglong)uVar3 + param_4;
    param_6 = uVar30 * 8 + param_6;
    param_7 = uVar30 * 8 + param_7;
  } while (lVar31 != 0);
  return param_1;
}

