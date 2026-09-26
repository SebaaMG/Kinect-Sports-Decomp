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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82F50108();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83297720;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern V16 vectorSubtractFloatingPoint();


undefined8 fn_824772F0(undefined8 param_1)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  int in_r0;
  undefined8 uVar5;
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  float fVar6;
  float fVar7;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  float afStack_30 [12];
  
  uStack_70 = lbl_821CC160;
  uStack_6c = lbl_821CA460;
  uStack_68 = lbl_821CC160;
  fn_82F50108(param_1,9,2,auStack_60,0,0,0);
  fn_82F50108(param_1,0xe,2,auStack_40,0,0,0);
  fn_82F50108(param_1,8,2,auStack_50,0,0,0);
  fn_82F50108(param_1,0xd,2,afStack_30,0,0,0);
  fVar4 = lbl_83297720;
  vectorSubtractFloatingPoint(in_vs45,in_vs44);
  uVar2 = (int)&uStack_70 + in_r0 & 0xfffffff0;
  fVar6 = *(float *)(uVar2 + 4);
  fVar7 = *(float *)(uVar2 + 8);
  fVar1 = *(float *)(((uint)(auStack_60 + in_r0) & 0xfffffff0) + 4) * fVar6 + 0.0 +
          *(float *)(((uint)(auStack_60 + in_r0) & 0xfffffff0) + 8) * fVar7;
  uVar2 = (int)afStack_30 + in_r0 & 0xfffffff0;
  vectorSubtractFloatingPoint(in_vs43,in_vs44);
  fVar6 = *(float *)(uVar2 + 4) * fVar6 + 0.0 + *(float *)(uVar2 + 8) * fVar7;
  pfVar3 = (float *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  pfVar3 = (float *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar6;
  pfVar3[1] = fVar6;
  pfVar3[2] = fVar6;
  pfVar3[3] = fVar6;
  if ((afStack_30[0] <= fVar4) || (uVar5 = 1, afStack_30[0] <= fVar4)) {
    uVar5 = 0;
  }
  return uVar5;
}

