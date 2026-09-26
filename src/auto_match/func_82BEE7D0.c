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
extern int fn_82F64068();


ulonglong fn_82BEE7D0(undefined8 param_1,uint *param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  
  if (((param_2 == (uint *)0x0) || ((int)param_4 < 0x10)) || ((param_3 & 0xffffffff) == 0)) {
    param_3 = 0;
  }
  else {
    uVar1 = *param_2;
    fn_82F64068(param_3,param_4,0xffffffffffffffff,0xffffffff820eb130,uVar1 >> 0x18,
                      uVar1 >> 0x10 & 0xff,uVar1 >> 8 & 0xff,uVar1 & 0xff);
  }
  return param_3;
}

