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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_98;
extern int fn_82BA02A8();
extern int fn_82BEEAF0();
extern int fn_82BEEC48();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;


void fn_82BE4008(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,float *param_5
                  )

{
  int iVar1;
  undefined8 uVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  uVar2 = fn_82F6A548();
  fn_82BA02A8(auStack_70);
  fn_82BA02A8(auStack_80);
  fn_82BA02A8(auStack_98);
  lVar5 = 0;
  param_2 = param_2 + -4;
  do {
    iVar1 = (int)param_2;
    dVar9 = (double)*(float *)(iVar1 + 0x24);
    dVar6 = (double)fn_82BEEAF0(uVar2,2);
    dVar8 = (double)*(float *)(iVar1 + 0x14);
    dVar7 = (double)(float)(dVar6 * dVar9);
    dVar6 = (double)fn_82BEEAF0(uVar2,1);
    dVar9 = (double)*(float *)(iVar1 + 0x34);
    param_2 = param_2 + 4;
    dVar10 = (double)*(float *)param_2;
    dVar7 = (double)(float)(dVar6 * dVar8 + dVar7);
    dVar6 = (double)fn_82BEEAF0(uVar2,0);
    dVar6 = (double)(float)((double)(float)(dVar6 * dVar10 + dVar7) + dVar9);
    pfVar3 = (float *)fn_82BEEC48(auStack_70,lVar5);
    lVar5 = lVar5 + 1;
    *pfVar3 = (float)dVar6;
  } while ((int)lVar5 < 4);
  lVar5 = 0;
  param_3 = param_3 + -4;
  do {
    pfVar3 = (float *)fn_82BEEC48(auStack_70,3);
    iVar1 = (int)param_3;
    dVar6 = (double)(*(float *)(iVar1 + 0x34) * *pfVar3);
    pfVar3 = (float *)fn_82BEEC48(auStack_70,2);
    dVar6 = (double)(float)((double)*(float *)(iVar1 + 0x24) * (double)*pfVar3 + dVar6);
    pfVar3 = (float *)fn_82BEEC48(auStack_70,1);
    dVar6 = (double)(float)((double)*(float *)(iVar1 + 0x14) * (double)*pfVar3 + dVar6);
    pfVar3 = (float *)fn_82BEEC48(auStack_70,0);
    param_3 = param_3 + 4;
    dVar6 = (double)(float)((double)*(float *)param_3 * (double)*pfVar3 + dVar6);
    pfVar3 = (float *)fn_82BEEC48(auStack_80,lVar5);
    lVar5 = lVar5 + 1;
    *pfVar3 = (float)dVar6;
  } while ((int)lVar5 < 4);
  pfVar3 = (float *)fn_82BEEC48(auStack_80,0);
  pfVar4 = (float *)fn_82BEEC48(auStack_80,3);
  dVar6 = (double)(*pfVar3 / *pfVar4);
  pfVar3 = (float *)fn_82BEEC48(auStack_98,0);
  *pfVar3 = (float)dVar6;
  pfVar3 = (float *)fn_82BEEC48(auStack_80,1);
  pfVar4 = (float *)fn_82BEEC48(auStack_80,3);
  dVar6 = (double)(*pfVar3 / *pfVar4);
  pfVar3 = (float *)fn_82BEEC48(auStack_98,1);
  *pfVar3 = (float)dVar6;
  pfVar3 = (float *)fn_82BEEC48(auStack_80,2);
  pfVar4 = (float *)fn_82BEEC48(auStack_80,3);
  dVar6 = (double)(*pfVar3 / *pfVar4);
  pfVar3 = (float *)fn_82BEEC48(auStack_98,2);
  *pfVar3 = (float)dVar6;
  pfVar3 = (float *)fn_82BEEC48(auStack_98,0);
  dVar9 = (double)lbl_82002AE0;
  dVar6 = (double)lbl_82002C5C;
  *param_5 = (float)((double)(param_4[2] - *param_4) * dVar6) * (float)((double)*pfVar3 + dVar9) +
             (float)*param_4;
  pfVar3 = (float *)fn_82BEEC48(auStack_98,1);
  param_5[1] = (float)((double)(param_4[3] - param_4[1]) * dVar6) * (float)(dVar9 - (double)*pfVar3)
               + (float)param_4[1];
  fn_82F6A594();
  return;
}

