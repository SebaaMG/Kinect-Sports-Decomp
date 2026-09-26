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


void fn_82525C40(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x9cc) = 0;
    *(undefined4 *)(param_1 + 0x9d0) = 0;
    *(undefined4 *)(param_1 + 0x9d4) = 0;
    *(undefined4 *)(param_1 + 0x9d8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x9cc) = *param_2;
    *(undefined4 *)(param_1 + 0x9d0) = param_2[1];
    *(undefined4 *)(param_1 + 0x9d4) = param_2[2];
    *(undefined4 *)(param_1 + 0x9d8) = param_2[3];
  }
  if (param_3 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x9f0) = 0;
    *(undefined4 *)(param_1 + 0x9f4) = 0;
    *(undefined4 *)(param_1 + 0x9f8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x9f0) = *param_3;
    *(undefined4 *)(param_1 + 0x9f4) = param_3[1];
    *(undefined4 *)(param_1 + 0x9f8) = param_3[2];
    uVar1 = param_3[3];
  }
  *(undefined4 *)(param_1 + 0x9fc) = uVar1;
  return;
}

