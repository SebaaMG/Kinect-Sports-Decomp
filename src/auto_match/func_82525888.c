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
extern int fn_82A81CC0();
extern unsigned int *lbl_832767EC;


undefined8 fn_82525888(longlong param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (lbl_832767EC == (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      return 0;
    }
  }
  else if (param_2 != (undefined4 *)0x0) {
    *param_2 = *lbl_832767EC;
  }
  if (param_3 != (undefined1 *)0x0) {
    uVar1 = fn_82A81CC0(param_1 + 0x1e0);
    *param_3 = uVar1;
  }
  return 1;
}

