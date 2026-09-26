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
extern int fn_825792D8();
extern int fn_825797A0();
extern int fn_825CD278();
extern unsigned int lbl_82195680;
extern V16 vectorSubtractFloatingPoint();


undefined8
fn_82579688(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  int in_r0;
  int iVar6;
  int iVar7;
  undefined8 uVar5;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float afStack_60 [24];
  
  iVar7 = 0;
  uVar1 = in_r0 + (int)param_4 & 0xfffffff0;
  fVar12 = *(float *)(uVar1 + 4);
  fVar13 = *(float *)(uVar1 + 8);
  param_2[1] = 0;
  fVar4 = lbl_82195680;
  puVar2 = (undefined4 *)(in_r0 + (int)param_3 & 0xfffffff0);
  uVar8 = *puVar2;
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  fVar12 = fVar12 * fVar12 + 0.0 + fVar13 * fVar13;
  pfVar3 = (float *)((int)afStack_60 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar12;
  pfVar3[1] = fVar12;
  pfVar3[2] = fVar12;
  pfVar3[3] = fVar12;
  if (fVar4 < afStack_60[0]) {
    iVar6 = fn_825792D8(param_1,*param_2,param_3,param_4,param_5,0);
    if (iVar6 != 0) {
      if ((int)param_8 == 0) {
        iVar7 = fn_825797A0(param_2);
      }
      uVar5 = fn_825CD278(param_1,*param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                iVar7);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      if ((int)param_8 != 0) {
        return uVar5;
      }
      param_2[(param_2[1] + 1) * 3] = *(undefined4 *)(iVar7 + 0x74);
      param_2[1] = param_2[1] + 1;
      return uVar5;
    }
  }
  else {
    puVar2 = (undefined4 *)(in_r0 + (int)param_4 & 0xfffffff0);
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
  }
  return 0;
}

