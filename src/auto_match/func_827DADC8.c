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
extern int fn_82517A50();
extern int fn_827D5078();
extern int fn_827D5108();
extern int fn_827D5158();


undefined4 * fn_827DADC8(undefined4 *param_1)

{
  ulonglong in_r7;
  ulonglong in_r8;
  undefined4 *puStack00000014;
  
  puStack00000014 = param_1;
  fn_827D5158();
  fn_827D5108(*param_1,0);
  if ((in_r8 & 0xffffffff) != 0) {
    fn_827D5078(*param_1,in_r8);
  }
  if ((in_r7 & 0xffffffff) != 0) {
    fn_82517A50(in_r7,param_1);
  }
  return param_1;
}

