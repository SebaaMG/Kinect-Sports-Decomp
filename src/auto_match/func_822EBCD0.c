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
extern unsigned int *auStack_30;
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822DB5D0();
extern int fn_822EC058();
extern int fn_822EC698();
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_822EBCD0(undefined8 param_1)

{
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [32];
  
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  fn_82230110(auStack_70,0xffffffff821ae2b8);
  fn_822EC698(&uStack_80,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_82230110(auStack_50,0xffffffff821ae2c0);
  fn_822EC698(&uStack_80,auStack_50);
  fn_82230300(auStack_50,1,0);
  fn_82230110(auStack_30,0xffffffff821ae2c8);
  fn_822EC698(&uStack_80,auStack_30);
  fn_82230300(auStack_30,1,0);
  fn_822EC058(param_1,&uStack_80);
  fn_822DB5D0(&uStack_80);
  return;
}

