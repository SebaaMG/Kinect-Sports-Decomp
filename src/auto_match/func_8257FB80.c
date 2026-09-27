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
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195590;
extern float lbl_821955A0;


void fn_8257FB80(int param_1,int param_2,float *param_3)

{
  double dVar1;
  
  dVar1 = (double)(longlong)lbl_82195518;
  if ((((float)(((double)(*param_3 * lbl_82195590) - (double)(longlong)(*param_3 * lbl_82195590)) *
               lbl_821955A0) == (float)(-dVar1 * lbl_821955A0)) &&
      ((float)(((double)(param_3[1] * lbl_82195590) - (double)(longlong)(param_3[1] * lbl_82195590))
              * lbl_821955A0) == (float)(-dVar1 * lbl_821955A0))) &&
     ((float)(((double)(param_3[2] * lbl_82195590) - (double)(longlong)(param_3[2] * lbl_82195590))
             * lbl_821955A0) == (float)(-dVar1 * lbl_821955A0))) {
    *(undefined4 *)(param_2 * 0x30 + param_1 + 0x24) = 0;
    return;
  }
  param_1 = param_2 * 0x30 + param_1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(float *)(param_1 + 0x18) = *param_3;
  *(float *)(param_1 + 0x1c) = param_3[1];
  *(float *)(param_1 + 0x20) = param_3[2];
  return;
}

