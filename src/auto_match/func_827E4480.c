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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D9E48();
extern unsigned int lbl_8201D5F4;


undefined4 *
fn_827E4480(undefined4 *param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8)

{
  undefined4 *puStack00000014;
  undefined4 *puStack00000044;
  
  param_1[1] = param_3;
  param_1[2] = (int)param_2;
  param_1[3] = param_5;
  param_1[4] = param_6;
  *param_1 = &lbl_8201D5F4;
  param_1[5] = 0;
  param_1[6] = 0;
  puStack00000014 = param_1;
  puStack00000044 = param_7;
  fn_82517978(param_1 + 5,*param_7,param_7[1],0);
  param_1[7] = param_4;
  param_1[8] = param_8;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((param_2 & 0xffffffff) != 0) {
    fn_827D9E48(param_2);
  }
  if (param_7[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

