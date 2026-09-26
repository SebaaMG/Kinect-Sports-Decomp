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
extern int fn_82F728D0();
extern int fn_82F72F40();
extern unsigned int *lbl_832635C0;


undefined4 * fn_82F73558(undefined4 *param_1)

{
  if (*lbl_832635C0 == '\0') {
    fn_82F728D0(param_1,1);
  }
  else if (*lbl_832635C0 == 'A') {
    lbl_832635C0 = lbl_832635C0 + 1;
    fn_82F72F40(param_1,0xffffffff82169d9c);
  }
  else {
    *(undefined1 *)((int)param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 1) = 2;
    *param_1 = 0;
  }
  return param_1;
}

