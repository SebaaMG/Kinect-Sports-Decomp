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
extern unsigned int *auStack_230;
extern int fn_82CE0BF0();
extern int fn_82CE1EA8();
extern int fn_82CE1F30();
extern int fn_82CE2008();
extern unsigned int iStack_250;
extern unsigned int stack0x00000014;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_244;
extern unsigned int uStack_248;
extern unsigned int uStack_24c;
extern unsigned int uStack_30;


undefined8
fn_82CE0C20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  int iStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 auStack_230 [512];
  undefined4 uStack_30;
  
  uStack_30 = 0;
  iStack_250 = 0;
  uStack_24c = 0;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  lVar1 = fn_82CE1EA8(0x206,&uStack_248);
  if ((((-1 < lVar1) && (lVar1 = fn_82CE1F30(uStack_248,0,0,0,&uStack_24c,0,0), -1 < lVar1))
      && (lVar1 = XamAlloc(0,uStack_24c,&iStack_250), -1 < lVar1)) &&
     (lVar1 = fn_82CE2008(0x206,uStack_248,0,0,iStack_250,uStack_24c,0,0), -1 < lVar1)) {
    fn_82CE0BF0(auStack_230,&stack0x00000014);
    fn_82CE0BF0(auStack_230,&stack0x0000001c);
    fn_82CE0BF0(auStack_230,&stack0x00000024);
    fn_82CE0BF0(auStack_230,param_4);
    fn_82CE0BF0(auStack_230,param_5);
    lVar1 = XMsgInProcessCall(0xfc,0x58020,uStack_244,auStack_230);
    if (-1 < lVar1) {
      XamFree(iStack_250);
      return 0;
    }
  }
  if (iStack_250 != 0) {
    XamFree();
  }
  thunk_FUN_82a2b748(lVar1);
  return 0x65b;
}

