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
extern int fn_82569598();
extern int fn_82569740();
extern unsigned int lbl_82195518;
extern unsigned int lbl_821CA460;


void fn_825697C0(double param_1,double param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_r0;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar4 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  iVar3 = *(int *)(param_3 + 0x78);
  fVar1 = *(float *)(param_3 + 0x94);
  *(float *)(param_3 + 0x20) = (float)param_1;
  *(float *)(param_3 + 0x28) = (float)param_2;
  *(undefined1 *)(param_3 + 0x24) = 0;
  puVar4 = (undefined4 *)(param_3 + 0x10U & 0xfffffff0);
  *puVar4 = uVar6;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  fVar1 = lbl_821CA460 / fVar1;
  if (iVar3 == 0) {
    fVar2 = *(float *)(param_3 + 0x88);
  }
  else {
    fVar2 = *(float *)(param_3 + 0x90);
  }
  dVar5 = (double)(fVar2 * fVar1 - *(float *)(param_3 + 0x98) * fVar1);
  if (dVar5 < 0.0) {
    dVar5 = lbl_82195518;
  }
  fn_82569598((double)(float)dVar5,param_3,**(undefined4 **)(param_3 + 0x60));
  if (*(int *)(param_3 + 0x78) == 0) {
    fVar1 = *(float *)(param_3 + 0x88);
  }
  else {
    fVar1 = *(float *)(param_3 + 0x90);
  }
  if (*(int *)(param_3 + 0xdc) != 0) {
    fn_82569740((double)(fVar1 / *(float *)(param_3 + 0x94)),param_3);
  }
  return;
}

