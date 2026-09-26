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
extern int fn_82D8EAD8();
extern int fn_82D96538();
extern int fn_82DAC840();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82141C64;


void fn_82DAC420(undefined4 *param_1)

{
  *param_1 = &lbl_82141C64;
  if (*(short *)(param_1[0xf] + 4) != 0) {
    fn_82D8EAD8(param_1[3],param_1 + 0x11,1);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  fn_82D96538(param_1 + 0x11);
  fn_82DAC840(param_1 + 5);
  *param_1 = &lbl_8212FC60;
  return;
}

