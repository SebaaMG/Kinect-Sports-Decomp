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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82BA02A8();
extern int fn_82F59450();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_820069B4;
extern unsigned int lbl_821AAD20;


void fn_82F59C30(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  
  pfVar4 = (float *)fn_82F6A548();
  fn_82BA02A8();
  fVar1 = in_register_00010018 * lbl_82005344;
  fVar2 = in_register_00010014 * lbl_82005344;
  fVar3 = in_register_00010010 * in_register_00010010 * lbl_82005344;
  dVar9 = (double)(in_vr1 * fVar2 + fVar1 * in_register_00010010);
  dVar6 = (double)(fVar1 * in_register_00010014 - in_vr1 * in_register_00010010 * lbl_82005344);
  dVar8 = (double)(lbl_82002AE0 - (in_register_00010014 * fVar2 + fVar3));
  dVar7 = (double)SQRT((float)(dVar8 * dVar8 + (double)(float)(dVar9 * dVar9)));
  if (dVar7 <= (double)lbl_820069B4) {
    dVar8 = (double)fn_82F59450(-(double)(fVar2 * in_register_00010010 - in_vr1 * fVar1),
                                      (double)(lbl_82002AE0 -
                                              (in_register_00010018 * fVar1 +
                                              in_register_00010014 * fVar2)));
    pfVar4[2] = (float)dVar8;
    dVar6 = (double)fn_82F59450(-dVar6,dVar7);
    *pfVar4 = (float)dVar6;
    pfVar4[1] = lbl_821AAD20;
  }
  else {
    dVar5 = (double)fn_82F59450((double)(fVar2 * in_register_00010010 + in_vr1 * fVar1),
                                      (double)(lbl_82002AE0 - (in_register_00010018 * fVar1 + fVar3)
                                              ));
    pfVar4[2] = (float)dVar5;
    dVar6 = (double)fn_82F59450(-dVar6,dVar7);
    *pfVar4 = (float)dVar6;
    dVar6 = (double)fn_82F59450(dVar9,dVar8);
    pfVar4[1] = (float)dVar6;
  }
  fn_82F6A594(pfVar4);
  return;
}

