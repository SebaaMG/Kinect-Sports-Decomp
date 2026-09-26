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


void fn_82A2D314(undefined8 param_1,short *param_2,short *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7,uint param_8)

{
  short sVar1;
  uint in_r11;
  byte in_cr6;
  
  while (((bool)(in_cr6 >> 3 & 1) && (*(char *)(param_6 + in_r11) != '\\'))) {
    in_r11 = in_r11 + 1;
    in_cr6 = (in_r11 < param_8) << 3;
  }
  sVar1 = (short)in_r11 - (short)param_7;
  *(int *)(param_2 + 2) = param_7 + param_6;
  *param_2 = sVar1;
  param_2[1] = sVar1;
  if (param_8 <= in_r11) {
    return;
  }
  sVar1 = ((short)param_8 - (short)in_r11) + -1;
  *(uint *)(param_3 + 2) = param_6 + in_r11 + 1;
  *param_3 = sVar1;
  param_3[1] = sVar1;
  return;
}

