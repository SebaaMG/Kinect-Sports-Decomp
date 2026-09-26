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
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83276578;


void fn_823AB400(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  *(float *)(param_2 + 0x58) = (float)(param_1 + (double)*(float *)(param_2 + 0x58));
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(float *)(param_2 + 0x78) = (float)(param_1 + (double)*(float *)(param_2 + 0x78));
  }
  fVar1 = *(float *)(param_2 + 0x78) - lbl_83276578;
  fVar2 = *(float *)(param_2 + 0x78);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar2 = lbl_83276578;
  }
  lbl_83276578 = fVar2;
  return;
}

