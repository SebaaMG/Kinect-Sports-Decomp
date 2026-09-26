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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82DFB4A0(double param_1,int param_2,undefined8 param_3,int param_4,int param_5,
                  int *param_6)

{
  char cVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  double dVar16;
  
  fVar9 = lbl_821AAD20;
  fVar3 = *(float *)(param_5 + 4);
  cVar1 = *(char *)(param_5 + 0xc);
  bVar8 = false;
  iVar13 = 0;
  cVar2 = *(char *)(*(int *)(param_4 + 0x1c) + 0x20);
  if ('\0' < cVar2) {
    iVar10 = 0;
    iVar15 = 0;
    dVar16 = (double)lbl_82002AE0;
    iVar11 = 0;
    iVar12 = 0;
    bVar8 = false;
    do {
      *(byte *)(param_6[3] + iVar13) =
           1U - (*(char *)(*(int *)(param_2 + 8) + iVar15 + 8) == '\0') & 1U - (cVar1 == '\0');
      pfVar14 = (float *)(*(int *)(param_2 + 8) + iVar15);
      if (pfVar14[1] < fVar3) {
        bVar8 = true;
      }
      fVar6 = fVar3 * *pfVar14;
      pfVar14 = (float *)(*(int *)(*(int *)(param_4 + 0x1c) + 0x8c) + iVar12);
      fVar4 = *pfVar14;
      fVar4 = -(*(float *)(iVar11 + *(int *)(param_4 + 0x48) + 0xc0) * fVar4 *
               pfVar14[1] * (float)(dVar16 / param_1)) * fVar4;
      fVar7 = fVar4;
      if ((fVar6 < ABS(fVar4)) && (fVar7 = fVar6, fVar4 <= fVar9)) {
        fVar7 = -fVar6;
      }
      iVar13 = iVar13 + 1;
      iVar5 = *(int *)(param_4 + 0x1c);
      iVar12 = iVar12 + 0x28;
      iVar11 = iVar11 + 0xe0;
      iVar15 = iVar15 + 0xc;
      *(float *)(iVar10 + *param_6) = fVar7;
      iVar10 = iVar10 + 4;
      cVar2 = *(char *)(iVar5 + 0x20);
    } while (iVar13 < cVar2);
  }
  if (bVar8) {
    if ((double)(float)param_6[6] < (double)*(float *)(param_2 + 0x14)) {
      param_6[6] = (int)(float)((double)(float)param_6[6] + param_1);
    }
    else {
      iVar13 = 0;
      if ('\0' < cVar2) {
        iVar10 = 0;
        do {
          if (*(float *)(iVar10 + *(int *)(param_2 + 8) + 4) < fVar3) {
            *(undefined1 *)(param_6[3] + iVar13) = 1;
          }
          iVar13 = iVar13 + 1;
          iVar10 = iVar10 + 0xc;
        } while (iVar13 < *(char *)(*(int *)(param_4 + 0x1c) + 0x20));
      }
    }
  }
  else {
    param_6[6] = (int)fVar9;
  }
  return;
}

