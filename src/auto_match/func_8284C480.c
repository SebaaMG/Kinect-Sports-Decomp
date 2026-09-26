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
extern unsigned int lbl_28280086;


undefined8 fn_8284C480(undefined1 *param_1)

{
  if (param_1 < (undefined1 *)0x28000003) {
    if ((((param_1 != (undefined1 *)0x28000002) && (param_1 != (undefined1 *)0x18280043)) &&
        ((param_1 != (undefined1 *)0x1828004f &&
         ((param_1 != (undefined1 *)0x18280086 && (param_1 != (undefined1 *)0x1a20007d)))))) &&
       (param_1 != (undefined1 *)0x1a200086)) {
      return 0;
    }
  }
  else if ((param_1 < (undefined1 *)0x28280043) ||
          (((((undefined1 *)0x28280045 < param_1 && (param_1 != (undefined1 *)0x2828004f)) &&
            (param_1 != &lbl_28280086)) && (param_1 != (undefined1 *)0x2a200086)))) {
    return 0;
  }
  return 1;
}

