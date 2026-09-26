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
extern int fn_82E58050();
extern unsigned int lbl_820F8EF8;
extern unsigned int lbl_820F8EFC;
extern unsigned int lbl_820F8F00;
extern unsigned int lbl_820F8F04;
extern unsigned int lbl_82154988;
extern unsigned int lbl_8215498C;
extern unsigned int lbl_82154990;
extern unsigned int lbl_82154994;
extern unsigned int lbl_8215FA48;
extern unsigned int lbl_8216055C;
extern unsigned int lbl_82160570;


undefined4 * fn_82EF3238(undefined4 *param_1)

{
  fn_82E58050();
  *param_1 = &lbl_82160570;
  param_1[1] = &lbl_8216055C;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((int)param_1 + 0x7e) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x16] = &lbl_8215FA48;
  param_1[2] = 1;
  param_1[4] = lbl_82154988;
  param_1[5] = lbl_8215498C;
  param_1[6] = lbl_82154990;
  param_1[7] = lbl_82154994;
  param_1[0x12] = lbl_820F8EF8;
  param_1[0x13] = lbl_820F8EFC;
  param_1[0x14] = lbl_820F8F00;
  param_1[0x15] = lbl_820F8F04;
  return param_1;
}

