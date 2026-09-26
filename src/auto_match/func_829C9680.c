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
extern int fn_829CFB48();
extern int fn_829CFC20();
extern int fn_829D2868();
extern unsigned int lbl_832178A8;


void fn_829C9680(int *param_1)

{
  if (param_1[5] != 0) {
    fn_829CFB48(0);
    fn_829CFC20(0);
  }
  if (param_1[3] != 0) {
    fn_829CFB48(1);
    fn_829CFC20(1);
  }
  if (param_1[4] != 0) {
    fn_829CFB48(0);
    fn_829CFC20(0);
  }
  if (param_1[1] != 0) {
    fn_829CFB48(2);
    fn_829CFC20(2);
  }
  if (param_1[2] != 0) {
    fn_829CFB48(5);
    fn_829CFC20(5);
  }
  if (*param_1 != 0) {
    fn_829CFB48(3);
    fn_829CFC20(3);
  }
  if (param_1[0xd] == 0) {
    fn_829D2868(0);
  }
  *(undefined4 *)(&lbl_832178A8 + ((int)(param_1 + 0x1f37a20f) / 0x4c) * 4) = 0;
  return;
}

