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
extern unsigned int *auStack_b8;
extern unsigned int fStack_80;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_90;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern int fn_824B49D8();
extern int fn_8255A868();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int iStack_c0;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;


void fn_824B4798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,int param_6)

{
  float fVar1;
  code *pcVar2;
  float *pfVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iStack_c0;
  uint uStack_bc;
  uint auStack_b8 [2];
  ulonglong uStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  
  pfVar3 = (float *)fn_82F6A53C();
  fVar1 = lbl_821CC160;
  piVar4 = (int *)param_2;
  dVar11 = (double)lbl_821CC160;
  pcVar2 = *(code **)*piVar4;
  *pfVar3 = lbl_821CC160;
  pfVar3[2] = fVar1;
  pfVar3[1] = fVar1;
  (*pcVar2)(param_2,auStack_b8,&uStack_bc);
  uVar5 = ((ulonglong)uStack_bc - param_5) + 1;
  uVar7 = (ulonglong)auStack_b8[0];
  if ((int)auStack_b8[0] < (int)uVar5) {
    uVar7 = uVar5;
  }
  if ((uVar7 & 0xffffffff) != (ulonglong)uStack_bc) {
    uVar6 = 0;
    fStack_a8 = lbl_821CA1A0;
    fStack_a4 = lbl_821CA1A4;
    fStack_a0 = lbl_821CA1A8;
    (**(code **)(*piVar4 + 4))(param_2,uVar7,&iStack_c0);
    fn_824B49D8(&fStack_98,iStack_c0,param_3,param_4);
    uVar7 = uVar7 + 1;
    dVar12 = (double)lbl_82193CC0;
    uStack_b0 = (ulonglong)*(uint *)(iStack_c0 + 0x48);
    if ((uVar7 & 0xffffffff) <= (ulonglong)uStack_bc) {
      dVar14 = (double)fStack_a0;
      dVar15 = (double)fStack_a4;
      dVar16 = (double)fStack_a8;
      dVar13 = (double)lbl_821CA460;
      dVar8 = (double)(float)((double)uStack_b0 * dVar12);
      do {
        (**(code **)(*piVar4 + 4))(param_2,uVar7,&iStack_c0);
        fn_824B49D8(&fStack_a8,iStack_c0,param_3,param_4);
        fn_8255A868(&fStack_88,&fStack_a8,&fStack_98);
        uStack_b0 = (ulonglong)*(uint *)(iStack_c0 + 0x48);
        dVar8 = (double)(float)((double)(float)((double)uStack_b0 * dVar12) - dVar8);
        if (dVar11 < dVar8) {
          fVar1 = (float)(dVar13 / dVar8);
          dVar8 = (double)(fStack_88 * fVar1);
          dVar10 = (double)(fStack_84 * fVar1);
          dVar9 = (double)(fStack_80 * fVar1);
          if (param_6 != 0) {
            dVar8 = ABS(dVar8);
            dVar10 = ABS(dVar10);
            dVar9 = ABS(dVar9);
          }
          dVar16 = (double)(float)(dVar16 + dVar8);
          uVar6 = uVar6 + 1;
          dVar15 = (double)(float)(dVar15 + dVar10);
          dVar14 = (double)(float)(dVar14 + dVar9);
        }
        uVar7 = uVar7 + 1;
        fStack_98 = fStack_a8;
        fStack_94 = fStack_a4;
        fStack_90 = fStack_a0;
        dVar8 = (double)(float)((double)uStack_b0 * dVar12);
      } while ((uVar7 & 0xffffffff) <= (ulonglong)uStack_bc);
      if (uVar6 != 0) {
        uStack_b0 = (ulonglong)uVar6;
        dVar11 = (double)(float)(dVar13 / (double)uStack_b0);
        *pfVar3 = (float)(dVar16 * dVar11);
        pfVar3[1] = (float)(dVar15 * dVar11);
        pfVar3[2] = (float)(dVar14 * dVar11);
      }
    }
  }
  fn_82F6A588();
  return;
}

