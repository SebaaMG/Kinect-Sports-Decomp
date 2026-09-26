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
extern int fn_8251E400();
extern int fn_8259C558();
extern int fn_8265CA20();
extern unsigned int lbl_82145260;
extern unsigned int lbl_821C8024;


undefined4 * fn_825A6318(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &lbl_821C8024;
  fn_8251E400(param_1 + 1);
  fn_8251E400(param_1 + 6);
  fn_8251E400(param_1 + 0xb);
  fn_8251E400(param_1 + 0x10);
  fn_8259C558(param_1 + 0x57);
  if (param_1[0x4e] != 0) {
    fn_8265CA20();
  }
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *param_1 = &lbl_82145260;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

