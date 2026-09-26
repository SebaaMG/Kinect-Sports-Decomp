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
extern int fn_82F11900();
extern int fn_82F27150();
extern int fn_82F27950();
extern int fn_82F27988();
extern int fn_82F27DA8();
extern int fn_82F27E78();
extern int fn_82F28610();
extern int fn_82F28800();
extern int fn_82F289E0();
extern int fn_82F28A30();
extern int fn_82F29260();
extern int fn_82F29A78();
extern int fn_82F29B68();
extern int fn_82F29C58();
extern int fn_82F47A58();
extern unsigned int lbl_82F28920;
extern unsigned int lbl_82F28950;
extern unsigned int lbl_82F28980;
extern unsigned int lbl_82F289B0;


void fn_82F29D48(int param_1)

{
  fn_82F47A58();
  *(code **)(param_1 + 0xa5c) = fn_82F27950;
  *(code **)(param_1 + 0xa60) = fn_82F27150;
  *(code **)(param_1 + 0xa64) = fn_82F27988;
  *(code **)(param_1 + 0xb1c) = fn_82F28610;
  *(code **)(param_1 + 0x970) = fn_82F27DA8;
  *(code **)(param_1 + 0x974) = fn_82F27E78;
  *(code **)(param_1 + 0x9b8) = fn_82F28A30;
  *(code **)(param_1 + 0x9bc) = fn_82F29260;
  *(code **)(param_1 + 0x9c4) = fn_82F29B68;
  *(code **)(param_1 + 0x9c8) = fn_82F29C58;
  *(code **)(param_1 + 0x9c0) = fn_82F29A78;
  *(code **)(param_1 + 0x9cc) = fn_82F289E0;
  *(undefined **)(param_1 + 0x9d0) = &lbl_82F28920;
  *(undefined **)(param_1 + 0x9d4) = &lbl_82F28980;
  *(undefined **)(param_1 + 0x9d8) = &lbl_82F28950;
  *(undefined **)(param_1 + 0x9dc) = &lbl_82F289B0;
  *(code **)(param_1 + 0x9e0) = fn_82F28800;
  fn_82F11900(param_1);
  return;
}

