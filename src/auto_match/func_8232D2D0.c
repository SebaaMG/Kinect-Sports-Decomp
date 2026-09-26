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
#define NAN(x) ((x) != (x))
extern int fn_8232C528();
extern int fn_82520780();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_8232D2D0(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (*(int *)(*(int *)(param_2 + 8) + 0x7ac) == 0) {
    *(float *)(param_2 + 0x88) = (float)((double)*(float *)(param_2 + 0x88) + param_1);
  }
  dVar10 = (double)lbl_821CC160;
  if ((*(int *)(param_2 + 0x8c) != 0) && (*(int *)(param_2 + 0x90) != 0)) {
    dVar7 = (double)(float)((double)*(float *)(param_2 + 0x90) - param_1);
    dVar9 = -dVar7;
    dVar8 = dVar10;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar9 < dVar10) << 2) | (uint)(NAN(dVar9) || NAN(dVar10)) << 2)) <
        0.0) {
      dVar8 = dVar7;
    }
    *(float *)(param_2 + 0x90) = (float)dVar8;
    if (dVar8 == dVar10) {
      piVar3 = *(int **)(param_2 + 0xc);
      iVar5 = piVar3[2];
      piVar3[2] = 2;
      (**(code **)(*piVar3 + 0x14))(piVar3,iVar5,2);
    }
  }
  iVar5 = *(int *)(*(int *)(param_2 + 8) + 0x5c0);
  if (iVar5 != *(int *)(param_2 + 0x7c)) {
    *(float *)(param_2 + 0x80) = (float)dVar10;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    if (iVar5 == *(int *)(*(int *)(param_2 + 8) + 0x6c4)) {
      fVar1 = *(float *)(param_2 + 0x44);
      fVar2 = *(float *)(param_2 + 0x48);
    }
    else {
      fVar1 = *(float *)(param_2 + 0x3c);
      fVar2 = *(float *)(param_2 + 0x40);
    }
    *(float *)(param_2 + 0x84) =
         (fVar2 - fVar1) * ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar1;
  }
  *(int *)(param_2 + 0x7c) = iVar5;
  if (iVar5 == 0) {
    if (*(float *)(param_2 + 0x34) < *(float *)(param_2 + 0x88)) {
      iVar5 = fn_82520780((double)*(float *)(param_2 + 0x38));
      uVar6 = 0;
      if (iVar5 == 0) {
        uVar6 = 2;
      }
      fn_8232C528(*(undefined4 *)(param_2 + 0xc),uVar6);
    }
  }
  else {
    fVar1 = (float)((double)*(float *)(param_2 + 0x80) + param_1);
    *(float *)(param_2 + 0x80) = fVar1;
    if (*(float *)(param_2 + 0x84) < fVar1) {
      iVar5 = *(int *)(param_2 + 0xc);
      lVar4 = fn_82520780((double)*(float *)(iVar5 + 0x78));
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(undefined4 *)(iVar5 + 0x14) = 3;
      *(uint *)(iVar5 + 0xc) = -(uint)(lVar4 == 0) & 2;
    }
  }
  return;
}

