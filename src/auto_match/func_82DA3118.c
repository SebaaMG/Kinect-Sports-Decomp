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
extern unsigned int lbl_8200133C;


double fn_82DA3118(int param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)lbl_8200133C;
  if (((double)*(float *)(param_1 + 0x20) != dVar2) &&
     (ABS((float)((double)*(float *)(param_1 + 0x20) - (double)*(float *)(param_1 + 0x18))) <
      *(float *)(param_1 + 0x24))) {
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x18);
  }
  dVar1 = (double)*(float *)(param_1 + 0x20);
  if (dVar1 == dVar2) {
    return (double)*(float *)(param_1 + 0x18);
  }
  if ((float)((double)*(float *)(param_1 + 0x18) - dVar1) < 0.0) {
    dVar1 = (double)*(float *)(param_1 + 0x18);
  }
  return dVar1;
}

