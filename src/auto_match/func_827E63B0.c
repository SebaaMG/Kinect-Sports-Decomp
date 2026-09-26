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
extern int fn_827D5070();
extern int fn_827E4480();
extern unsigned int lbl_8201D950;


undefined4 *
fn_827E63B0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 *puStack00000014;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 *in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined1 auStack_70 [112];
  
  puStack00000014 = param_1;
  fn_82517978(auStack_70,*in_stack_0000006c,in_stack_0000006c[1],0);
  fn_827E4480(param_1,param_2,param_8,in_stack_00000054,in_stack_0000005c,in_stack_00000064,
                auStack_70,in_stack_00000074);
  param_1[0xc] = param_3;
  param_1[0xd] = param_4;
  param_1[0xe] = 0;
  *param_1 = &lbl_8201D950;
  param_1[0xf] = 0;
  param_1[0x10] = param_5;
  param_1[0x11] = param_6;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_7;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iVar1 = fn_827D5070(*in_stack_0000006c);
  if (iVar1 == 0) {
    param_1[0x18] = 0;
  }
  else {
    param_1[0x18] = 1;
  }
  if (in_stack_0000006c[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

