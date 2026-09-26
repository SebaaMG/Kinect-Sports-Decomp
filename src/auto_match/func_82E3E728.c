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
extern unsigned int *auStack_20;
extern int fn_82E2D9C0();
extern int fn_82EEA6E8();
extern unsigned int lbl_82152F10;


void fn_82E3E728(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  iVar1 = param_1[0x19];
  *param_1 = &lbl_82152F10;
  while (iVar1 != 0) {
    iVar1 = fn_82EEA6E8(param_1,auStack_20);
  }
  fn_82E2D9C0(param_1 + 1);
  return;
}

