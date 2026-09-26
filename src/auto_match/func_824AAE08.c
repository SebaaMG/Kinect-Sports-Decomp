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
extern unsigned int *auStack_48;
extern int fn_824AA258();
extern int fn_824AAF18();
extern int fn_824AB100();
extern int fn_82539560();
extern unsigned int lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_824AAE08(int param_1,int *param_2)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  int in_r0;
  undefined8 uVar4;
  double extraout_f1;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float in_register_00010450;
  float in_register_00010454;
  float in_register_00010458;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  float afStack_40 [10];
  
  (**(code **)*param_2)(param_2,auStack_48,&uStack_4c);
  (**(code **)(*param_2 + 4))(param_2,uStack_4c,&uStack_50);
  uVar4 = fn_824AAF18(param_1,uStack_50);
  dVar9 = extraout_f1;
  dVar5 = (double)fn_824AB100(uVar4,uStack_50);
  fn_824AA258(afStack_40,param_1,param_2,6);
  uVar2 = (int)afStack_40 + in_r0 & 0xfffffff0;
  fVar1 = in_register_00010450 * 0.0 + *(float *)(uVar2 + 4) * in_register_00010454 +
          *(float *)(uVar2 + 8) * in_register_00010458;
  dVar7 = (double)lbl_821CA460;
  dVar8 = (double)lbl_821CC160;
  dVar6 = (double)lbl_82192604;
  pfVar3 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  dVar6 = (double)fn_82539560((double)afStack_40[0],dVar7,dVar6,dVar7,dVar8);
  *(float *)(param_1 + 0x48) =
       (float)((double)(float)((double)(longlong)(int)dVar6 * dVar5) * dVar9);
  return;
}

