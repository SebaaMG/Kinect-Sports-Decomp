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
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_230;
extern unsigned int fStack_1b4;
extern unsigned int fStack_1ec;
extern unsigned int fStack_1f8;
extern unsigned int fStack_204;
extern unsigned int fStack_208;
extern unsigned int fStack_20c;
extern unsigned int fStack_210;
extern unsigned int fStack_214;
extern unsigned int fStack_218;
extern unsigned int fStack_21c;
extern unsigned int fStack_220;
extern int fn_8268CC00();
extern int fn_8268CCB0();
extern int fn_826EDE20();
extern int fn_826EE368();
extern int fn_8270E5E8();
extern int fn_8270E968();
extern int fn_8275B490();
extern int fn_8275EC20();
extern int fn_8275F178();
extern int fn_82783FB8();
extern int fn_827840E8();
extern unsigned int lbl_82002AE0;
extern float lbl_82002C28;
extern unsigned int lbl_820069B4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1d8;
extern unsigned int uStack_1dc;
extern unsigned int uStack_1f0;
extern unsigned int uStack_1f4;
extern unsigned int uStack_1fc;
extern unsigned int uStack_200;


void fn_82762700(int *param_1,int param_2,undefined8 param_3,undefined4 *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined4 auStack_230;
  struct { float first; float second; } stack_pair_220;

  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  float fStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  float fStack_1ec;
  undefined1 auStack_1e0 [4];
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1b4;
  undefined1 auStack_1b0 [416];
  
  fn_8268CC00(&uStack_1dc);
  stack_pair_220.first = lbl_821AAD20;
  pfVar4 = &fStack_1b4;
  lVar5 = 9;
  dVar7 = (double)lbl_821AAD20;
  do {
    pfVar4[2] = stack_pair_220.first;
    pfVar4[3] = stack_pair_220.first;
    pfVar4[4] = stack_pair_220.first;
    pfVar4[5] = stack_pair_220.first;
    pfVar4[6] = stack_pair_220.first;
    pfVar4[7] = stack_pair_220.first;
    pfVar4[8] = stack_pair_220.first;
    pfVar4 = pfVar4 + 9;
    *pfVar4 = stack_pair_220.first;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  bVar2 = false;
  stack_pair_220.second = stack_pair_220.first;
  auStack_230 = 0;
  fStack_218 = stack_pair_220.first;
  fStack_214 = stack_pair_220.first;
  lVar5 = 0;
  if ((*(byte *)(param_1 + 9) & 0x40) != 0) {
    lVar5 = (**(code **)(*param_1 + 0x24))(param_1,&auStack_230);
  }
  if ((((*(byte *)(param_1 + 9) & 0xc0) == 0) || (param_5 == 0)) ||
     (*(char *)(param_5 + 0x5c) == '\0')) goto LAB_827628bc;
  lVar3 = fn_8275F178(param_1,param_3);
  if (lVar3 < 0) goto LAB_827628bc;
  dVar6 = (double)lbl_82002AE0;
  fn_8275B490(dVar6,lVar3 * 0x28 + lVar5,auStack_1e0,param_4);
  fStack_1f8 = (float)dVar7;
  fStack_1ec = (float)dVar7;
  fStack_208 = (float)dVar6;
  fStack_204 = (float)dVar7;
  uStack_200 = uStack_1dc;
  uStack_1fc = uStack_1d8;
  uStack_1f4 = uStack_1d0;
  uStack_1f0 = uStack_1cc;
  fn_8268CCB0(&uStack_200,&fStack_210,&fStack_208);
  if (ABS(fStack_210) <= lbl_820069B4) {
LAB_82762870:
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (ABS(fStack_20c) <= lbl_820069B4) goto LAB_82762870;
  }
  if (!bVar1) {
    fn_82783FB8(param_3,&stack_pair_220.first,&stack_pair_220.second,&fStack_218,&fStack_214);
    fn_8270E5E8((double)*(float *)(param_2 + 0xc),auStack_1b0,param_5,&stack_pair_220.first);
    fn_826EDE20(param_2,auStack_1b0);
    bVar2 = true;
  }
LAB_827628bc:
  if (!bVar2) {
    if (param_5 != 0) {
      fn_8270E968(param_5,param_3,lVar5,auStack_230);
      fn_8275EC20(param_3,param_5);
    }
    fn_827840E8((double)(*(float *)(param_2 + 8) * lbl_82002C28),param_3);
    fn_826EE368(param_2,param_3,lVar5,auStack_230,param_4,*param_4);
  }
  return;
}

