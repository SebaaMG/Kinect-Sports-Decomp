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
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_827DCBF8();
extern int fn_827E3638();
extern int fn_827E3DE0();


undefined8
fn_827DC3E8(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  int in_stack_0000005c;
  undefined1 auStack_60 [96];
  
  uVar1 = fn_827E3638(0x90);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_827E3DE0(param_1,param_2,param_3,uVar1,param_5,param_6,param_7,param_8);
  }
  if (iVar3 == 0) {
    if (*(int *)(in_stack_0000005c + 4) != 0) {
      fn_822315A0();
    }
    uVar2 = 0x65f;
  }
  else {
    fn_827DCBF8(param_4 + 4,auStack_60);
    if (*(int *)(in_stack_0000005c + 4) != 0) {
      fn_822315A0();
    }
    uVar2 = 0;
  }
  return uVar2;
}

