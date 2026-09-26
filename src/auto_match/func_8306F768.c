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
extern unsigned int *auStack_50;
extern int fn_8306E7D8();
extern int fn_8306E7E8();
extern int fn_83075D30();
extern int fn_83075D40();
extern unsigned int lbl_8202236C;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_8217EB78;
extern unsigned int lbl_821AAD20;


void fn_8306F768(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,float *param_6,float *param_7)

{
  undefined4 *puVar1;
  int in_r0;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  undefined1 auStack_50 [80];
  
  uVar2 = fn_83075D40(param_2,param_4);
  uVar3 = fn_83075D40(param_2,param_3);
  dVar4 = (double)fn_8306E7D8(uVar3,uVar2);
  dVar5 = (double)lbl_821AAD20;
  if (dVar4 <= (double)lbl_820579A8) {
    dVar4 = (double)fn_8306E7E8(dVar5,(double)(float)((double)*param_6 + param_1));
    *param_6 = (float)dVar4;
  }
  else {
    dVar4 = (double)fn_8306E7D8((double)lbl_8202236C,(double)*param_6);
    *param_6 = (float)(dVar4 - param_1);
  }
  if (lbl_8217EB78 <= *param_6) {
    *param_7 = (float)((double)*param_7 + param_1);
  }
  else {
    fn_83075D30(auStack_50,param_2,param_3);
    altv207_13(in_vs32,in_vs35);
    puVar1 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    *param_7 = (float)dVar5;
  }
  return;
}

