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
extern int fn_8267BE38();
extern int fn_826824B0();
extern int fn_826A1370();
extern int fn_826DF960();
extern unsigned int lbl_8200F7F8;
extern unsigned int lbl_8200F84C;
extern unsigned int lbl_8200F858;


void fn_827190A8(undefined4 *param_1)

{
  *param_1 = &lbl_8200F858;
  param_1[3] = &lbl_8200F84C;
  param_1[0x1a] = &lbl_8200F7F8;
  fn_8267BE38(param_1[0x28]);
  if (param_1[0x2f] != 0) {
    fn_826824B0();
  }
  fn_826DF960(param_1[0x29],param_1[0x2a]);
  fn_8267BE38(param_1[0x29]);
  fn_826A1370(param_1);
  return;
}

