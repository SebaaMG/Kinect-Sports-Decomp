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
extern int fn_829E43B8();
extern unsigned int lbl_82057B24;
extern unsigned int lbl_82057B4C;
extern unsigned int lbl_82057B50;


undefined8
fn_829E4700(double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
             float *param_6,undefined8 param_7,undefined8 param_8,int param_9,float *param_10)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (param_9 == 0) {
    fVar1 = *(float *)(param_3 + 0x88);
  }
  else {
    fVar1 = *(float *)(param_3 + 0x84);
  }
  dVar5 = (double)fVar1;
  dVar3 = (double)(float)((double)(float)(param_1 / dVar5) * param_2);
  dVar4 = (double)lbl_82057B24;
  if ((double)lbl_82057B24 <= dVar3) {
    dVar4 = dVar3;
  }
  if ((param_9 == 0) && (iVar2 = fn_829E43B8(), iVar2 != 0)) {
    dVar5 = (double)(float)(dVar5 * (double)lbl_82057B50);
    dVar4 = (double)(float)(dVar4 * (double)lbl_82057B4C);
  }
  *param_6 = (float)dVar5;
  *param_10 = (float)dVar4;
  return 0;
}

