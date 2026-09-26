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


void fn_82DAA750(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_3 + 4 != (undefined4 *)0x0) {
    uVar1 = param_2[0x1a];
    *(undefined1 *)(param_3 + 4) = 4;
    *(undefined1 *)((int)param_3 + 0x11) = 0;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
    *(undefined2 *)(param_3 + 5) = 0x30;
    *(undefined2 *)((int)param_3 + 0x16) = 0xffff;
    *(undefined2 *)(param_3 + 8) = *(undefined2 *)(param_1 + 0x10);
    param_3[9] = *(undefined4 *)(param_1 + 0x14);
    param_3[10] = *(undefined4 *)(param_1 + 0x18);
    param_3[0xb] = *(undefined4 *)(param_1 + 0x1c);
    param_3[0xd] = param_2[0x13];
    *(undefined1 *)(param_3 + 0xe) = *(undefined1 *)(param_2 + 0x16);
    param_3[0xc] = uVar1;
  }
  *param_2 = param_2[0x1b];
  *param_3 = 0;
  *(undefined1 *)((int)param_3 + 0x12) = 1;
  return;
}

