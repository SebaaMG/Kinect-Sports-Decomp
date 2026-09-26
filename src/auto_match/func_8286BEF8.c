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
extern unsigned int *auStack_40;
extern int fn_82864898();
extern int fn_82864988();


undefined8 fn_8286BEF8(undefined8 param_1,undefined8 param_2,char param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [48];
  
  if (param_3 == '\0') {
    uVar2 = 0xffffffff82021438;
  }
  else {
    uVar2 = 0xffffffff8202141c;
  }
  fn_82864988(auStack_40,uVar2);
  iVar1 = (**(code **)(*param_4 + 0xc))(param_4,auStack_40);
  if (iVar1 < 0) {
    uVar2 = 0xffffffffa00f0000;
  }
  else {
    uVar2 = 0x200f0000;
  }
  fn_82864898(auStack_40);
  return uVar2;
}

