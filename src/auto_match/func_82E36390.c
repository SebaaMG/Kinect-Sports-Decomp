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
extern int fn_82E36008();
extern int iRam8323fe7c;
extern int iRam8323fe80;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005718;
extern unsigned int lbl_82006848;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_8201ED80;
extern unsigned int lbl_8201FBC0;
extern unsigned int lbl_82021534;
extern float lbl_82021538;
extern unsigned int lbl_82021544;
extern unsigned int lbl_82028814;
extern unsigned int lbl_820570E4;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_82057B44;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_82079F28;
extern unsigned int lbl_8207F4E8;
extern unsigned int lbl_8207F514;
extern unsigned int lbl_8207F51C;
extern unsigned int lbl_8207F528;
extern unsigned int lbl_8208DDAC;
extern unsigned int lbl_8208DDB4;
extern unsigned int lbl_8208DDB8;
extern unsigned int lbl_8208DDBC;
extern unsigned int lbl_8208DDD4;
extern unsigned int lbl_8208DDD8;
extern unsigned int lbl_8208DDDC;
extern unsigned int lbl_8208DDE0;
extern unsigned int lbl_8208DDE4;
extern unsigned int lbl_8208DDE8;
extern unsigned int lbl_8208DDEC;
extern unsigned int lbl_8208DDF0;
extern unsigned int lbl_8208DDF4;
extern unsigned int lbl_8208DDF8;
extern unsigned int lbl_8208DDFC;
extern unsigned int lbl_8208DE00;
extern unsigned int lbl_8208DE04;
extern unsigned int lbl_8208DE08;
extern unsigned int lbl_8208DE0C;
extern unsigned int lbl_8208DE10;
extern unsigned int lbl_8208DE14;
extern unsigned int lbl_8208DE18;
extern unsigned int lbl_8208DE1C;
extern unsigned int lbl_8208DE20;
extern unsigned int lbl_8208DE24;
extern unsigned int lbl_8208DE28;
extern unsigned int lbl_8208DE2C;
extern unsigned int lbl_8208DE30;
extern unsigned int lbl_8208DE34;
extern unsigned int lbl_8208DE38;
extern unsigned int lbl_8208DE3C;
extern unsigned int lbl_8208DE40;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_82186E74;
extern unsigned int uRam8329f604;
extern unsigned int uRam8329f608;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E36390(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  iVar9 = lbl_82186E74;
  iVar8 = lbl_8207F51C;
  iVar7 = lbl_8207F514;
  iVar5 = lbl_82079F28;
  fVar6 = lbl_8201DFF4;
  fVar1 = lbl_820162A0;
  iVar11 = lbl_82005718;
  fVar2 = lbl_82002C5C;
  iVar10 = *param_1;
  dVar14 = (double)lbl_8201DFF4;
  dVar13 = (double)lbl_82006848;
  dVar15 = (double)lbl_820162A0;
  if ((2 < *(int *)(iVar10 + 0x3c)) && (2 < *(ushort *)(iVar10 + 0x22))) {
    iVar11 = param_1[0x1d74];
    dVar16 = (double)lbl_82002C5C;
    fVar2 = lbl_8208DE40;
    if (iVar11 < 0x280) {
      fVar1 = lbl_8208DE3C;
      if (((iVar11 < 0x1b8) && (fVar1 = lbl_8208DE38, iVar11 < 0x120)) &&
         (fVar2 = lbl_8208DE34, fVar1 = lbl_8208DE30, 0xdf < iVar11)) {
        fVar2 = lbl_8208DE40;
        fVar1 = lbl_8208DE38;
      }
    }
    else {
      fVar1 = (float)((double)(longlong)*(int *)(iVar10 + 0x50) * dVar16);
    }
    param_1[0x1d78] = 1;
    if (iVar11 < 0xe0) {
      dVar16 = dVar15;
    }
    param_1[0x1d85] = (int)(float)dVar16;
    iVar5 = lbl_8207F514;
    if (0xdf < iVar11) {
      iVar5 = lbl_8207F51C;
    }
    param_1[0x1d84] = iVar5;
    fVar1 = fVar1 * lbl_82005344;
    param_1[0x1d86] = (int)((fVar2 * lbl_82005344) / (float)(longlong)*(int *)(iVar10 + 0x50));
    param_1[0x1d87] = (int)(fVar1 / (float)(longlong)*(int *)(iVar10 + 0x50));
    if ((((2 < *(int *)(iVar10 + 0x3c)) && (param_1[5] == 0)) &&
        ((*(short *)(iVar10 + 0x22) == 6 && (iVar11 < 0x81)))) &&
       ((*(int *)(iVar10 + 0x68) == 0x3f || (*(int *)(iVar10 + 0x68) == 0x60f)))) {
      param_1[0x1d87] = (int)((float)param_1[0x1d86] + lbl_82186E6C);
    }
    dVar17 = (double)(float)param_1[0x1d87];
    dVar16 = (double)lbl_82002AE0;
    if (dVar16 < dVar17) {
      dVar17 = dVar16;
    }
    param_1[0x1d87] = (int)(float)dVar17;
    if ((double)(float)param_1[0x1d86] <= dVar16) {
      dVar16 = (double)(float)param_1[0x1d86];
    }
    param_1[0x1d86] = (int)(float)dVar16;
    if ((dVar17 <= dVar16) && (dVar13 < dVar16)) {
      param_1[0x1d86] = (int)(float)(dVar17 - dVar13);
    }
    goto code_r0x82e36b10;
  }
  iVar4 = *(int *)(iVar10 + 0x50);
  if (iVar4 < 0xac44) {
    if (iVar4 == 32000) {
      if (*(float *)(iVar10 + 0x30) <= lbl_8208DDEC) {
        if (*(float *)(iVar10 + 0x30) <= lbl_8208DDE8) {
          param_1[0x1d85] = (int)lbl_820162A0;
          fVar2 = lbl_82186E6C;
          param_1[0x1d78] = 1;
          iVar11 = lbl_8208DDE0;
          iVar10 = lbl_82028814;
          param_1[0x1d84] = (int)fVar2;
          param_1[0x1d86] = iVar10;
          param_1[0x1d87] = iVar11;
        }
        else {
          param_1[0x1d78] = 1;
          sVar3 = *(short *)(iVar10 + 0x22);
          param_1[0x1d85] = (int)fVar1;
          iVar11 = lbl_8208DDB8;
          iVar10 = lbl_8207F528;
          if (sVar3 == 1) {
            param_1[0x1d84] = lbl_82057B44;
            param_1[0x1d86] = iVar11;
            param_1[0x1d87] = iVar10;
          }
          else {
            param_1[0x1d84] = lbl_82057B44;
            iVar10 = lbl_8208DDE4;
            if (param_1[5] == 0) {
              param_1[0x1d86] = lbl_8208DDB8;
              param_1[0x1d87] = iVar10;
            }
            else {
              param_1[0x1d87] = (int)fVar6;
              param_1[0x1d86] = lbl_82057B54;
            }
          }
        }
      }
      else {
        param_1[0x1d85] = (int)lbl_820162A0;
        iVar11 = lbl_82057B44;
        param_1[0x1d78] = 1;
        iVar10 = lbl_82021534;
        fVar2 = lbl_82002AE0;
        param_1[0x1d84] = iVar11;
        param_1[0x1d86] = iVar10;
        param_1[0x1d87] = (int)fVar2;
      }
      goto code_r0x82e36b10;
    }
    if (iVar4 == 0x5622) {
      fVar2 = *(float *)(iVar10 + 0x30);
      param_1[0x1d85] = (int)lbl_820162A0;
      iVar10 = lbl_82057B44;
      if (fVar2 <= lbl_820570E4) {
        if (fVar2 <= lbl_8208DDDC) {
          param_1[0x1d87] = (int)lbl_8208DDDC;
          param_1[0x1d84] = lbl_82021544;
          param_1[0x1d78] = 1;
          param_1[0x1d86] = lbl_8208DDB4;
        }
        else {
          param_1[0x1d84] = lbl_82021544;
          param_1[0x1d78] = 1;
          iVar10 = lbl_820579A8;
          param_1[0x1d86] = lbl_8208DDD8;
          param_1[0x1d87] = iVar10;
        }
      }
      else {
        param_1[0x1d78] = 1;
        iVar11 = lbl_820579A8;
        fVar2 = lbl_82002AE0;
        param_1[0x1d84] = iVar10;
        param_1[0x1d86] = iVar11;
        param_1[0x1d87] = (int)fVar2;
      }
      goto code_r0x82e36b10;
    }
    if ((iVar4 == 16000) && (2 < *(int *)(iVar10 + 0x3c))) {
      param_1[0x1d87] = (int)lbl_8201DFF4;
      fVar2 = lbl_82002C5C;
      param_1[0x1d78] = 1;
      iVar11 = lbl_82021534;
      iVar10 = lbl_82002C2C;
      param_1[0x1d85] = (int)fVar2;
      param_1[0x1d84] = iVar10;
      param_1[0x1d86] = iVar11;
      goto code_r0x82e36b10;
    }
    if (iVar4 == 0x2b11) {
      param_1[0x1d78] = 1;
      iVar5 = lbl_8208DDD4;
      iVar10 = lbl_82021534;
      param_1[0x1d85] = (int)fVar2;
      param_1[0x1d84] = iVar11;
      param_1[0x1d86] = iVar10;
      param_1[0x1d87] = iVar5;
      goto code_r0x82e36b10;
    }
    if (iVar4 == 8000) {
      param_1[0x1d78] = 1;
      iVar5 = lbl_8208DDD4;
      iVar10 = lbl_820579A8;
      param_1[0x1d85] = (int)fVar2;
      param_1[0x1d84] = iVar11;
      param_1[0x1d86] = iVar10;
      param_1[0x1d87] = iVar5;
      goto code_r0x82e36b10;
    }
  }
  else {
    fVar1 = *(float *)(iVar10 + 0x30);
    if (fVar1 <= lbl_8208DE2C) {
      if (fVar1 <= lbl_8208DE28) {
        if (fVar1 <= lbl_8208DE24) {
          if (fVar1 <= lbl_8208DE18) {
            if (fVar1 <= lbl_8208DE14) {
              param_1[0x1d85] = (int)lbl_820162A0;
              if (fVar1 <= lbl_8208DDAC) {
                bVar12 = fVar1 <= lbl_8208DE08;
                param_1[0x1d84] = lbl_8207F514;
                if (bVar12) {
                  param_1[0x1d78] = 1;
                  iVar11 = lbl_8208DDF8;
                  param_1[0x1d86] = lbl_8208DDBC;
                  param_1[0x1d87] = iVar11;
                  fVar1 = lbl_8208DDF0;
                  fVar2 = lbl_8208DDF4 / (float)(longlong)*(int *)(iVar10 + 0x50);
                  param_1[0x1d86] = (int)fVar2;
                  param_1[0x1d87] =
                       (int)((fVar2 * fVar1) / (float)(longlong)*(int *)(iVar10 + 0x50));
                }
                else {
                  param_1[0x1d78] = 1;
                  iVar11 = lbl_8208DDB8;
                  param_1[0x1d86] = lbl_8208DE04;
                  param_1[0x1d87] = iVar11;
                  fVar2 = lbl_8208DDFC;
                  param_1[0x1d86] = (int)(lbl_8208DE00 / (float)(longlong)*(int *)(iVar10 + 0x50));
                  param_1[0x1d87] = (int)(fVar2 / (float)(longlong)*(int *)(iVar10 + 0x50));
                }
              }
              else {
                param_1[0x1d78] = 1;
                param_1[0x1d84] = lbl_8207F514;
                iVar11 = lbl_8208DE0C;
                iVar10 = lbl_8201FBC0;
                if (param_1[5] == 0) {
                  param_1[0x1d86] = lbl_8208DE10;
                  param_1[0x1d87] = iVar11;
                }
                else {
                  param_1[0x1d86] = (int)lbl_82002C5C;
                  param_1[0x1d87] = iVar10;
                }
              }
            }
            else {
              param_1[0x1d78] = 1;
              iVar10 = lbl_8201FBC0;
              fVar2 = lbl_82002C5C;
              param_1[0x1d85] = iVar5;
              param_1[0x1d84] = iVar7;
              param_1[0x1d86] = (int)fVar2;
              param_1[0x1d87] = iVar10;
            }
          }
          else {
            param_1[0x1d78] = 1;
            iVar5 = lbl_82057B54;
            iVar10 = lbl_8201FBC0;
            param_1[0x1d85] = iVar9;
            param_1[0x1d84] = iVar11;
            param_1[0x1d86] = iVar10;
            param_1[0x1d87] = iVar5;
          }
        }
        else {
          param_1[0x1d78] = 1;
          iVar11 = lbl_8208DE20;
          iVar10 = lbl_8208DE1C;
          param_1[0x1d85] = (int)fVar2;
          param_1[0x1d84] = iVar8;
          param_1[0x1d86] = iVar11;
          param_1[0x1d87] = iVar10;
        }
      }
      else {
        param_1[0x1d78] = 1;
        iVar11 = lbl_8208DDB4;
        iVar10 = lbl_8207F4E8;
        param_1[0x1d85] = iVar9;
        param_1[0x1d84] = iVar8;
        param_1[0x1d86] = iVar11;
        param_1[0x1d87] = iVar10;
      }
      goto code_r0x82e36b10;
    }
  }
  param_1[0x1d78] = 0;
code_r0x82e36b10:
  iVar10 = fn_82E36008();
  *(undefined4 *)(iVar10 + 0x7620) = lbl_8201ED80;
  if (((*(int *)(iVar10 + 0x75e0) != 0) && (*(int *)(iVar10 + 0x14) == 0)) &&
     (1 < *(int *)(iVar10 + 0x7624))) {
    iVar11 = *(int *)(iVar10 + 0x10834) * *(int *)(iVar10 + 0x7624);
    if (iVar11 < 10) {
      dVar14 = (double)(float)((double)*(float *)(iVar10 + 0x7618) * dVar14);
      if (dVar14 <= dVar15) {
        dVar14 = dVar15;
      }
      *(float *)(iVar10 + 0x7618) = (float)dVar14;
      dVar14 = (double)(*(float *)(iVar10 + 0x761c) * lbl_82021538);
      if (dVar14 <= dVar15) {
        dVar14 = dVar15;
      }
      *(float *)(iVar10 + 0x761c) = (float)dVar14;
    }
    else if (iVar11 < 0x14) {
      dVar14 = (double)(float)((double)*(float *)(iVar10 + 0x7618) * dVar14);
      if (dVar14 <= dVar15) {
        dVar14 = dVar15;
      }
      *(float *)(iVar10 + 0x7618) = (float)dVar14;
    }
  }
  if (((double)*(float *)(iVar10 + 0x761c) <= (double)*(float *)(iVar10 + 0x7618)) &&
     (dVar13 < (double)*(float *)(iVar10 + 0x7618))) {
    *(float *)(iVar10 + 0x7618) = (float)((double)*(float *)(iVar10 + 0x761c) - dVar13);
  }
  if (*(int *)(iVar10 + 0x75e0) != 0) {
    if (iRam8323fe7c != 0) {
      *(undefined4 *)(iVar10 + 0x7618) = uRam8329f608;
    }
    if (iRam8323fe80 != 0) {
      *(undefined4 *)(iVar10 + 0x761c) = uRam8329f604;
    }
  }
  return;
}

