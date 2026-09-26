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
extern int fn_82CFFFC8();
extern int fn_82D00000();
extern int fn_82D00020();
extern int fn_82D000A0();
extern int fn_82D002F0();


void fn_82E1ABA8(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char acStack_40 [64];
  
  uVar1 = fn_82CFFFC8(param_2);
  fn_82D002F0(acStack_40,param_2,uVar1);
  if (acStack_40[0] != '\0') {
    do {
      uVar2 = fn_82D00000(param_2,uVar1);
      uVar3 = fn_82D00020(param_2,uVar1);
      fn_82D000A0(param_1 + 0x2c,uVar2,uVar3);
      fn_82D000A0(param_1 + 0x3c,uVar3,uVar2);
      fn_82D002F0(acStack_40,param_2,uVar1);
    } while (acStack_40[0] != '\0');
  }
  return;
}

