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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82E99D70();
extern int fn_82EDEBE8();
extern int fn_82F68CC0();


int * fn_82E99EA0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                   int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  int in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  
  if ((((((param_4 < 0) || (param_5 < 0)) || (param_8 < 0)) ||
       ((in_stack_00000054 < 0 || (param_6 < 0)))) ||
      ((param_7 < 0 ||
       ((*(int *)(param_2 + 4) < param_4 + param_8 ||
        (uVar1 = (int)*(uint *)(param_2 + 8) >> 0x1f,
        (int)((*(uint *)(param_2 + 8) ^ uVar1) - uVar1) < param_5 + in_stack_00000054)))))) ||
     ((*(int *)(param_3 + 4) < param_6 + param_8 ||
      (uVar1 = (int)*(uint *)(param_3 + 8) >> 0x1f,
      (int)((*(uint *)(param_3 + 8) ^ uVar1) - uVar1) < param_7 + in_stack_00000054)))) {
    *param_1 = 1;
  }
  else {
    uVar6 = 0x28;
    if ((*(int *)(param_2 + 0x10) == 0) && (*(short *)(param_2 + 0xe) == 8)) {
      uVar6 = 0x428;
    }
    else if (*(int *)(param_2 + 0x10) == 3) {
      uVar6 = 0x34;
    }
    iVar2 = fn_8265C940(uVar6,0x248c8000);
    if (iVar2 == 0) {
      *param_1 = 2;
      return (int *)0x0;
    }
    fn_82F68CC0(iVar2,param_2,uVar6);
    uVar6 = 0x28;
    if ((*(int *)(param_3 + 0x10) == 0) && (*(short *)(param_3 + 0xe) == 8)) {
      uVar6 = 0x428;
    }
    else if (*(int *)(param_3 + 0x10) == 3) {
      uVar6 = 0x34;
    }
    iVar3 = fn_8265C940(uVar6,0x248c8000);
    if (iVar3 == 0) {
      *param_1 = 2;
      fn_8265C990(iVar2,0x248c8000);
      return (int *)0x0;
    }
    fn_82F68CC0(iVar3,param_3,uVar6);
    *(int *)(iVar2 + 4) = param_8;
    *(int *)(iVar3 + 4) = param_8;
    iVar5 = in_stack_00000054;
    if (*(int *)(param_2 + 8) < 1) {
      iVar5 = -in_stack_00000054;
    }
    *(int *)(iVar2 + 8) = iVar5;
    if (*(int *)(param_3 + 8) < 1) {
      in_stack_00000054 = -in_stack_00000054;
    }
    *(int *)(iVar3 + 8) = in_stack_00000054;
    piVar4 = (int *)fn_82E99D70(param_1,iVar2,iVar3,in_stack_0000005c,in_stack_00000064);
    fn_8265C990(iVar2,0x248c8000);
    fn_8265C990(iVar3,0x248c8000);
    if (*param_1 == 0) {
      piVar4[0xe4d] = param_6;
      piVar4[0xe4e] = param_7;
      piVar4[0xe4b] = param_4;
      piVar4[0xe46] = 1;
      piVar4[0xe4c] = param_5;
      fn_82EDEBE8(piVar4,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                      *(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
      return piVar4;
    }
    if (piVar4 != (int *)0x0) {
      if (*piVar4 != 0) {
        fn_8265C990(*piVar4,0x248c8000);
        *piVar4 = 0;
      }
      if (piVar4[1] != 0) {
        fn_8265C990(piVar4[1],0x248c8000);
        piVar4[1] = 0;
      }
      fn_8265C990(piVar4,0x248c8000);
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}

