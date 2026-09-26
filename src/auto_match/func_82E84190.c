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
extern int fn_82ED5420();
extern int fn_82ED7338();
extern int fn_82ED76D0();
extern int fn_82ED78B8();
extern int fn_82ED7BB0();
extern int fn_82F016E8();
extern int fn_82F090D0();
extern int fn_82F09118();
extern unsigned int lbl_82ED7A90;


void fn_82E84190(int param_1)

{
  *(undefined4 *)(param_1 + 0x2030) = *(undefined4 *)(param_1 + 0x254);
  *(undefined4 *)(param_1 + 0x2048) = *(undefined4 *)(param_1 + 0x254);
  *(undefined4 *)(param_1 + 0x204c) = *(undefined4 *)(param_1 + 600);
  *(undefined4 *)(param_1 + 0x2054) = *(undefined4 *)(param_1 + 0x268);
  *(undefined4 *)(param_1 + 0x2034) = *(undefined4 *)(param_1 + 600);
  *(undefined4 *)(param_1 + 0x2050) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined4 *)(param_1 + 0x2038) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined4 *)(param_1 + 0x2040) = *(undefined4 *)(param_1 + 0x23c);
  *(code **)(param_1 + 0x1fb0) = fn_82ED5420;
  *(undefined **)(param_1 + 0x2004) = &lbl_82ED7A90;
  *(code **)(param_1 + 0x2008) = fn_82ED7BB0;
  *(code **)(param_1 + 0x1fb4) = fn_82F09118;
  *(code **)(param_1 + 0x1fb8) = fn_82ED7338;
  *(code **)(param_1 + 0x1fbc) = fn_82ED76D0;
  *(code **)(param_1 + 0x1fc0) = fn_82ED78B8;
  *(undefined4 *)(param_1 + 0x2058) = *(undefined4 *)(param_1 + 0x23c);
  *(undefined4 *)(param_1 + 0x2044) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x205c) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x203c) = *(undefined4 *)(param_1 + 0x26c);
  fn_82F090D0(param_1);
  *(code **)(param_1 + 0x52a0) = fn_82F016E8;
  *(undefined4 *)(param_1 + 0x2048) = *(undefined4 *)(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x204c) = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x2050) = *(undefined4 *)(param_1 + 0x264);
  *(undefined4 *)(param_1 + 0x2054) = *(undefined4 *)(param_1 + 0x26c);
  *(undefined4 *)(param_1 + 0x2030) = *(undefined4 *)(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x2034) = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x2038) = *(undefined4 *)(param_1 + 0x264);
  if (*(int *)(param_1 + 0x628) == 0) {
    *(undefined4 *)(param_1 + 0x2034) = 0x831a9160;
    *(undefined4 *)(param_1 + 0x2038) = 0x831a91e8;
  }
  *(undefined4 *)(param_1 + 0x2040) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x2058) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x2044) = *(undefined4 *)(param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x205c) = *(undefined4 *)(param_1 + 0x24c);
  return;
}

