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
extern int fn_826A1050();
extern unsigned int lbl_82006B48;
extern unsigned int lbl_82006B9C;
extern unsigned int lbl_82010A68;


undefined4 * fn_827224E0(undefined4 *param_1)

{
  fn_826A1050();
  *param_1 = &lbl_82010A68;
  param_1[3] = &lbl_82006B9C;
  param_1[0x1a] = &lbl_82006B48;
  return param_1;
}

