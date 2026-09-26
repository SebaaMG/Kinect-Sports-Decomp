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
extern int fn_824CD030();
extern int fn_82F4EC30();
extern int fn_82F52BC0();
extern int fn_82F52C20();


void fn_824CFE00(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar4;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = param_1[10];
  iVar4 = fn_824CD030();
  if (iVar4 != 0) {
    uVar2 = fn_82F4EC30(param_2);
    uVar3 = fn_82F4EC30(iVar1);
    if (param_1[0x3f] != 0) {
      fn_82F52C20(uVar2,param_1[0x3f],0);
      fn_82F52BC0(uVar3,param_1[0x3f]);
    }
    if (param_1[0x40] != 0) {
      fn_82F52C20(uVar2,param_1[0x40],0);
      fn_82F52BC0(uVar3,param_1[0x40]);
    }
  }
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

