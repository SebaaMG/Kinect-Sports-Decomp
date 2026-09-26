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
extern unsigned int *auStack_100;
extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern int fn_825402B0();
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_825C7348();
extern int fn_825C73C8();
extern int fn_825D5E68();
extern int fn_825D6140();
extern int fn_82622CC0();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_8263CBB0();
extern int fn_82F68CC0();


void fn_825EFF38(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [128];
  
  piVar2 = *(int **)((*(uint *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1);
  iVar1 = *piVar2;
  if (*(char *)(*(int *)(param_1 + 4) + 0xbdc) != '\0') {
    fn_82623298(piVar2,0,0);
    fn_82623338(piVar2);
    return;
  }
  fn_825C7348(1);
  uVar3 = fn_825C7348(0);
  fn_82623298(piVar2,uVar3);
  fn_82622CC0(param_1,piVar2);
  fn_82639EA8(iVar1,((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                          (ulonglong)*(uint *)(param_1 + 4) + 0x174);
  *(undefined4 *)(iVar1 + 0x2f14) = 1;
  *(uint *)(iVar1 + 0x2934) =
       (-(uint)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
  uVar4 = *(ulonglong *)(iVar1 + 0x10);
  *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x800;
  *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x20800;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) | 4;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xffffff8f | 0x60;
  uVar4 = *(ulonglong *)(iVar1 + 0x10);
  *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x800;
  *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x20800;
  uVar4 = (ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0xae4) + 2;
  fn_825402B0(auStack_80,*(undefined4 *)(param_1 + 0x18),4,
                  uVar4 + ((longlong)((int)uVar4 >> 2) +
                           (ulonglong)((int)uVar4 < 0 && (uVar4 & 3) != 0) & 0x3fffffff) * -4,
                  *(undefined4 *)(param_1 + 0x10),1,0);
  lVar5 = ((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
          (ulonglong)*(uint *)(param_1 + 4);
  fn_82F68CC0(auStack_c0,lVar5 + 0x50,0x40);
  fn_82F68CC0(auStack_100,lVar5 + 0x90,0x40);
  fn_82540870(*(undefined4 *)(param_1 + 0x18),auStack_c0);
  fn_82540B48(*(undefined4 *)(param_1 + 0x18),auStack_100);
  fn_82540438(((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                  (ulonglong)*(uint *)(param_1 + 4) + 0x174,*(undefined4 *)(param_1 + 0x18),4);
  fn_825D6140(*(undefined4 *)(param_1 + 0x1c),iVar1);
  fn_825D5E68(*(undefined4 *)(param_1 + 0x1c));
  uVar3 = fn_825C73C8(0);
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(iVar1,10,uVar3);
}

