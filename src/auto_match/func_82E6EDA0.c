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
extern unsigned int lbl_8215ED88;


undefined4 *
fn_82E6EDA0(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,undefined4 *param_4,
             int *param_5,undefined8 param_6,undefined4 param_7)

{
  *(undefined2 *)(param_1 + 2) = param_2;
  *param_1 = &lbl_8215ED88;
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  param_1[5] = param_3[2];
  param_1[6] = param_3[3];
  param_1[7] = *param_4;
  param_1[8] = param_4[1];
  param_1[9] = param_4[2];
  param_1[10] = param_4[3];
  param_1[0xb] = param_5;
  *(undefined8 *)(param_1 + 0xc) = param_6;
  param_1[0xe] = param_7;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  if (param_5 != (int *)0x0) {
    (**(code **)(*param_5 + 4))(param_5);
  }
  return param_1;
}

