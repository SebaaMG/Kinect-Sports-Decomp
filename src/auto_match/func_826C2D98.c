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
extern unsigned int *auStack_50;
extern int fn_826961B0();
extern int fn_82696330();


void fn_826C2D98(int param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  uVar1 = *param_2;
  iVar2 = *(int *)(param_1 + 0x10);
  auStack_50[0] = 0;
  uVar3 = fn_826961B0(auStack_40,param_3);
  (**(code **)(iVar2 + 0x28))(param_1 + 0x10,param_2,(ulonglong)uVar1 + 0x130,uVar3,auStack_50);
  fn_82696330(auStack_40);
  return;
}

