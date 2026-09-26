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
extern int fn_82B6D6E8();
extern int fn_82B6E6D0();
extern int fn_82B6E9E0();


undefined8 fn_82B6ADF8(undefined4 *param_1)

{
  ulonglong uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d8f04,0xffffffff820d96f0,0xbf);
  }
  uVar1 = fn_82B6E9E0(param_1[6]);
  while (uVar1 != 0) {
    if ((uVar1 & 0xffffffff) == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9754,0xffffffff820d96f0,0xc4);
    }
    fn_82B6D6E8(param_1[4],uVar1);
    uVar1 = fn_82B6E9E0(param_1[6]);
  }
  fn_82B6E6D0(param_1[6]);
  (*(code *)param_1[2])(*param_1,param_1);
  return 0;
}

