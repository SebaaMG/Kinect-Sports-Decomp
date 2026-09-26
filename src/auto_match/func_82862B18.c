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
extern int fn_82809CB0();
extern int fn_82810360();
extern int fn_82810B78();
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_8201DFF0;
extern unsigned int lbl_821AAD20;


int fn_82862B18(double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  double dVar2;
  
  *(float *)(param_3 + 0x1c) = (float)param_2;
  dVar2 = (double)fn_82809CB0((double)(float)(param_2 - (double)lbl_8201DD74));
  if (dVar2 <= (double)lbl_8201DFF0) {
    *(float *)(param_3 + 0x1c) = (float)((double)*(float *)(param_3 + 0x1c) - (double)lbl_8201DFF0);
  }
  *(float *)(param_3 + 0x18) = (float)param_1;
  fn_82810360(param_4,param_3);
  if (lbl_821AAD20 < *(float *)(param_3 + 0x1c)) {
    bVar1 = true;
    if (*(float *)(param_3 + 0x1c) < lbl_82015468) goto LAB_82862ba4;
  }
  bVar1 = false;
LAB_82862ba4:
  if (bVar1) {
    fn_82810B78(param_5,param_3 + 0xc);
  }
  return param_3;
}

