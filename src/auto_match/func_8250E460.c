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
extern int fn_822315A0();
extern int fn_8255F1E0();
extern int fn_827F0548();
extern int fn_827F1080();
extern int fn_827F38B0();
extern int fn_827F38B8();


int fn_8250E460(int param_1,ulonglong param_2)

{
  if (*(int *)(param_1 + 0x5dc) != 0) {
    fn_822315A0();
  }
  fn_827F38B0(param_1 + 0x538);
  fn_827F38B8(param_1 + 0x4f0);
  fn_8255F1E0(param_1 + 0x340);
  fn_8255F1E0(param_1 + 400);
  fn_827F1080(param_1);
  if ((param_2 & 1) != 0) {
    fn_827F0548(param_1);
  }
  return param_1;
}

