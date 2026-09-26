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
extern int fn_82230300();
extern int fn_830B4D38();
extern unsigned int lbl_821880F4;


undefined4 * fn_830B3FC8(undefined4 *param_1)

{
  fn_830B4D38();
  param_1[1] = 0;
  *param_1 = &lbl_821880F4;
  param_1[2] = 0;
  fn_82230300(param_1 + 3,0,0);
  fn_82230300(param_1 + 10,0,0);
  fn_82230300(param_1 + 0x11,0,0);
  fn_82230300(param_1 + 0x18,0,0);
  fn_82230300(param_1 + 0x1f,0,0);
  fn_82230300(param_1 + 0x26,0,0);
  fn_82230300(param_1 + 0x2d,0,0);
  fn_82230300(param_1 + 0x34,0,0);
  return param_1;
}

