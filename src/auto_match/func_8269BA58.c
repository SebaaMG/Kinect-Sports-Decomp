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
extern unsigned int *auStack_50;
extern int fn_82681930();
extern int fn_8269AFB8();
extern int fn_8269B930();


void fn_8269BA58(int *param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_50 [56];
  
  if (param_1[0x21] == 0) {
    fn_82681930(auStack_50);
    uVar1 = fn_8269AFB8(param_1,auStack_50);
    fn_8269B930(param_1,uVar1);
  }
  if (param_2 == '\0') {
    uVar3 = param_1[0x23] & 0xffffefff;
  }
  else {
    uVar3 = param_1[0x23] | 0x1000;
  }
  param_1[0x23] = uVar3;
  iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  *(uint *)(iVar2 + 0xb00) = *(uint *)(iVar2 + 0xb00) | 0x400;
  return;
}

