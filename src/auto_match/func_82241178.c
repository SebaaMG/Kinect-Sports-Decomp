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
extern int fn_822315A0();
extern int fn_822511E0();
extern int fn_82251390();
extern int fn_82359C18();
extern int fn_828E3228();
extern int fn_828E32A0();


void fn_82241178(int param_1)

{
  fn_82359C18(param_1 + 0x2c8);
  fn_82359C18(param_1 + 0x2b0);
  fn_828E32A0(param_1 + 0x278);
  fn_822511E0(param_1 + 0x1f8);
  fn_82359C18(param_1 + 0x1e0);
  fn_82359C18(param_1 + 0x1c8);
  fn_828E32A0(param_1 + 400);
  fn_82251390(param_1 + 0x108);
  if (*(int *)(param_1 + 0x104) != 0) {
    fn_822315A0();
  }
  fn_82359C18(param_1 + 0xe8);
  fn_82359C18(param_1 + 0xd0);
  fn_828E32A0(param_1 + 0x98);
  if (*(int *)(param_1 + 0x94) != 0) {
    fn_822315A0();
  }
  fn_82359C18(param_1 + 0x78);
  fn_82359C18(param_1 + 0x60);
  fn_828E32A0(param_1 + 0x28);
  fn_828E3228(param_1);
  return;
}

