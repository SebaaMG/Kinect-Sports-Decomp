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
extern int fn_8247BC60();
extern int fn_8251FA58();
extern unsigned int lbl_831D3CEC;


void fn_8247C3C8(double param_1,int param_2)

{
  float fVar1;
  
  fn_8247BC60(param_2 + 0x10);
  fVar1 = (float)((double)*(float *)(param_2 + 0xa8) + param_1);
  *(float *)(param_2 + 0xa8) = fVar1;
  if ((*(int *)(param_2 + 0xa4) != 0) &&
     (*(float *)(*(int *)(param_2 + 0xa4) + 0xc) + lbl_831D3CEC < fVar1)) {
    fn_8251FA58();
    *(undefined4 *)(param_2 + 0xa4) = 0;
  }
  return;
}

