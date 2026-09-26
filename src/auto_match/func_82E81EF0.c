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


void fn_82E81EF0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x7900) = *param_2;
  *(undefined4 *)(param_1 + 0x7904) = param_2[1];
  *(undefined4 *)(param_1 + 0x7908) = param_2[2];
  *(undefined4 *)(param_1 + 0x790c) = param_2[3];
  *(undefined4 *)(param_1 + 0x7910) = param_2[4];
  *(undefined4 *)(param_1 + 0x7914) = param_2[5];
  *(undefined4 *)(param_1 + 0x791c) = param_2[7];
  *(undefined4 *)(param_1 + 31000) = param_2[6];
  *(undefined4 *)(param_1 + 0x7920) = param_2[8];
  *(undefined4 *)(param_1 + 0x7924) = param_2[9];
  *(undefined4 *)(param_1 + 0x7928) = param_2[10];
  *(undefined4 *)(param_1 + 0x792c) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x7934) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x7938) = param_2[0xd];
  *(undefined4 *)(param_1 + 0x793c) = param_2[0x10];
  *(undefined4 *)(param_1 + 0x7940) = param_2[0xe];
  *(undefined4 *)(param_1 + 0x7944) = param_2[0x11];
  *(undefined4 *)(param_1 + 0x7948) = param_2[0x12];
  *(undefined4 *)(param_1 + 0x794c) = param_2[0x13];
  *(undefined4 *)(param_1 + 0x7954) = param_2[0x15];
  *(undefined4 *)(param_1 + 0x7950) = param_2[0x14];
  *(undefined4 *)(param_1 + 0x795c) = param_2[0x17];
  *(undefined4 *)(param_1 + 0x7960) = param_2[0x18];
  *(undefined4 *)(param_1 + 0x7958) = param_2[0x16];
  *(undefined4 *)(param_1 + 0x7968) = param_2[0xf];
  *(undefined4 *)(param_1 + 0x7964) = param_2[0x19];
  return;
}

