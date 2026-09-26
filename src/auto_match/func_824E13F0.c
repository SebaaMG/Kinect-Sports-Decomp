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
extern int fn_824CCAE8();
extern int fn_824CCFC8();
extern int fn_824CEC28();
extern unsigned int lbl_821CC160;


void fn_824E13F0(double param_1,int param_2)

{
  int iVar1;
  
  fn_824CEC28();
  fn_824CCAE8(param_1,param_2);
  iVar1 = fn_824CCFC8(param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xfc) + 0x60) = lbl_821CC160;
  }
  else {
    *(float *)(*(int *)(param_2 + 0xfc) + 0x60) =
         (float)(param_1 + (double)*(float *)(*(int *)(param_2 + 0xfc) + 0x60));
  }
  return;
}

