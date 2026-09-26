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
extern int fn_82E1CB40();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();


void fn_82261F70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 in_stack_0000008c;
  undefined1 in_stack_00000097;
  undefined1 in_stack_0000009f;
  
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 != '\0') {
    iVar2 = fn_8225FDE0(0x44,1);
    if ((iVar2 == 0) && (cVar3 = fn_82E1CAD0(0x44), cVar3 != '\0')) {
      fn_82E1CB88(0xffffffff821a6fd0,param_4);
      fn_82E1CB88(0xffffffff821a6fe4,param_5);
      fn_82E1CB88(0xffffffff821a6eb4,param_6);
      fn_82E1CB88(0xffffffff821a7010,param_7);
      fn_82E1CB88(0xffffffff821a701c,param_8);
      fn_8225FCE8(0xffffffff821a7034);
      fn_8225FCE8(0xffffffff821a6fec);
      fn_8225FCE8(0xffffffff821a7044);
      fn_82E1CC60(param_1,0xffffffff821a7058);
      fn_82E1CC60(param_2,0xffffffff821a7068);
      fn_82E1CC60(param_3,0xffffffff821a7074);
      fn_82E1CB88(0xffffffff821a7080,in_stack_0000008c);
      fn_82E1CB40(0xffffffff821a7088,in_stack_00000097);
      fn_82E1CB40(0xffffffff821a7090,in_stack_0000009f);
      fn_82E1CCA8();
    }
  }
  return;
}

