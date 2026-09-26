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


void fn_829F2758(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 0x50) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0x4f < iVar1) goto code_r0x829f277c;
  }
  else {
code_r0x829f277c:
    iVar1 = 0x4f;
  }
  *param_1 = iVar1;
  iVar1 = *param_2;
  if (iVar1 < 0x3c) {
    if (iVar1 < 0) {
      iVar1 = 0;
      goto code_r0x829f27ac;
    }
    if (iVar1 < 0x3c) goto code_r0x829f27ac;
  }
  iVar1 = 0x3b;
code_r0x829f27ac:
  *param_2 = iVar1;
  return;
}

