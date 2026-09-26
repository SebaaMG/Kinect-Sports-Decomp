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
extern int fn_8263CBB0();


void fn_828588F8(int *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int *piVar14;
  ushort *puVar15;
  
  iVar4 = *(int *)(param_2 + 4);
  iVar5 = param_1[0x17];
  if (*(short *)(param_2 + 10) != 0) {
    uVar12 = (ulonglong)*(ushort *)(param_2 + 0x10);
    uVar1 = *(ushort *)(param_2 + 0x12);
    iVar4 = *(ushort *)(param_2 + 0x10) + 3;
    if (param_1[iVar4] != (uint)uVar1) {
      puVar10 = *(undefined4 **)((uint)uVar1 * 4 + param_1[2]);
      uVar6 = puVar10[1];
      uVar13 = (ulonglong)uVar6;
      piVar14 = (int *)*puVar10;
      if (0 < (int)uVar6) {
        do {
          (**(code **)(*piVar14 + param_1[1] + 0x1d4))(param_1[1],uVar12,piVar14[1]);
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar13 != 0);
      }
      param_1[iVar4] = (uint)uVar1;
    }
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(param_1[1],uVar12,
                      *(undefined4 *)(*(int *)(*param_1 + 0x100) + *(int *)(param_2 + 0xc) * 4),
                      0x8000000000000000 >> (uVar12 + 0x20 & 0x7f));
  }
  if (*(short *)(param_2 + 8) != 0) {
    puVar15 = (ushort *)(param_2 + 0x10);
    uVar1 = *puVar15;
    uVar12 = (ulonglong)uVar1;
    uVar2 = *(ushort *)(param_2 + 0x12);
    if (param_1[uVar1 + 3] != (uint)uVar2) {
      iVar7 = param_1[1];
      iVar11 = (uVar1 + 0x30) * 0x18;
      iVar8 = **(int **)((uint)uVar2 * 4 + param_4);
      *(uint *)(iVar11 + iVar7) =
           (*(uint *)(iVar8 + 4) & 7) << 10 | *(uint *)(iVar11 + iVar7) & 0xffffe3ff;
      *(ulonglong *)(iVar7 + 0x18) =
           0x8000000000000000U >> (uVar12 + 0x20 & 0x7f) | *(ulonglong *)(iVar7 + 0x18);
      iVar7 = param_1[1];
      uVar3 = *puVar15;
      iVar11 = (uVar3 + 0x30) * 0x18;
      *(uint *)(iVar11 + iVar7) =
           (*(uint *)(iVar8 + 0xc) & 7) << 0xd | *(uint *)(iVar11 + iVar7) & 0xffff1fff;
      *(ulonglong *)(iVar7 + 0x18) =
           0x8000000000000000U >> (uVar3 + 0x20 & 0x7f) | *(ulonglong *)(iVar7 + 0x18);
      iVar7 = param_1[1];
      uVar3 = *puVar15;
      iVar11 = (uVar3 + 0x30) * 0x18;
      *(uint *)(iVar11 + iVar7) =
           (*(uint *)(iVar8 + 0x14) & 7) << 0x10 | *(uint *)(iVar11 + iVar7) & 0xfff8ffff;
      *(ulonglong *)(iVar7 + 0x18) =
           0x8000000000000000U >> ((ulonglong)uVar3 + 0x20 & 0x7f) | *(ulonglong *)(iVar7 + 0x18);
      fn_82639380(param_1[1],*puVar15,*(undefined4 *)(iVar8 + 0x24));
      uVar3 = *puVar15;
      iVar7 = param_1[1];
      iVar11 = (uint)uVar3 * 0x18 + iVar7;
      *(uint *)(iVar11 + 0x48c) =
           (*(uint *)(iVar8 + 0x2c) & 3) << 0x17 | *(uint *)(iVar11 + 0x48c) & 0xfe7fffff;
      *(ulonglong *)(iVar7 + 0x18) =
           0x8000000000000000U >> (uVar3 + 0x20 & 0x7f) | *(ulonglong *)(iVar7 + 0x18);
      fn_82639528(param_1[1],*puVar15,*(undefined4 *)(iVar8 + 0x34));
      fn_826397C8(param_1[1],*puVar15,*(undefined4 *)(iVar8 + 0x44));
      param_1[uVar1 + 3] = (uint)uVar2;
    }
    iVar5 = *(int *)(*(int *)(param_2 + 0xc) * 4 + iVar5);
    if (*(int *)(iVar5 + 0x1c) == 4) {
      uVar9 = *(undefined4 *)
               ((uint)*(byte *)(*(int *)(iVar4 + param_3 + 8) + (uint)uVar1) * 4 +
               *(int *)(iVar5 + 0x34));
    }
    else {
      uVar9 = *(undefined4 *)(iVar5 + 0x34);
    }
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(param_1[1],uVar12,uVar9,0x8000000000000000 >> (uVar12 + 0x20 & 0x7f));
  }
  return;
}

