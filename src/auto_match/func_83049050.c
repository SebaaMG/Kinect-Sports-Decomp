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
extern int fn_82FA5190();
extern int fn_8304D648();
extern int fn_8307DE78();
extern int fn_8307E5A8();
extern int fn_8307E6E0();
extern unsigned int lbl_831BC770;


void fn_83049050(int *param_1)

{
  (**(code **)(*param_1 + 8))();
  if (param_1[10] != 0) {
    fn_8307DE78(param_1[10]);
    fn_8307E6E0(param_1[10]);
    fn_8307E5A8(param_1[10]);
    param_1[10] = 0;
  }
  if (param_1[0xe] != 0) {
    fn_82FA5190(lbl_831BC770);
    param_1[0xe] = 0;
  }
  fn_8304D648(param_1);
  return;
}

