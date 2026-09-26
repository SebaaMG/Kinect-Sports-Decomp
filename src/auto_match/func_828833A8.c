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
extern unsigned int *auStack_30;
extern int fn_825089A0();
extern int fn_8287FF40();
extern int fn_82883118();
extern int fn_828869A0();
extern int fn_82886C90();


void fn_828833A8(undefined4 param_1,int *param_2)

{
  int iVar2;
  int *piVar3;
  undefined8 uVar1;
  uint *puVar4;
  undefined4 auStack_30 [12];
  
  (**(code **)(*param_2 + 4))(param_2);
  iVar2 = fn_82886C90();
  if (iVar2 != 0) {
    auStack_30[0] = param_1;
    piVar3 = (int *)fn_82883118(0xffffffff83212a00,auStack_30);
    uVar1 = (**(code **)(*param_2 + 4))(param_2);
    iVar2 = fn_828869A0(*(undefined4 *)(*piVar3 + 0xb4),uVar1);
    param_2[10] = iVar2;
  }
  piVar3 = (int *)fn_825089A0();
  iVar2 = (**(code **)(*piVar3 + 0xc))();
  (**(code **)(*param_2 + 0x34))(param_2,(longlong)iVar2);
  auStack_30[0] = param_1;
  puVar4 = (uint *)fn_82883118(0xffffffff83212a00,auStack_30);
  fn_8287FF40((ulonglong)*puVar4 + 0x70,param_2);
  *(longlong *)(param_2 + 0x12) = (longlong)iVar2;
  return;
}

