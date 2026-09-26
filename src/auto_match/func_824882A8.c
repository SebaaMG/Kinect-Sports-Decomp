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
extern float fRam832657f8;
extern float fRam832657fc;
extern int fn_82488570();
extern int fn_82488838();
extern int fn_8254EEB8();
extern int fn_8254F110();
extern int fn_82552720();
extern int fn_825529B0();
extern int fn_82552AD8();
extern int fn_82F68CC0();
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_82192568;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83276710;
extern unsigned int lbl_83276714;
extern unsigned int lbl_83276718;
extern unsigned int lbl_8327671C;
extern unsigned int lbl_83276720;
extern unsigned int lbl_83276724;


void fn_824882A8(double param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  
  *(float *)(param_2 + 0x34) = (float)param_1;
  fn_82F68CC0(0xffffffff832657f8,0xffffffff8327faa8,0x54);
  iVar6 = param_2 + 100;
  iVar3 = fn_825529B0(iVar6);
  if (iVar3 == 0) {
    piVar4 = (int *)(param_2 + 0x70);
    if (piVar4 == (int *)0x0) {
      bVar7 = false;
    }
    else {
      bVar7 = *piVar4 != 0;
    }
    if (bVar7) {
      fn_82552720((ulonglong)*(uint *)(param_2 + 0x28) + 0x84c,iVar6,piVar4,0,4,0,0);
    }
  }
  if (lbl_83276714 == 0) {
    if (lbl_83276718 == 0) {
      if (lbl_83276720 == 0) {
        dVar8 = (double)lbl_821CC160;
      }
      else {
        fn_8254F110((double)lbl_82192568,(double)lbl_821CA460,
                          *(undefined4 *)(*(int *)(param_2 + 0x28) + 0x8c8),(int)lbl_8327671C);
        dVar8 = (double)lbl_821CC160;
        *(float *)(param_2 + 0x2c) = lbl_821CC160;
        lbl_83276720 = 0;
      }
    }
    else {
      iVar3 = *(int *)(*(int *)(param_2 + 0x28) + 0x8c8);
      if (*(int *)(iVar3 + 4) != 0) {
        fn_8254EEB8((double)lbl_821CC160,(double)lbl_821CC160,iVar3,(int)lbl_83276710);
      }
      dVar8 = (double)lbl_821CC160;
      *(float *)(param_2 + 0x2c) = lbl_821CC160;
      lbl_83276718 = 0;
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_2 + 0x28) + 0x8c8);
    if (*(int *)(iVar3 + 4) != 0) {
      fn_8254EEB8((double)lbl_821CA460,(double)lbl_82191FCC,(double)lbl_821CC160,iVar3,
                        (int)lbl_83276710);
    }
    dVar8 = (double)lbl_821CC160;
    *(float *)(param_2 + 0x2c) = lbl_821CC160;
    lbl_83276714 = 0;
  }
  if (lbl_83276724 != 0) {
    fn_8254F110(dVar8,dVar8,*(undefined4 *)(*(int *)(param_2 + 0x28) + 0x8c8),
                      (int)lbl_8327671C);
    dVar8 = (double)lbl_821CC160;
    *(float *)(param_2 + 0x2c) = lbl_821CC160;
    lbl_83276724 = 0;
  }
  uVar1 = *(uint *)(param_2 + 0x30);
  if (uVar1 == 0) {
    fn_82488570(param_2);
  }
  else {
    if (uVar1 != 1) {
      if (uVar1 < 3) {
        iVar3 = *(int *)(*(int *)(param_2 + 0x28) + 0x8c8);
        if (*(int *)(iVar3 + 4) != 0) {
          fn_8254EEB8((double)lbl_82192568,(double)fRam832657fc,iVar3,0);
          dVar8 = (double)lbl_821CC160;
        }
        uVar5 = 3;
      }
      else {
        if ((uVar1 != 3) ||
           (fVar2 = *(float *)(param_2 + 0x60) + *(float *)(param_2 + 0x34),
           *(float *)(param_2 + 0x60) = fVar2, fVar2 <= fRam832657f8)) goto LAB_82488514;
        uVar5 = 0;
      }
      *(float *)(param_2 + 0x60) = (float)dVar8;
      *(undefined4 *)(param_2 + 0x30) = uVar5;
      goto LAB_82488514;
    }
    fn_82488838(param_2);
  }
  dVar8 = (double)lbl_821CC160;
LAB_82488514:
  if ((double)*(float *)(param_2 + 0x84) != dVar8) {
    fVar2 = *(float *)(param_2 + 0x80) - *(float *)(param_2 + 0x34);
    *(float *)(param_2 + 0x80) = fVar2;
    *(float *)(param_2 + 0x74) =
         *(float *)(param_2 + 0x7c) * *(float *)(param_2 + 0x34) + *(float *)(param_2 + 0x74);
    if ((double)fVar2 < dVar8) {
      *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_2 + 0x78);
      *(float *)(param_2 + 0x84) = (float)dVar8;
    }
    fn_82552AD8((double)*(float *)(param_2 + 0x74),iVar6,0xffffffff821bcf1c);
  }
  return;
}

