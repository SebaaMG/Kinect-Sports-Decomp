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
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern int fn_82F6D9DC();
extern int fn_82F6DC74();


void fn_82264F18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  
  uVar1 = fn_82F6D9DC();
  pcVar2 = (char *)fn_8225F670();
  if (*pcVar2 != '\0') {
    iVar3 = fn_8225FDE0(99,1);
    if ((iVar3 == 0) && (cVar4 = fn_82E1CAD0(99), cVar4 != '\0')) {
      fn_82E1CB88(0xffffffff821a787c,uVar1);
      fn_82E1CB88(0xffffffff821a7890,param_2);
      fn_82E1CB88(0xffffffff821a78a0,param_3);
      fn_8225FCE8(0xffffffff821a78b0);
      fn_8225FCE8(0xffffffff821a78c0);
      fn_8225FCE8(0xffffffff821a78cc);
      fn_8225FCE8(0xffffffff821a78e0);
      fn_8225FCE8(0xffffffff821a78e8);
      fn_8225FCE8(0xffffffff821a78f8);
      fn_8225FCE8(0xffffffff821a7908);
      fn_8225FCE8(0xffffffff821a7918);
      fn_8225FCE8(0xffffffff821a7924);
      fn_8225FCE8(0xffffffff821a7938);
      fn_8225FCE8(0xffffffff821a7948);
      fn_8225FCE8(0xffffffff821a7958);
      fn_8225FCE8(0xffffffff821a7968);
      fn_8225FCE8(0xffffffff821a7974);
      fn_8225FCE8(0xffffffff821a7980);
      fn_8225FCE8(0xffffffff821a7990);
      fn_8225FCE8(0xffffffff821a799c);
      fn_8225FCE8(0xffffffff821a79a8);
      fn_8225FCE8(0xffffffff821a79b8);
      fn_8225FCE8(0xffffffff821a79c8);
      fn_82E1CCA8();
    }
  }
  fn_82F6DC74();
  return;
}

