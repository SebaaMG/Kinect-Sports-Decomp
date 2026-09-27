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
extern float lbl_82195590;
extern unsigned int lbl_82195598;
extern float lbl_821955A0;
extern unsigned int lbl_831E4E38;


undefined8 fn_822CEEC8(int param_1)

{
  double dVar1;
  
  dVar1 = (double)(*(float *)(*(int *)((*(int **)(param_1 + 0x1c))[4] * 4 +
                                      **(int **)(param_1 + 0x1c)) + 0x14) * lbl_82195590);
  if ((float)((dVar1 - (double)(longlong)(dVar1 - lbl_82195598)) * lbl_821955A0) < lbl_831E4E38) {
    return 1;
  }
  return 0;
}

