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


undefined8 fn_828F48F0(undefined8 param_1,uint *param_2,int *param_3)

{
  uint *in_r10;
  uint *in_r11;
  int iVar1;
  byte in_cr6;
  
  while (!(bool)(in_cr6 >> 1 & 1)) {
    in_cr6 = ((uint *)in_r10[0x17] == (uint *)0x0) << 1;
    in_r11 = in_r10;
    in_r10 = (uint *)in_r10[0x17];
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = *in_r11;
  }
  if (param_3 != (int *)0x0) {
    iVar1 = in_r11[1] - *in_r11;
    if (in_r11[1] < *in_r11) {
      iVar1 = 0;
    }
    *param_3 = iVar1;
  }
  return 0;
}

