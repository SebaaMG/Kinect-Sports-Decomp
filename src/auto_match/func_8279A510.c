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
extern unsigned int lbl_82002AE0;
extern float lbl_82005718;


double fn_8279A510(int *param_1)

{
  double dVar1;
  
  dVar1 = (double)((float)*(ushort *)(param_1[0x32] + 0x26) * lbl_82005718);
  if ((double)*(float *)(param_1[0x34] + 0x10) != (double)lbl_82002AE0) {
    dVar1 = (double)(float)((double)*(float *)(param_1[0x34] + 0x10) * dVar1);
  }
  if ((*(byte *)(*param_1 + 0x13f) & 4) == 0) {
    return dVar1;
  }
  return (double)((float)((double)*(ushort *)(*param_1 + 0x13a) * dVar1) * lbl_82005718);
}

