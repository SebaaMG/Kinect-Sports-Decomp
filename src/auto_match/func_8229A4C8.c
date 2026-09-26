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
#define NAN(x) ((x) != (x))
extern int fn_8229A000();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


undefined8 fn_8229A4C8(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = lbl_821CC160;
  if ((*(int *)(param_2 + 0x120c) == 4) && (*(int *)(param_2 + 0x121c) != 0)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x121c) - param_1);
    fVar2 = -fVar1;
    fVar3 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar3 = fVar1;
    }
    *(float *)(param_2 + 0x121c) = fVar3;
    if (fVar3 == fVar4) {
      fn_8229A000();
      *(undefined4 *)(param_2 + 0x120c) = 0;
    }
  }
  return 0;
}

