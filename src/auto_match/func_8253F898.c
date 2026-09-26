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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82527EF0();
extern int fn_8253E598();
extern int fn_8253FB70();
extern int fn_82571780();
extern int fn_82571BB8();
extern int fn_825A1FF8();
extern int fn_825A5660();
extern int fn_825A6940();
extern int fn_825A7290();
extern int fn_825A81F0();
extern int fn_82D89BD8();
extern int fn_82D8B930();
extern unsigned int lbl_82195530;
extern V16 vectorAddFloatingPoint();


void fn_8253F898(int param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 *puVar2;
  bool bVar3;
  int in_r0;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  iVar4 = *(int *)(param_1 + 0x7c0);
  if (iVar4 == 0) goto LAB_8253f948;
  fVar1 = *(float *)(param_1 + 0x840);
  if (fVar1 == lbl_82195530) {
    fVar1 = *(float *)(param_1 + 0x7e8);
    if (*(float *)(iVar4 + 0x94) != fVar1) goto LAB_8253f8e4;
  }
  else {
LAB_8253f8e4:
    *(float *)(iVar4 + 0x94) = fVar1;
  }
  if (*(int *)(param_1 + 0x880) == 0) {
    if (*(int *)(param_1 + 0x884) == 0) goto LAB_8253f948;
    puVar5 = auStack_50;
    puVar7 = (undefined4 *)(param_1 + 0x850U & 0xfffffff0);
    uVar8 = puVar7[1];
    uVar9 = puVar7[2];
    uVar10 = puVar7[3];
    puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar7;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
  }
  else {
    if (*(int *)(param_1 + 0x884) == 0) goto LAB_8253f948;
    puVar5 = auStack_60;
    puVar7 = (undefined4 *)(param_1 + 0x870U & 0xfffffff0);
    uVar8 = puVar7[1];
    uVar9 = puVar7[2];
    uVar10 = puVar7[3];
    vectorAddFloatingPoint(in_vs45,in_vs32);
    puVar2 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar7;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
  }
  fn_82D8B930(iVar4,puVar5);
  *(undefined4 *)(param_1 + 0x884) = 0;
LAB_8253f948:
  fn_8253E598(param_1,param_2);
  fn_825A7290(param_1);
  fn_82571BB8(param_1);
  if (((*(uint *)(param_1 + 0x4b8) & 1) != 0) && ((*(uint *)(param_1 + 0x4b8) & 4) == 0)) {
    iVar4 = *(int *)(param_1 + 0x7c0);
    bVar3 = false;
    if ((iVar4 != 0) && (*(int *)(iVar4 + 8) != 0)) {
      fn_82571780(param_1 + 0x380,iVar4,0);
      *(undefined4 *)(*(int *)(param_1 + 0x3a8) + 0x134) = *(undefined4 *)(param_1 + 0x4bc);
      if ((*(uint *)(param_1 + 0x488) & 0x40) != 0) {
        bVar3 = true;
      }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x4a8);
    for (puVar7 = *(undefined4 **)(param_1 + 0x4a4); puVar7 < puVar2; puVar7 = puVar7 + 2) {
      fn_82571780(param_1 + 0x380,*puVar7,puVar7[1],*(undefined4 *)(param_1 + 0x4b8));
      *(undefined4 *)(puVar7[1] + 0x134) = *(undefined4 *)(param_1 + 0x4bc);
      if ((*(uint *)(param_1 + 0x488) & 0x40) != 0) {
        bVar3 = true;
      }
    }
    if (bVar3) {
      uVar6 = *(uint *)(param_1 + 0x488) | 0x40;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x488) & 0xffffffbf;
    }
    *(uint *)(param_1 + 0x488) = uVar6;
  }
  fn_825A81F0(param_1);
  if (*(int *)(param_1 + 0x36c) != 0) {
    fn_825A5660(param_1 + 0x310,*(undefined4 *)(param_1 + 0x4e0),
                      (ulonglong)*(uint *)(param_1 + 0x7c0),param_1,
                      (ulonglong)*(uint *)(param_1 + 0x7c0) + 0x160);
  }
  fn_825A6940(param_1);
  fn_825A1FF8(param_1);
  iVar4 = fn_82527EF0(param_1);
  if (iVar4 != 0) {
    iVar4 = fn_82527EF0(param_1);
    puVar7 = (undefined4 *)(iVar4 + 0xd0U & 0xfffffff0);
    uVar8 = puVar7[1];
    uVar9 = puVar7[2];
    uVar10 = puVar7[3];
    puVar2 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    *puVar2 = *puVar7;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
  }
  iVar4 = *(int *)(param_1 + 0x20);
  if ((((iVar4 != 0) && (*(int *)(iVar4 + 0x80) != 0)) &&
      (*(int *)(*(int *)(iVar4 + 0x80) + 0x7c0) != 0)) && (*(char *)(iVar4 + 0x124) != '\0')) {
    fn_82D89BD8();
    *(undefined1 *)(iVar4 + 0x124) = 0;
  }
  fn_8253FB70(param_1);
  return;
}

