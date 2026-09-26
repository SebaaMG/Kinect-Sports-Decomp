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
extern int fn_8267B890();
extern int fn_82759550();
extern int fn_827597E0();
extern int fn_82762930();
extern int fn_82765CA0();
extern unsigned int lbl_8201449C;
extern unsigned int lbl_831E7E64;


undefined4 * fn_82758A28(undefined4 *param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  param_1[1] = 1;
  *param_1 = &lbl_8201449C;
  uVar1 = fn_8267B890(lbl_831E7E64,0x7c,0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82765CA0(uVar1,0x1ff8);
  }
  param_1[2] = uVar2;
  fn_82762930(param_1 + 3);
  fn_827597E0(param_1 + 0x11);
  fn_82759550(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((int)param_1 + 0x85) = 0;
  return param_1;
}

