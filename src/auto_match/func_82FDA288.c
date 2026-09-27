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
extern int fn_82FC8FD0();
extern int fn_82FC9A10();
extern int fn_82FC9D50();
extern int fn_82FD3ED0();
extern int fn_82FD5620();
extern int fn_82FD6E88();
extern int fn_82FD8808();
extern int fn_82FDAC20();
extern int fn_82FDC418();
extern int fn_82FDDD60();
extern unsigned int lbl_82002AE0;
extern float lbl_82079F68;
extern unsigned int lbl_82138D2C;
extern unsigned int lbl_8216CB28;
extern unsigned int lbl_8216DE48;
extern float lbl_8216DE4C;
extern unsigned int lbl_8216DE50;
extern unsigned int lbl_8216DE54;
extern unsigned int lbl_8216E408;
extern unsigned int lbl_8216E40C;
extern unsigned int lbl_8216E420;
extern unsigned int lbl_82186E74;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82FDA288(int param_1,int *param_2,int *param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  char cVar9;
  undefined4 uVar8;
  undefined8 uVar7;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  
  uVar14 = (uint)param_5[1] >> 0xe;
  if (((uVar14 != 4) && (uVar14 != 3)) && (uVar14 != 0x3f)) {
    return 0x4e;
  }
  uVar8 = *param_5;
  *(int *)(param_1 + 8) = param_4;
  uVar12 = 0;
  *(undefined4 *)(param_1 + 0x14c) = uVar8;
  cVar1 = *(char *)(param_4 + 0x14);
  for (uVar11 = (uint)param_5[1] >> 0xe; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
    uVar12 = uVar12 + 1;
  }
  cVar9 = (**(code **)(*param_3 + 4))(param_3);
  if (cVar9 == '\0') {
    if (uVar14 == 3) {
      pcVar10 = fn_82FD5620;
    }
    else if (uVar14 == 4) {
      pcVar10 = fn_82FD3ED0;
    }
    else {
      if (uVar14 != 0x3f) goto LAB_82fda368;
      if (cVar1 == '\0') {
        uVar12 = uVar12 - 1;
        pcVar10 = fn_82FD6E88;
      }
      else {
        pcVar10 = fn_82FD8808;
      }
    }
  }
  else if (uVar14 == 3) {
    pcVar10 = fn_82FDAC20;
  }
  else {
    if ((uVar14 == 4) || (uVar14 != 0x3f)) {
LAB_82fda368:
      *(undefined4 *)(param_1 + 4) = 0;
      return 0x4e;
    }
    if (cVar1 == '\0') {
      uVar12 = uVar12 - 1;
      pcVar10 = fn_82FDC418;
    }
    else {
      pcVar10 = fn_82FDDD60;
    }
  }
  *(code **)(param_1 + 4) = pcVar10;
  uVar14 = 0;
  puVar13 = (undefined4 *)(param_1 + 0x140);
  while( true ) {
    uVar11 = uVar12;
    if (1 < uVar12) {
      uVar11 = 2;
    }
    if (uVar11 <= uVar14) break;
    uVar8 = (**(code **)(*param_2 + 4))(param_2,0x80);
    uVar14 = uVar14 + 1;
    puVar13 = puVar13 + 1;
    *puVar13 = uVar8;
  }
  uVar7 = fn_82FC9A10(param_1 + 0xc,param_2,*(undefined4 *)(param_1 + 0x14c),0x20);
  if ((int)uVar7 == 1) {
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
    fn_82FC9D50(param_1 + 0xc);
    fVar2 = *(float *)(*(int *)(param_1 + 8) + 0xc);
    *(float *)(param_1 + 0x154) = fVar2;
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x14c);
    fn_82FC8FD0((double)fVar2,param_1 + 0x124);
    fVar6 = lbl_821AAD20;
    fVar4 = lbl_8216DE54;
    fVar3 = lbl_8216CB28;
    fVar2 = ABS(lbl_821AAD20);
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x14c);
    *(float *)(param_1 + 0x138) = fVar6;
    *(float *)(param_1 + 0x13c) = fVar6;
    uVar5 = lbl_8216E40C;
    uVar8 = lbl_8216E408;
    *(float *)(param_1 + 0x140) = lbl_82002AE0 - fVar3 / (float)*(uint *)(param_1 + 0x14c);
    *(undefined4 *)(param_1 + 0x1a4) = uVar8;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined1 *)(param_1 + 0x1a8) = 0;
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x10);
    *(undefined4 *)(param_1 + 0x158) = uVar5;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x164) = uVar8;
    *(undefined4 *)(param_1 + 0x160) = uVar8;
    *(int *)(param_1 + 0x16c) = (int)(longlong)(fVar2 * fVar4);
    *(undefined4 *)(param_1 + 0x15c) = lbl_8216DE50;
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
    *(undefined4 *)(param_1 + 0x17c) = uVar8;
    *(undefined4 *)(param_1 + 0x180) = 0;
    fVar2 = ABS(fVar6) * lbl_82079F68;
    *(undefined4 *)(param_1 + 0x170) = lbl_82186E74;
    *(undefined4 *)(param_1 + 0x178) = uVar8;
    *(int *)(param_1 + 0x184) = (int)(longlong)fVar2;
    *(undefined4 *)(param_1 + 0x174) = lbl_82138D2C;
    uVar5 = lbl_8216E420;
    fVar2 = ABS(fVar6) * lbl_8216DE4C;
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc);
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x188) = uVar5;
    *(undefined4 *)(param_1 + 0x194) = uVar8;
    *(undefined4 *)(param_1 + 400) = uVar8;
    *(int *)(param_1 + 0x19c) = (int)(longlong)fVar2;
    *(undefined4 *)(param_1 + 0x18c) = lbl_8216DE48;
    uVar7 = 1;
  }
  return uVar7;
}

