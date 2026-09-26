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
extern int fn_82F68CC0();
extern int fn_8305C458();
extern int fn_83066F98();
extern int fn_83066FC8();
extern int fn_83067080();
extern int fn_830670A8();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int lbl_8217E698;


void fn_8305CAA8(undefined1 *param_1,undefined1 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined **ppuStack_50;
  int iStack_4c;
  int iStack_48;
  undefined1 auStack_40 [64];
  
  fn_8305C458();
  if (param_3 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)fn_830670A8();
  }
  *(undefined4 **)(param_1 + 0x60) = param_3;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  fn_82F68CC0(param_1 + 0xc,param_2 + 0xc,0x28);
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = (**(code **)*param_3)(param_3,(ulonglong)uVar1 * 0x30);
  fn_83067080(auStack_40,uVar2,(ulonglong)uVar1 * 0x30);
  iVar3 = fn_83066FC8(auStack_40,(ulonglong)*(uint *)(param_1 + 0x20) * 0x30,0xffffffffffffffff);
  *(int *)(param_1 + 4) = iVar3;
  iStack_4c = *(int *)(param_2 + 4);
  iVar4 = 0;
  ppuStack_50 = &lbl_8217E698;
  if (iStack_4c != 0) {
    puVar5 = (undefined4 *)(iVar3 + -8);
    iStack_48 = iStack_4c;
    do {
      puVar5 = puVar5 + 0xc;
      *puVar5 = *(undefined4 *)(iStack_48 + 0x28);
      *(int *)(iStack_48 + 0x28) = iVar4;
      iVar4 = iVar4 + 1;
      iStack_48 = (*(code *)ppuStack_50[1])(&ppuStack_50,iStack_48);
    } while (iStack_48 != 0);
  }
  iVar3 = *(int *)(param_1 + 4);
  iStack_4c = *(int *)(param_2 + 4);
  for (iStack_48 = iStack_4c; iStack_48 != 0;
      iStack_48 = (*(code *)ppuStack_50[1])(&ppuStack_50,iStack_48)) {
    if (*(int *)(iStack_48 + 0x1c) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(iStack_48 + 0x1c) + 0x28) * 0x30 + *(int *)(param_1 + 4);
    }
    *(int *)(iVar3 + 0x1c) = iVar4;
    if (*(int *)(iStack_48 + 0x20) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(iStack_48 + 0x20) + 0x28) * 0x30 + *(int *)(param_1 + 4);
    }
    *(int *)(iVar3 + 0x20) = iVar4;
    if (*(int *)(iStack_48 + 0x24) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(iStack_48 + 0x24) + 0x28) * 0x30 + *(int *)(param_1 + 4);
    }
    *(int *)(iVar3 + 0x24) = iVar4;
    fn_82F68CC0(iVar3,iStack_48,0x1c);
    iVar3 = iVar3 + 0x30;
  }
  iStack_4c = *(int *)(param_2 + 4);
  iStack_48 = iStack_4c;
  if (iStack_4c != 0) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + -8);
    do {
      puVar5 = puVar5 + 0xc;
      *(undefined4 *)(iStack_48 + 0x28) = *puVar5;
      iStack_48 = (*(code *)ppuStack_50[1])(&ppuStack_50,iStack_48);
    } while (iStack_48 != 0);
  }
  fn_83066F98(auStack_40);
  return;
}

