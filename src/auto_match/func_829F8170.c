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
extern int fn_82630750();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82631AF0();
extern int fn_82637AF8();
extern int fn_82637B30();
extern int fn_826381E0();
extern int fn_82638220();
extern int fn_82638288();
extern int fn_82638D10();
extern int fn_82639208();
extern int fn_826392A0();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263AA68();
extern int fn_8263CBB0();
extern int fn_82645218();
extern int fn_82647538();
extern int fn_82647578();
extern int fn_8264B7E0();
extern int fn_8264BDD8();
extern int fn_8264C1F8();
extern int fn_826582D8();
extern int fn_829F7AB8();
extern int fn_829F7D28();
extern unsigned int iStack0000003c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000004c;


/* WARNING: Removing unreachable block (ram,0x829f8cc4) */
/* WARNING: Removing unreachable block (ram,0x829f8ccc) */
/* WARNING: Removing unreachable block (ram,0x829f8cdc) */
/* WARNING: Removing unreachable block (ram,0x829f8ce0) */
/* WARNING: Removing unreachable block (ram,0x829f8cfc) */

ulonglong fn_829F8170(int param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                       ulonglong param_5,undefined8 param_6,ulonglong param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uStack00000034;
  int iStack0000003c;
  undefined4 uStack0000004c;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  int in_stack_0000008c;
  undefined4 *in_stack_00000094;
  
  uStack00000034 = (undefined4)param_5;
  iStack0000003c = (int)param_6;
  uStack0000004c = param_8;
  fn_82647538(*(undefined4 *)(param_1 + 4));
  fn_8264B7E0(*(undefined4 *)(param_1 + 4),
                    *(undefined4 *)((*(int *)(param_1 + 0x10) + 2) * 4 + param_1),0,0,0,0,0);
  fn_829F7AB8(*(undefined4 *)(param_1 + 4),param_1 + 0x50,param_2,param_3,param_4,param_5,param_6,
                param_7);
  *(ulonglong *)(*(int *)(param_1 + 4) + 8) =
       *(ulonglong *)(*(int *)(param_1 + 4) + 8) & 0xe000000000000003;
  **(ulonglong **)(param_1 + 4) = **(ulonglong **)(param_1 + 4) & 0x8000000000000001;
  *(ulonglong *)(*(int *)(param_1 + 4) + 0x20) =
       *(ulonglong *)(*(int *)(param_1 + 4) + 0x20) & 0xfeffffffffffffff;
  *(ulonglong *)(*(int *)(param_1 + 4) + 0x18) =
       *(ulonglong *)(*(int *)(param_1 + 4) + 0x18) & 0xfffffffff8000001;
  *(ulonglong *)(*(int *)(param_1 + 4) + 0x20) =
       *(ulonglong *)(*(int *)(param_1 + 4) + 0x20) & 0xff81ffffffffffff;
  iVar1 = *(int *)(param_1 + 4);
  fn_8264C1F8(iVar1,0,0);
  if (*(int *)(param_1 + 0x74) != 0) {
    fn_82645218(iVar1);
  }
  fn_82631AF0(iVar1,0);
  fn_8263AA68(iVar1,0,*(undefined4 *)(param_1 + 0x4c),0);
  fn_8263AA68(iVar1,1,param_1 + 0x50,0);
  fn_8263A508(iVar1,0);
  uVar14 = 0;
  do {
    fn_82639380(iVar1,uVar14,0);
    fn_82639528(iVar1,uVar14,0);
    iVar4 = (int)uVar14;
    iVar2 = iVar4 * 0x18 + iVar1;
    uVar12 = uVar14 + 0x20;
    *(uint *)(iVar2 + 0x48c) = *(uint *)(iVar2 + 0x48c) & 0xfe7fffff | 0x1000000;
    iVar2 = (iVar4 + 0x30) * 0x18;
    iVar3 = (iVar4 + 0x30) * 0x18;
    uVar11 = uVar14 + 0x20;
    *(ulonglong *)(iVar1 + 0x18) =
         0x8000000000000000U >> (uVar14 + 0x20 & 0x7f) | *(ulonglong *)(iVar1 + 0x18);
    uVar13 = uVar14 + 0x20;
    iVar4 = (iVar4 + 0x30) * 0x18;
    uVar14 = uVar14 + 1 & 0xff;
    *(uint *)(iVar2 + iVar1) = *(uint *)(iVar2 + iVar1) & 0xffffe3ff | 0x800;
    *(ulonglong *)(iVar1 + 0x18) =
         0x8000000000000000U >> (uVar12 & 0x7f) | *(ulonglong *)(iVar1 + 0x18);
    *(uint *)(iVar3 + iVar1) = *(uint *)(iVar3 + iVar1) & 0xffff1fff | 0x4000;
    *(ulonglong *)(iVar1 + 0x18) =
         0x8000000000000000U >> (uVar11 & 0x7f) | *(ulonglong *)(iVar1 + 0x18);
    *(uint *)(iVar4 + iVar1) = *(uint *)(iVar4 + iVar1) & 0xfff8ffff | 0x20000;
    *(ulonglong *)(iVar1 + 0x18) =
         0x8000000000000000U >> (uVar13 & 0x7f) | *(ulonglong *)(iVar1 + 0x18);
  } while (uVar14 < 5);
  fn_82639208(iVar1,0);
  fn_826381E0(iVar1,0);
  fn_82638220(iVar1,0);
  fn_82638288(iVar1,0);
  fn_826392A0(iVar1,0);
  fn_82638D10(iVar1,0);
  fn_82637AF8(iVar1,0);
  fn_82637B30(iVar1,0);
  if (((param_3 & 0xffffffff) == 0) || (bVar9 = true, in_stack_00000074 == 0)) {
    bVar9 = false;
  }
  if (((param_3 & 0xffffffff) == 0) || (bVar5 = true, in_stack_0000007c == 0)) {
    bVar5 = false;
  }
  if ((in_stack_0000005c == 0) ||
     (((in_stack_00000064 != 0 && (in_stack_0000006c != 0)) && ((param_7 & 0xffffffff) != 0)))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((in_stack_0000005c == 0) || (in_stack_00000064 == 0)) ||
     ((in_stack_0000006c == 0 || (bVar7 = true, (param_7 & 0xffffffff) == 0)))) {
    bVar7 = false;
  }
  if (((in_stack_00000074 == 0) || ((param_2 & 0xffffffff) == 0)) ||
     (((param_5 & 0xffffffff) == 0 || (bVar8 = true, in_stack_00000084 == 0)))) {
    bVar8 = false;
  }
  if (((in_stack_0000005c == 0) || (iStack0000003c == 0)) || (bVar10 = true, in_stack_0000008c == 0)
     ) {
    bVar10 = false;
  }
  if (bVar9) {
    fn_82630750(iVar1,0,in_stack_00000074,1);
  }
  if (bVar5) {
    fn_82630750(iVar1,1,in_stack_0000007c,1);
  }
  if (((bVar6) || (bVar7)) && (fn_82630750(iVar1,2,in_stack_0000005c,1), bVar7)) {
    fn_82630750(iVar1,3,in_stack_00000064,1);
  }
  if (bVar9) {
    fn_8264C1F8(iVar1,0,2);
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(iVar1,1,param_3,0x40000000);
  }
  if (bVar5) {
    fn_8264C1F8(iVar1,0,0x100);
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(iVar1,1,param_3,0x40000000);
  }
  fn_8264C1F8(iVar1,0,0);
  if (*(int *)(param_1 + 0x78) != 0) {
    fn_82645218(iVar1);
  }
  if (!bVar6) {
    fn_8264C1F8(iVar1,0,0);
    if (*(int *)(param_1 + 0x80) != 0) {
      fn_82645218(iVar1);
    }
    if (bVar7) {
      fn_8264C1F8(iVar1,0,0x20);
      fn_82631920(iVar1,*(undefined4 *)(param_1 + 0x14));
                    /* WARNING: Subroutine does not return */
      fn_82631578(iVar1,*(undefined4 *)(param_1 + 0x40));
    }
    fn_8264C1F8(iVar1,0,0);
    if (*(int *)(param_1 + 0x84) != 0) {
      fn_82645218(iVar1);
    }
    if (bVar8) {
      fn_8264C1F8(iVar1,0,4);
                    /* WARNING: Subroutine does not return */
      fn_8263CBB0(iVar1,0,in_stack_00000074,0x80000000);
    }
    fn_8264C1F8(iVar1,0,0);
    if (*(int *)(param_1 + 0x7c) != 0) {
      fn_82645218(iVar1);
    }
    if (!bVar10) {
      fn_8264C1F8(iVar1,0,0);
      if (*(int *)(param_1 + 0x88) != 0) {
        fn_82645218(iVar1);
      }
      fn_826582D8(*(undefined4 *)(param_1 + 4));
      fn_829F7D28(*(undefined4 *)(param_1 + 4),in_stack_0000005c,in_stack_00000064,
                    in_stack_0000006c,in_stack_00000074,in_stack_0000007c,in_stack_00000084,
                    in_stack_0000008c);
      uVar14 = fn_8264BDD8(*(undefined4 *)(param_1 + 4));
      *in_stack_00000094 = *(undefined4 *)((*(int *)(param_1 + 0x10) + 2) * 4 + param_1);
      *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - 1U & 1;
      fn_82647578(*(undefined4 *)(param_1 + 4));
      return (uVar14 & 0xffffffff) >> 0x1f ^ 1;
    }
    fn_8264C1F8(iVar1,0,8);
    fn_8263A1B8(iVar1,0,*(undefined4 *)(param_1 + 0x34));
    fn_82631920(iVar1,*(undefined4 *)(param_1 + 0x14));
                    /* WARNING: Subroutine does not return */
    fn_82631578(iVar1,*(undefined4 *)(param_1 + 0x2c));
  }
  fn_8264C1F8(iVar1,0,0x80);
  fn_82631920(iVar1,*(undefined4 *)(param_1 + 0x14));
                    /* WARNING: Subroutine does not return */
  fn_82631578(iVar1,*(undefined4 *)(param_1 + 0x48));
}

