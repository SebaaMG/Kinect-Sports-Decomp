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


longlong fn_827EB518(int param_1,byte *param_2,float *param_3,float *param_4,byte *param_5)

{
  double dVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar1 = lbl_82005710;
  uVar7 = 0;
  uVar3 = -(uint)(*param_5 < 6) & (uint)*param_5;
  bVar6 = 0;
  uVar2 = (ulonglong)(uint)(0x80 >> (uVar3 & 0x3f)) & 0xff;
  do {
    if ((uVar2 & *param_2) != 0) {
      iVar4 = uVar3 * 0x10 + param_1;
      dVar8 = (double)*(float *)(iVar4 + 0x4c);
      dVar11 = (double)param_3[1];
      if (dVar8 < 0.0) {
        dVar11 = (double)param_4[1];
      }
      dVar13 = (double)*(float *)(iVar4 + 0x48);
      dVar10 = (double)*param_3;
      if (dVar13 < 0.0) {
        dVar10 = (double)*param_4;
      }
      dVar12 = (double)*(float *)(iVar4 + 0x50);
      dVar9 = (double)param_3[2];
      if (dVar12 < 0.0) {
        dVar9 = (double)param_4[2];
      }
      if ((dVar9 * dVar12 + dVar10 * dVar13 + dVar11 * dVar8) - (double)*(float *)(iVar4 + 0x54) <=
          dVar1) {
        dVar11 = (double)param_4[1];
        if (dVar8 < 0.0) {
          dVar11 = (double)param_3[1];
        }
        uVar5 = 1;
        dVar10 = (double)*param_4;
        if (dVar13 < 0.0) {
          dVar10 = (double)*param_3;
        }
        dVar9 = (double)param_4[2];
        if (dVar12 < 0.0) {
          dVar9 = (double)param_3[2];
        }
        if ((dVar9 * dVar12 + dVar10 * dVar13 + dVar11 * dVar8) - (double)*(float *)(iVar4 + 0x54)
            <= dVar1) {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 3;
      }
      uVar7 = uVar5 | uVar7;
      if (uVar7 == 3) {
        *param_5 = (byte)uVar3;
        return 0;
      }
      if (uVar5 == 0) {
        *param_2 = *param_2 & ~(byte)uVar2;
      }
    }
    uVar3 = uVar3 + 1 & 0xff;
    if (uVar3 == 6) {
      uVar3 = 0;
      uVar2 = 0x80;
    }
    else {
      uVar2 = uVar2 >> 1;
    }
    bVar6 = bVar6 + 1;
    if (5 < bVar6) {
      return ((ulonglong)LZCOUNT((uint)(uVar7 == 1)) >> 4 & 2) + (ulonglong)(uVar7 == 1);
    }
  } while( true );
}

