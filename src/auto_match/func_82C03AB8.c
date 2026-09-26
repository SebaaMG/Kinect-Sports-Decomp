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
extern int fn_82C005C8();
extern int fn_82C06348();
extern int fn_82C065C8();
extern int fn_82C09960();
extern int fn_82C0BA98();
extern unsigned int lbl_820EC640;


undefined4 * fn_82C03AB8(undefined4 *param_1)

{
  fn_82C06348();
  fn_82C065C8(param_1 + 0xe);
  fn_82C005C8(param_1 + 0x1f);
  fn_82C0BA98(param_1 + 0x34);
  *param_1 = &lbl_820EC640;
  fn_82C09960(param_1);
  param_1[0xa8] = 0;
  param_1[0xa5] = 1;
  param_1[0xa9] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  return param_1;
}

