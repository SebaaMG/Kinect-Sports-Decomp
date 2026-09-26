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
extern int fn_828ABF58();
extern int fn_828E5F40();
extern unsigned int lbl_82196C88;
extern unsigned int lbl_821B47C8;
extern unsigned int lbl_821B557C;
extern unsigned int lbl_821B5594;


undefined4 * fn_823A9980(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &lbl_821B5594;
  param_1[3] = 0;
  param_1[2] = &lbl_821B47C8;
  fn_828ABF58(param_1 + 4,0,0,8);
  fn_828ABF58(param_1 + 10,0,0,2);
  param_1[0x11] = 0;
  param_1[0x13] = 7;
  param_1[0x12] = 5;
  param_1[0x10] = &lbl_82196C88;
  param_1[0x14] = 3;
  param_1[0x15] = 7;
  param_1[0x16] = 5;
  param_1[0x17] = 7;
  fn_828ABF58(param_1 + 0x18,0,0,8);
  param_1[0x1f] = 0;
  param_1[0x1e] = &lbl_821B557C;
  fn_828ABF58(param_1 + 0x20,0,0,4);
  fn_828E5F40(param_1 + 0x26,3,10);
  fn_828E5F40(param_1 + 0x2a,1,7);
  return param_1;
}

