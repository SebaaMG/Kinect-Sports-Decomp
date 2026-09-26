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
extern int fn_826312F0();
extern unsigned int lbl_821AAD20;


undefined8
fn_82918370(undefined8 param_1,undefined8 param_2,int param_3,uint *param_4,longlong param_5)

{
  float fVar1;
  
  fVar1 = lbl_821AAD20;
  if ((int)param_5 != 0) {
    param_3 = param_3 - (int)param_4;
    do {
      *param_4 = (uint)(*(float *)(param_3 + (int)param_4) != fVar1);
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  fn_826312F0();
  return 0;
}

