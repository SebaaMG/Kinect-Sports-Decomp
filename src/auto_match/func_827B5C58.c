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


void fn_827B5C58(int param_1,short *param_2)

{
  ulonglong uVar1;
  
  uVar1 = (longlong)param_2[1] - (longlong)*(short *)(param_1 + 0x5a);
  if ((-1 < (longlong)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x50))) {
    param_2[1] = *(short *)(*(int *)(param_1 + 0x4c) + (int)((uVar1 & 0xffffffff) << 1)) +
                 *(short *)(param_1 + 0x5a);
  }
  uVar1 = (longlong)*param_2 - (longlong)*(short *)(param_1 + 0x58);
  if ((longlong)uVar1 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x44) <= (int)uVar1) {
    return;
  }
  *param_2 = *(short *)(*(int *)(param_1 + 0x40) + (int)((uVar1 & 0xffffffff) << 1)) +
             *(short *)(param_1 + 0x58);
  return;
}

