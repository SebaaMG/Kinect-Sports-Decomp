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
extern unsigned int lbl_8214161C;
extern unsigned int lbl_82145C14;
extern unsigned int lbl_82145C24;
extern unsigned int lbl_821475AC;
extern unsigned int lbl_821475E4;


void fn_82DF9E58(undefined4 *param_1,int param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  *param_1 = &lbl_821475AC;
  if (param_2 != 0) {
    *(undefined1 *)((int)param_1 + 9) = 0;
  }
  *param_1 = &lbl_821475E4;
  param_1[9] = &lbl_8214161C;
  param_1[7] = &lbl_82145C24;
  param_1[9] = &lbl_82145C14;
  if (param_2 == 0) {
    return;
  }
  *(undefined1 *)((int)param_1 + 9) = 2;
  return;
}

