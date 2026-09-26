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
extern int fn_827B19D8();


undefined8
fn_827B20F0(undefined4 *param_1,ulonglong param_2,int param_3,ulonglong param_4,ulonglong param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  byte bVar18;
  byte abStack_40 [64];
  byte bVar19;
  
  iVar12 = (int)param_2;
  iVar13 = (int)param_4;
  iVar14 = (int)param_5;
  iVar16 = iVar12;
  if (param_3 < iVar12) {
    iVar16 = param_3;
  }
  iVar15 = iVar12;
  if (iVar12 < param_3) {
    iVar15 = param_3;
  }
  if (iVar13 < iVar16) {
    iVar16 = iVar13;
  }
  if (iVar15 < iVar13) {
    iVar15 = iVar13;
  }
  if (iVar14 < iVar16) {
    iVar16 = iVar14;
  }
  if (iVar15 < iVar14) {
    iVar15 = iVar14;
  }
  bVar1 = (byte)(iVar12 >> 4);
  bVar2 = (byte)(iVar13 >> 2);
  bVar10 = (byte)param_3;
  if ((iVar16 < -0x10) || (0xf < iVar15)) {
    bVar3 = (byte)(param_3 >> 5);
    bVar4 = (byte)(iVar13 >> 6);
    if ((iVar16 < -0x40) || (0x3f < iVar15)) {
      bVar17 = (byte)(iVar14 >> 1);
      bVar5 = (byte)(param_3 >> 3);
      if ((iVar16 < -0x100) || (0xff < iVar15)) {
        bVar18 = (byte)(param_3 >> 1);
        bVar19 = (byte)(iVar14 >> 3);
        bVar6 = (byte)(param_3 >> 9);
        if ((iVar16 < -0x400) || (0x3ff < iVar15)) {
          bVar7 = (byte)(iVar12 >> 0xc);
          bVar8 = (byte)(iVar13 >> 10);
          if ((iVar16 < -0x1000) || (0xfff < iVar15)) {
            bVar9 = (byte)(iVar13 >> 0xe);
            if ((iVar16 < -0x4000) || (0x3fff < iVar15)) {
              if ((iVar16 < -0x10000) || (0xffff < iVar15)) {
                abStack_40[0] = (byte)((param_2 & 0xffffffff) << 4) | 0xf;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = bVar1;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = bVar10 << 7 | bVar7 & 0x7f;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = bVar18;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = bVar6;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = (byte)((param_4 & 0xffffffff) << 2) | (byte)(param_3 >> 0x11) & 3;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = bVar4;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = (byte)((param_5 & 0xffffffff) << 5) | bVar9 & 0x1f;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = bVar19;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = (byte)(iVar14 >> 0xb);
                fn_827B19D8(*param_1,abStack_40);
                uVar11 = 10;
              }
              else {
                abStack_40[0] = (byte)((param_2 & 0xffffffff) << 4) | 0xe;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = bVar1;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = bVar10 << 5 | bVar7 & 0x1f;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = bVar5;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = (byte)((param_4 & 0xffffffff) << 6) | (byte)(param_3 >> 0xb) & 0x3f;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = bVar2;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = (byte)((param_5 & 0xffffffff) << 7) | bVar8 & 0x7f;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = bVar17;
                fn_827B19D8(*param_1,abStack_40);
                abStack_40[0] = (byte)(iVar14 >> 9);
                fn_827B19D8(*param_1,abStack_40);
                uVar11 = 9;
              }
            }
            else {
              abStack_40[0] = (byte)((param_2 & 0xffffffff) << 4) | 0xd;
              fn_827B19D8(*param_1,abStack_40);
              abStack_40[0] = bVar1;
              fn_827B19D8(*param_1,abStack_40);
              abStack_40[0] = bVar10 << 3 | bVar7 & 7;
              fn_827B19D8(*param_1,abStack_40);
              abStack_40[0] = bVar3;
              fn_827B19D8(*param_1,abStack_40);
              abStack_40[0] = (byte)((param_4 & 0xffffffff) << 2) | (byte)(param_3 >> 0xd) & 3;
              fn_827B19D8(*param_1,abStack_40);
              abStack_40[0] = bVar4;
              fn_827B19D8(*param_1,abStack_40);
              abStack_40[0] = (byte)((param_5 & 0xffffffff) << 1) | bVar9 & 1;
              fn_827B19D8(*param_1,abStack_40);
              abStack_40[0] = (byte)(iVar14 >> 7);
              fn_827B19D8(*param_1,abStack_40);
              uVar11 = 8;
            }
          }
          else {
            abStack_40[0] = (byte)((param_2 & 0xffffffff) << 4) | 0xc;
            fn_827B19D8(*param_1,abStack_40);
            abStack_40[0] = bVar1;
            fn_827B19D8(*param_1,abStack_40);
            abStack_40[0] = bVar10 << 1 | bVar7 & 1;
            fn_827B19D8(*param_1,abStack_40);
            abStack_40[0] = (byte)((param_4 & 0xffffffff) << 6) | (byte)(param_3 >> 7) & 0x3f;
            fn_827B19D8(*param_1,abStack_40);
            abStack_40[0] = bVar2;
            fn_827B19D8(*param_1,abStack_40);
            abStack_40[0] = (byte)((param_5 & 0xffffffff) << 3) | bVar8 & 7;
            fn_827B19D8(*param_1,abStack_40);
            abStack_40[0] = (byte)(iVar14 >> 5);
            fn_827B19D8(*param_1,abStack_40);
            uVar11 = 7;
          }
        }
        else {
          abStack_40[0] = (byte)((param_2 & 0xffffffff) << 4) | 0xb;
          fn_827B19D8(*param_1,abStack_40);
          abStack_40[0] = bVar10 << 7 | bVar1 & 0x7f;
          fn_827B19D8(*param_1,abStack_40);
          abStack_40[0] = bVar18;
          fn_827B19D8(*param_1,abStack_40);
          abStack_40[0] = (byte)((param_4 & 0xffffffff) << 2) | bVar6 & 3;
          fn_827B19D8(*param_1,abStack_40);
          abStack_40[0] = (byte)((param_5 & 0xffffffff) << 5) | bVar4 & 0x1f;
          fn_827B19D8(*param_1,abStack_40);
          abStack_40[0] = bVar19;
          fn_827B19D8(*param_1,abStack_40);
          uVar11 = 6;
        }
      }
      else {
        abStack_40[0] = (byte)((param_2 & 0xffffffff) << 4) | 10;
        fn_827B19D8(*param_1,abStack_40);
        abStack_40[0] = bVar10 << 5 | bVar1 & 0x1f;
        fn_827B19D8(*param_1,abStack_40);
        abStack_40[0] = (byte)((param_4 & 0xffffffff) << 6) | bVar5 & 0x3f;
        fn_827B19D8(*param_1,abStack_40);
        abStack_40[0] = (byte)((param_5 & 0xffffffff) << 7) | bVar2 & 0x7f;
        fn_827B19D8(*param_1,abStack_40);
        abStack_40[0] = bVar17;
        fn_827B19D8(*param_1,abStack_40);
        uVar11 = 5;
      }
    }
    else {
      abStack_40[0] = (byte)((param_2 & 0xffffffff) << 4) | 9;
      fn_827B19D8(*param_1,abStack_40);
      abStack_40[0] = bVar10 << 3 | bVar1 & 7;
      fn_827B19D8(*param_1,abStack_40);
      abStack_40[0] = (byte)((param_4 & 0xffffffff) << 2) | bVar3 & 3;
      fn_827B19D8(*param_1,abStack_40);
      abStack_40[0] = (byte)((param_5 & 0xffffffff) << 1) | bVar4 & 1;
      fn_827B19D8(*param_1,abStack_40);
      uVar11 = 4;
    }
  }
  else {
    abStack_40[0] = (byte)((param_2 & 0xffffffff) << 4) | 8;
    fn_827B19D8(*param_1,abStack_40);
    abStack_40[0] = (byte)((param_4 & 0xffffffff) << 6) | (bVar10 & 0x1f) << 1 | bVar1 & 1;
    fn_827B19D8(*param_1,abStack_40);
    abStack_40[0] = (byte)((param_5 & 0xffffffff) << 3) | bVar2 & 7;
    fn_827B19D8(*param_1,abStack_40);
    uVar11 = 3;
  }
  return uVar11;
}

