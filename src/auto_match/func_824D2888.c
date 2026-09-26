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
extern int fn_824D2980();
extern int fn_82809868();


void fn_824D2888(int param_1)

{
  longlong lVar1;
  double extraout_f1;
  double dVar2;
  
  lVar1 = fn_824D2980((double)*(float *)(*(int *)(param_1 + 0x3a00) + 0x240));
  if (lVar1 == 0) {
    dVar2 = extraout_f1;
    if (*(int *)(*(int *)(param_1 + 0x3a08) + 0x98) != 0) {
      dVar2 = (double)*(float *)(*(int *)(param_1 + 0x3a08) + 0x9c);
    }
  }
  else {
    dVar2 = (double)*(float *)(*(int *)(param_1 + 0x3a00) + 0x244);
  }
                    /* WARNING: Subroutine does not return */
  fn_82809868(dVar2);
}

