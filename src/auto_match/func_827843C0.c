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


void fn_827843C0(int *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  uint uVar1;
  float *pfVar2;
  
  uVar1 = 0;
  if (param_1[1] != 0) {
    do {
      pfVar2 = (float *)(*(int *)((uVar1 + param_1[2] >> 6 & 0x3fffffc) + *(int *)(*param_1 + 0x14))
                        + ((uVar1 + param_1[2]) * 8 & 0x7f8));
      if (*pfVar2 < *param_2) {
        *param_2 = *pfVar2;
      }
      if (pfVar2[1] < *param_3) {
        *param_3 = pfVar2[1];
      }
      if (*param_4 < *pfVar2) {
        *param_4 = *pfVar2;
      }
      if (*param_5 < pfVar2[1]) {
        *param_5 = pfVar2[1];
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[1]);
  }
  return;
}

