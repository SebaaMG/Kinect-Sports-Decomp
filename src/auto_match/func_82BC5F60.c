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
extern int fn_82BBFE98();
extern int fn_82BC6DC0();
extern unsigned int lbl_820E0214;
extern unsigned int lbl_820E4BDC;


void fn_82BC5F60(undefined4 *param_1)

{
  *param_1 = &lbl_820E4BDC;
  if (param_1[0xf] != 0) {
    fn_82BC6DC0(param_1[0xf],1);
  }
  if (param_1[0xe] != 0) {
    fn_82BC6DC0(param_1[0xe],1);
  }
  if (param_1[0x16] != 0) {
    fn_82BC6DC0(param_1[0x16],1);
  }
  if (param_1[0x17] != 0) {
    fn_82BC6DC0(param_1[0x17],1);
  }
  if (param_1[0xb] != 0) {
    fn_82BC6DC0(param_1[0xb],1);
  }
  fn_82BBFE98(param_1 + 5);
  param_1[8] = &lbl_820E0214;
  param_1[5] = &lbl_820E0214;
  *param_1 = &lbl_820E0214;
  return;
}

