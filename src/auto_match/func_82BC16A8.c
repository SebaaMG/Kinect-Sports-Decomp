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
extern int fn_82AB15D0();
extern int fn_82BC0928();
extern unsigned int lbl_820E34F0;


undefined4 * fn_82BC16A8(undefined4 *param_1,int param_2,int param_3)

{
  fn_82BC0928();
  *param_1 = &lbl_820E34F0;
  if (0x7fff < param_3) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e34e0,0xffffffff820e33a8,0x241);
  }
  if (0xffff < param_2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e34cc,0xffffffff820e33a8,0x242);
  }
  param_1[4] = param_3 * 0x10000 + param_2;
  return param_1;
}

