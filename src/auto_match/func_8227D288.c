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
extern unsigned int *auStack_100;
extern int fn_8227C270();
extern int fn_82F68CC0();
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;


void fn_8227D288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uStack0000002c;
  undefined1 auStack_100 [256];
  
  uStack0000002c = param_4;
  cVar1 = fn_8227C270(&stack0x0000002c,param_2,param_1);
  if (cVar1 != '\0') {
    fn_82F68CC0(auStack_100,param_2,0xdc);
    fn_82F68CC0(param_2,param_1,0xdc);
    fn_82F68CC0(param_1,auStack_100,0xdc);
  }
  cVar1 = fn_8227C270(&stack0x0000002c,param_3,param_2);
  if (cVar1 != '\0') {
    fn_82F68CC0(auStack_100,param_3,0xdc);
    fn_82F68CC0(param_3,param_2,0xdc);
    fn_82F68CC0(param_2,auStack_100,0xdc);
  }
  cVar1 = fn_8227C270(&stack0x0000002c,param_2,param_1);
  if (cVar1 != '\0') {
    fn_82F68CC0(auStack_100,param_2,0xdc);
    fn_82F68CC0(param_2,param_1,0xdc);
    fn_82F68CC0(param_1,auStack_100,0xdc);
  }
  return;
}

