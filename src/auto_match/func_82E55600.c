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
extern int fn_82E50C30();
extern int fn_82EE2D20();
extern unsigned int lbl_8214C320;
extern unsigned int lbl_8214C324;
extern unsigned int lbl_8214C328;
extern unsigned int lbl_8214C32C;
extern unsigned int lbl_821548E0;


undefined4 * fn_82E55600(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  *param_1 = &lbl_821548E0;
  fn_82E50C30(param_1 + 2);
  param_1[0x11] = lbl_8214C320;
  param_1[0x12] = lbl_8214C324;
  param_1[0x13] = lbl_8214C328;
  param_1[0x14] = lbl_8214C32C;
  fn_82EE2D20(param_1 + 0x15);
  if (-1 < *param_2) {
    *param_2 = 0;
  }
  return param_1;
}

