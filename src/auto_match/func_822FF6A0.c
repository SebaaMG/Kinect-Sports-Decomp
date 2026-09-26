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
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B27E8();
extern int fn_822CAA28();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_822FF6A0(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  fn_822CAA28();
  fn_82230110(auStack_60,0xffffffff821aebf4);
  uVar1 = fn_822B27E8(auStack_40,auStack_60,0xffffffff821ac898);
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0x22;
  uVar2 = fn_828EA268(0x22);
  *(undefined4 *)(param_1 + 0x270) = uVar2;
  fn_82897DF8(param_1 + 0x20c,param_1,uVar1);
  fn_82230300(auStack_40,1,0);
  fn_82230300(auStack_60,1,0);
  return;
}

