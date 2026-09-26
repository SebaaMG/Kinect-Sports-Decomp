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
extern int fn_8255DA40();
extern int fn_825A27B8();
extern int fn_825D3378();
extern V16 vectorSubtractFloatingPoint();


undefined8
fn_825F6F38(double param_1,int param_2,int param_3,undefined8 param_4,ulonglong param_5,
             undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  float *pfVar2;
  int in_r0;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar8;
  float fVar9;
  float afStack_50 [20];
  
  lVar3 = fn_825A27B8();
  if ((lVar3 != 0) && (param_5 = *(uint *)(param_2 + 0x8ac) & param_5, param_5 != 0)) {
    dVar7 = (double)fn_8255DA40(param_2);
    uVar1 = in_r0 + param_3 & 0xfffffff0;
    fVar8 = *(float *)(uVar1 + 4);
    fVar9 = *(float *)(uVar1 + 8);
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    fVar8 = fVar8 * fVar8 + 0.0 + fVar9 * fVar9;
    pfVar2 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *pfVar2 = fVar8;
    pfVar2[1] = fVar8;
    pfVar2[2] = fVar8;
    pfVar2[3] = fVar8;
    if (afStack_50[0] <= (float)(dVar7 + param_1) * (float)(dVar7 + param_1)) {
      lVar6 = (ulonglong)*(uint *)(param_2 + 0x8c0) + 0x144;
      if ((ulonglong)*(uint *)(param_2 + 0x8c0) == 0) {
        lVar6 = 0;
      }
      if ((*(int *)(param_2 + 0x4c) == 0) || (*(int *)(param_2 + 0x8c0) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)
                 ((*(int *)(*(int *)(param_2 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_2 + 0x8c0)
                 );
      }
      uVar4 = fn_825D3378(param_1,lVar3,param_2 + 0xf0,param_2 + 0x130,uVar5,param_3,param_7,
                                param_5,lVar6);
      return uVar4;
    }
  }
  return 0;
}

