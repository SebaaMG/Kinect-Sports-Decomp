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
extern int fn_82AB15D0();
extern int fn_82F691F0();


undefined8 fn_82B7F298(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d923c,0xffffffff820dbba0,0x145);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dbc44,0xffffffff820dbba0,0x146);
  }
  lVar1 = (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x10),0x684);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(lVar1,0,0x684);
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dbc08,0xffffffff820dbba0,0x15c);
  return 0;
}

