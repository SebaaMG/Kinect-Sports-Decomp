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
extern int fn_82F65E18();
extern int fn_82FAB9C0();
extern int fn_8301E1F8();
extern int fn_8301E260();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642E0;


void fn_8301F0C0(double param_1,int param_2,longlong param_3,undefined8 param_4,undefined8 param_5
                  ,float *param_6,float *param_7)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(int *)(param_2 + 0x4c) == 0) {
    uVar2 = fn_82FAB9C0((ulonglong)lbl_832642E0 + 0xfe0,*(undefined4 *)(param_2 + 0xc));
    *(undefined4 *)(param_2 + 0x4c) = uVar2;
  }
  iVar1 = *(int *)(param_2 + 0x4c);
  dVar5 = (double)lbl_821AAD20;
  dVar6 = (double)lbl_82002AE0;
  dVar4 = dVar6;
  if (dVar5 < param_1) {
    dVar6 = (double)fn_8301E1F8(param_4,param_3 + 0xc);
    dVar6 = (double)(float)(dVar6 / param_1);
  }
  dVar3 = dVar4;
  if ((float)(dVar6 - dVar4) < 0.0) {
    dVar3 = dVar6;
  }
  if ((float)(dVar3 - (double)lbl_8200133C) < 0.0) {
    dVar3 = (double)lbl_8200133C;
  }
  dVar6 = (double)fn_82F65E18(dVar3);
  dVar6 = (double)fn_8301E260((double)*(float *)(iVar1 + 0x10),dVar5,
                                  (double)*(float *)(iVar1 + 0x14),dVar4,(double)(float)dVar6);
  dVar4 = dVar6;
  if ((float)((double)*param_6 - dVar6) < 0.0) {
    dVar4 = (double)*param_6;
  }
  *param_6 = (float)dVar4;
  *param_7 = (float)((double)*(float *)(param_2 + 0x1c) * dVar6 + (double)*param_7);
  return;
}

