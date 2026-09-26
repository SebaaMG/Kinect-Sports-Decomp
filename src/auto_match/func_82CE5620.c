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
extern int fn_82F65E18();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_821AAD20;


double fn_82CE5620(int param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = ABS((double)*(float *)(param_1 + 0xc));
  if (ABS(dVar1) < (double)lbl_82002AE0) {
    dVar1 = (double)fn_82F65E18(dVar1);
    dVar2 = (double)(float)dVar1;
  }
  else {
    dVar2 = (double)lbl_821AAD20;
    if (dVar1 <= dVar2) {
      dVar2 = (double)lbl_8201DD74;
    }
  }
  return (double)(float)(dVar2 * (double)lbl_82005344);
}

