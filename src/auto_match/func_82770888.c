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
extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_82770158();
extern int fn_827B5EA8();
extern int fn_827B6118();
extern unsigned int lbl_820151C4;


void fn_82770888(undefined4 *param_1)

{
  *param_1 = &lbl_820151C4;
  fn_827B6118(param_1 + 0x52);
  fn_827B5EA8(param_1 + 0x46);
  fn_827B5EA8(param_1 + 0x42);
  fn_8267BE38(param_1[0x31]);
  fn_8267BE38(param_1[0x2e]);
  fn_827B5EA8(param_1 + 0x2a);
  fn_8267BE38(param_1[0x27]);
  fn_82770158(param_1 + 0xc);
  if (param_1[10] != 0) {
    fn_8267C4F0();
  }
  if (param_1[9] != 0) {
    fn_8267C4F0();
  }
  if (param_1[8] != 0) {
    fn_8267C4F0();
  }
  fn_8267C488(param_1);
  return;
}

