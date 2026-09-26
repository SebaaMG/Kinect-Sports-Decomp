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
extern float fRam832115f0;
extern int fn_82F68B60();
extern int fn_82F68B78();
extern int iRam832115e0;
extern unsigned int lbl_82005710;


longlong fn_8285F4C0(undefined8 param_1,ulonglong param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  float *pfVar2;
  double dVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  if (iRam832115e0 == 0) {
    lVar4 = fn_82F68B60((double)fRam832115f0,param_1,param_2 & 0xff,param_3,0xffffffff832115e4);
    return lVar4;
  }
  if (iRam832115e0 == 1) {
    pfVar8 = (float *)0x83211600;
    pfVar7 = (float *)0x832115f4;
    param_2 = param_2 & 0xff;
    iVar5 = fn_82F68B78();
    dVar3 = lbl_82005710;
    param_2 = param_2 & 0xff;
    uVar11 = 0;
    uVar12 = 0;
    uVar9 = -(ulonglong)(*param_4 < param_2) & (ulonglong)*param_4;
    uVar6 = (ulonglong)(uint)(0x80 >> ((uint)uVar9 & 0x3f)) & 0xff;
    uVar10 = 0;
    if (param_2 != 0) {
      do {
        uVar11 = uVar10;
        bVar1 = *(byte *)param_3;
        if ((uVar6 & bVar1) != 0) {
          pfVar2 = (float *)((int)uVar9 * 0x10 + iVar5);
          dVar13 = (double)pfVar2[1];
          dVar16 = (double)pfVar7[1];
          if (dVar13 < 0.0) {
            dVar16 = (double)pfVar8[1];
          }
          dVar18 = (double)*pfVar2;
          dVar15 = (double)*pfVar7;
          if (dVar18 < 0.0) {
            dVar15 = (double)*pfVar8;
          }
          dVar17 = (double)pfVar2[2];
          dVar14 = (double)pfVar7[2];
          if (dVar17 < 0.0) {
            dVar14 = (double)pfVar8[2];
          }
          if ((dVar14 * dVar17 + dVar15 * dVar18 + dVar16 * dVar13) - (double)pfVar2[3] <= dVar3) {
            dVar16 = (double)pfVar8[1];
            if (dVar13 < 0.0) {
              dVar16 = (double)pfVar7[1];
            }
            uVar10 = 1;
            dVar15 = (double)*pfVar8;
            if (dVar18 < 0.0) {
              dVar15 = (double)*pfVar7;
            }
            dVar14 = (double)pfVar8[2];
            if (dVar17 < 0.0) {
              dVar14 = (double)pfVar7[2];
            }
            if ((dVar14 * dVar17 + dVar15 * dVar18 + dVar16 * dVar13) - (double)pfVar2[3] <= dVar3)
            {
              uVar10 = 0;
            }
          }
          else {
            uVar10 = 3;
          }
          uVar11 = uVar10 | uVar11;
          if (uVar11 == 3) {
            *param_4 = (byte)uVar9;
            return 0;
          }
          if (uVar10 == 0) {
            *(byte *)param_3 = bVar1 & ~(byte)uVar6;
          }
        }
        uVar9 = uVar9 + 1 & 0xff;
        if (uVar9 == param_2) {
          uVar9 = 0;
          uVar6 = 0x80;
        }
        else {
          uVar6 = uVar6 >> 1;
        }
        uVar12 = uVar12 + 1 & 0xff;
        uVar10 = uVar11;
      } while (uVar12 < param_2);
    }
    return ((ulonglong)LZCOUNT((uint)(uVar11 == 1)) >> 4 & 2) + (ulonglong)(uVar11 == 1);
  }
  return 0;
}

