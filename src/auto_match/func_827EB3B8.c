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
extern unsigned int lbl_82005710;


longlong fn_827EB3B8(int param_1,uint param_2,byte *param_3,float *param_4,float *param_5,
                      byte *param_6)

{
  double dVar1;
  ulonglong uVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar1 = lbl_82005710;
  param_2 = param_2 & 0xff;
  uVar6 = 0;
  uVar7 = 0;
  uVar3 = -(uint)(*param_6 < param_2) & (uint)*param_6;
  uVar2 = (ulonglong)(uint)(0x80 >> (uVar3 & 0x3f)) & 0xff;
  uVar5 = 0;
  if (param_2 != 0) {
    do {
      uVar6 = uVar5;
      if ((uVar2 & *param_3) != 0) {
        pfVar4 = (float *)(uVar3 * 0x10 + param_1);
        dVar8 = (double)pfVar4[1];
        dVar11 = (double)param_4[1];
        if (dVar8 < 0.0) {
          dVar11 = (double)param_5[1];
        }
        dVar13 = (double)*pfVar4;
        dVar10 = (double)*param_4;
        if (dVar13 < 0.0) {
          dVar10 = (double)*param_5;
        }
        dVar12 = (double)pfVar4[2];
        dVar9 = (double)param_4[2];
        if (dVar12 < 0.0) {
          dVar9 = (double)param_5[2];
        }
        if ((dVar9 * dVar12 + dVar10 * dVar13 + dVar11 * dVar8) - (double)pfVar4[3] <= dVar1) {
          dVar11 = (double)param_5[1];
          if (dVar8 < 0.0) {
            dVar11 = (double)param_4[1];
          }
          uVar5 = 1;
          dVar10 = (double)*param_5;
          if (dVar13 < 0.0) {
            dVar10 = (double)*param_4;
          }
          dVar9 = (double)param_5[2];
          if (dVar12 < 0.0) {
            dVar9 = (double)param_4[2];
          }
          if ((dVar9 * dVar12 + dVar10 * dVar13 + dVar11 * dVar8) - (double)pfVar4[3] <= dVar1) {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 3;
        }
        uVar6 = uVar5 | uVar6;
        if (uVar6 == 3) {
          *param_6 = (byte)uVar3;
          return 0;
        }
        if (uVar5 == 0) {
          *param_3 = *param_3 & ~(byte)uVar2;
        }
      }
      uVar3 = uVar3 + 1 & 0xff;
      if (uVar3 == param_2) {
        uVar3 = 0;
        uVar2 = 0x80;
      }
      else {
        uVar2 = uVar2 >> 1;
      }
      uVar7 = uVar7 + 1 & 0xff;
      uVar5 = uVar6;
    } while (uVar7 < param_2);
  }
  return ((ulonglong)LZCOUNT((uint)(uVar6 == 1)) >> 4 & 2) + (ulonglong)(uVar6 == 1);
}

