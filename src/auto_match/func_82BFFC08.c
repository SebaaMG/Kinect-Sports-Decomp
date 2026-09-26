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
extern int fn_8262FEC8();
extern int fn_82631578();
extern int fn_82639F78();
extern int fn_82647460();


undefined8 fn_82BFFC08(int *param_1)

{
  if (param_1[0xe] != 0) {
    fn_82639F78(param_1[0xe],0,0,0,0,1);
                    /* WARNING: Subroutine does not return */
    fn_82631578(param_1[0xe],0);
  }
  if (param_1[0x13] != 0) {
    fn_8262FEC8();
    param_1[0x13] = 0;
  }
  if (param_1[0x12] != 0) {
    fn_8262FEC8();
    param_1[0x12] = 0;
  }
  if (param_1[0x11] != 0) {
    fn_8262FEC8();
    param_1[0x11] = 0;
  }
  if (param_1[0x10] != 0) {
    fn_8262FEC8();
    param_1[0x10] = 0;
  }
  if (param_1[0xf] != 0) {
    fn_8262FEC8();
    param_1[0xf] = 0;
  }
  if (param_1[0xe] != 0) {
    fn_82647460();
    param_1[0xe] = 0;
  }
  (**(code **)(*param_1 + 0x3c))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1);
  return 0;
}

