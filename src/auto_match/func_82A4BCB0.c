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
extern int fn_82A4B938();
extern int fn_82A4F4E0();
extern int fn_82A5A770();
extern int fn_82A5C9E0();


void fn_82A4BCB0(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  (**(code **)(*(int *)(*(int *)(param_1 + 0x48) + 0x40) + 8))(*(int *)(param_1 + 0x48) + 0x40);
  piVar3 = (int *)(param_1 + 0x1c);
  (**(code **)(*(int *)(param_1 + 0x1c) + 8))(piVar3);
  piVar4 = (int *)(param_2 + 4);
  fn_82A5C9E0(*(undefined4 *)(param_1 + 0x4c),piVar4);
  fn_82A4B938(param_1,piVar4);
  uVar1 = (**(code **)(*piVar4 + 0x28))(piVar4);
  fn_82A5A770(*(undefined4 *)(param_1 + 0x48),uVar1);
  iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4);
  if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  (**(code **)(*piVar4 + 4))(piVar4,0);
  fn_82A4F4E0();
  (**(code **)(*piVar3 + 0x14))(piVar3);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x48) + 0x40) + 0x14))(*(int *)(param_1 + 0x48) + 0x40);
  return;
}

