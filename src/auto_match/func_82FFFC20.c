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
extern int fn_82F65350();
extern unsigned int lbl_8217BB90;
extern unsigned int lbl_821AAD20;


double fn_82FFFC20(float *param_1)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = (double)(param_1[1] - *param_1);
  if (dVar3 == (double)lbl_821AAD20) {
    fVar1 = (float)((double)*param_1 + (double)lbl_821AAD20);
  }
  else {
    iVar2 = fn_82F65350();
    fVar1 = *param_1 + (float)((double)(longlong)iVar2 * lbl_8217BB90 * dVar3);
  }
  return (double)fVar1;
}

