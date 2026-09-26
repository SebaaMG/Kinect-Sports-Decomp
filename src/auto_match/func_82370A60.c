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
extern unsigned int lbl_821917B0;


undefined8 fn_82370A60(double param_1,int param_2)

{
  float fVar1;
  
  fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0x288));
  *(float *)(param_2 + 0x288) = fVar1;
  if (((*(int *)(param_2 + 0xa0) != 0) && (*(int *)(*(int *)(param_2 + 0xa0) + 0x40) == 1)) &&
     (fVar1 <= lbl_821917B0)) {
    return 0;
  }
  return 1;
}

