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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int fStack_6c;
extern unsigned int fStack_7c;
extern int fn_8249ABC0();
extern int fn_8249B598();
extern int fn_824CCC68();
extern int fn_824CD030();
extern int fn_824E3740();
extern int fn_82F510F0();
extern int fn_82F512E8();
extern int fn_82F51AC0();
extern int fn_82F52348();
extern unsigned int lbl_821CC160;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_824CCAE8(undefined8 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined8 in_r0;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auStack_80 [4];
  float fStack_7c;
  undefined1 auStack_70 [4];
  float fStack_6c;
  float afStack_60 [4];
  undefined1 auStack_50 [80];
  
  dVar8 = (double)lbl_821CC160;
  dVar9 = dVar8;
  iVar5 = fn_824CD030();
  if (iVar5 != 0) {
    iVar5 = param_2[0xc];
    uVar4 = fn_8249ABC0();
    uVar4 = fn_8249B598(uVar4,iVar5);
    iVar5 = param_2[10];
    if (iVar5 != (int)uVar4) {
      fn_82F510F0(param_2[8],uVar4);
      param_2[10] = (int)uVar4;
      (**(code **)(*param_2 + 0xc))(param_2,iVar5);
    }
  }
  iVar6 = fn_82F512E8(afStack_60,param_2[8],0,0);
  iVar5 = param_2[8];
  puVar1 = (undefined4 *)((int)in_r0 + iVar6 & 0xfffffff0);
  uVar10 = puVar1[1];
  uVar12 = puVar1[2];
  uVar14 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_80 + (int)in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar10;
  puVar2[2] = uVar12;
  puVar2[3] = uVar14;
  fn_82F52348(iVar5,0);
  fStack_7c = (float)dVar8;
  lVar7 = 0;
  do {
    if ((int)lVar7 != 0) {
      iVar6 = fn_82F512E8(auStack_50,param_2[8],lVar7,0);
      iVar5 = param_2[8];
      puVar1 = (undefined4 *)((int)in_r0 + iVar6 & 0xfffffff0);
      uVar10 = puVar1[1];
      uVar12 = puVar1[2];
      uVar14 = puVar1[3];
      puVar2 = (undefined4 *)((uint)(auStack_70 + (int)in_r0) & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar10;
      puVar2[2] = uVar12;
      puVar2[3] = uVar14;
      fn_82F52348(iVar5,lVar7);
      fStack_6c = (float)dVar8;
      fVar11 = *(float *)(((uint)(auStack_80 + (int)in_r0) & 0xfffffff0) + 4);
      fVar13 = *(float *)(((uint)(auStack_80 + (int)in_r0) & 0xfffffff0) + 8);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(in_vs32, &_vt0, 16); }
      fVar11 = fVar11 * fVar11 + 0.0 + fVar13 * fVar13;
      pfVar3 = (float *)((int)afStack_60 + (int)in_r0 & 0xfffffff0);
      *pfVar3 = fVar11;
      pfVar3[1] = fVar11;
      pfVar3[2] = fVar11;
      pfVar3[3] = fVar11;
      if (dVar9 < (double)afStack_60[0]) {
        dVar9 = (double)afStack_60[0];
      }
    }
    lVar7 = lVar7 + 1;
  } while ((int)lVar7 < 0x19);
  param_2[9] = (int)(float)SQRT(dVar9);
  fn_824CCC68(param_1,param_2);
  iVar5 = fn_824E3740();
  if (*(int *)(iVar5 + 0x18) == 0) {
    fn_82F51AC0(param_1,param_2[8]);
  }
  return;
}

