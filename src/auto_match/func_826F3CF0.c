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
extern int fn_82F63EC8();
extern unsigned int lbl_8200DAF4;
extern unsigned int *lbl_831F12C8;
extern unsigned int lbl_831F12CC;


undefined4 * fn_826F3CF0(undefined4 *param_1,undefined8 param_2)

{
  if ((lbl_831F12CC & 1) == 0) {
    lbl_831F12CC = lbl_831F12CC | 1;
    lbl_831F12C8 = &lbl_8200DAF4;
    fn_82F63EC8(0xffffffff8313fd88);
  }
  (*(code *)lbl_831F12C8[1])(0xffffffff831f12c8,param_2);
  param_1[1] = (int)param_2;
  *param_1 = &lbl_831F12C8;
  return param_1;
}

