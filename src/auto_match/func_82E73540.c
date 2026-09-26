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
extern unsigned int lbl_8215EF68;


undefined4 *
fn_82E73540(undefined4 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
             undefined2 param_5,undefined1 param_6,undefined4 param_7)

{
  *(undefined8 *)(param_1 + 6) = param_4;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = param_2;
  *(undefined8 *)(param_1 + 4) = param_3;
  *(undefined2 *)(param_1 + 8) = param_5;
  param_1[2] = 1;
  *(undefined1 *)((int)param_1 + 0x22) = param_6;
  param_1[9] = param_7;
  param_1[10] = 1;
  *param_1 = &lbl_8215EF68;
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)(*(int *)param_1[0xd] + 0xb4))((int *)param_1[0xd],param_1 + 0xb);
  param_1[0xc] = param_1[0xb];
  return param_1;
}

