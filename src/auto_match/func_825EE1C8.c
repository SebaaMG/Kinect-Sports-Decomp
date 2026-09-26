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
extern unsigned int *auStack_120;
extern unsigned int *auStack_160;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_90;
extern unsigned int *auStack_e0;
extern int fn_825402B0();
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_82540EF0();
extern int fn_825C7348();
extern int fn_825D5E68();
extern int fn_825D5F20();
extern int fn_825D5FE8();
extern int fn_825D6090();
extern int fn_825D6140();
extern int fn_825EE970();
extern int fn_82622CC0();
extern int fn_826231D8();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_82F68CC0();
extern unsigned int uStack_16c;


void fn_825EE1C8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined1 auStack_1b0 [68];
  undefined4 uStack_16c;
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [144];
  
  piVar2 = *(int **)((*(uint *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1);
  iVar1 = *piVar2;
  if (*(char *)(*(int *)(param_1 + 4) + 0xbdc) == '\0') {
    fn_825C7348(1);
    uVar5 = fn_825C7348(0);
    fn_82623298(piVar2,uVar5);
  }
  else {
    fn_825C7348(3);
    uVar5 = fn_825C7348(2);
    fn_826231D8(piVar2,uVar5);
  }
  fn_82622CC0(param_1,piVar2);
  fn_82639EA8(iVar1,((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                          (ulonglong)*(uint *)(param_1 + 4) + 0x174);
  *(undefined4 *)(iVar1 + 0x2f14) = 1;
  *(uint *)(iVar1 + 0x2934) =
       (-(uint)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
  uVar6 = *(ulonglong *)(iVar1 + 0x10);
  *(ulonglong *)(iVar1 + 0x10) = uVar6 | 0x800;
  *(ulonglong *)(iVar1 + 0x10) = uVar6 | 0x20800;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) | 4;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xffffff8f | 0x60;
  uVar6 = *(ulonglong *)(iVar1 + 0x10);
  *(ulonglong *)(iVar1 + 0x10) = uVar6 | 0x800;
  *(ulonglong *)(iVar1 + 0x10) = uVar6 | 0x20800;
  fn_825402B0(auStack_e0,*(undefined4 *)(param_1 + 0x18),0x40,
                  *(undefined4 *)(*(int *)(param_1 + 4) + 0xae4),*(undefined4 *)(param_1 + 0x10),1,0
                 );
  fn_825402B0(auStack_90,*(undefined4 *)(param_1 + 0x18),8,
                  *(undefined4 *)(*(int *)(param_1 + 4) + 0xae4),*(undefined4 *)(param_1 + 0x10));
  fn_825402B0(auStack_1b0,*(undefined4 *)(param_1 + 0x18),1,
                  *(undefined4 *)(*(int *)(param_1 + 4) + 0xae4),*(undefined4 *)(param_1 + 0x10));
  uStack_16c = 1;
  fn_82540EF0((double)*(float *)(*(int *)(param_1 + 4) + 0xaec),
                    *(undefined4 *)(param_1 + 0x18));
  lVar8 = ((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
          (ulonglong)*(uint *)(param_1 + 4);
  fn_82F68CC0(auStack_160,lVar8 + 0x50,0x40);
  fn_82F68CC0(auStack_120,lVar8 + 0x90,0x40);
  fn_82540870(*(undefined4 *)(param_1 + 0x18),auStack_160);
  fn_82540B48(*(undefined4 *)(param_1 + 0x18),auStack_120);
  fn_82540438(((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                  (ulonglong)*(uint *)(param_1 + 4) + 0x174,*(undefined4 *)(param_1 + 0x18),8);
  fn_825D6140(*(undefined4 *)(param_1 + 0x1c),iVar1);
  fn_825D5FE8(*(undefined4 *)(param_1 + 0x1c));
  uVar3 = *(uint *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
  uVar6 = (ulonglong)uVar3;
  if (0 < (int)uVar3) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)((*(int *)(param_1 + 0x10) + 3) * 4 + *(int *)(param_1 + 8));
      puVar9 = (undefined4 *)(iVar4 + iVar7);
      iVar4 = **(int **)(iVar4 + iVar7);
      if (*(int *)(iVar4 + 0x90) == 0) {
        bVar10 = puVar9[4] != 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        if (*(int *)(iVar4 + 0x1bc) != 0) {
          fn_825D5E68(*(undefined4 *)(param_1 + 0x1c),iVar1,8);
        }
        fn_825EE970(param_1,*puVar9,auStack_90,auStack_e0,auStack_1b0);
        if (*(int *)(*(int *)*puVar9 + 0x1bc) != 0) {
          fn_825D5F20(*(undefined4 *)(param_1 + 0x1c),iVar1,8);
        }
      }
      uVar6 = uVar6 - 1;
      iVar7 = iVar7 + 0x18;
    } while (uVar6 != 0);
  }
  fn_825D6090(*(undefined4 *)(param_1 + 0x1c),iVar1,0x40);
  fn_82623338(piVar2);
  return;
}

