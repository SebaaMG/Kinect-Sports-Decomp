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
extern int fn_82C8BC48();
extern int fn_82C8CA50();
extern int fn_82C8D210();
extern int fn_82C8D480();
extern int fn_82C8E218();
extern int fn_82C8E408();
extern int fn_82C8E790();
extern int fn_82C8EA50();
extern int fn_82C8F130();
extern int fn_82C8F560();
extern int fn_82C8FB00();
extern int fn_82C8FD40();
extern int fn_82CAE7F0();
extern int fn_82CC52A8();
extern unsigned int lbl_82CC5DB8;
extern unsigned int lbl_82CC6078;
extern unsigned int lbl_82CC6088;
extern unsigned int lbl_82CC60A8;
extern unsigned int lbl_82CC60B8;


void fn_82CAECC8(int param_1)

{
  *(undefined **)(param_1 + 0xc54) = &fn_82CC52A8;
  *(undefined **)(param_1 + 0xc38) = &lbl_82CC60A8;
  *(undefined **)(param_1 + 0xc40) = &lbl_82CC6078;
  *(undefined **)(param_1 + 0xc4c) = &lbl_82CC5DB8;
  *(undefined **)(param_1 + 0xc2c) = &lbl_82CC6088;
  *(undefined **)(param_1 + 0xc34) = &lbl_82CC60B8;
  *(undefined **)(param_1 + 0xc3c) = &lbl_82CC6088;
  *(code **)(param_1 + 0xc70) = fn_82C8D210;
  *(code **)(param_1 + 0xc74) = fn_82C8D480;
  *(code **)(param_1 + 0xc6c) = fn_82C8CA50;
  *(code **)(param_1 + 0xc68) = fn_82C8BC48;
  *(code **)(param_1 + 0x3e30) = fn_82C8E790;
  *(code **)(param_1 + 0x3e2c) = fn_82C8EA50;
  if (*(int *)(param_1 + 0x5118) != 0) {
    *(code **)(param_1 + 0x3e30) = fn_82C8E218;
    *(code **)(param_1 + 0x3e2c) = fn_82C8E408;
  }
  *(undefined **)(param_1 + 0xc54) = &fn_82CC52A8;
  fn_82CAE7F0();
  if (*(int *)(param_1 + 0xfac) != 0) {
    *(code **)(param_1 + 0x3e38) = fn_82C8F130;
    *(undefined **)(param_1 + 0x3e3c) = &fn_82C8F560;
  }
  *(code **)(param_1 + 0xca4) = fn_82C8FB00;
  *(code **)(param_1 + 0xca8) = fn_82C8FD40;
  return;
}

