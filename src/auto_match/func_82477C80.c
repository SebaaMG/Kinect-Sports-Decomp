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
extern float fRam831d3bd4;
extern float fRam831d3bd8;
extern float fRam831d3bdc;
extern float fRam831d3be0;
extern float fRam831d3be4;
extern float fRam831d3be8;
extern float fRam831d3bec;
extern float fRam831d3bf0;
extern float fRam831d3bf4;
extern int fn_82477F00();
extern int fn_82552720();
extern int fn_825529B0();
extern int fn_82552B50();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_82477C80(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  
  fn_82477F00((double)fRam831d3bd4,(double)fRam831d3bd8,(double)fRam831d3bdc,
                    (double)fRam831d3be0);
  if (*(char *)(param_2 + 0x150) == '\0') {
    fVar2 = (float)((double)*(float *)(param_2 + 0x158) - param_1);
    *(float *)(param_2 + 0x158) = fVar2;
    fVar1 = fRam831d3bf4;
    fVar4 = lbl_821CC160;
    bVar8 = NAN(lbl_821CC160);
    bVar9 = fVar2 < lbl_821CC160;
    *(float *)(param_2 + 0x148) = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 + ((uint)(byte)(bVar9 << 2) | (uint)(NAN(fVar2) || bVar8) << 2)) <
        0.0) {
      fVar2 = fVar4;
    }
    fVar3 = fVar2 - fVar1;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar3 < fVar4) << 2) | (uint)(NAN(fVar3) || NAN(fVar4)) << 2)) <
        0.0) {
      fVar1 = fVar2;
    }
    *(float *)(param_2 + 0x158) = fVar1;
    if (fRam831d3be4 < fVar4) {
      *(float *)(param_2 + 0x148) = fVar4;
      *(float *)(param_2 + 0x14c) = fVar4;
      *(undefined1 *)(param_2 + 0x150) = 1;
      *(uint *)(param_2 + 0xec) = *(uint *)(param_2 + 0xec) | 0x10;
    }
  }
  else {
    iVar7 = param_2 + 0x164;
    if (*(float *)(param_2 + 0x14c) <= fRam831d3bec) {
      iVar5 = fn_825529B0(iVar7);
      dVar10 = (double)lbl_821CC160;
      if ((iVar5 == 0) && ((double)*(float *)(param_2 + 0x14c) <= dVar10)) {
        piVar6 = (int *)(param_2 + 0xd4);
        if (piVar6 == (int *)0x0) {
          bVar8 = false;
        }
        else {
          bVar8 = *piVar6 != 0;
        }
        if (bVar8) {
          fn_82552720((ulonglong)*(uint *)(param_2 + 0x15c) + 0x84c,iVar7,piVar6,0,4,0,0);
        }
      }
      fVar2 = (float)((double)*(float *)(param_2 + 0x14c) + param_1);
      fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0x148));
      *(float *)(param_2 + 0x14c) = fVar2;
      *(float *)(param_2 + 0x148) = fVar1;
      if (fRam831d3bec < fVar2) {
        iVar5 = fn_825529B0(iVar7);
        if (iVar5 != 0) {
          fn_82552B50(iVar7,1);
        }
        *(float *)(param_2 + 0x148) = (float)dVar10;
        goto LAB_82477ed8;
      }
      bVar8 = fRam831d3be8 < fVar1;
    }
    else {
      iVar5 = fn_825529B0(iVar7);
      dVar10 = (double)lbl_821CC160;
      if ((iVar5 == 0) && ((double)*(float *)(param_2 + 0x148) <= dVar10)) {
        piVar6 = (int *)(param_2 + 0xd8);
        if (piVar6 == (int *)0x0) {
          bVar8 = false;
        }
        else {
          bVar8 = *piVar6 != 0;
        }
        if (bVar8) {
          fn_82552720((ulonglong)*(uint *)(param_2 + 0x15c) + 0x84c,iVar7,piVar6,0,4,0,0);
        }
      }
      fVar2 = (float)(param_1 + (double)*(float *)(param_2 + 0x148));
      *(float *)(param_2 + 0x148) = fVar2;
      bVar8 = fRam831d3bf0 < fVar2;
    }
    if (bVar8) {
      iVar5 = fn_825529B0(iVar7);
      if (iVar5 != 0) {
        fn_82552B50(iVar7,1);
      }
      *(float *)(param_2 + 0x148) = (float)dVar10;
      *(float *)(param_2 + 0x158) = fRam831d3bf4;
      *(undefined1 *)(param_2 + 0x150) = 0;
    }
  }
LAB_82477ed8:
  if (*(char *)(param_2 + 0x150) != '\0') {
    *(uint *)(param_2 + 0xf0) = *(uint *)(param_2 + 0xf0) | 0x10;
  }
  return;
}

