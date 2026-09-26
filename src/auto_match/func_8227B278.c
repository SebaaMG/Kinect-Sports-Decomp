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
extern int fn_82279E08();
extern int fn_8227B3F0();
extern int fn_82284B08();
extern unsigned int lbl_82191FB8;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192510;
extern unsigned int lbl_82192A60;
extern unsigned int lbl_82192F70;


void fn_8227B278(double param_1,int *param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = param_2[0x292];
  if (uVar2 < 2) {
    if ((double)lbl_82192510 <= (double)(float)param_2[0x293]) goto LAB_8227b380;
    fVar1 = (float)((double)(float)param_2[0x293] + param_1);
    fVar3 = lbl_82192510;
  }
  else if (uVar2 == 2) {
    if ((double)lbl_82191FB8 <= (double)(float)param_2[0x293]) goto LAB_8227b380;
    fVar1 = (float)((double)(float)param_2[0x293] + param_1);
    fVar3 = lbl_82191FB8;
  }
  else if (uVar2 < 4) {
    if ((double)lbl_821922D0 <= (double)(float)param_2[0x293]) goto LAB_8227b380;
    fVar1 = (float)((double)(float)param_2[0x293] + param_1);
    fVar3 = lbl_821922D0;
  }
  else if (uVar2 == 4) {
    if ((double)lbl_82192A60 <= (double)(float)param_2[0x293]) goto LAB_8227b380;
    fVar1 = (float)((double)(float)param_2[0x293] + param_1);
    fVar3 = lbl_82192A60;
  }
  else {
    if (5 < uVar2) goto LAB_8227b380;
    if ((double)lbl_82192F70 <= (double)(float)param_2[0x293]) goto LAB_8227b380;
    fVar1 = (float)((double)(float)param_2[0x293] + param_1);
    fVar3 = lbl_82192F70;
  }
  param_2[0x293] = (int)fVar1;
  if (fVar3 <= fVar1) {
    param_2[0x293] = (int)fVar3;
    param_2[0x292] = 6;
  }
LAB_8227b380:
  if ((1 < (uint)param_2[0x292]) && (param_2[0x29e] != 0)) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if (param_2[0x45a] != 0) {
    fn_82284B08(param_1);
  }
  fn_8227B3F0(param_1,param_2);
  fn_82279E08(param_1,param_2);
  return;
}

