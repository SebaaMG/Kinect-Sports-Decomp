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
extern int fn_8225F6D0();
extern int fn_8225FDE0();
extern int fn_82E1CA30();
extern int fn_82E1CAD0();
extern int fn_82E1CB40();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern int fn_82E1CD30();


void fn_82262440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000084;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000094;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000bc;
  
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 != '\0') {
    iVar2 = fn_8225FDE0(0x48,1);
    if ((iVar2 == 0) && (cVar3 = fn_82E1CAD0(0x48), cVar3 != '\0')) {
      fn_82E1CD30();
      fn_82E1CB88(0xffffffff821a6fd0,param_1);
      fn_82E1CB40(0xffffffff821a685c,param_2);
      fn_82E1CB88(0xffffffff821a6a40,param_3);
      fn_82E1CB88(0xffffffff821a70dc,param_4);
      fn_82E1CB88(0xffffffff821a70ec,param_5);
      fn_82E1CB88(0xffffffff821a70fc,param_6);
      fn_82E1CB88(0xffffffff821a7110,param_7);
      fn_82E1CB88(0xffffffff821a6fb0,param_8);
      fn_82E1CB88(0xffffffff821a7124,in_stack_00000054);
      fn_82E1CB88(0xffffffff821a7138,in_stack_0000005c);
      fn_82E1CB88(0xffffffff821a7150,in_stack_00000064);
      fn_82E1CB88(0xffffffff821a716c,in_stack_0000006c);
      fn_82E1CB88(0xffffffff821a6fc0,in_stack_00000074);
      fn_82E1CB88(0xffffffff821a7188,in_stack_0000007c);
      fn_82E1CB88(0xffffffff821a719c,in_stack_00000084);
      fn_82E1CB88(0xffffffff821a71b4,in_stack_0000008c);
      fn_82E1CB88(0xffffffff821a71d0,in_stack_00000094);
      fn_82E1CB88(0xffffffff821a71ec,in_stack_0000009c);
      fn_82E1CB88(0xffffffff821a71fc,in_stack_000000a4);
      fn_82E1CB88(0xffffffff821a7210,in_stack_000000ac);
      fn_82E1CB88(0xffffffff821a7228,in_stack_000000b4);
      fn_82E1CB88(0xffffffff821a7244,in_stack_000000bc);
      fn_82E1CCA8();
      fn_82E1CA30();
    }
  }
  fn_8225F6D0();
  return;
}

