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
extern unsigned int lbl_8201D8E0;


undefined4 *
fn_827E5BE8(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  undefined4 *puStack0000004c;
  undefined4 in_stack_00000054;
  undefined1 auStack_60 [96];
  
  puStack0000004c = param_8;
  fn_82517978(auStack_60,*param_8,param_8[1],0);
  fn_827E4480(param_1,param_3,param_4,param_5,param_6,param_7,auStack_60,in_stack_00000054);
  param_1[0xc] = param_2;
  *param_1 = &lbl_8201D8E0;
  if (param_8[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

