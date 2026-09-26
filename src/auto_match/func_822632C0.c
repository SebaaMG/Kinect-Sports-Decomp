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
extern int fn_8225F670();
extern int fn_8225FCE8();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern int fn_82F6DA1C();
extern int fn_82F6DCB4();


void fn_822632C0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  undefined8 extraout_f1;
  undefined8 uVar5;
  undefined4 in_stack_000000a4;
  
  uVar1 = fn_82F6DA1C();
  uVar5 = extraout_f1;
  pcVar2 = (char *)fn_8225F670();
  if (*pcVar2 != '\0') {
    iVar3 = fn_8225FDE0(0xb,in_stack_000000a4);
    if ((iVar3 == 0) && (cVar4 = fn_82E1CAD0(0xb), cVar4 != '\0')) {
      fn_82E1CB88(0xffffffff821a684c,uVar1);
      fn_82E1CB88(0xffffffff821a731c,param_2);
      fn_8225FCE8(0xffffffff821a6b60);
      fn_82E1CB88(0xffffffff821a7454,param_3);
      fn_82E1CB08(0xffffffff821a7380,param_4,0);
      fn_8225FCE8(0xffffffff821a7390);
      fn_8225FCE8(0xffffffff821a73a8);
      fn_8225FCE8(0xffffffff821a743c);
      fn_8225FCE8(0xffffffff821a73c0);
      fn_82E1CB08(0xffffffff821a73d8,param_5,0);
      fn_82E1CC60(uVar5,0xffffffff821a73f0);
      fn_82E1CB88(0xffffffff821a7400,param_7);
      fn_82E1CB88(0xffffffff821a7410,param_8);
      fn_82E1CCA8();
    }
  }
  fn_82F6DCB4();
  return;
}

