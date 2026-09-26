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
extern int fn_827EC748();
extern int fn_82809CB0();


void fn_827ECDC0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = (double)fn_82809CB0((double)*param_4);
  dVar8 = (double)fn_82809CB0((double)param_4[1]);
  if (dVar7 <= dVar8) {
    dVar7 = (double)fn_82809CB0((double)param_4[2]);
    dVar8 = (double)fn_82809CB0((double)param_4[1]);
    if (dVar8 < dVar7) goto LAB_827ece18;
    fVar1 = param_1[2];
    fVar2 = param_3[2];
    fVar3 = param_2[2];
  }
  else {
    dVar7 = (double)fn_82809CB0((double)param_4[2]);
    dVar8 = (double)fn_82809CB0((double)*param_4);
    if (dVar7 <= dVar8) {
      fVar1 = param_1[2];
      fVar6 = param_1[1];
      fVar2 = param_3[2];
      fVar5 = param_3[1];
      fVar3 = param_2[2];
      fVar4 = param_2[1];
      goto LAB_827ece74;
    }
LAB_827ece18:
    fVar1 = param_1[1];
    fVar2 = param_3[1];
    fVar3 = param_2[1];
  }
  fVar4 = *param_2;
  fVar5 = *param_3;
  fVar6 = *param_1;
LAB_827ece74:
  fn_827EC748((double)fVar4,(double)fVar3,(double)fVar5,(double)fVar2,(double)fVar6,(double)fVar1)
  ;
  return;
}

