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
extern int fn_82EF1220();
extern unsigned int iStack00000024;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack0000001c;


undefined8 fn_82EF1480(longlong param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uStack0000001c;
  int iStack00000024;
  
  if (param_3 == 0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uStack0000001c = param_2;
    iStack00000024 = param_3;
    fn_82EF1220(param_1 + 8,&stack0x0000001c,&stack0x00000024);
    fn_82EF1220(param_1 + 0x94,&stack0x00000024,&stack0x0000001c);
    uVar1 = 0;
  }
  return uVar1;
}

