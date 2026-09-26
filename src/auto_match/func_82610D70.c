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
extern int fn_827DEA30();
extern unsigned int lbl_821CB8D4;


undefined4 * fn_82610D70(void)

{
  undefined4 *in_r6;
  
  if (in_r6 == (undefined4 *)0x0) {
    in_r6 = (undefined4 *)0x0;
  }
  else {
    fn_827DEA30(in_r6);
    *in_r6 = &lbl_821CB8D4;
  }
  return in_r6;
}

