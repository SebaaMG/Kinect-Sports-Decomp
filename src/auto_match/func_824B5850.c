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
extern int fn_824B58A8();
extern int iRam831c4624;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C4618;


double fn_824B5850(int param_1,undefined8 param_2)

{
  double dVar1;
  
  dVar1 = (double)fn_824B58A8(param_1,param_2,iRam831c4624);
  *(float *)(param_1 + 0x48) = (float)dVar1;
  if (lbl_831C4618 != iRam831c4624) {
    dVar1 = (double)fn_824B58A8(param_1,param_2);
  }
  *(float *)(param_1 + 0x4c) = (float)dVar1;
  return (double)lbl_821CC160;
}

