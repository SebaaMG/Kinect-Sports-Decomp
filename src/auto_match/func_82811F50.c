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
extern unsigned int *auStack_20;
extern int fn_82810328();
extern int fn_82810BE8();
extern unsigned int lbl_821AAD20;


double fn_82811F50(int param_1,undefined8 param_2)

{
  float fVar1;
  double dVar2;
  undefined1 auStack_20 [16];
  
  fn_82810328(param_2,param_1,auStack_20);
  dVar2 = (double)fn_82810BE8(auStack_20);
  fVar1 = lbl_821AAD20;
  if ((double)*(float *)(param_1 + 0xc) < dVar2) {
    fVar1 = (float)(dVar2 - (double)*(float *)(param_1 + 0xc));
    fVar1 = fVar1 * fVar1;
  }
  return (double)fVar1;
}

