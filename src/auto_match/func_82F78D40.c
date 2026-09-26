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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern double dRam831bb928;
extern int fn_82F718E8();
extern int fn_82F79464();
extern unsigned int lbl_82005710;
extern unsigned int lbl_831BB918;
extern unsigned int uStack_40;


bool fn_82F78D40(ulonglong param_1,double *param_2,ulonglong param_3)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar6;
  ulonglong uVar5;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_40;
  
  uVar2 = (uint)param_1;
  uVar7 = uVar2 & 0x1f;
  if (((param_1 & 8) != 0) && ((param_3 & 0x80) != 0)) {
    fn_82F79464(0x20000000);
    uVar7 = uVar2 & 0x17;
    goto LAB_82f78f64;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 0x10) != 0)) {
    fn_82F79464(0x4000000);
    uVar7 = uVar2 & 0x1b;
    goto LAB_82f78f64;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 0x40) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x20) != 0)) {
      bVar1 = (param_1 & 0x10) != 0;
      if (*param_2 == lbl_82005710) {
        bVar1 = true;
      }
      else {
        dVar10 = lbl_82005710;
        dVar8 = (double)fn_82F718E8(param_1,&uStack_40);
        lVar4 = ((ulonglong)uStack_40 >> 0x20) - 0x600;
        iVar6 = (int)lVar4;
        if (iVar6 < -0x432) {
          bVar1 = true;
          dVar9 = dVar8 * dVar10;
          uStack_40 = dVar8;
        }
        else {
          uStack_40 = (double)((ulonglong)dVar8 & 0xfffffffffffff | 0x10000000000000);
          if (iVar6 < -0x3fd) {
            lVar4 = -0x3fd - lVar4;
            uVar3 = (ulonglong)uStack_40 >> 0x20;
            uVar5 = (ulonglong)dVar8 & 0xffffffff;
            do {
              if (((uVar5 & 1) != 0) && (!bVar1)) {
                bVar1 = true;
              }
              uVar5 = uVar5 >> 1;
              if ((uVar3 & 1) != 0) {
                uVar5 = uVar5 | 0x80000000;
              }
              uVar3 = uVar3 >> 1;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            uStack_40 = (double)CONCAT44((int)uVar3,(int)uVar5);
          }
          dVar9 = uStack_40;
          if (dVar8 < dVar10) {
            dVar9 = -uStack_40;
          }
        }
        *param_2 = dVar9;
      }
      if (bVar1) {
        fn_82F79464(0x8000000);
      }
      uVar7 = uVar2 & 0x1d;
    }
    goto LAB_82f78f64;
  }
  fn_82F79464(0x10000000);
  uVar5 = param_3 & 3;
  dVar10 = lbl_831BB918;
  if (uVar5 == 0) {
    dVar9 = *param_2;
    dVar8 = lbl_831BB918;
joined_r0x82f78e2c:
    if (dVar9 <= lbl_82005710) {
      dVar8 = -dVar10;
    }
    *param_2 = dVar8;
  }
  else {
    dVar8 = dRam831bb928;
    if (uVar5 == 1) {
      dVar9 = *param_2;
      dVar10 = dRam831bb928;
      goto joined_r0x82f78e2c;
    }
    if (uVar5 < 3) {
      dVar9 = *param_2;
      dVar10 = dRam831bb928;
      dVar8 = lbl_831BB918;
      goto joined_r0x82f78e2c;
    }
    if (uVar5 == 3) {
      dVar9 = *param_2;
      goto joined_r0x82f78e2c;
    }
  }
  uVar7 = uVar2 & 0x1e;
LAB_82f78f64:
  if (((param_1 & 0x10) != 0) && ((param_3 & 8) != 0)) {
    fn_82F79464(0x2000000);
    uVar7 = uVar7 & 0xffffffef;
  }
  return uVar7 == 0;
}

