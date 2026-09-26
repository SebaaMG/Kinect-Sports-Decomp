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
extern int fn_822CB7F8();
extern int fn_822D6EA8();
extern int fn_8265CA20();
extern int fn_828E9D28();
extern unsigned int iStack_28;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_4b;
extern unsigned int uStack_4c;
extern unsigned int uStack_4d;
extern unsigned int uStack_4e;
extern unsigned int uStack_4f;
extern unsigned int uStack_50;


void fn_825ADB28(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puStack_30 = &uStack_50;
  uStack_50 = 0;
  iStack_28 = 0;
  uStack_4f = 0;
  uStack_4e = 0;
  uStack_4d = 0;
  uStack_4c = 0;
  uStack_4b = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_2c = 6;
  fn_828E9D28(auStack_40,&uStack_50,6);
  fn_822CB7F8(auStack_40,param_2,10,5,6,6,10,5);
  fn_822D6EA8(param_1,&uStack_50);
  if (iStack_28 != 0) {
    fn_8265CA20();
  }
  return;
}

