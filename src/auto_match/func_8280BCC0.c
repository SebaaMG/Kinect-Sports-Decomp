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
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_8280A668();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8280BCC0(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,double param_7,double param_8,double param_9
                  )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar7;
  undefined8 uVar6;
  double dVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float afStack_5c [19];
  
  pfVar7 = (float *)fn_82F6A538();
  dVar15 = extraout_f1;
  uVar6 = fn_8280A668(param_4,pfVar7,&fStack_6c,&fStack_70);
  uVar6 = fn_8280A668(param_5,uVar6,&fStack_60,afStack_5c);
  fn_8280A668(param_6,uVar6,&fStack_64,&fStack_68);
  fVar5 = lbl_82002AE0;
  dVar8 = (double)fStack_70;
  dVar13 = (double)fStack_68;
  dVar12 = (double)fStack_64;
  dVar10 = (double)fStack_60;
  dVar14 = (double)fStack_6c;
  dVar11 = (double)afStack_5c[0];
  dVar9 = (double)lbl_82002AE0;
  pfVar7[0xc] = (float)param_7;
  pfVar7[0xd] = (float)param_8;
  pfVar7[0xe] = (float)param_9;
  pfVar7[6] = (float)(dVar11 * dVar14);
  *pfVar7 = (float)(dVar13 * dVar11);
  pfVar7[1] = (float)(dVar12 * dVar11);
  pfVar7[2] = (float)-dVar10;
  fVar3 = (float)((double)(float)(dVar13 * dVar10) * dVar14 - (double)(float)(dVar12 * dVar8));
  pfVar7[10] = (float)(dVar11 * dVar8);
  fVar1 = (float)((double)(float)(dVar13 * dVar10) * dVar8 + (double)(float)(dVar12 * dVar14));
  pfVar7[4] = fVar3;
  fVar2 = (float)((double)(float)(dVar12 * dVar10) * dVar14 + (double)(float)(dVar13 * dVar8));
  pfVar7[8] = fVar1;
  fVar4 = (float)((double)(float)(dVar12 * dVar10) * dVar8 - (double)(float)(dVar13 * dVar14));
  pfVar7[5] = fVar2;
  pfVar7[9] = fVar4;
  if (dVar15 != dVar9) {
    *pfVar7 = (float)((double)(float)(dVar13 * dVar11) * dVar15);
    pfVar7[1] = (float)((double)(float)(dVar12 * dVar11) * dVar15);
    pfVar7[2] = (float)(-dVar10 * dVar15);
  }
  if (param_2 != dVar9) {
    pfVar7[5] = (float)((double)fVar2 * param_2);
    pfVar7[4] = (float)((double)fVar3 * param_2);
    pfVar7[6] = (float)((double)(float)(dVar11 * dVar14) * param_2);
  }
  if (param_3 != dVar9) {
    pfVar7[9] = (float)((double)fVar4 * param_3);
    pfVar7[8] = (float)((double)fVar1 * param_3);
    pfVar7[10] = (float)((double)(float)(dVar11 * dVar8) * param_3);
  }
  pfVar7[0xf] = fVar5;
  fVar1 = lbl_821AAD20;
  pfVar7[3] = lbl_821AAD20;
  pfVar7[7] = fVar1;
  pfVar7[0xb] = fVar1;
  fn_82F6A584();
  return;
}

