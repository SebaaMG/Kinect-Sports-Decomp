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
extern int fn_826C0608();
extern int fn_82735870();
extern unsigned int lbl_82006E64;
extern unsigned int lbl_820117A8;
extern unsigned int lbl_820117B0;
extern unsigned int lbl_820118D0;


undefined4 *
fn_827375F0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  fn_82735870();
  param_1[0x1d] = &lbl_82006E64;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  *param_1 = &lbl_820118D0;
  param_1[4] = &lbl_820117B0;
  param_1[0x1d] = &lbl_820117A8;
  fn_826C0608(param_1 + 0x1d,param_1,param_2,param_4);
  return param_1;
}

