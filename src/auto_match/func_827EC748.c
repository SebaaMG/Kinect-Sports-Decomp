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
extern unsigned int lbl_821AAD20;


undefined8
fn_827EC748(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)(param_1 * param_4 - (double)(float)(param_2 * param_3));
  fVar2 = (float)(param_1 * param_6 - (double)(float)(param_2 * param_5));
  fVar3 = (float)(param_4 * param_5 - (double)(float)(param_3 * param_6));
  if (lbl_821AAD20 <= fVar1) {
    if ((((fVar2 <= fVar1) && (fVar3 <= fVar1)) && (lbl_821AAD20 <= fVar2)) &&
       (lbl_821AAD20 <= fVar3)) {
      return 1;
    }
  }
  else if (((fVar1 <= fVar2) && (fVar1 <= fVar3)) &&
          ((fVar2 <= lbl_821AAD20 && (fVar3 <= lbl_821AAD20)))) {
    return 1;
  }
  return 0;
}

