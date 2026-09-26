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
extern unsigned int lbl_821AAD20;


void fn_827FA120(double param_1,int *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  fVar1 = *(float *)(*param_2 + 0x1c);
  param_2[0x2b] = (int)(float)param_1;
  dVar2 = (double)lbl_821AAD20;
  if ((double)fVar1 != dVar2) {
    dVar3 = (double)(float)(param_1 / (double)fVar1);
    if (dVar2 <= (double)(float)param_2[0x2c]) {
      dVar2 = (double)fn_82809CB0(dVar3);
      param_2[0x2c] = (int)(float)dVar2;
      return;
    }
    dVar2 = (double)fn_82809CB0(dVar3);
    dVar2 = -dVar2;
  }
  param_2[0x2c] = (int)(float)dVar2;
  return;
}

