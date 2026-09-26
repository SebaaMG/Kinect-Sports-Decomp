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
extern int fn_82EF7218();
extern int fn_82EF7548();
extern int fn_82EF75C0();
extern int fn_82EF7DB0();
extern int fn_82EF7EA8();
extern int fn_82EF7F48();
extern int fn_82EF83B0();
extern int fn_82EF8508();
extern int fn_82EF8618();
extern int fn_82EF8918();
extern int fn_82EF8DF0();
extern int fn_82EF9238();
extern int fn_82EF96C8();
extern int fn_82EF9B68();
extern int fn_82EFA1A8();
extern int fn_82EFA7F8();
extern int fn_82EFAA48();
extern int fn_82EFADC0();
extern int fn_82EFB028();
extern int fn_82EFB4D8();
extern int fn_82EFDCF8();
extern int fn_82EFDF68();
extern int fn_82F11900();
extern int fn_82F42998();
extern unsigned int lbl_82EF7480;
extern unsigned int lbl_82EF7D98;
extern unsigned int lbl_831AEA20;
extern unsigned int uRam8324d798;


void fn_82EFDFC8(int param_1)

{
  *(undefined **)(param_1 + 0x515c) = &lbl_831AEA20;
  *(undefined **)(param_1 + 0x5158) = &lbl_831AEA20;
  *(undefined **)(param_1 + 0x5150) = &lbl_831AEA20;
  *(code **)(param_1 + 0x1bb4) = fn_82EF8508;
  *(code **)(param_1 + 0x1bb8) = fn_82EF7218;
  *(code **)(param_1 + 0x1bc0) = fn_82EF7548;
  *(undefined **)(param_1 + 0x1bbc) = &lbl_82EF7480;
  *(code **)(param_1 + 0x1bc4) = fn_82EF83B0;
  *(code **)(param_1 + 0x1bc8) = fn_82EF7F48;
  *(code **)(param_1 + 0x5298) = fn_82EF8918;
  *(code **)(param_1 + 0x529c) = fn_82EF8DF0;
  *(code **)(param_1 + 0x6f38) = fn_82EFADC0;
  *(code **)(param_1 + 0x6f3c) = fn_82EFB028;
  *(code **)(param_1 + 0x6d28) = fn_82EF9238;
  *(code **)(param_1 + 0x6d2c) = fn_82EF96C8;
  *(code **)(param_1 + 0x6f44) = fn_82EF8618;
  *(code **)(param_1 + 0x6f40) = fn_82EFB4D8;
  *(code **)(param_1 + 0x6d30) = fn_82EF9B68;
  *(code **)(param_1 + 0x6d34) = fn_82EFA1A8;
  *(code **)(param_1 + 0x6d38) = fn_82EFA7F8;
  *(code **)(param_1 + 0x6d3c) = fn_82EFAA48;
  *(code **)(param_1 + 0x1be0) = fn_82EFDCF8;
  *(code **)(param_1 + 0x6f80) = fn_82EFDF68;
  *(undefined **)(param_1 + 0x1bcc) = &fn_82EF75C0;
  *(undefined **)(param_1 + 0x1bd0) = &lbl_82EF7D98;
  *(code **)(param_1 + 0x1bd8) = fn_82EF7DB0;
  *(code **)(param_1 + 0x1bd4) = fn_82EF7548;
  uRam8324d798 = *(undefined4 *)(param_1 + 0x1bb8);
  *(code **)(param_1 + 0x1bdc) = fn_82EF7EA8;
  fn_82F42998(param_1);
  fn_82F11900(param_1);
  return;
}

