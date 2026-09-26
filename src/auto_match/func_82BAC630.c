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
extern int fn_82B7BEB0();
extern int fn_82BC6DC0();
extern unsigned int lbl_83223EC0;


void fn_82BAC630(int *param_1)

{
  if (param_1[0x1c] != 0) {
    fn_82BC6DC0(param_1[0x1c],1);
  }
  if (param_1[0x1d] != 0) {
    fn_82BC6DC0(param_1[0x1d],1);
  }
  if (param_1[0x1e] != 0) {
    fn_82BC6DC0(param_1[0x1e],1);
  }
  if (param_1[0x1a] != 0) {
    fn_82BC6DC0(param_1[0x1a],1);
  }
  if (param_1[0x19] != 0) {
    fn_82BC6DC0(param_1[0x19],1);
  }
  (**(code **)(*param_1 + 0x59c))(*(undefined4 *)(*param_1 + 0x5a4),param_1[0xd]);
  (**(code **)(*param_1 + 0x59c))(*(undefined4 *)(*param_1 + 0x5a4),param_1[1]);
  (**(code **)(*param_1 + 0x59c))(*(undefined4 *)(*param_1 + 0x5a4),param_1[2]);
  if (param_1[5] != 0) {
    (**(code **)(*param_1 + 0x59c))(*(undefined4 *)(*param_1 + 0x5a4));
  }
  if (lbl_83223EC0 != 0) {
    fn_82B7BEB0(*(undefined4 *)(*param_1 + 0x5ac));
    lbl_83223EC0 = 0;
  }
  return;
}

