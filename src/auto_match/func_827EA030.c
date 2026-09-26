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
extern int fn_827E9E08();
extern unsigned int lbl_821AAD20;


undefined8 fn_827EA030(double param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *in_r9;
  double dVar4;
  double dVar5;
  
  fVar2 = lbl_821AAD20;
  fVar1 = (float)param_1;
  dVar5 = (double)lbl_821AAD20;
  iVar3 = fn_827E9E08();
  if (iVar3 != 0) {
    dVar4 = (double)fVar2;
    if ((((dVar4 <= (double)fVar1) && (dVar4 <= param_1)) && (dVar5 <= (double)fVar1)) &&
       (dVar5 <= dVar4)) {
      *in_r9 = fVar2;
      return 1;
    }
  }
  return 0;
}

