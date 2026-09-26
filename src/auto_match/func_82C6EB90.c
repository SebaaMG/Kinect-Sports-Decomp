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
extern V16 vectorMergeHighByte();
extern V16 vectorMergeLowByte();
extern V16 vectorShiftLeftIntegerByte();
extern V16 vectorSplatHalfWord();
extern V16 vectorSplatImmediateSignedByte();
extern V16 vectorSplatImmediateSignedHalfWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82C6EB90(int param_1,int param_2,byte *param_3,uint param_4,longlong param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
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
  undefined1 *puVar17;
  int in_r0;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  short in_register_00010030;
  short in_register_00010032;
  short in_register_00010034;
  short in_register_00010036;
  short in_register_00010038;
  short in_register_0001003a;
  short in_register_0001003c;
  short in_vr3;
  short in_register_00010040;
  short in_register_00010042;
  short in_register_00010044;
  short in_register_00010046;
  short in_register_00010048;
  short in_register_0001004a;
  short in_register_0001004c;
  short in_vr4;{ V16 _vt0 = vectorSplatImmediateSignedHalfWord(0xf); memcpy(auVar21, &_vt0, 16); }{ V16 _vt1 = vectorSplatImmediateSignedByte(0); memcpy(auVar20, &_vt1, 16); }
  lVar18 = (longlong)((int)param_4 >> 4);
  uVar19 = (ulonglong)param_4 & 0xf;{ V16 _vt2 = vectorShiftLeftIntegerByte(auVar21,auVar21); memcpy(auVar22, &_vt2, 16); }{ V16 _vt3 = vectorSplatHalfWord(in_vs44,0); memcpy(auVar21, &_vt3, 16); }
  if (0 < lVar18) {
    do {
      param_2 = param_2 + 0x10;
      param_3 = param_3 + 0x10;
      vectorMergeLowByte(auVar20,auVar22);
      vectorMergeLowByte(auVar20,auVar21);
      vectorMergeHighByte(auVar20,auVar21);
      vectorMergeHighByte(auVar20,auVar22);
      uVar1 = (undefined1)in_register_00010030;
      if (in_register_00010030 < 0) {
        uVar1 = 0;
      }
      else if (0xff < in_register_00010030) {
        uVar1 = 0xff;
      }
      uVar2 = (undefined1)in_register_00010032;
      if (in_register_00010032 < 0) {
        uVar2 = 0;
      }
      else if (0xff < in_register_00010032) {
        uVar2 = 0xff;
      }
      uVar3 = (undefined1)in_register_00010034;
      if (in_register_00010034 < 0) {
        uVar3 = 0;
      }
      else if (0xff < in_register_00010034) {
        uVar3 = 0xff;
      }
      uVar4 = (undefined1)in_register_00010036;
      if (in_register_00010036 < 0) {
        uVar4 = 0;
      }
      else if (0xff < in_register_00010036) {
        uVar4 = 0xff;
      }
      uVar5 = (undefined1)in_register_00010038;
      if (in_register_00010038 < 0) {
        uVar5 = 0;
      }
      else if (0xff < in_register_00010038) {
        uVar5 = 0xff;
      }
      uVar6 = (undefined1)in_register_0001003a;
      if (in_register_0001003a < 0) {
        uVar6 = 0;
      }
      else if (0xff < in_register_0001003a) {
        uVar6 = 0xff;
      }
      uVar7 = (undefined1)in_register_0001003c;
      if (in_register_0001003c < 0) {
        uVar7 = 0;
      }
      else if (0xff < in_register_0001003c) {
        uVar7 = 0xff;
      }
      uVar8 = (undefined1)in_vr3;
      if (in_vr3 < 0) {
        uVar8 = 0;
      }
      else if (0xff < in_vr3) {
        uVar8 = 0xff;
      }
      uVar9 = (undefined1)in_register_00010040;
      if (in_register_00010040 < 0) {
        uVar9 = 0;
      }
      else if (0xff < in_register_00010040) {
        uVar9 = 0xff;
      }
      uVar10 = (undefined1)in_register_00010042;
      if (in_register_00010042 < 0) {
        uVar10 = 0;
      }
      else if (0xff < in_register_00010042) {
        uVar10 = 0xff;
      }
      uVar11 = (undefined1)in_register_00010044;
      if (in_register_00010044 < 0) {
        uVar11 = 0;
      }
      else if (0xff < in_register_00010044) {
        uVar11 = 0xff;
      }
      uVar12 = (undefined1)in_register_00010046;
      if (in_register_00010046 < 0) {
        uVar12 = 0;
      }
      else if (0xff < in_register_00010046) {
        uVar12 = 0xff;
      }
      uVar13 = (undefined1)in_register_00010048;
      if (in_register_00010048 < 0) {
        uVar13 = 0;
      }
      else if (0xff < in_register_00010048) {
        uVar13 = 0xff;
      }
      uVar14 = (undefined1)in_register_0001004a;
      if (in_register_0001004a < 0) {
        uVar14 = 0;
      }
      else if (0xff < in_register_0001004a) {
        uVar14 = 0xff;
      }
      uVar15 = (undefined1)in_register_0001004c;
      if (in_register_0001004c < 0) {
        uVar15 = 0;
      }
      else if (0xff < in_register_0001004c) {
        uVar15 = 0xff;
      }
      uVar16 = (undefined1)in_vr4;
      if (in_vr4 < 0) {
        uVar16 = 0;
      }
      else if (0xff < in_vr4) {
        uVar16 = 0xff;
      }
      puVar17 = (undefined1 *)(in_r0 + param_1 & 0xfffffff0);
      *puVar17 = uVar1;
      puVar17[1] = uVar2;
      puVar17[2] = uVar3;
      puVar17[3] = uVar4;
      puVar17[4] = uVar5;
      puVar17[5] = uVar6;
      puVar17[6] = uVar7;
      puVar17[7] = uVar8;
      puVar17[8] = uVar9;
      puVar17[9] = uVar10;
      puVar17[10] = uVar11;
      puVar17[0xb] = uVar12;
      puVar17[0xc] = uVar13;
      puVar17[0xd] = uVar14;
      puVar17[0xe] = uVar15;
      puVar17[0xf] = uVar16;
      param_1 = param_1 + 0x10;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if ((int)uVar19 != 0) {
    param_2 = param_2 - (int)param_3;
    param_1 = param_1 - (int)param_3;
    do {
      lVar18 = (ulonglong)param_3[param_2] + (ulonglong)*param_3 + param_5 + -0x80;
      if (lVar18 < 0) {
        lVar18 = 0;
      }
      else if (0xff < (int)lVar18) {
        lVar18 = 0xff;
      }
      param_3[param_1] = (byte)lVar18;
      param_3 = param_3 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
    return;
  }
  return;
}

