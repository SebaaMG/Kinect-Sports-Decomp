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
extern int fn_8248F8E8();
extern int fn_82497EA8();
extern int fn_82497F18();
extern int fn_82558B08();
extern unsigned int lbl_821BEF50;


undefined4 * fn_824979A0(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &lbl_821BEF50;
  fn_82558B08();
  fn_82497EA8(param_1,0);
  fn_82497F18(param_1);
  if ((param_2 & 1) != 0) {
    fn_8248F8E8(param_1);
  }
  return param_1;
}

