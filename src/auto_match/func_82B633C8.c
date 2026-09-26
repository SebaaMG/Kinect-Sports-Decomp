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
extern int fn_82B63208();
extern int fn_82B63290();
extern int fn_82F6B2A8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_70;


void fn_82B633C8(undefined1 *param_1,int param_2,longlong param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  longlong alStack_80 [2];
  undefined8 uStack_70;
  byte bStack_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  char cStack_61;
  
  fVar7 = lbl_821AAD20;
  fVar6 = lbl_82002AE0;
  iVar10 = 0;
  fVar4 = lbl_82002AE0;
  fVar5 = lbl_821AAD20;
  if (0 < param_4) {
    do {
      iVar9 = 0;
      if (0 < (int)param_3) {
        lVar15 = param_3;
        do {
          iVar11 = (iVar10 * 4 + iVar9) * 4;
          if (fVar7 <= *(float *)(iVar11 + param_2)) {
            if (fVar6 < *(float *)(iVar11 + param_2)) {
              *(float *)(iVar11 + param_2) = fVar6;
            }
          }
          else {
            *(float *)(iVar11 + param_2) = fVar7;
          }
          fVar3 = *(float *)(iVar11 + param_2);
          if (fVar3 < fVar4) {
            fVar4 = fVar3;
          }
          if (fVar5 < fVar3) {
            fVar5 = fVar3;
          }
          iVar9 = iVar9 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_4);
  }
  uVar2 = (uint)(fVar4 * lbl_82005CCC + lbl_82002C5C);
  alStack_80[0] = (longlong)(int)uVar2;
  uVar12 = (uint)(fVar5 * lbl_82005CCC + lbl_82002C5C);
  bVar1 = (int)uVar12 < (int)uVar2;
  uVar14 = uVar12;
  if (uVar12 == uVar2) {
    uVar2 = (uint)(fVar4 * lbl_82005CCC);
    uStack_70 = (longlong)(int)uVar2;
    dVar16 = (double)fn_82F6B2A8();
    uVar14 = (uint)dVar16;
    uVar12 = uVar14;
    if (0xff < (int)uVar14) {
      uVar12 = 0xff;
    }
    bVar1 = (int)uVar12 < (int)uVar2;
  }
  uStack_70 = (longlong)(int)uVar14;
  uVar14 = uVar12;
  uVar13 = uVar2;
  if ((!bVar1) && (uVar14 = uVar2, uVar13 = uVar12, uVar12 == uVar2)) {
    if ((int)uVar12 < 0xff) {
      uVar13 = uVar12 + 1;
    }
    else {
      uVar14 = uVar2 - 1;
    }
  }
  fn_82B63208(alStack_80,uVar13 & 0xff,uVar14 & 0xff);
  iVar10 = 0;
  do {
    iVar9 = 0;
    do {
      uVar8 = fn_82B63290((double)*(float *)((iVar10 + iVar9) * 4 + param_2),alStack_80);
      *(undefined1 *)((int)&uStack_70 + iVar9 + iVar10) = uVar8;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
    iVar10 = iVar10 + 4;
  } while (iVar10 < 0x10);
  param_1[2] = (((((U64)(uStack_70) >> 40) & 0xFF) << 3 | (((U64)(uStack_70) >> 32) & 0xFF)) << 3 | (((U64)(uStack_70) >> 24) & 0xFF)) << 1 |
               (((U64)(uStack_70) >> 16) & 0xFF) >> 2;
  param_1[5] = ((char)uStack_70 << 3 | (((U64)(uStack_70) >> 48) & 0xFF)) << 2 | (((U64)(uStack_70) >> 40) & 0xFF) >> 1;
  param_1[4] = (bStack_66 << 3 | bStack_67) << 3 | bStack_68;
  param_1[3] = ((((U64)(uStack_70) >> 16) & 0xFF) << 3 | (((U64)(uStack_70) >> 8) & 0xFF)) << 3 | (((U64)(uStack_70) >> 0) & 0xFF);
  param_1[1] = (char)((ulonglong)alStack_80[0] >> 0x38);
  *param_1 = (char)((ulonglong)alStack_80[0] >> 0x28);
  param_1[7] = ((bStack_63 << 3 | bStack_64) << 3 | bStack_65) << 1 | bStack_66 >> 2;
  param_1[6] = (cStack_61 << 3 | bStack_62) << 2 | bStack_63 >> 1;
  return;
}

