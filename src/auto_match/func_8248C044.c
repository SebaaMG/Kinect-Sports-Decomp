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


undefined8 fn_8248C044(double param_1)

{
  float fVar1;
  int in_r9;
  int in_r10;
  int in_r11;
  double in_f0;
  
  for (; (in_r10 != in_r9 && (in_f0 < param_1)); in_f0 = (double)(float)((double)fVar1 + in_f0)) {
    fVar1 = *(float *)(in_r10 + 8);
    in_r10 = in_r10 + 0xc;
    *(int *)(in_r11 + 0x28) = *(int *)(in_r11 + 0x28) + 1;
    *(int *)(in_r11 + 0x44) = *(int *)(in_r11 + 0x44) + 1;
  }
  *(undefined4 *)(in_r11 + 0x24) = 1;
  return 1;
}

