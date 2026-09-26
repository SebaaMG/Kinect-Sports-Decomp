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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_822E83E0();
extern int fn_8240DEC0();
extern int fn_8240E5F8();
extern int fn_824108A0();
extern int fn_824118B0();
extern int fn_82411E50();
extern int fn_82412040();
extern int fn_82412308();
extern int fn_8253F598();
extern int fn_8253F768();
extern int fn_82571418();
extern int fn_82CE4118();
extern int fn_82D85148();
extern int fn_82D89B48();
extern int fn_82D89BD8();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();


void fn_8240EF10(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_f1;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  iVar4 = fn_82F6DA24();
  if ((*(int *)(iVar4 + 8) != 0) && (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)) {
    *(uint *)(iVar1 + 2000) = *(uint *)(iVar1 + 2000) | 4;
  }
  uVar5 = extraout_f1;
  fn_82D89BD8(*(undefined4 *)(*(int *)(iVar4 + 0x28) + 0x7c0));
  if ((((*(int *)(**(int **)(iVar4 + 0x24) + 0x2b40) == 0) &&
       (iVar1 = *(int *)(iVar4 + 0x2c), iVar1 != 2)) && (iVar1 != 9)) && (iVar1 != 1)) {
    if (*(int *)(**(int **)(iVar4 + 0x24) + 0x174) == 2) {
      fn_824118B0(uVar5,iVar4);
      fn_82411E50(iVar4);
    }
    fn_82412040(iVar4);
  }
  if ((3 < *(int *)(iVar4 + 0x2c)) && (*(int *)(iVar4 + 0x2c) < 9)) {
    fn_82412308(iVar4);
    fn_824108A0(uVar5,iVar4);
  }
  if (*(int *)(iVar4 + 0x170) != 0) {
    iVar1 = *(int *)(*(int *)(iVar4 + 0x28) + 0x7c0);
    puVar3 = (undefined4 *)(iVar1 + 0x1b0U & 0xfffffff0);
    uVar11 = *puVar3;
    uVar12 = puVar3[1];
    uVar13 = puVar3[2];
    uVar14 = puVar3[3];
    puVar3 = (undefined4 *)(iVar1 + 0x1c0U & 0xfffffff0);
    uVar7 = *puVar3;
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    fn_8253F768();
    if (*(int *)(iVar4 + 0x270) != 0) {
      fn_82D89B48(*(undefined4 *)(*(int *)(iVar4 + 0x28) + 0x7c0));
      piVar2 = *(int **)(iVar4 + 0x270);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))(piVar2,1);
      }
      *(undefined4 *)(iVar4 + 0x270) = 0;
    }
    fn_82CE4118(iVar1);
    *(undefined4 *)(*(int *)(iVar4 + 0x28) + 0x7c0) = 0;
    *(undefined4 *)(*(int *)(iVar4 + 0x28) + 0x7c4) = 0;
    fn_8240E5F8(iVar4,*(undefined4 *)(iVar4 + 0x24),*(undefined4 *)(iVar4 + 0x174));
    fn_8253F598(*(undefined4 *)(iVar4 + 0x28));
    iVar1 = *(int *)(iVar4 + 0x28);
    uVar5 = 10;
    uVar6 = 5;
    if ((*(uint *)(iVar1 + 0x4b8) & 0x200) != 0) {
      uVar5 = 1;
      uVar6 = 1;
    }
    fn_82571418(iVar1 + 0x380,*(undefined4 *)(iVar1 + 0x7c0),*(undefined4 *)(iVar1 + 0x4c),
                      uVar5,uVar6,*(uint *)(iVar1 + 0x4b8) & 4,*(uint *)(iVar1 + 0x4b8) & 8);
    puVar3 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
    *puVar3 = uVar11;
    puVar3[1] = uVar12;
    puVar3[2] = uVar13;
    puVar3[3] = uVar14;
    fn_822E83E0(*(undefined4 *)(*(int *)(iVar4 + 0x28) + 0x7c0),auStack_90);
    puVar3 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar3 = uVar7;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    puVar3[3] = uVar10;
    fn_8240DEC0(*(undefined4 *)(*(int *)(iVar4 + 0x28) + 0x7c0),auStack_80);
    *(undefined4 *)(iVar4 + 0x170) = 0;
  }
  if (((*(int *)(iVar4 + 0x2c) != 2) && (*(int *)(iVar4 + 0x178) != 0)) &&
     (iVar1 = *(int *)(*(int *)(iVar4 + 0x28) + 0x7c0), *(int *)(iVar1 + 8) != 0)) {
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar4 + 0x174);
    iVar1 = *(int *)(*(int *)(iVar4 + 0x28) + 0x7c0);
    fn_82D85148(*(undefined4 *)(iVar1 + 8),iVar1,0,1);
    *(undefined4 *)(iVar4 + 0x178) = 0;
  }
  fn_82F6DCBC();
  return;
}

