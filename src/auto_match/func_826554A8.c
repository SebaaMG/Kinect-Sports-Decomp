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
extern unsigned int *auStack_2a0;
extern int fn_82654798();
extern int fn_82654FC0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821916F4;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_8219174C;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_82192480;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821929B0;
extern unsigned int lbl_82192A78;
extern unsigned int lbl_82192D74;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_82193B00;
extern float lbl_821957F0;
extern unsigned int lbl_82195A54;
extern unsigned int lbl_82195A58;
extern unsigned int lbl_82195A60;
extern unsigned int lbl_82195A68;
extern unsigned int lbl_82195A70;
extern unsigned int lbl_82195A78;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_2b0;
extern unsigned int uStack_2bc;


void fn_826554A8(double param_1,undefined4 *param_2,int param_3,undefined8 param_4,float *param_5,
                  undefined8 param_6,undefined8 param_7,int param_8)

{
  float fVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uStack_2bc;
  float afStack_2b8 [2];
  undefined4 uStack_2b0;
  undefined1 auStack_2a0 [648];
  
  bVar2 = true;
  if (param_5 == (float *)0x0) {
    param_5 = afStack_2b8;
    uStack_2b0 = 0;
  }
  dVar6 = (double)lbl_82192734;
  dVar7 = (double)*param_5;
  if ((double)*param_5 < dVar6) {
    dVar7 = dVar6;
  }
  dVar8 = (double)lbl_821CA460;
  if (dVar8 < dVar7) {
    dVar7 = dVar8;
  }
  dVar7 = (double)(float)(-(double)(float)(dVar7 * (double)lbl_82195A54 - (double)lbl_82192D74) *
                          dVar7 + dVar8);
  if ((param_8 == 0) || (param_3 == 0)) {
    if ((param_1 <= lbl_82195A68) || (lbl_82195A70 <= param_1)) {
      bVar2 = false;
    }
    if (dVar7 < dVar8) {
      bVar2 = false;
    }
    dVar9 = (double)(float)(dVar8 / param_1);
    if (dVar8 <= (double)(float)(dVar8 / param_1)) {
      dVar9 = dVar8;
    }
  }
  else {
    dVar9 = (double)param_5[1];
    if ((double)param_5[1] < dVar6) {
      dVar9 = dVar6;
    }
    if (dVar8 < dVar9) {
      dVar9 = dVar8;
    }
    dVar9 = -(double)(float)((double)(float)(dVar9 * (double)lbl_82195A54 + (double)lbl_82192A78) *
                             dVar9 - (double)lbl_82193B00);
    if ((param_1 <= lbl_82195A58) || (lbl_82195A60 <= param_1)) {
      bVar2 = false;
    }
    if (dVar7 < dVar8) {
      bVar2 = false;
    }
    if (dVar9 < dVar8) {
      bVar2 = false;
    }
    dVar5 = (double)(float)((double)lbl_821916FC / param_1);
    if (dVar8 <= (double)(float)((double)lbl_821916FC / param_1)) {
      dVar5 = dVar8;
    }
    dVar9 = (double)(float)(dVar5 * dVar9);
  }
  param_2[1] = (float)(dVar9 * dVar7) * lbl_821957F0;
  dVar7 = (double)lbl_8218E8E8;
  uStack_2bc = (uint)(longlong)(param_1 * (double)lbl_82195A78 + dVar7);
  param_2[0xa2] = uStack_2bc;
  if (0x1fffff < uStack_2bc) {
    param_2[0xa2] = 0x1fffff;
  }
  *param_2 = (int)param_7;
  iVar4 = (int)param_4;
  if (iVar4 == 2) {
    dVar7 = (double)param_5[2];
    if ((double)param_5[2] < dVar6) {
      dVar7 = dVar6;
    }
    if (dVar8 < dVar7) {
      dVar7 = dVar8;
    }
    dVar6 = dVar7 * (double)lbl_82192604 + (double)lbl_82192F70;
    fVar1 = lbl_82192480;
  }
  else {
    if (iVar4 == 3) {
      dVar9 = (double)param_5[2];
      if ((double)param_5[2] < dVar6) {
        dVar9 = dVar6;
      }
      if (dVar8 < dVar9) {
        dVar9 = dVar8;
      }
      dVar7 = (double)(float)((double)(float)(dVar9 * (double)lbl_821929B0 + (double)lbl_8219174C) *
                              dVar9 + dVar7);
      goto LAB_82655700;
    }
    if (iVar4 != 5) {
      dVar7 = (double)lbl_821CC160;
      goto LAB_82655700;
    }
    dVar7 = (double)param_5[2];
    if ((double)param_5[2] < dVar6) {
      dVar7 = dVar6;
    }
    if (dVar8 < dVar7) {
      dVar7 = dVar8;
    }
    dVar6 = dVar7 * (double)lbl_821917B0 + (double)lbl_821916F4;
    fVar1 = lbl_8218E8FC;
  }
  dVar7 = (double)(float)((double)(float)dVar6 * dVar7 + (double)fVar1);
LAB_82655700:
  uVar3 = 7;
  if (!bVar2) {
    uVar3 = param_4;
  }
  fn_82654FC0((double)(float)param_2[1],dVar7,uVar3,param_7,param_4,param_5,auStack_2a0);
  fn_82654798(auStack_2a0,param_2 + 2,param_7);
  return;
}

