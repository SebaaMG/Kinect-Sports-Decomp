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
extern int fn_8288B338();
extern int fn_82897D88();
extern unsigned int lbl_82196884;
extern unsigned int lbl_82196AAC;
extern unsigned int lbl_821970C0;
extern unsigned int lbl_82197534;


void fn_822322A8(undefined4 *param_1)

{
  *param_1 = &lbl_82196AAC;
  param_1[0x5b] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x5b);
  param_1[0x41] = &lbl_82197534;
  fn_82897D88(param_1 + 0x41);
  param_1[0x27] = &lbl_82197534;
  fn_82897D88(param_1 + 0x27);
  param_1[0xd] = &lbl_82197534;
  fn_82897D88(param_1 + 0xd);
  *param_1 = &lbl_82196884;
  fn_8288B338(param_1);
  return;
}

