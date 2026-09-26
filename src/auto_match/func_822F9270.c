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
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


double fn_822F9270(int param_1)

{
  double dVar1;
  
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  dVar1 = (double)lbl_821CA460;
  if (*(float *)(*(int *)(param_1 + 0x10) + 0x14) <=
      (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar1)) {
    return (double)lbl_821CC160;
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  if ((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar1) <=
      *(float *)((*(int *)(*(int *)(param_1 + 4) + 0x844) + 0x1e) * 4 +
                *(int *)(*(int *)(param_1 + 4) + 0x83c))) {
    return dVar1;
  }
  return (double)lbl_82192734;
}

