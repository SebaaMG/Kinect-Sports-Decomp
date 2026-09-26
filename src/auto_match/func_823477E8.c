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
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821955C0;
extern unsigned int lbl_82195674;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F844;


void fn_823477E8(double param_1,int param_2,undefined8 param_3,uint param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  fVar4 = lbl_821CC160;
  dVar8 = (double)lbl_821CC160;
  if ((double)*(float *)(param_2 + 8) <= dVar8) {
    return;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 8) + param_1);
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = fVar2 - lbl_82195674;
  dVar9 = (double)(fVar2 - fVar1);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar9 < dVar8) << 2) | (uint)(NAN(dVar9) || NAN(dVar8)) << 2)) < 0.0)
  {
    fVar1 = fVar2;
  }
  *(float *)(param_2 + 8) = fVar1;
  if (fVar1 < fVar3) {
    return;
  }
  *(float *)(param_2 + 8) = fVar4;
  iVar5 = lbl_8327F844;
  fVar4 = lbl_821CC160;
  if (param_5 == 0) {
    return;
  }
  if (lbl_8327F844 == 0) {
    return;
  }
  iVar6 = param_4 + (((int)param_4 >> 1) + (uint)((int)param_4 < 0 && (param_4 & 1) != 0) &
                    0x7fffffff) * -2;
  dVar8 = (double)lbl_821CA460;
  if (iVar6 < 0) {
    return;
  }
  if (1 < iVar6) {
    return;
  }
  iVar7 = iVar6 * 0x2c + lbl_8327F844;
  if ((*(char *)(iVar7 + 0x40) != '\0') && (*(float *)(iVar7 + 0x4c) < lbl_821CC160)) {
    return;
  }
  *(float *)(iVar7 + 0x5c) = lbl_821CC160;
  dVar9 = lbl_821955C0;
  fVar1 = *(float *)(iVar7 + 0x54);
  fVar2 = *(float *)(iVar7 + 0x50);
  dVar10 = (double)lbl_8218EC10;
  *(undefined1 *)(iVar7 + 0x40) = 1;
  fVar3 = lbl_821CA460;
  *(float *)((iVar6 + 2) * 0x2c + iVar5) = fVar4;
  if ((float)(dVar8 - dVar10) < 0.0) {
    dVar8 = dVar9;
  }
  *(float *)(iVar7 + 0x44) = (float)dVar8;
  fVar3 = fVar3 / (float)dVar8;
  *(float *)(iVar7 + 0x4c) = -(fVar1 * fVar3);
  *(float *)(iVar7 + 0x48) = -(fVar2 * fVar3);
  return;
}

