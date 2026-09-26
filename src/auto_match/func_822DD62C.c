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


void fn_822DD62C(int param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  int in_r11;
  int iVar2;
  byte in_cr6;
  
  while ((iVar2 = in_r11, (bool)(in_cr6 >> 3 & 1) && (*(char *)(iVar2 + param_1) < *param_4))) {
    *(char *)(param_8 + param_1) = *(char *)(iVar2 + param_1);
    uVar1 = iVar2 - 1;
    in_cr6 = (param_6 < iVar2) << 3;
    param_8 = iVar2;
    in_r11 = ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  }
  *(char *)(param_8 + param_1) = *param_4;
  return;
}

