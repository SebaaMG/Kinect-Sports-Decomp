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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int uStack_10;


undefined8 fn_82811980(undefined8 *param_1,float *param_2)

{
  undefined8 uStack_10;
  
  uStack_10 = ((((U64)(uStack_10)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)((ulonglong)*param_1 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  uStack_10 = ((((U64)(uStack_10)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)*param_1)) & ((U64)0xFFFFFFFF)) << 32));
  uStack_10 = CONCAT44(*param_2 + (((U64)(uStack_10) >> 0) & 0xFFFFFFFF),param_2[1] + (((U64)(uStack_10) >> 32) & 0xFFFFFFFF));
  return uStack_10;
}

