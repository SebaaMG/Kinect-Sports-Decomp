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
extern int fn_82545810();
extern int fn_82545950();
extern int fn_82545A90();
extern unsigned int lbl_821C1424;
extern unsigned int lbl_821C1E80;


void fn_824F5B78(undefined4 *param_1)

{
  *param_1 = &lbl_821C1E80;
  if (param_1[3] != 0) {
    fn_82545950(param_1 + 3);
  }
  if (param_1[4] != 0) {
    fn_82545A90(param_1 + 4);
  }
  if (param_1[5] != 0) {
    fn_82545810(param_1 + 5);
  }
  *param_1 = &lbl_821C1424;
  return;
}

