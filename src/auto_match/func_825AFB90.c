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


void fn_825AFB90(ulonglong *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 *in_stack_00000054;
  undefined4 *in_stack_0000005c;
  
  *(undefined4 *)(param_1 + 0x330) = *param_2;
  *(undefined4 *)((int)param_1 + 0x1984) = param_2[1];
  *(undefined4 *)(param_1 + 0x331) = param_2[2];
  *(undefined4 *)((int)param_1 + 0x198c) = param_2[3];
  param_1[1] = param_1[1] | 0x80000000000000;
  *(undefined4 *)(param_1 + 0x356) = *param_3;
  *(undefined4 *)((int)param_1 + 0x1ab4) = param_3[1];
  *(undefined4 *)(param_1 + 0x357) = param_3[2];
  *(undefined4 *)((int)param_1 + 0x1abc) = param_3[3];
  param_1[1] = param_1[1] | 0x8000000000000;
  *(undefined4 *)(param_1 + 0x10e) = *param_2;
  *(undefined4 *)((int)param_1 + 0x874) = param_2[1];
  *(undefined4 *)(param_1 + 0x10f) = param_2[2];
  *(undefined4 *)((int)param_1 + 0x87c) = param_2[3];
  *param_1 = *param_1 | 0x1000000000000000;
  *(undefined4 *)(param_1 + 0x108) = *param_3;
  *(undefined4 *)((int)param_1 + 0x844) = param_3[1];
  *(undefined4 *)(param_1 + 0x109) = param_3[2];
  *(undefined4 *)((int)param_1 + 0x84c) = param_3[3];
  *param_1 = *param_1 | 0x1000000000000000;
  *(undefined4 *)(param_1 + 0x392) = *param_4;
  *(undefined4 *)((int)param_1 + 0x1c94) = param_4[1];
  *(undefined4 *)(param_1 + 0x393) = param_4[2];
  *(undefined4 *)((int)param_1 + 0x1c9c) = param_4[3];
  param_1[1] = param_1[1] | 0x80000000000;
  *(undefined4 *)(param_1 + 0x394) = *param_5;
  *(undefined4 *)((int)param_1 + 0x1ca4) = param_5[1];
  *(undefined4 *)(param_1 + 0x395) = param_5[2];
  *(undefined4 *)((int)param_1 + 0x1cac) = param_5[3];
  param_1[1] = param_1[1] | 0x80000000000;
  *(undefined4 *)(param_1 + 0x37c) = *in_stack_0000005c;
  *(undefined4 *)((int)param_1 + 0x1be4) = in_stack_0000005c[1];
  *(undefined4 *)(param_1 + 0x37d) = in_stack_0000005c[2];
  *(undefined4 *)((int)param_1 + 0x1bec) = in_stack_0000005c[3];
  param_1[1] = param_1[1] | 0x400000000000;
  *(undefined4 *)(param_1 + 0x10a) = *in_stack_0000005c;
  *(undefined4 *)((int)param_1 + 0x854) = in_stack_0000005c[1];
  *(undefined4 *)(param_1 + 0x10b) = in_stack_0000005c[2];
  *(undefined4 *)((int)param_1 + 0x85c) = in_stack_0000005c[3];
  *param_1 = *param_1 | 0x1000000000000000;
  *(undefined4 *)(param_1 + 0x388) = *param_6;
  *(undefined4 *)((int)param_1 + 0x1c44) = param_6[1];
  *(undefined4 *)(param_1 + 0x389) = param_6[2];
  *(undefined4 *)((int)param_1 + 0x1c4c) = param_6[3];
  param_1[1] = param_1[1] | 0x100000000000;
  *(undefined4 *)(param_1 + 0x38a) = *param_7;
  *(undefined4 *)((int)param_1 + 0x1c54) = param_7[1];
  *(undefined4 *)(param_1 + 0x38b) = param_7[2];
  *(undefined4 *)((int)param_1 + 0x1c5c) = param_7[3];
  param_1[1] = param_1[1] | 0x100000000000;
  *(undefined4 *)(param_1 + 0x38c) = *param_8;
  *(undefined4 *)((int)param_1 + 0x1c64) = param_8[1];
  *(undefined4 *)(param_1 + 0x38d) = param_8[2];
  *(undefined4 *)((int)param_1 + 0x1c6c) = param_8[3];
  param_1[1] = param_1[1] | 0x100000000000;
  *(undefined4 *)(param_1 + 0x3ec) = *in_stack_00000054;
  *(undefined4 *)((int)param_1 + 0x1f64) = in_stack_00000054[1];
  *(undefined4 *)(param_1 + 0x3ed) = in_stack_00000054[2];
  *(undefined4 *)((int)param_1 + 0x1f6c) = in_stack_00000054[3];
  param_1[1] = param_1[1] | 0x100000000;
  return;
}

