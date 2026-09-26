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
extern int fn_8265D598();
extern int fn_82F902F0();
extern unsigned int stack0x00000014;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002f;
extern unsigned int uStack00000037;
extern unsigned int uStack0000003f;
extern unsigned int uStack_10;
extern unsigned int uStack_f;


void fn_82F901B0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined1 uStack0000002f;
  undefined1 uStack00000037;
  undefined1 uStack0000003f;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 *puStack_c;
  
  puStack_c = &uStack_10;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002f = param_4;
  uStack00000037 = param_5;
  uStack0000003f = param_6;
  uStack_f = fn_8265D598(&stack0x00000014,&stack0x00000024);
  fn_82F902F0(uStack00000014,uStack0000001c,uStack00000024,uStack0000002f,uStack_f,uStack_10);
  return;
}

