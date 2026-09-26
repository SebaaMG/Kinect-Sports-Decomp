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


void fn_8241F600(int param_1,int param_2)

{
  int in_r8;
  int iVar1;
  int *in_r10;
  int *in_r11;
  
  for (; in_r11 != in_r10; in_r11 = in_r11 + 1) {
    iVar1 = in_r8 + 0x6c;
    if (param_2 == 0) {
      iVar1 = in_r8 + 0x4c;
    }
    *(int *)(*in_r11 + 0x4c) = iVar1;
    in_r10 = *(int **)(param_1 + 0x8c);
  }
  return;
}

