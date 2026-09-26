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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_8235FD70(int param_1,int param_2,int param_3)

{
  float fVar1;
  
  if (param_2 == *(int *)(param_1 + 0x2b20)) {
    fVar1 = lbl_821CC160;
    if (param_3 != 0) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fVar1 = (*(float *)(param_1 + 0xb30) - *(float *)(param_1 + 0xb2c)) *
              ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) +
              *(float *)(param_1 + 0xb2c);
    }
    *(float *)(param_1 + 0x2c04) = fVar1;
    return;
  }
  return;
}

