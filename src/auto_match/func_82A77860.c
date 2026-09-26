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
extern int fn_82A49C98();
extern int fn_82A49DF8();
extern int fn_82A77308();
extern unsigned int uStack_4c;
extern unsigned int *uStack_54;
extern unsigned int *uStack_5c;


undefined8 fn_82A77860(int param_1)

{
  ushort uVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puStack_60;
  uint uStack_5c;
  undefined1 *puStack_58;
  uint uStack_54;
  undefined1 *puStack_50;
  uint uStack_4c;
  undefined1 auStack_40 [40];
  
  uVar6 = 0;
  if (*(int **)(param_1 + 0x50) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(param_1 + 0x50);
  }
  puStack_58 = *(undefined1 **)(param_1 + 0x78);
  puStack_60 = (undefined1 *)0x0;
  puStack_50 = *(undefined1 **)(iVar5 + 0x2c);
  uVar1 = *(ushort *)(*(int *)(iVar5 + 0x2c) + 0xc);
  trapWord(6,(ulonglong)uVar1,0);
  uStack_5c = *(uint *)(iVar5 + 0x34) / (uint)uVar1;
  uStack_54 = uStack_5c;
  uStack_4c = uStack_5c;
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0xfc) == 0)) {
    puVar3 = puStack_58;
    if ((*(int *)(param_1 + 0xfc) == 0) && (puVar3 = puStack_60, *(int *)(param_1 + 8) != 0)) {
      puVar3 = puStack_50;
    }
  }
  else {
    uVar4 = fn_82A49C98(puStack_58,1);
    fn_82A49DF8(auStack_40,0x28,1,*(undefined2 *)(puStack_58 + 2),
                      *(undefined4 *)(puStack_58 + 4),0x10,0x10,uVar4);
    puVar3 = auStack_40;
  }
  puStack_60 = puVar3;
  piVar2 = *(int **)(param_1 + 0xfc);
  if (piVar2 != (int *)0x0) {
    uVar6 = (**(code **)(*piVar2 + 0x20))(piVar2,1,&puStack_60,1,&puStack_50);
    uStack_5c = fn_82A77308(param_1,*(undefined4 *)(param_1 + 0xfc),uStack_4c);
    uStack_54 = uStack_5c;
    if ((int)uVar6 < 0) goto LAB_82a77a4c;
  }
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    uVar6 = (**(code **)(*piVar2 + 0x20))(piVar2,1,&puStack_58,1,&puStack_60);
    uStack_54 = fn_82A77308(param_1,*(undefined4 *)(param_1 + 8),uStack_5c);
  }
  if (-1 < (int)uVar6) {
    uStack_54 = *(ushort *)(*(int *)(param_1 + 0x78) + 0xc) * uStack_54;
    if (*(uint *)(*(int *)(param_1 + 4) + 0x21c) < uStack_54) {
      *(uint *)(*(int *)(param_1 + 4) + 0x21c) = uStack_54;
    }
    if (*(int *)(param_1 + 8) == 0) {
      return uVar6;
    }
    if (*(int *)(param_1 + 0xfc) == 0) {
      return uVar6;
    }
    if (*(ushort *)(puStack_60 + 0xc) * uStack_5c <= *(uint *)(*(int *)(param_1 + 4) + 0x228)) {
      return uVar6;
    }
    *(uint *)(*(int *)(param_1 + 4) + 0x228) = *(ushort *)(puStack_60 + 0xc) * uStack_5c;
    return uVar6;
  }
LAB_82a77a4c:
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x24))();
  }
  if (*(int **)(param_1 + 0xfc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xfc) + 0x24))();
  }
  return uVar6;
}

