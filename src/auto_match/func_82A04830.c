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
extern int fn_82A04180();
extern int fn_82A04310();
extern unsigned int iStack_50;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_8207F4F8;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82A04830(int param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iStack_50;
  int aiStack_4c [19];
  
  dVar7 = (double)lbl_821AAD20;
  uVar2 = 0;
  dVar6 = dVar7;
  dVar4 = dVar7;
  iVar1 = fn_82A04180(param_2);
  if (iVar1 != 0) {
    uVar2 = 1;
    fn_82A04310(param_2,&iStack_50,aiStack_4c);
    dVar5 = (double)lbl_82186E6C;
    dVar7 = dVar5;
    if (((double)*(float *)(param_1 + 0x40a8) != dVar4) &&
       ((double)*(float *)(param_1 + 0x40e0) != dVar4)) {
      dVar7 = (double)(float)((double)(float)((double)*(float *)(param_1 + 0x40e0) +
                                             (double)*(float *)(param_1 + 0x40a8)) *
                             (double)lbl_82002C5C);
    }
    dVar6 = (double)*(float *)(*(int *)(param_2 * 0x20 + -0x7cea36a8) * 0x1f0 + param_1 + 0x494);
    if (param_2 == aiStack_4c[0]) {
      dVar3 = (double)*(float *)(param_1 + 0x40a0);
      if (dVar3 != dVar4) {
        dVar5 = (double)(float)(dVar3 / (double)lbl_8200BF40);
      }
      if ((double)(float)(dVar6 - (double)*(float *)(iStack_50 * 0x1f0 + param_1 + 0x494)) <= -dVar5
         ) {
        uVar2 = 0;
      }
      else {
        dVar7 = (double)(float)(dVar3 / (double)lbl_8200BF40);
      }
    }
    else {
      dVar5 = (double)*(float *)(aiStack_4c[0] * 0x1f0 + param_1 + 0x494);
      dVar4 = (double)*(float *)(iStack_50 * 0x1f0 + param_1 + 0x494);
      if ((float)(dVar5 - dVar4) <= lbl_8207F4F8) {
        if (((float)(dVar6 - dVar4) <= lbl_8207F4F8) && ((float)(dVar6 - dVar5) <= lbl_8207F4F8))
        goto LAB_82a04990;
      }
      else if (dVar6 <= dVar5) {
        dVar6 = dVar5;
      }
      dVar7 = (double)(float)(dVar7 * (double)lbl_82002C5C);
    }
  }
LAB_82a04990:
  *param_3 = (float)dVar7;
  *param_4 = (float)dVar6;
  return uVar2;
}

