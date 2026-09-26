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
extern int fn_82FB04A0();
extern int fn_83007AE8();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


void fn_830320D0(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iStack0000001c;
  undefined4 uStack00000024;
  
  iStack0000001c = param_2 + 4;
  uStack00000024 = param_3;
  iVar1 = fn_83007AE8(param_1,&stack0x0000001c,&stack0x00000024,0);
  if (iVar1 == 1) {
    fn_82FB04A0(param_1,&stack0x0000001c,&stack0x00000024);
  }
  return;
}

