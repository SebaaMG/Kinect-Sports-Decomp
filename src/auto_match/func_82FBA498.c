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


undefined8 fn_82FBA498(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((int)param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)param_2 + 0x19);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)param_2 + 0x1d);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)((int)param_2 + 0x21);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((int)param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((int)param_2 + 0x2a);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((int)param_2 + 0x2e);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)((int)param_2 + 0x32);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((int)param_2 + 0x33);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)((int)param_2 + 0x37);
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  return 1;
}

