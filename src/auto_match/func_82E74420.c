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
extern int fn_82E58CA8();
extern int fn_82E73FF8();
extern unsigned int lbl_8215EF74;


undefined4 *
fn_82E74420(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined2 param_7,undefined1 param_8)

{
  int iVar1;
  undefined4 in_stack_00000054;
  int *in_stack_0000005c;
  
  *(undefined8 *)(param_1 + 6) = param_6;
  *(undefined8 *)(param_1 + 4) = param_5;
  *(undefined2 *)(param_1 + 8) = param_7;
  *(undefined1 *)((int)param_1 + 0x22) = param_8;
  param_1[9] = in_stack_00000054;
  param_1[0xf] = (int)param_3;
  param_1[2] = 1;
  param_1[10] = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &lbl_8215EF74;
  param_1[0xe] = param_4;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  iVar1 = fn_82E58CA8(param_1 + 0x11,1,0);
  if (in_stack_0000005c != (int *)0x0) {
    *in_stack_0000005c = iVar1;
  }
  if (-1 < iVar1) {
    iVar1 = fn_82E73FF8(param_1,param_2,param_3);
    if (in_stack_0000005c != (int *)0x0) {
      *in_stack_0000005c = iVar1;
    }
    if (-1 < iVar1) {
      param_1[10] = 0;
      param_1[0xc] = param_1[0xe];
    }
  }
  return param_1;
}

