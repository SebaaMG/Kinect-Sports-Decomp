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
extern int fn_82FAC568();
extern int fn_82FF0838();
extern unsigned int lbl_8216CB88;
extern unsigned int lbl_8216CB90;
extern unsigned int lbl_8216CBCC;
extern unsigned int lbl_8217D264;
extern unsigned int stack0x00000060;


undefined4 *
fn_82FA8288(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000074;
  
  fn_82FF0838(param_1,param_3,param_4,param_5,param_6,param_8,in_stack_00000054,
                    &stack0x00000060);
  fn_82FAC568(param_1 + 0x62,param_2);
  param_1[0x66] = param_7;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x62] = &lbl_8216CBCC;
  *param_1 = &lbl_8216CB90;
  param_1[1] = &lbl_8216CB88;
  param_1[3] = &lbl_8217D264;
  param_1[0x65] = 0xffffffff;
  return param_1;
}

