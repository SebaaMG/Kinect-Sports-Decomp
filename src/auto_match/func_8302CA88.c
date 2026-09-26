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
extern int fn_82FFFC20();
extern int fn_830177C8();
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;


double fn_8302CA88(int param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  
  if ((*(uint *)(param_1 + 0x40) >> 4 & 1) == 0) {
    dVar1 = (double)fn_82FFFC20(param_1 + 0x114,param_2,param_3,param_2);
    dVar2 = (double)(float)(dVar1 + (double)*(float *)(param_1 + 0x110));
    dVar1 = (double)lbl_821AAD20;
    if (-dVar2 < 0.0) {
      dVar1 = dVar2;
    }
  }
  else {
    dVar1 = (double)fn_830177C8(lbl_832642FC,param_1,4);
    dVar2 = (double)(float)(dVar1 * (double)lbl_8200DFF4);
    dVar1 = (double)fn_82FFFC20(param_1 + 0x114);
    dVar2 = (double)(float)((double)(float)(dVar1 + (double)*(float *)(param_1 + 0x110)) + dVar2);
    dVar1 = (double)lbl_821AAD20;
    if (-dVar2 < 0.0) {
      dVar1 = dVar2;
    }
  }
  return dVar1;
}

