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
extern int fn_82A40018();
extern int fn_82A411B8();
extern int fn_82A412D8();
extern int fn_82A4B788();
extern int fn_82A4BB80();
extern unsigned int lbl_82089688;
extern unsigned int lbl_82089D14;
extern unsigned int lbl_82089D24;
extern unsigned int lbl_82089D34;
extern unsigned int lbl_82089D38;
extern unsigned int lbl_82089D88;


void fn_82A4BE18(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  *param_1 = &lbl_82089D38;
  param_1[1] = &lbl_82089D88;
  pcVar1 = *(code **)(param_1[7] + 8);
  param_1[3] = &lbl_82089D24;
  param_1[2] = &lbl_82089D34;
  puVar2 = param_1 + 7;
  param_1[4] = &lbl_82089D14;
  (*pcVar1)(puVar2);
  fn_82A4BB80(param_1);
  fn_82A4B788(param_1);
  (**(code **)(param_1[7] + 0x14))(puVar2);
  *param_1 = 0;
  fn_82A411B8(param_1 + 0x55);
  fn_82A412D8(param_1 + 0x1e);
  fn_82A40018(param_1 + 0x15);
  fn_82A40018(puVar2);
  param_1[4] = &lbl_82089688;
  return;
}

