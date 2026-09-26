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
extern int fn_8256DE08();
extern int fn_827E2818();
extern unsigned int lbl_8201D0B8;


undefined4 *
fn_827E22D0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puStack00000014;
  undefined4 *in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined1 auStack_70 [112];
  
  puStack00000014 = param_1;
  fn_82517978(auStack_70,*in_stack_00000054,in_stack_00000054[1],0);
  fn_827E2818(param_1,param_7,param_8,auStack_70);
  param_1[5] = param_3;
  param_1[6] = param_4;
  *param_1 = &lbl_8201D0B8;
  param_1[7] = 0;
  param_1[8] = 0;
  fn_8256DE08(param_1 + 7,0);
  param_1[10] = param_2;
  *(undefined1 *)(param_1 + 0xe) = param_5;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = in_stack_0000005c;
  param_1[0xd] = 0;
  *(undefined1 *)((int)param_1 + 0x39) = param_6;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3e4;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  if (in_stack_00000054[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

