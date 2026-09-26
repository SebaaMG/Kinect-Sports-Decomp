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
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827E4480();
extern unsigned int lbl_8201D800;


undefined4 *
fn_827E5360(double param_1,double param_2,double param_3,undefined4 *param_4,undefined1 param_5,
             undefined1 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 in_stack_00000057;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 *in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined1 auStack_60 [96];
  
  fn_82517978(auStack_60,*in_stack_0000006c,in_stack_0000006c[1],0);
  fn_827E4480(param_4,0,0,0xffffffffffffffff,in_stack_0000005c,in_stack_00000064,auStack_60,
                in_stack_00000074);
  param_4[0xf] = (float)param_1;
  param_4[0x10] = (float)param_2;
  *(undefined1 *)(param_4 + 0xc) = param_5;
  param_4[0x11] = (float)param_3;
  *(undefined1 *)((int)param_4 + 0x31) = param_6;
  *param_4 = &lbl_8201D800;
  param_4[0xd] = param_7;
  param_4[0xe] = param_8;
  *(undefined1 *)(param_4 + 0x12) = in_stack_00000057;
  if (in_stack_0000006c[1] != 0) {
    fn_822315A0();
  }
  return param_4;
}

