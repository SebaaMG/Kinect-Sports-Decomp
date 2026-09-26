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
extern int fn_827D8B98();


undefined4 *
fn_827D8CF0(undefined4 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  if (((param_2 & 0xffffffff) != (param_3 & 0xffffffff)) &&
     ((param_3 & 0xffffffff) != (param_4 & 0xffffffff))) {
    fn_827D8B98(param_2,param_3,param_4,0,0);
    param_2 = ((ulonglong)(uint)((int)param_4 - (int)param_3 >> 3) & 0x1fffffff) * 8 + param_2;
  }
  *param_1 = (int)param_2;
  return param_1;
}

