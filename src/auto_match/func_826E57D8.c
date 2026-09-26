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
extern int fn_8267C4C8();
extern int fn_826E56B8();
extern unsigned int lbl_8200D62C;


undefined4 *
fn_826E57D8(undefined4 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             undefined4 param_5,undefined8 param_6)

{
  fn_826E56B8(param_1,param_6,0x20002);
  *param_1 = &lbl_8200D62C;
  if ((param_2 & 0xffffffff) != 0) {
    fn_8267C4C8(param_2);
  }
  param_1[5] = (int)param_2;
  if ((param_3 & 0xffffffff) != 0) {
    fn_8267C4C8(param_3);
  }
  param_1[6] = (int)param_3;
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267C4C8(param_4);
  }
  param_1[7] = (int)param_4;
  param_1[8] = param_5;
  param_1[9] = 0;
  return param_1;
}

