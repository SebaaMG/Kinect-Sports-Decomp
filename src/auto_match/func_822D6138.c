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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822CAA28();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_822D6138(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  fn_822CAA28();
  fn_82230110(auStack_a0,0xffffffff821ad7fc);
  fn_82897DF8(param_1 + 0x20c,param_1,auStack_a0);
  fn_82230300(auStack_a0,1,0);
  fn_82230110(auStack_80,0xffffffff821ad808);
  *(undefined1 *)(param_1 + 0x270) = 0;
  fn_82897DF8(param_1 + 0x264,param_1,auStack_80);
  fn_82230300(auStack_80,1,0);
  fn_82230110(auStack_60,0xffffffff821ad814);
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  fn_82897DF8(param_1 + 700,param_1,auStack_60);
  fn_82230300(auStack_60,1,0);
  fn_82230110(auStack_40,0xffffffff821ad824);
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x374) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x36c) = 1;
  uVar1 = fn_828EA268();
  *(undefined4 *)(param_1 + 0x378) = uVar1;
  fn_82897DF8(param_1 + 0x314,param_1,auStack_40);
  fn_82230300(auStack_40,1,0);
  return;
}

