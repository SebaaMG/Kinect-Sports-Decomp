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
extern int fn_827B19D8();


undefined8 fn_827B1B68(undefined4 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  byte abStack_20 [8];
  
  abStack_20[0] = (byte)((param_2 & 0x7f) << 1);
  if ((param_2 & 0xffffffff) < 0x80) {
    fn_827B19D8(*param_1,abStack_20);
    uVar1 = 1;
  }
  else {
    abStack_20[0] = abStack_20[0] | 1;
    fn_827B19D8(*param_1,abStack_20);
    abStack_20[0] = (byte)((param_2 & 0xffffffff) >> 7);
    fn_827B19D8(*param_1,abStack_20);
    uVar1 = 2;
  }
  return uVar1;
}

