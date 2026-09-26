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
extern unsigned int *auStack_60;
extern int fn_82435FA8();
extern int fn_824E17D8();
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C78F0;


double fn_8244C360(int *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  int in_r0;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_60 [16];
  float afStack_50 [16];
  
  dVar5 = (double)**(float **)(param_2 + 0x1a0);
  dVar4 = (double)fn_824E17D8(*(undefined4 *)(param_2 + 0x24));
  (**(code **)(*param_1 + 0x1c))
            ((double)(float)(dVar4 * (double)lbl_82191FCC + dVar5),auStack_60,param_1,param_3,0);
  fVar8 = *(float *)(((uint)(auStack_60 + in_r0) & 0xfffffff0) + 4);
  fVar9 = *(float *)(((uint)(auStack_60 + in_r0) & 0xfffffff0) + 8);
  uVar1 = *(int *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 4) + 0x50U & 0xfffffff0;
  fVar6 = *(float *)(uVar1 + 4);
  fVar7 = *(float *)(uVar1 + 8);
  fn_82435FA8((double)lbl_821CC160,afStack_50,param_1,param_3,0);
  fVar3 = lbl_831C78F0;
  uVar1 = (int)afStack_50 + in_r0 & 0xfffffff0;
  fVar6 = (fVar8 - fVar6) * *(float *)(uVar1 + 4) + 0.0 + (fVar9 - fVar7) * *(float *)(uVar1 + 8);
  pfVar2 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *pfVar2 = fVar6;
  pfVar2[1] = fVar6;
  pfVar2[2] = fVar6;
  pfVar2[3] = fVar6;
  return (double)(afStack_50[0] / fVar3);
}

