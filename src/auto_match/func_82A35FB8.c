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
extern int fn_82F68CC0();


void fn_82A35FB8(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  param_2[2] = *(undefined4 *)(param_1 + 0xc);
  param_2[3] = *(undefined4 *)(param_1 + 0x10);
  param_2[4] = *(undefined4 *)(param_1 + 0x14);
  param_2[5] = *(undefined4 *)(param_1 + 0x18);
  param_2[6] = *(undefined4 *)(param_1 + 0x1c);
  param_2[7] = *(undefined4 *)(param_1 + 0x28);
  param_2[8] = *(undefined4 *)(param_1 + 0x2c);
  fn_82F68CC0(param_2 + 0xb,param_1 + 0x40,*(undefined4 *)(param_1 + 0x3c));
  *(undefined1 *)((int)param_2 + *(int *)(param_1 + 0x3c) + 0x2c) = 0;
  *(undefined1 *)(param_2 + 0x4c) = 0;
  return;
}

