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
extern unsigned int fStack_30;
extern int fn_8262EA08();
extern int fn_8262EB18();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_82627BB0(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  double extraout_f1;
  double dVar10;
  float fStack_30;
  
  dVar9 = (double)lbl_821CC160;
  if (((double)*(float *)(param_1 + 0x268) != dVar9) ||
     (bVar3 = false, (double)*(float *)(param_1 + 0x26c) != dVar9)) {
    bVar3 = true;
  }
  if (1 < *(uint *)(param_1 + 0x264)) {
    pfVar4 = (float *)fn_8262EA08(dVar9,(double)*(uint *)(param_1 + 0x264),param_2 + 0x170);
    iVar6 = 0x3c6ef35f;
    iVar5 = 0x19660d;
    iVar7 = -0x7cda0000;
    dVar9 = (double)lbl_821CA460;
    if ((*(byte *)(param_1 + 0x270) & 1) != 0) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fStack_30 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
      fVar8 = (float)((double)fStack_30 - dVar9) * (float)(*(int *)(param_1 + 0x264) + 1);
      dVar10 = (double)(fVar8 - *pfVar4);
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar10 < extraout_f1) << 2) |
                    (uint)(NAN(dVar10) || NAN(extraout_f1)) << 2)) < 0.0) {
        fVar8 = *pfVar4;
      }
      fVar1 = pfVar4[1];
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar10 < extraout_f1) << 2) |
                    (uint)(NAN(dVar10) || NAN(extraout_f1)) << 2)) < 0.0) {
        fVar1 = fVar8;
      }
      pfVar4[3] = fVar1;
    }
    if ((bVar3) && ((*(byte *)(param_1 + 0x270) & 0x10) == 0)) {
      *(ushort *)(param_2 + 0xa0) = *(ushort *)(param_2 + 0xa0) | 4;
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fStack_30 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
      pfVar4 = (float *)fn_8262EB18((double)((*(float *)(param_1 + 0x26c) -
                                                 *(float *)(param_1 + 0x268)) *
                                                 (float)((double)fStack_30 - dVar9) +
                                                *(float *)(param_1 + 0x268)));
      fVar8 = lbl_8218E8E8;
      if ((*(byte *)(param_1 + 0x270) & 8) == 0) {
        fVar8 = (float)((*(byte *)(param_1 + 0x270) & 4) << 1 | 1);
      }
      else {
        uVar2 = *(int *)(iVar7 + 0x5a28) * iVar5 + iVar6;
        *(uint *)(iVar7 + 0x5a28) = uVar2;
        if ((float)((double)(float)(uVar2 & 0x7fffff | 0x3f800000) - dVar9) <= fVar8) {
          fVar8 = 8.40779e-45;
        }
        else {
          fVar8 = 7.00649e-45;
        }
      }
      if (*pfVar4 != pfVar4[1]) {
        pfVar4[4] = fVar8;
      }
    }
  }
  return;
}

