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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_48;
extern unsigned int *auStack_54;
extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_78;
extern unsigned int *auStack_84;
extern unsigned int *auStack_90;
extern int fn_8280AD30();
extern int fn_82810208();
extern int fn_828102A8();
extern int fn_82810360();
extern int fn_828105C8();
extern int fn_82810B40();
extern unsigned int lbl_82002C5C;


void fn_82863400(float *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  longlong lVar1;
  undefined1 *puVar2;
  double dVar3;
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [60];
  
  fn_82810208(param_1,param_2,param_4);
  fn_828102A8((double)lbl_82002C5C,param_4,param_4);
  fn_82810360(param_1,auStack_90);
  fn_828105C8((double)*param_2,(double)param_1[1],(double)param_1[2],auStack_84);
  fn_828105C8((double)*param_1,(double)param_2[1],(double)param_1[2],auStack_78);
  fn_828105C8((double)*param_2,(double)param_2[1],(double)param_1[2],auStack_6c);
  fn_828105C8((double)*param_1,(double)param_1[1],(double)param_2[2],auStack_60);
  fn_828105C8((double)*param_2,(double)param_1[1],(double)param_2[2],auStack_54);
  fn_828105C8((double)*param_1,(double)param_2[1],(double)param_2[2],auStack_48);
  fn_82810360(param_2,auStack_3c);
  dVar3 = (double)fn_82810B40(param_4,auStack_90);
  *param_5 = (float)dVar3;
  puVar2 = auStack_84;
  lVar1 = 7;
  do {
    dVar3 = (double)fn_82810B40(param_4,puVar2);
    if ((double)*param_5 < dVar3) {
      *param_5 = (float)dVar3;
    }
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0xc;
  } while (lVar1 != 0);
  fn_8280AD30(param_3,param_4,param_4);
  return;
}

