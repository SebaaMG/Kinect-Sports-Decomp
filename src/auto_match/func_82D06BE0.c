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


void fn_82D06BE0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[4];
  param_1[2] = param_2[8];
  param_1[3] = param_2[0xc];
  param_1[4] = param_2[1];
  param_1[5] = param_2[5];
  param_1[6] = param_2[9];
  param_1[7] = param_2[0xd];
  param_1[8] = param_2[2];
  param_1[9] = param_2[6];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xe];
  param_1[0xc] = param_2[3];
  param_1[0xd] = param_2[7];
  param_1[0xe] = param_2[0xb];
  param_1[0xf] = param_2[0xf];
  return;
}

