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
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DDF4;
extern unsigned int lbl_82022E64;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_8287C1B8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  fVar4 = lbl_821AAD20;
  fVar3 = lbl_82015468;
  fVar1 = *param_1;
  if ((lbl_8201DDF4 <= fVar1) && (fVar1 <= lbl_82022E64)) {
    while (fVar2 = *param_1, fVar1 < fVar4) {
      fVar1 = fVar2 + fVar3;
      *param_1 = fVar1;
    }
    while (fVar3 <= fVar2) {
      fVar2 = *param_1 - fVar3;
      *param_1 = fVar2;
    }
    return (double)*param_1;
  }
  dVar5 = (double)lbl_821AAD20;
  *param_1 = lbl_821AAD20;
  return dVar5;
}

