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
extern int fn_8265C9E0();
extern int fn_82897568();
extern int fn_82899580();
extern int fn_8289F710();
extern int fn_828A0598();
extern int fn_828A8160();
extern int fn_828B5608();
extern int fn_828C3910();
extern int fn_828CEC80();
extern int fn_828CF148();
extern unsigned int lbl_82023C3C;


void fn_8289D9B8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  int iVar4;
  
  *(int *)(*(int *)(param_1 + 0x50) + 0x1f0) = *(int *)(*(int *)(param_1 + 0x50) + 0x1f0) + 1;
  puVar3 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &lbl_82023C3C;
    fn_828B5608(puVar3 + 2);
    puVar3[4] = 2;
    *puVar3 = &lbl_82023C3C;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 **)(param_1 + 0x48) = puVar3;
  puVar3[4] = 0;
  puVar3[1] = uVar1;
  (**(code **)(**(int **)(param_1 + 0x50) + 0x40))(*(int **)(param_1 + 0x50),param_1);
  *(int *)(*(int *)(param_1 + 0x4c) + 0xf8) = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x3c))();
  fn_82897568(*(undefined4 *)(param_1 + 0x4c),uVar2,uVar1);
  fn_828CF148(*(undefined4 *)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 4) = 1;
  iVar4 = fn_828A0598();
  fn_828A8160(*(undefined4 *)(iVar4 + 8),param_1);
  fn_8289F710(*(undefined4 *)(param_1 + 0x50),param_1);
  fn_82899580(*(undefined4 *)(param_1 + 0x50),param_1);
  fn_828C3910(*(undefined4 *)(param_1 + 0x50),param_1);
  fn_828CEC80((ulonglong)*(uint *)(param_1 + 0x50) + 0xc,param_1);
  return;
}

