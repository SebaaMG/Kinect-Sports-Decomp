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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82279AF0();
extern int fn_8227B968();
extern int fn_822848B8();
extern int fn_82359C18();
extern int fn_82536590();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_821A86E8;


void fn_8227B1D0(undefined4 *param_1)

{
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [40];
  
  *param_1 = &lbl_821A86E8;
  fn_8227B968();
  if (param_1[0x45a] != 0) {
    fn_822848B8();
    param_1[0x45a] = 0;
  }
  if (param_1[0x28e] != 0) {
    fn_82864988(auStack_40,0xffffffff821a83f8);
    auStack_50[0] = fn_828647D8();
    fn_82864898(auStack_40);
    fn_82536590(auStack_50,0);
    param_1[0x28e] = 0;
  }
  fn_82359C18(param_1 + 0x45c);
  fn_82279AF0(param_1);
  return;
}

