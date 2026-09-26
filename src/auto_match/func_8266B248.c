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
extern int fn_82667010();
extern int fn_8266B340();
extern int fn_8266C340();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;


int fn_8266B248(uint param_1,int param_2)

{
  int iVar1;
  uint uStack00000014;
  int iStack0000001c;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  iVar1 = fn_8266B340(param_2);
  if (iVar1 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0x1b,0xffffffff820027c0);
  }
  if (iStack0000001c == 0) {
    uStack_1c = 0;
  }
  else {
    uStack_1c = iStack0000001c - 4;
  }
  fn_82667010((ulonglong)uStack00000014 + 0xc,(ulonglong)uStack_1c + 0xc);
  if (uStack00000014 == 0) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = uStack00000014 + 4;
  }
  return uStack_18;
}

