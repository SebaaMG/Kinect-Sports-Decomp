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
extern unsigned int *auStack_50;
extern float fRam8326b868;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern int fn_82588280();
extern int fn_825E4A78();
extern int fn_825E4CA8();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B8E8;
extern unsigned int lbl_8326B8F0;
extern unsigned int uRam8326b858;
extern unsigned int uStack_60;


void fn_825889E0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5,float *param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined4 in_stack_00000054;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  undefined8 auStack_50 [10];
  
  dVar4 = (double)lbl_821CC160;
  fStack_58 = lbl_821CC160;
  uStack_60 = ((((U64)(uStack_60)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(lbl_821CC160)) & ((U64)0xFFFFFFFF)) << 0));
  dVar3 = (double)fn_825E4A78(param_2,param_7,param_1,param_4,&fStack_58,&uStack_60);
  uVar1 = (uint)param_1 & 0xffff;
  fStack_54 = (float)((double)(*param_6 + (((U64)(uStack_60) >> 0) & 0xFFFFFFFF)) - dVar3);
  iVar2 = *(int *)(&lbl_8326B8E8)[param_2];
  fStack_58 = *param_5 + fStack_58;
  if (((int)uVar1 < iVar2) ||
     (iVar2 = uVar1 - iVar2, ((int *)(&lbl_8326B8E8)[param_2])[1] < (int)uVar1)) {
    iVar2 = 0;
  }
  iVar2 = *(int *)(&lbl_8326B8F0 + param_2 * 4) + iVar2 * 0x18;
  uStack_60 = *(undefined8 *)(iVar2 + 8);
  auStack_50[0] = *(undefined8 *)(iVar2 + 0x10);
  fn_825E4CA8((double)fRam8326b868,param_8,&fStack_58,param_4,&uStack_60,auStack_50,uStack_60,
                  uRam8326b858,in_stack_00000054);
  dVar3 = (double)fn_82588280(dVar4,param_2,param_1,param_7);
  *param_5 = (float)(dVar3 + (double)*param_5);
  return;
}

