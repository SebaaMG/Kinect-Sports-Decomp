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
extern int fn_82F655D8();
extern int iRam83217a08;
extern int iRam83217a88;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82015B38;
extern unsigned int lbl_82028820;
extern unsigned int lbl_820577E8;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83217B60;
extern unsigned int uRam83217b2c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fn_829DB450(double param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5,
             float *param_6)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  
  if (lbl_83217B60 == 2) {
    iVar4 = -0x7cde8578;
    iVar6 = iRam83217a88;
  }
  else {
    iVar4 = -0x7cde85f8;
    iVar6 = iRam83217a08;
  }
  pfVar7 = (float *)(iVar4 + 4);
  uRam83217b2c = 2;
  if ((((param_1 <= (double)lbl_821AAD20) || (param_3 == (float *)0x0)) || (param_4 == (float *)0x0)
      ) || (param_5 == (float *)0x0)) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    dVar9 = param_1;
    dVar8 = (double)fn_82F655D8(lbl_82002C40,lbl_82028820);
    fVar2 = lbl_820577E8;
    iVar4 = 0;
    pfVar5 = pfVar7;
    if (0 < iVar6) {
      do {
        if (dVar9 < (double)*pfVar5) {
          *param_5 = pfVar7[iVar4 * 3 + 1];
          fVar1 = fVar2 / (float)((double)pfVar7[iVar4 * 3 + 2] * dVar9);
          *param_4 = pfVar7[iVar4 * 3 + 2];
          *param_3 = fVar1;
          if ((float)dVar8 <= fVar1) {
            *param_3 = (float)dVar8;
            if (iVar4 == 0) {
              uRam83217b2c = 0;
            }
            param_1 = (double)(fVar2 / (*param_3 * *param_4));
          }
          break;
        }
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 3;
      } while (iVar4 < iVar6);
    }
    if (iVar4 == iVar6) {
      *param_3 = lbl_82002AE0;
      *param_5 = lbl_82015B38;
      *param_4 = fVar2 / (float)((double)*param_3 * dVar9);
      uRam83217b2c = 1;
      param_1 = (double)(fVar2 / (*param_3 * *param_4));
    }
    *param_6 = (float)param_1;
    uVar3 = 0;
  }
  return uVar3;
}

