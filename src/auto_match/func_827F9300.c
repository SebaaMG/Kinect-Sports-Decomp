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
extern int fn_827F7268();
extern int fn_827F77A8();
extern int fn_827F8190();
extern int fn_827F87A0();
extern int fn_827F8B30();
extern int fn_827F9090();


void fn_827F9300(int param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
      if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 0x90) != 0)) {
        fn_827F87A0(param_1,0);
      }
      else {
        fn_827F77A8(param_1,0);
      }
    }
    else {
      fn_827F8B30(param_1,0);
    }
  }
  else if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 0x90) != 0)) {
    fn_827F9090(param_1,0);
  }
  else {
    fn_827F8190(param_1,0);
  }
  fn_827F7268(param_1);
  return;
}

