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
extern int fn_82DC8A30();
extern unsigned int lbl_8214162C;
extern unsigned int lbl_8214227C;
extern unsigned int lbl_821422B8;
extern unsigned int lbl_821422C8;
extern unsigned int lbl_821422E4;


undefined4 * fn_82DB4458(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = &lbl_8214227C;
  param_1[3] = &lbl_8214162C;
  *param_1 = &lbl_821422E4;
  param_1[2] = &lbl_821422C8;
  param_1[3] = &lbl_821422B8;
  param_1[4] = 1;
  fn_82DC8A30(param_1 + 5);
  return param_1;
}

