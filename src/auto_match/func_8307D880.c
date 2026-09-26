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
#define _fStack00000020 ((*(U64*)&fStack00000020))
#define _fStack00000030 ((*(U64*)&fStack00000030))
#define _fStack00000038 ((*(U64*)&fStack00000038))
#define _fStack00000040 ((*(U64*)&fStack00000040))
#define _fStack00000048 ((*(U64*)&fStack00000048))
extern unsigned int fStack00000020;
extern unsigned int fStack00000030;
extern unsigned int fStack00000034;
extern unsigned int fStack00000038;
extern unsigned int fStack00000040;
extern unsigned int fStack00000044;
extern unsigned int fStack00000048;
extern int fn_8306E8D8();
extern int fn_8306E8F8();
extern int fn_8306E920();
extern int fn_8306E970();
extern int fn_8306EA28();
extern int fn_8307DA20();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DF4C;
extern unsigned int lbl_82022E60;
extern unsigned int lbl_8217EB68;
extern unsigned int lbl_8217EB70;
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack00000028;
extern unsigned int uStack00000050;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * fn_8307D880(float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fStack00000020;
  undefined8 uStack00000028;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  undefined8 uStack00000050;
  
  _fStack00000020 = param_2;
  uStack00000028 = param_3;
  _fStack00000030 = param_4;
  _fStack00000038 = param_5;
  _fStack00000040 = param_6;
  _fStack00000048 = param_7;
  uStack00000050 = param_8;
  fn_8307DA20();
  dVar7 = (double)fStack00000040;
  dVar9 = (double)lbl_8200133C;
  cVar3 = fn_8306E8D8(dVar7,dVar9,(double)lbl_82196080);
  dVar6 = (double)lbl_82002AE0;
  cVar4 = fn_8306E8D8(dVar7,dVar6,(double)lbl_82196080);
  if ((cVar3 == '\0') && (cVar4 == '\0')) {
    dVar7 = (double)fn_8306E970(dVar7);
    param_1[1] = (float)dVar7;
    dVar7 = (double)fn_8306E920();
    dVar8 = (double)(float)(dVar6 / dVar7);
    dVar7 = (double)(float)(dVar9 / dVar7);
    dVar6 = (double)fn_8306EA28((double)(float)(dVar7 * (double)fStack00000044),
                                    (double)(float)(dVar8 * (double)fStack00000048));
    *param_1 = (float)dVar6;
    dVar6 = (double)fn_8306EA28((double)(float)(dVar7 * (double)fStack00000030),
                                    (double)(float)(dVar8 * (double)fStack00000020));
    param_1[2] = (float)dVar6;
  }
  else {
    param_1[2] = lbl_821AAD20;
    fVar1 = lbl_8201DF4C;
    if (cVar4 != '\0') {
      fVar1 = lbl_8217EB70;
    }
    param_1[1] = fVar1;
    dVar7 = (double)fStack00000034;
    dVar9 = (double)fStack00000038;
    dVar6 = (double)fn_8306EA28(dVar9,dVar7);
    *param_1 = (float)dVar6;
    uVar5 = fn_8306E8F8();
    cVar3 = fn_8306E8D8(uVar5,dVar9,(double)lbl_82196080);
    if (cVar3 == '\0') {
      bVar2 = false;
    }
    else {
      uVar5 = fn_8306E920((double)*param_1);
      cVar3 = fn_8306E8D8(uVar5,dVar7,(double)lbl_82196080);
      bVar2 = cVar3 != '\0';
    }
    if (!bVar2) {
      fVar1 = lbl_82022E60;
      if (*param_1 < 0.0) {
        fVar1 = lbl_8217EB68;
      }
      *param_1 = fVar1 + *param_1;
    }
  }
  return param_1;
}

