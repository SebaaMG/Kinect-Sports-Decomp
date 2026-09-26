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
extern int fn_82F655D8();
extern int fn_82F6A524();
extern int fn_82F6A570();
extern int fn_8305BE90();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82015610;
extern unsigned int lbl_82015618;
extern unsigned int lbl_820AA960;


void fn_8305BF18(undefined8 param_1,double param_2,double param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  double *in_r8;
  int iVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar2 = fn_82F6A524();
  dVar7 = lbl_82005758 / (double)(longlong)param_5;
  dVar12 = extraout_f1;
  dVar15 = lbl_82005758;
  dVar4 = (double)fn_8305BE90(param_3,extraout_f1);
  *in_r8 = dVar4;
  if (0 < param_5) {
    iVar3 = 0;
    dVar10 = dVar15 / param_2 - dVar15;
    uVar8 = lbl_82005730;
    uVar9 = lbl_820AA960;
    dVar11 = lbl_82005710;
    dVar13 = lbl_82015618;
    dVar14 = lbl_82015610;
    do {
      dVar16 = (double)(longlong)iVar3 * dVar7;
      if (dVar11 < param_3) {
        dVar5 = (double)fn_82F655D8(dVar16,uVar9);
        dVar6 = (double)fn_82F655D8(dVar16,param_3 * dVar14 + dVar15);
        dVar16 = dVar6 * (dVar15 - dVar5) + dVar5 * dVar16;
        if (dVar13 < param_3) {
          dVar16 = -((dVar15 - dVar12) * (param_3 - dVar13) * dVar16 * dVar14 - dVar15) * dVar16;
        }
      }
      dVar5 = (double)fn_82F655D8(dVar15 - dVar16,uVar8);
      dVar16 = dVar12;
      if (dVar11 < param_3) {
        dVar16 = dVar4;
      }
      dVar16 = (double)fn_82F655D8((dVar15 - dVar5) / dVar16 + dVar15,dVar10);
      iVar1 = iVar3 * 4;
      iVar3 = (int)(short)((short)iVar3 + 1);
      *(float *)(iVar1 + iVar2) = (float)dVar16;
    } while (iVar3 < param_5);
  }
  fn_82F6A570();
  return;
}

