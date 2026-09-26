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
extern int fn_82539560();
extern int fn_8306E7D8();
extern int fn_8306E7E8();
extern int fn_8306E888();
extern int fn_8306EA28();
extern int fn_8306EA78();
extern int fn_8306ECC8();
extern int fn_8306EE38();
extern int fn_830760D0();
extern int fn_830763C8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201FBC0;
extern unsigned int lbl_820288B0;
extern unsigned int lbl_8217EB68;
extern unsigned int lbl_8217EB70;
extern unsigned int lbl_82186E18;
extern unsigned int lbl_82186E74;
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000020;


void fn_8307AC98(char param_1,float *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int in_r0;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  
  puVar1 = (undefined4 *)((int)&stack0x00000020 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  dVar3 = (double)fn_8306EE38();
  fVar2 = lbl_821AAD20;
  if (dVar3 <= (double)lbl_82196080) {
    *param_2 = lbl_821AAD20;
    param_2[1] = fVar2;
    param_2[2] = fVar2;
  }
  else {
    dVar3 = (double)fn_8306EA28(-(double)in_stack_00000028,-(double)in_stack_00000024);
    *param_2 = (float)dVar3;
    dVar3 = (double)fn_8306E888();
    if (dVar3 <= (double)lbl_8217EB70) {
      dVar3 = (double)*param_2;
    }
    else {
      dVar3 = (double)fn_8306EA78((double)(lbl_8217EB68 - *param_2));
    }
    *param_2 = (float)dVar3;
    fn_8306ECC8();
    fn_830763C8(-(double)*param_2);
    fn_830760D0();
    puVar1 = (undefined4 *)((int)&stack0x00000020 + in_r0 & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    dVar6 = (double)in_stack_00000024;
    dVar7 = (double)in_stack_00000020;
    dVar3 = (double)fn_8306EA28(dVar7,-dVar6);
    param_2[1] = (float)dVar3;
    dVar3 = (double)fn_8306E888();
    if (dVar3 <= (double)lbl_8217EB70) {
      dVar3 = (double)param_2[1];
    }
    else {
      dVar3 = (double)fn_8306EA78((double)(lbl_8217EB68 - param_2[1]));
    }
    param_2[1] = (float)dVar3;
    dVar4 = (double)fn_8306E888(dVar7);
    dVar8 = (double)lbl_82002AE0;
    dVar3 = dVar8;
    if ((double)lbl_82196080 < dVar4) {
      dVar8 = (double)fn_8306E888((double)(float)((double)SQRT(in_stack_00000028 *
                                                                in_stack_00000028 +
                                                                (float)(dVar6 * dVar6)) / dVar7));
    }
    dVar6 = (double)lbl_821AAD20;
    dVar3 = (double)fn_82539560(dVar8,(double)lbl_82186E74,(double)lbl_82002C5C,dVar6,dVar3);
    param_2[2] = (float)dVar3;
    uVar5 = fn_8306E888((double)param_2[1]);
    dVar3 = (double)fn_82539560(uVar5,(double)lbl_8201FBC0,(double)lbl_82186E18,dVar3,dVar6);
    param_2[2] = (float)dVar3;
    if (param_1 == '\0') {
      dVar3 = (double)fn_8306E7D8((double)param_2[1],(double)lbl_82002C2C);
    }
    else {
      dVar3 = (double)fn_8306E7E8((double)param_2[1],(double)lbl_820288B0);
    }
    param_2[1] = (float)dVar3;
  }
  dVar3 = (double)fn_8306EE38();
  param_2[3] = (float)dVar3;
  return;
}

