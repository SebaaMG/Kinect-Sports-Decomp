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
extern int fn_82F491D0();
extern int fn_82F4A9D8();
extern int fn_82F4AA38();
extern int fn_82F4AA98();
extern int fn_82F4AB08();
extern int fn_82F4AB68();
extern int fn_82F4ABC8();
extern int fn_82F4AC38();
extern int fn_82F4AC98();
extern int fn_82F4ACF8();
extern int fn_82F4D0C8();
extern int fn_82F4D118();
extern int fn_82F4D170();
extern int fn_82F4D1D8();
extern int fn_82F4D228();
extern int fn_82F4D280();
extern int fn_82F4D2E8();
extern int fn_82F4D338();
extern int fn_82F4D390();
extern unsigned int lbl_82F4A998;
extern unsigned int lbl_82F4A9A8;
extern unsigned int lbl_82F4A9B8;
extern unsigned int lbl_82F4A9C8;
extern unsigned int lbl_82F4AAF8;
extern unsigned int lbl_82F4AC28;
extern unsigned int lbl_82F4D088;
extern unsigned int lbl_82F4D098;
extern unsigned int lbl_82F4D0A8;
extern unsigned int lbl_82F4D0B8;
extern unsigned int lbl_82F4D1C8;
extern unsigned int lbl_82F4D2D8;


void fn_82F47A58(int param_1)

{
  *(code **)(param_1 + 0xa68) = fn_82F491D0;
  *(undefined **)(param_1 + 0xa6c) = &lbl_82F4A998;
  *(undefined **)(param_1 + 0xa70) = &lbl_82F4A9A8;
  *(undefined **)(param_1 + 0xa74) = &lbl_82F4A9B8;
  *(undefined **)(param_1 + 0xa78) = &lbl_82F4A9C8;
  *(code **)(param_1 + 0xa7c) = fn_82F4A9D8;
  *(code **)(param_1 + 0xa80) = fn_82F4AA38;
  *(code **)(param_1 + 0xa84) = fn_82F4AA98;
  *(undefined **)(param_1 + 0xa88) = &lbl_82F4AAF8;
  *(code **)(param_1 + 0xa8c) = fn_82F4AB08;
  *(code **)(param_1 + 0xa90) = fn_82F4AB68;
  *(code **)(param_1 + 0xa94) = fn_82F4ABC8;
  *(undefined **)(param_1 + 0xa98) = &lbl_82F4AC28;
  *(code **)(param_1 + 0xa9c) = fn_82F4AC38;
  *(code **)(param_1 + 0xaa0) = fn_82F4AC98;
  *(code **)(param_1 + 0xaa4) = fn_82F4ACF8;
  *(code **)(param_1 + 0xaa8) = fn_82F491D0;
  *(undefined **)(param_1 + 0xaac) = &lbl_82F4D088;
  *(undefined **)(param_1 + 0xab0) = &lbl_82F4D098;
  *(undefined **)(param_1 + 0xab4) = &lbl_82F4D0A8;
  *(undefined **)(param_1 + 0xab8) = &lbl_82F4D0B8;
  *(code **)(param_1 + 0xabc) = fn_82F4D0C8;
  *(code **)(param_1 + 0xac0) = fn_82F4D118;
  *(code **)(param_1 + 0xac4) = fn_82F4D170;
  *(undefined **)(param_1 + 0xac8) = &lbl_82F4D1C8;
  *(code **)(param_1 + 0xacc) = fn_82F4D1D8;
  *(code **)(param_1 + 0xad0) = fn_82F4D228;
  *(code **)(param_1 + 0xad4) = fn_82F4D280;
  *(undefined **)(param_1 + 0xad8) = &lbl_82F4D2D8;
  *(code **)(param_1 + 0xadc) = fn_82F4D2E8;
  *(code **)(param_1 + 0xae0) = fn_82F4D338;
  *(code **)(param_1 + 0xae4) = fn_82F4D390;
  return;
}

