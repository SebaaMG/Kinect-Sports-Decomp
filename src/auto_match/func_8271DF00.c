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
extern int fn_82681728();
extern int fn_82693A98();
extern int fn_82693B08();
extern int fn_826944C8();
extern int fn_82694A78();
extern int fn_82696D38();
extern int fn_826C1BA0();
extern int fn_8271D378();
extern int fn_8271DCB8();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


undefined8
fn_8271DF00(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  char cVar5;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar6;
  longlong lVar7;
  uint *puVar8;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int aiStack_44 [17];
  
  bVar1 = *(byte *)(param_2 + 0x7c);
  puVar8 = (uint *)(param_2 + 0x78);
  fn_82681728(&iStack_48,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff8200feb8);
  cVar5 = fn_8271D378(&iStack_48,param_3,-(6 < bVar1) & 1);
  lVar7 = (ulonglong)*(uint *)(iStack_48 + 8) - 1;
  *(int *)(iStack_48 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_48);
  }
  if (cVar5 != '\0') {
    fn_82696D38(&iStack_50,param_4,param_2,0xffffffffffffffff,0);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x70))();
    fn_82681728(&iStack_48,(ulonglong)*puVar8 + 0x254,0xffffffff8200ff84);
    cVar5 = fn_8271D378(&iStack_48,&iStack_50,0);
    lVar7 = (ulonglong)*(uint *)(iStack_48 + 8) - 1;
    *(int *)(iStack_48 + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8(iStack_48);
    }
    if (cVar5 == '\0') {
      fn_82681728(&iStack_48,(ulonglong)*puVar8 + 0x254,0xffffffff8200ff8c);
      cVar5 = fn_8271D378(&iStack_48,&iStack_50,0);
      lVar7 = (ulonglong)*(uint *)(iStack_48 + 8) - 1;
      *(int *)(iStack_48 + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(iStack_48);
      }
      if (cVar5 == '\0') {
        fn_82681728(&iStack_48,(ulonglong)*puVar8 + 0x254,0xffffffff8200ff98);
        cVar5 = fn_8271D378(&iStack_48,&iStack_50,0);
        lVar7 = (ulonglong)*(uint *)(iStack_48 + 8) - 1;
        *(int *)(iStack_48 + 8) = (int)lVar7;
        if (lVar7 == 0) {
          fn_826944C8(iStack_48);
        }
        iVar4 = (-(uint)(cVar5 != '\0') & 2) + 1;
      }
      else {
        iVar4 = 2;
      }
    }
    else {
      iVar4 = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x24) + 0x6c))(*(int **)(param_1 + 0x24),iVar4);
    iStack_4c = iStack_50;
    if ((iVar2 != iVar4) && (iVar4 == 0)) {
      fn_8271DCB8(param_1 + -0x10,param_2);
      iStack_4c = iStack_50;
    }
    goto LAB_8271e0f8;
  }
  bVar1 = *(byte *)(param_2 + 0x7c);
  fn_82681728(&iStack_48,(ulonglong)*puVar8 + 0x254,0xffffffff8200feb0);
  cVar5 = fn_8271D378(&iStack_48,param_3,-(6 < bVar1) & 1);
  lVar7 = (ulonglong)*(uint *)(iStack_48 + 8) - 1;
  *(int *)(iStack_48 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_48);
  }
  if (cVar5 == '\0') {
    uVar6 = fn_826C1BA0(param_1,param_2,param_3,param_4,param_5);
    return uVar6;
  }
  fn_82696D38(aiStack_44,param_4,param_2,0xffffffffffffffff,0);
  fn_82694A78(&iStack_4c,aiStack_44);
  lVar7 = (ulonglong)*(uint *)(aiStack_44[0] + 8) - 1;
  *(int *)(aiStack_44[0] + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(aiStack_44[0]);
  }
  iVar2 = 0;
  uVar3 = fn_82693A98(&iStack_4c);
  if (uVar3 == 0) {
LAB_8271e2b8:
    uVar6 = 0;
    goto LAB_8271e2bc;
  }
  iVar4 = fn_82693B08(&iStack_4c,0);
  if (1 < uVar3) {
    iVar2 = fn_82693B08(&iStack_4c,1);
  }
  if ((iVar4 == 0x54) && (iVar2 == 0x4c)) {
LAB_8271e218:
    uVar6 = 5;
  }
  else {
    if (iVar4 == 0x4c) {
      if (iVar2 != 0x54) {
        if (iVar2 == 0x42) {
LAB_8271e280:
          uVar6 = 7;
        }
        else {
          uVar6 = 3;
        }
        goto LAB_8271e2bc;
      }
      goto LAB_8271e218;
    }
    if ((iVar4 == 0x54) && (iVar2 == 0x52)) {
LAB_8271e240:
      uVar6 = 6;
    }
    else if (iVar4 == 0x52) {
      if (iVar2 == 0x54) goto LAB_8271e240;
      if (iVar2 == 0x42) {
LAB_8271e290:
        uVar6 = 8;
      }
      else {
        uVar6 = 4;
      }
    }
    else {
      if (iVar4 == 0x42) {
        if (iVar2 == 0x4c) goto LAB_8271e280;
        if (iVar2 == 0x52) goto LAB_8271e290;
      }
      if (iVar4 == 0x54) {
        uVar6 = 1;
      }
      else {
        if (iVar4 != 0x42) goto LAB_8271e2b8;
        uVar6 = 2;
      }
    }
  }
LAB_8271e2bc:
  (**(code **)(**(int **)(param_1 + 0x24) + 0x74))(*(int **)(param_1 + 0x24),uVar6);
LAB_8271e0f8:
  lVar7 = (ulonglong)*(uint *)(iStack_4c + 8) - 1;
  *(int *)(iStack_4c + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_4c);
  }
  return 1;
}

