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
extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_8269A418();
extern int fn_826A7398();
extern int fn_826A98D8();
extern int fn_826F5C10();
extern int fn_827032E0();
extern int fn_827035B0();
extern unsigned int iStack_5c;
extern unsigned int lbl_82196582;


void fn_82719FF0(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar8;
  undefined8 uVar6;
  char *pcVar9;
  ulonglong uVar7;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puStack_60;
  int iStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined1 *apuStack_50 [20];
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  lVar12 = 0;
  *puVar1 = 2;
  puVar1[4] = 0;
  if (*(int *)(param_1 + 0x1c) < 2) {
    return;
  }
  iVar8 = (**(code **)(**(int **)(param_1 + 8) + 8))();
  if ((iVar8 == 0x19) && ((ulonglong)*(uint *)(param_1 + 8) != 0)) {
    lVar12 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = fn_826957D0(param_1,0);
  fn_82696D38(&puStack_60,uVar6,uVar2,0xffffffffffffffff,0);
  pcVar9 = (char *)fn_826957D0(param_1,1);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if (*pcVar9 == '\a') {
    uVar6 = fn_826957D0(param_1,1);
    iVar8 = fn_82695370(uVar6,uVar2);
    if (iVar8 != 0) {
      *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
    }
  }
  else {
    uVar6 = fn_826957D0(param_1,1);
    fn_82696D38(&iStack_5c,uVar6,uVar2,0xffffffffffffffff,0);
    iVar8 = fn_826A98D8(*(undefined4 *)(param_1 + 0x18),&iStack_5c,0);
    if (iVar8 != 0) {
      *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
    }
    lVar11 = (ulonglong)*(uint *)(iStack_5c + 8) - 1;
    *(int *)(iStack_5c + 8) = (int)lVar11;
    if (lVar11 == 0) {
      fn_826944C8(iStack_5c);
    }
  }
  if (iVar8 == 0) {
    apuStack_50[0] = &lbl_82196582;
    uVar7 = fn_8269A418(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x74));
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar6 = fn_826957D0(param_1,1);
    fn_82696D38(&puStack_58,uVar6,uVar2,0xffffffffffffffff,0);
    iVar10 = fn_826F5C10(*puStack_58,apuStack_50,-(6 < uVar7) & 1);
    uVar5 = puStack_58[2];
    puStack_58[2] = (int)((ulonglong)uVar5 - 1);
    if ((ulonglong)uVar5 - 1 == 0) {
      fn_826944C8(puStack_58);
    }
    if (iVar10 == -1) goto LAB_8271a284;
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = *puStack_60;
    uVar6 = fn_826957D0(param_1,1);
    fn_82696D38(&puStack_54,uVar6,uVar2,0xffffffffffffffff,0);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *puStack_54;
    uVar6 = fn_826A7398(uVar2);
    fn_827032E0(uVar6,uVar4,uVar3,uVar2,0,lVar12);
    uVar5 = puStack_54[2];
    puStack_54[2] = (int)((ulonglong)uVar5 - 1);
    if ((ulonglong)uVar5 - 1 == 0) {
      fn_826944C8(puStack_54);
    }
  }
  else {
    uVar2 = *puStack_60;
    uVar6 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
    fn_827035B0(uVar6,iVar8,uVar2,0,lVar12);
  }
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 2;
  puVar1[4] = 1;
  if (iVar8 != 0) {
    fn_8267C498(iVar8);
  }
LAB_8271a284:
  uVar5 = puStack_60[2];
  puStack_60[2] = (int)((ulonglong)uVar5 - 1);
  if ((ulonglong)uVar5 - 1 == 0) {
    fn_826944C8(puStack_60);
  }
  return;
}

