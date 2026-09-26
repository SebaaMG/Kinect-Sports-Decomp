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
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827E4480();
extern unsigned int lbl_8201DA10;


undefined4 *
fn_827E6F28(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 in_stack_00000054;
  undefined4 *in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined1 auStack_70 [112];
  
  fn_82517978(auStack_70,*in_stack_0000005c,in_stack_0000005c[1],0);
  fn_827E4480(param_1,param_2,param_6,param_7,param_8,in_stack_00000054,auStack_70,
                in_stack_00000064);
  param_1[0xc] = param_3;
  param_1[0xd] = param_4;
  param_1[0xe] = 0;
  *param_1 = &lbl_8201DA10;
  param_1[0xf] = 0;
  param_1[0x10] = param_5;
  if (in_stack_0000005c[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

