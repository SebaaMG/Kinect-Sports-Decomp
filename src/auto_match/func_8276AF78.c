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
extern int fn_82769900();
extern unsigned int lbl_82014C48;
extern unsigned int lbl_82014C4C;
extern unsigned int lbl_821AAD20;


float * fn_8276AF78(int param_1,uint param_2,float *param_3)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)lbl_82014C4C;
  if ((param_2 == 0xffffffff) || (*(uint *)(param_1 + 0x38) <= param_2)) {
    param_3[3] = lbl_82014C4C;
    fVar1 = lbl_821AAD20;
    param_3[2] = lbl_82014C48;
    param_3[1] = fVar1;
    *param_3 = fVar1;
  }
  else {
    fn_82769900(param_1 + 0x2c);
  }
  fVar1 = (float)*(uint *)(param_1 + 0x58);
  *param_3 = (float)((double)*param_3 * dVar2) / fVar1;
  param_3[1] = (float)((double)param_3[1] * dVar2) / fVar1;
  param_3[2] = (float)((double)param_3[2] * dVar2) / fVar1;
  param_3[3] = (float)((double)param_3[3] * dVar2) / fVar1;
  return param_3;
}

