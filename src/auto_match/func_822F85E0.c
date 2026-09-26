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
extern unsigned int *auStack_58;
extern int fn_822EC920();
extern int fn_822ECAF8();
extern int fn_822F8B30();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_821AE3F0;
extern unsigned int uStack_5c;


undefined8 fn_822F85E0(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int aiStack_70 [4];
  undefined **ppuStack_60;
  uint uStack_5c;
  undefined8 auStack_58 [9];
  
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(param_1 + 0x40);
  **(int **)(param_1 + 0x10) = iVar3;
  **(int **)(param_1 + 0x20) = iVar3;
  **(int **)(param_1 + 0x30) = iVar1 - iVar3;
  fn_822EC920(aiStack_70,param_1,0,1);
  *(uint *)((int)&uStack_5c + *(int *)(aiStack_70[0] + 4)) =
       *(uint *)((int)&uStack_5c + *(int *)(aiStack_70[0] + 4)) & 0xfffffffe;
  *(undefined8 *)((int)auStack_58 + *(int *)(aiStack_70[0] + 4)) = 6;
  piVar2 = (int *)fn_822F8B30(aiStack_70,param_2);
  uVar4 = *(int *)(*piVar2 + 4) + (int)piVar2;
  if ((-(uint)((*(uint *)(uVar4 + 0xc) & 6) == 0) & uVar4) != 0) {
    iVar3 = fn_822ECAF8(aiStack_70);
    uVar5 = 1;
    if (iVar3 == -1) goto LAB_822f86a8;
  }
  uVar5 = 0;
LAB_822f86a8:
  *(undefined ***)((int)aiStack_70 + *(int *)(aiStack_70[0] + 4)) = &lbl_821AE3F0;
  ppuStack_60 = &lbl_82020F30;
  fn_82F62F60(&ppuStack_60);
  return uVar5;
}

