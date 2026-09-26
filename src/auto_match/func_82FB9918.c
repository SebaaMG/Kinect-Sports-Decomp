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
extern int fn_82F64318();
extern int fn_82F643F8();
extern int fn_82F655D8();
extern int fn_82F67DE8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82015468;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_82079FB8;
extern unsigned int lbl_82079FD0;
extern unsigned int lbl_82175460;


void fn_82FB9918(undefined8 param_1,int param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar7 = fn_82F6A548();
  fVar3 = (float)*(uint *)(iVar7 + 0x48);
  dVar8 = (double)(float)param_3[2];
  if ((double)(fVar3 * lbl_82079FD0) <= (double)(float)param_3[2]) {
    dVar8 = (double)(fVar3 * lbl_82079FD0);
  }
  uVar5 = *param_3;
  dVar10 = (double)lbl_82002AE0;
  if (uVar5 < 7) {
    dVar9 = dVar10;
    if (uVar5 == 1) {
      dVar8 = (double)fn_82F67DE8((double)((float)(dVar8 * (double)lbl_8201DD74) / fVar3));
      fVar2 = (float)dVar8;
      fVar1 = (float)((double)(fVar2 * fVar2) + dVar9);
      fVar3 = (float)(dVar9 / (double)(fVar1 + fVar2 * lbl_82175460));
      fVar6 = fVar3 * lbl_82005340;
      fVar1 = (fVar1 - fVar2 * lbl_82175460) * fVar3;
      fVar2 = -((float)((double)(fVar2 * fVar2) - dVar9) * fVar6);
      dVar10 = dVar9;
    }
    else {
      if (uVar5 == 2) {
                    /* WARNING: Subroutine does not return */
        fn_82F643F8((double)((float)(dVar8 * (double)lbl_82015468) / fVar3));
      }
      if (uVar5 == 3) {
                    /* WARNING: Subroutine does not return */
        fn_82F643F8((double)((float)(dVar8 * (double)lbl_82015468) / fVar3));
      }
      if (uVar5 == 4) {
        fn_82F655D8(lbl_82015618,(double)((float)param_3[1] * lbl_82079FB8));
                    /* WARNING: Subroutine does not return */
        fn_82F64318((double)((float)(dVar8 * (double)lbl_82015468) /
                                  (float)*(uint *)(iVar7 + 0x48)));
      }
      if (uVar5 == 5) {
        fn_82F655D8(lbl_82015618,(double)((float)param_3[1] * lbl_82079FB8));
                    /* WARNING: Subroutine does not return */
        fn_82F64318((double)((float)(dVar8 * (double)lbl_82015468) /
                                  (float)*(uint *)(iVar7 + 0x48)));
      }
      if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F643F8((double)((float)(dVar8 * (double)lbl_82015468) / fVar3));
      }
      dVar8 = (double)fn_82F67DE8((double)((float)(dVar8 * (double)lbl_8201DD74) / fVar3));
      fVar2 = (float)(dVar9 / (double)(float)dVar8);
      fVar1 = (float)((double)(fVar2 * fVar2) + dVar9);
      fVar3 = (float)(dVar9 / (double)(fVar1 + fVar2 * lbl_82175460));
      fVar6 = fVar3 * lbl_82005344;
      fVar1 = (fVar1 - fVar2 * lbl_82175460) * fVar3;
      fVar2 = (float)(dVar9 - (double)(fVar2 * fVar2)) * fVar6;
      dVar10 = dVar9;
    }
  }
  else {
    fVar6 = 0.0;
    fVar3 = 0.0;
    dVar9 = 0.0;
    fVar2 = 0.0;
    fVar1 = 0.0;
  }
  fVar4 = (float)(dVar10 / dVar9);
  iVar7 = param_2 * 0x14 + iVar7;
  *(float *)(iVar7 + 4) = fVar4 * fVar3;
  *(float *)(iVar7 + 8) = fVar4 * fVar6;
  *(float *)(iVar7 + 0xc) = fVar4 * fVar3;
  *(float *)(iVar7 + 0x10) = -(fVar4 * fVar2);
  *(float *)(iVar7 + 0x14) = -(fVar4 * fVar1);
  fn_82F6A594();
  return;
}

