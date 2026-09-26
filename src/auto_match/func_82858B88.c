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
extern int fn_82639380();
extern int fn_82639528();
extern int fn_826397C8();
extern int fn_826398E8();
extern int fn_82639990();
extern int fn_8263CBB0();


void fn_82858B88(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar4 = *(int *)(param_2 + 4);
  iVar13 = *(int *)(param_1 + 0x5c);
  if (*(short *)(param_2 + 8) == 0) {
    return;
  }
  uVar1 = *(ushort *)(param_2 + 0x14);
  uVar12 = (ulonglong)uVar1;
  uVar11 = 0;
  uVar2 = *(ushort *)(param_2 + 0x16);
  iVar10 = (uVar1 + 3) * 4;
  if (*(uint *)(iVar10 + param_1) != (uint)uVar2) {
    iVar8 = *(int *)(param_1 + 4);
    iVar9 = (uVar1 + 0x30) * 0x18;
    iVar5 = **(int **)((uint)uVar2 * 4 + param_4);
    *(uint *)(iVar9 + iVar8) =
         (*(uint *)(iVar5 + 4) & 7) << 10 | *(uint *)(iVar9 + iVar8) & 0xffffe3ff;
    *(ulonglong *)(iVar8 + 0x18) =
         0x8000000000000000U >> (uVar12 + 0x20 & 0x7f) | *(ulonglong *)(iVar8 + 0x18);
    iVar8 = *(int *)(param_1 + 4);
    uVar3 = *(ushort *)(param_2 + 0x14);
    iVar9 = (uVar3 + 0x30) * 0x18;
    *(uint *)(iVar9 + iVar8) =
         (*(uint *)(iVar5 + 0xc) & 7) << 0xd | *(uint *)(iVar9 + iVar8) & 0xffff1fff;
    *(ulonglong *)(iVar8 + 0x18) =
         0x8000000000000000U >> (uVar3 + 0x20 & 0x7f) | *(ulonglong *)(iVar8 + 0x18);
    iVar8 = *(int *)(param_1 + 4);
    uVar3 = *(ushort *)(param_2 + 0x14);
    iVar9 = (uVar3 + 0x30) * 0x18;
    *(uint *)(iVar9 + iVar8) =
         (*(uint *)(iVar5 + 0x14) & 7) << 0x10 | *(uint *)(iVar9 + iVar8) & 0xfff8ffff;
    *(ulonglong *)(iVar8 + 0x18) =
         0x8000000000000000U >> ((ulonglong)uVar3 + 0x20 & 0x7f) | *(ulonglong *)(iVar8 + 0x18);
    uVar11 = (ulonglong)*(uint *)(iVar5 + 0x1c);
    fn_82639380(*(undefined4 *)(param_1 + 4),*(undefined2 *)(param_2 + 0x14),
                      *(undefined4 *)(iVar5 + 0x24));
    uVar3 = *(ushort *)(param_2 + 0x14);
    iVar8 = *(int *)(param_1 + 4);
    iVar9 = (uint)uVar3 * 0x18 + iVar8;
    *(uint *)(iVar9 + 0x48c) =
         (*(uint *)(iVar5 + 0x2c) & 3) << 0x17 | *(uint *)(iVar9 + 0x48c) & 0xfe7fffff;
    *(ulonglong *)(iVar8 + 0x18) =
         0x8000000000000000U >> (uVar3 + 0x20 & 0x7f) | *(ulonglong *)(iVar8 + 0x18);
    fn_82639528(*(undefined4 *)(param_1 + 4),*(undefined2 *)(param_2 + 0x14),
                      *(undefined4 *)(iVar5 + 0x34));
    fn_826398E8(*(undefined4 *)(param_1 + 4),*(undefined2 *)(param_2 + 0x14),
                 *(undefined4 *)(iVar5 + 0x3c));
    fn_826397C8(*(undefined4 *)(param_1 + 4),*(undefined2 *)(param_2 + 0x14),
                 *(undefined4 *)(iVar5 + 0x44));
    *(uint *)(iVar10 + param_1) = (uint)uVar2;
  }
  iVar10 = *(int *)(*(int *)(param_2 + 0x10) * 4 + iVar13);
  iVar13 = *(int *)(*(int *)(param_2 + 0xc) * 4 + iVar13);
  if ((iVar10 == 0) || (*(char *)(iVar10 + 0x30) != *(char *)(iVar13 + 0x30))) {
    uVar7 = (ulonglong)*(byte *)(iVar13 + 0x30) - 1;
    iVar8 = (int)uVar7;
    iVar10 = 1;
    if (iVar8 < 2) {
      iVar10 = iVar8;
    }
    if (((int)uVar11 < iVar10) && (uVar11 = uVar7, 1 < iVar8)) {
      uVar11 = 1;
    }
    fn_82639990(*(undefined4 *)(param_1 + 4),*(undefined2 *)(param_2 + 0x14),uVar11);
  }
  else {
    fn_82639990(*(undefined4 *)(param_1 + 4),*(undefined2 *)(param_2 + 0x14),uVar11);
    iVar13 = iVar10;
  }
  if (*(int *)(iVar13 + 0x1c) == 4) {
    uVar6 = *(undefined4 *)
             ((uint)*(byte *)(*(int *)(iVar4 + param_3 + 8) + (uint)uVar1) * 4 +
             *(int *)(iVar13 + 0x34));
  }
  else {
    uVar6 = *(undefined4 *)(iVar13 + 0x34);
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(*(undefined4 *)(param_1 + 4),uVar12,uVar6,
                    0x8000000000000000 >> (uVar12 + 0x20 & 0x7f));
}

