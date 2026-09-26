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
extern unsigned int lbl_8202F1A0;


void fn_82933578(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  param_1[4] = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[2] = 0;
  param_1[1] = 0xf;
  *param_1 = &lbl_8202F1A0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 8) = *param_5;
  *(undefined8 *)(param_1 + 10) = param_5[1];
  *(undefined8 *)(param_1 + 0xc) = param_5[2];
  *(undefined8 *)(param_1 + 0xe) = param_5[3];
  return;
}

