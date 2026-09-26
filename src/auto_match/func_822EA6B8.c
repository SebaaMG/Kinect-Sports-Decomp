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
extern int fn_82230110();
extern int fn_822C7FD8();
extern int fn_8265C9E0();
extern unsigned int lbl_821AE1D0;


undefined4 * fn_822EA6B8(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x110);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    fn_822C7FD8(puVar1,param_1);
    *puVar1 = &lbl_821AE1D0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    fn_82230110(puVar1 + 0x36,0xffffffff821aded8);
    fn_82230110(puVar1 + 0x3d,0xffffffff821adec4);
  }
  return puVar1;
}

