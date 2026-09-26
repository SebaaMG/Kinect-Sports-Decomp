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
extern int fn_822334D0();
extern int fn_82233570();
extern int fn_82251300();
extern int fn_82255790();
extern int fn_82359C18();
extern int fn_828E3228();
extern int fn_828E32A0();


void fn_822333A0(int param_1)

{
  fn_82233570(param_1 + 0x268);
  fn_82251300(param_1 + 0x1d8);
  if (*(int *)(param_1 + 0x1d4) != 0) {
    fn_822315A0();
  }
  fn_82359C18(param_1 + 0x1b8);
  fn_82359C18(param_1 + 0x1a0);
  fn_828E32A0(param_1 + 0x168);
  fn_82255790(param_1 + 0xc0);
  fn_822334D0(param_1 + 0x28);
  fn_828E3228(param_1);
  return;
}

