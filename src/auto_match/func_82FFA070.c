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
extern int fn_82FF84F8();
extern int fn_8300EC58();
extern unsigned int lbl_8217BCF8;
extern unsigned int lbl_832645A0;


undefined4 * fn_82FFA070(undefined4 *param_1)

{
  *param_1 = &lbl_8217BCF8;
  fn_82FF84F8(param_1 + 1);
  *(undefined1 *)(param_1 + 0xc) = 0;
  RtlInitializeCriticalSection(param_1 + 0xd);
  RtlInitializeCriticalSection(param_1 + 0x14);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0xffffffff;
  param_1[0xe6] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0xffffffff;
  param_1[0x127] = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  fn_8300EC58(param_1 + 0x129);
  param_1[0xb] = 0;
  lbl_832645A0 = 0;
  return param_1;
}

