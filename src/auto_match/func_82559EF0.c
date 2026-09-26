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
extern unsigned int fStack00000014;
extern int fn_82809D40();
extern unsigned int lbl_82195680;
extern unsigned int lbl_821CC160;


undefined8 fn_82559EF0(float *param_1,float *param_2)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float fStack00000014;
  
  fVar1 = lbl_821CC160;
  dVar3 = (double)in_register_00010010;
  dVar4 = (double)in_register_00010018;
  uVar2 = 1;
  dVar5 = (double)lbl_821CC160;
  dVar7 = (double)lbl_82195680;
  if ((dVar7 < ABS(dVar3)) || (dVar7 < ABS(dVar4))) {
    dVar6 = (double)SQRT((float)(dVar4 * dVar4 + (double)(float)(dVar3 * dVar3)));
  }
  else {
    *param_2 = lbl_821CC160;
    uVar2 = 0;
    *param_1 = fVar1;
    dVar6 = dVar5;
  }
  fStack00000014 = in_register_00010014;
  if ((dVar7 < ABS(dVar3)) || (dVar7 < ABS(dVar4))) {
    dVar3 = (double)fn_82809D40();
    *param_2 = (float)dVar3;
  }
  else {
    *param_2 = fVar1;
    uVar2 = 0;
  }
  if ((dVar7 < ABS((double)fStack00000014)) || (dVar7 < ABS(dVar6))) {
    dVar3 = (double)fn_82809D40(-(double)fStack00000014,dVar6);
    *param_1 = (float)dVar3;
  }
  else {
    *param_1 = (float)dVar5;
    uVar2 = 0;
  }
  return uVar2;
}

