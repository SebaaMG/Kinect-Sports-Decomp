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
extern unsigned int *auStack_a0;
extern int fn_82547CF0();
extern int fn_8263B758();
extern int fn_82837D98();
extern unsigned int lbl_821954D0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195598;
extern unsigned int lbl_82195644;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


void fn_825D18A8(float *param_1,float *param_2,int param_3,int param_4,float *param_5,
                  float *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulonglong auStack_a0 [2];
  int aiStack_90 [6];
  uint uStack_78;
  uint uStack_74;
  
  fVar4 = lbl_821CC160;
  dVar15 = (double)lbl_821CC160;
  *param_5 = lbl_82195644;
  *param_6 = fVar4;
  fVar4 = lbl_821CA460;
  if (param_3 == 0) {
    *param_6 = lbl_821CA460;
    *param_5 = fVar4;
  }
  else {
    fn_82837D98(*(undefined4 *)(param_3 + 0x14),0,auStack_a0);
    fn_8263B758(((uint)((ulonglong)(auStack_a0[0]) >> 32)),0,aiStack_90);
    uVar9 = (uint)(float)(longlong)((double)(*param_2 * (float)uStack_78) + lbl_82195598);
    uVar1 = (uint)(float)(longlong)((double)(*param_1 * (float)uStack_78) - lbl_82195598);
    if ((int)uStack_78 <= (int)uVar9) {
      uVar9 = uStack_78;
    }
    dVar12 = (double)uStack_74;
    dVar14 = (double)(longlong)((double)(float)((double)param_2[1] * dVar12) + lbl_82195598);
    dVar13 = (double)(float)(dVar14 - dVar12);
    uVar2 = (uint)(float)(longlong)((double)(float)((double)param_1[1] * dVar12) - lbl_82195598);
    uVar10 = (ulonglong)uVar2;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar13 < dVar15) << 2) | (uint)(NAN(dVar13) || NAN(dVar15)) << 2))
        < 0.0) {
      dVar12 = dVar14;
    }
    iVar3 = (int)dVar12;
    auStack_a0[0] = (ulonglong)iVar3;
    if ((int)uVar2 < iVar3) {
      dVar12 = (double)lbl_821954D0;
      uVar11 = (ulonglong)uVar1;
      uVar2 = uVar1;
      do {
        while ((int)uVar2 < (int)uVar9) {
          uVar8 = 0;
          if (aiStack_90[0] == 0x4900102) {
            iVar7 = fn_82547CF0(uVar11,uVar10,uStack_78,1);
            uVar8 = (ulonglong)*(byte *)(iVar7 + *(int *)(param_4 + 4));
          }
          uVar11 = uVar11 + 1;
          fVar4 = (float)((double)uVar8 * dVar12);
          dVar14 = (double)(*param_5 - fVar4);
          dVar13 = (double)(*param_6 - fVar4);
          fVar5 = fVar4;
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)((dVar14 < dVar15) << 2) |
                        (uint)(NAN(dVar14) || NAN(dVar15)) << 2)) < 0.0) {
            fVar5 = *param_5;
          }
          fVar6 = *param_6;
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)((dVar13 < dVar15) << 2) |
                        (uint)(NAN(dVar13) || NAN(dVar15)) << 2)) < 0.0) {
            fVar6 = fVar4;
          }
          *param_5 = fVar5;
          *param_6 = fVar6;
          auStack_a0[0] = uVar8;
          uVar2 = (uint)uVar11;
        }
        uVar10 = uVar10 + 1;
        uVar11 = (ulonglong)uVar1;
        uVar2 = uVar1;
      } while ((int)uVar10 < iVar3);
    }
  }
  return;
}

