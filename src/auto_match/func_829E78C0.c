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
extern int fn_829E7640();
extern int fn_829E8B10();
extern int fn_829EC538();
extern unsigned int lbl_820798C0;
extern unsigned int lbl_820798D8;


void fn_829E78C0(undefined4 *param_1)

{
  *param_1 = &lbl_820798D8;
  fn_829E7640(param_1 + 1);
  fn_829EC538(param_1 + 0x12);
  fn_829E8B10(param_1 + 5);
  *param_1 = &lbl_820798C0;
  return;
}

