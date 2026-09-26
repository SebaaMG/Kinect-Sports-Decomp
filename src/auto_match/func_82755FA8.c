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
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82755808();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82005C88;


void fn_82755FA8(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  pfVar2 = (float *)fn_82F6A538();
  fVar1 = lbl_82005C88;
  fStack_70 = *param_2;
  dVar4 = (double)fStack_70;
  fStack_6c = param_2[1];
  dVar9 = (double)fStack_6c;
  uVar3 = 0;
  fStack_60 = param_2[2];
  dVar8 = (double)fStack_60;
  fStack_64 = param_2[3];
  dVar7 = (double)fStack_64;
  if ((dVar4 < (double)*param_3) && (uVar3 = 2, (double)*param_3 < dVar8)) {
    uVar3 = 1;
  }
  if (dVar9 < (double)param_3[1]) {
    if ((double)param_3[1] < dVar7) {
      uVar3 = uVar3 | 0x10;
    }
    else {
      uVar3 = uVar3 | 0x20;
    }
  }
  fStack_68 = fStack_70;
  fStack_5c = fStack_64;
  fStack_58 = fStack_60;
  fStack_54 = fStack_6c;
  if (uVar3 < 0x12) {
    if (uVar3 == 0x11) {
code_r0x8275610c:
      dVar9 = dVar7;
      dVar6 = (double)fn_82755808(&fStack_68,&fStack_60);
      *pfVar2 = (float)((double)(float)(dVar8 - dVar4) * dVar6 + dVar4);
      fVar1 = (float)((double)(float)(dVar7 - dVar9) * dVar6 + dVar9);
    }
    else {
      if (uVar3 == 0) {
        *pfVar2 = fStack_70;
        pfVar2[1] = fStack_6c;
        goto code_r0x82756160;
      }
      if (uVar3 == 1) {
        dVar6 = dVar9;
        dVar5 = (double)fn_82755808(&fStack_70,&fStack_58);
        dVar8 = dVar8 - dVar4;
        dVar7 = dVar9 - dVar6;
      }
      else {
        if (uVar3 < 3) {
          *pfVar2 = fStack_60;
          pfVar2[1] = fStack_6c;
          goto code_r0x82756160;
        }
        if (uVar3 != 0x10) goto code_r0x827560f0;
        dVar10 = dVar4;
        dVar5 = (double)fn_82755808(&fStack_70,&fStack_68);
        dVar8 = dVar4 - dVar10;
        dVar7 = dVar7 - dVar9;
        dVar6 = dVar9;
        dVar4 = dVar10;
      }
      *pfVar2 = (float)((double)(float)dVar8 * dVar5 + dVar4);
      fVar1 = (float)((double)(float)dVar7 * dVar5 + dVar6);
    }
  }
  else if (uVar3 == 0x12) {
    dVar4 = dVar8;
    dVar6 = (double)fn_82755808(&fStack_58,&fStack_60);
    *pfVar2 = (float)((double)(float)(dVar8 - dVar4) * dVar6 + dVar4);
    fVar1 = (float)((double)(float)(dVar7 - dVar9) * dVar6 + dVar9);
  }
  else {
    if (uVar3 == 0x20) {
      *pfVar2 = fStack_70;
      pfVar2[1] = fStack_64;
      goto code_r0x82756160;
    }
    if (uVar3 == 0x21) goto code_r0x8275610c;
    if (uVar3 == 0x22) {
      *pfVar2 = fStack_60;
      pfVar2[1] = fStack_64;
      goto code_r0x82756160;
    }
code_r0x827560f0:
    *pfVar2 = lbl_82005C88;
  }
  pfVar2[1] = fVar1;
code_r0x82756160:
  fn_82F6A584(pfVar2);
  return;
}

