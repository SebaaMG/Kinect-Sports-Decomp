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
extern float fRam831d115c;


undefined8 fn_8227F728(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x1c) - *param_2;
  fVar2 = -fRam831d115c;
  if (((((fVar2 <= fVar1) && (fVar1 <= fRam831d115c)) &&
       (fVar1 = *(float *)(param_1 + 0x20) - param_2[1], fVar2 <= fVar1)) &&
      ((fVar1 <= fRam831d115c && (fVar1 = *(float *)(param_1 + 0x24) - *param_3, fVar2 <= fVar1))))
     && ((fVar1 <= fRam831d115c &&
         ((fVar1 = *(float *)(param_1 + 0x28) - param_3[1], fVar2 <= fVar1 &&
          (fVar1 <= fRam831d115c)))))) {
    return 1;
  }
  return 0;
}

