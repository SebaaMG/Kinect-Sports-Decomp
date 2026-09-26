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
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_82540EF0();
extern int fn_825C7348();
extern int fn_825D07E0();
extern int fn_826231D8();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_82F68CC0();


void fn_825EEDF8(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [112];
  
  iVar6 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 4);
  piVar4 = *(int **)((*(uint *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 5) * 4 + param_1);
  iVar1 = *piVar4;
  fn_82F68CC0(auStack_b0,iVar6 + 0x50,0x40);
  fn_82F68CC0(auStack_70,iVar6 + 0x90,0x40);
  **(int **)(param_1 + 0x10) = iVar1;
  fn_82540870(*(undefined4 *)(param_1 + 0x10),auStack_b0);
  fn_82540B48(*(undefined4 *)(param_1 + 0x10),auStack_70);
  fn_82540EF0((double)*(float *)(*(int *)(param_1 + 4) + 0xaec),
                    *(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xabb8) = *(undefined4 *)(param_1 + 8);
  fn_825C7348(3);
  uVar5 = fn_825C7348(2);
  fn_826231D8(piVar4,uVar5);
  fn_82540438(((ulonglong)*(uint *)(param_1 + 8) & 0x7fffff) * 0x200 +
                    (ulonglong)*(uint *)(param_1 + 4) + 0x174,*(undefined4 *)(param_1 + 0x10),4);
  fn_82639EA8(iVar1,((ulonglong)*(uint *)(param_1 + 8) & 0x7fffff) * 0x200 +
                          (ulonglong)*(uint *)(param_1 + 4) + 0x174);
  *(undefined4 *)(iVar1 + 0x2f14) = 1;
  *(uint *)(iVar1 + 0x2934) =
       (-(uint)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) | 4;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xffffff8f | 0x60;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
  *(undefined4 *)(iVar1 + 0x2f04) = 7;
  *(uint *)(iVar1 + 0x28dc) =
       *(uint *)(iVar1 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(iVar1 + 0x3148) != 0) & 7;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
  puVar2 = *(uint **)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 8);
  fn_825D07E0((double)(float)puVar2[uVar3 * 8 + 0x2ac],(ulonglong)*puVar2 + 0xcec,
                    *(undefined4 *)(param_1 + 0x10),((ulonglong)uVar3 + 0x55 & 0x7ffffff) << 5,
                    puVar2 + uVar3 * 0x80 + 99);
  *(undefined4 *)(iVar1 + 0x2f04) = 0xf;
  *(uint *)(iVar1 + 0x28dc) =
       -(uint)(*(int *)(iVar1 + 0x3148) != 0) & 0xf | *(uint *)(iVar1 + 0x28dc) & 0xfffffff0;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
  fn_82623338(piVar4);
  return;
}

