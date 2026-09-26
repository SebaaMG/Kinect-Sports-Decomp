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
extern int fn_82F68BF0();
extern int fn_82F691F0();


undefined8 fn_82CBBCE0(undefined4 *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((param_2 & 0xffffffff) < 0x10) {
      param_2 = 0x10;
    }
    if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
      param_3 = param_2;
    }
    uVar1 = fn_82F68BF0((param_2 & 0x3fffffff) << 2);
    *param_1 = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
      param_1[1] = (int)param_2;
      if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
        param_2 = param_3;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar1,0,(param_2 & 0x3fffffff) << 2);
    }
  }
  return 0;
}

