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
extern int fn_8226D6A0();
extern int fn_8251FA58();
extern unsigned int lbl_821BD5A8;
extern unsigned int lbl_821BE838;


void fn_8247D7A8(undefined4 *param_1)

{
  *param_1 = &lbl_821BD5A8;
  if (((float)param_1[9] <= (float)param_1[0xc]) && (*(int *)(param_1[6] + 0x18ec) != 0)) {
    fn_8226D6A0();
    *(undefined4 *)(param_1[6] + 0x18ec) = 0;
  }
  if (param_1[10] != 0) {
    fn_8251FA58();
    param_1[10] = 0;
  }
  *param_1 = &lbl_821BE838;
  return;
}

