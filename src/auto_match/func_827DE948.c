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
extern unsigned int lbl_821CAC7C;


undefined4 *
fn_827DE948(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puStack00000024;
  
  *param_1 = &lbl_821CAC7C;
  param_1[1] = 0;
  param_1[2] = 0;
  puStack00000024 = param_3;
  fn_82517978(param_1 + 1,*param_3,param_3[1],0);
  param_1[3] = param_2;
  param_1[4] = param_4;
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

