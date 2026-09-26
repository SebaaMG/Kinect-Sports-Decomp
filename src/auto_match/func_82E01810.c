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
extern int fn_82CE5410();
extern int fn_82D8D6C0();
extern int fn_82D9A5F8();


void fn_82E01810(int *param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  int *piVar3;
  undefined1 auStack_40 [40];
  
  (**(code **)(*param_1 + 0x34))(param_1,param_2,auStack_40);
  iVar2 = fn_82CE5410();
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0xe0);
  *(undefined2 *)(iVar2 + 4) = 0xe0;
  uVar1 = fn_82D8D6C0(iVar2,auStack_40,param_1[3]);
  param_1[4] = (int)uVar1;
  param_1[8] = *(int *)(param_2 + 0x18) + 0x10;
  piVar3 = param_1 + 7;
  if (param_1 == (int *)0xffffffec) {
    piVar3 = (int *)0x0;
  }
  fn_82D9A5F8(uVar1,piVar3);
  return;
}

