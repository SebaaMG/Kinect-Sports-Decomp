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
extern int fn_82964180();
extern int fn_8296CF68();
extern int fn_8296D7F0();
extern int fn_82BA02A8();
extern int fn_82F691F0();


bool fn_82971580(int param_1)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  
  bVar3 = false;
  fn_8296CF68();
  uVar5 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar6 = 0;
    bVar3 = false;
    do {
      iVar8 = *(int *)(iVar6 + *(int *)(param_1 + 0x10));
      if (((*(uint *)(iVar8 + 4) & 0x400) != 0) && (*(int *)(iVar8 + 0x28) == -1)) {
        bVar3 = true;
        *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) & 0xfffffbff;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 < *(uint *)(param_1 + 4));
  }
  uVar5 = 0;
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar6 = 0;
    do {
      puVar1 = *(uint **)(*(int *)(param_1 + 0x14) + iVar6);
      if (puVar1[0x15] == 0xffffffff) {
        if ((*puVar1 & 0x10000000) != 0) {
LAB_82971648:
          uVar7 = *puVar1 | 0x10000000;
          puVar1[0x15] = 1;
          goto LAB_82971660;
        }
        uVar7 = *(uint *)(*(int *)(puVar1[1] * 4 + *(int *)(param_1 + 0x10)) + 4);
        if (((uVar7 & 0x300) != 0) && ((uVar7 & 0x800) != 0)) goto LAB_82971648;
      }
      else {
        uVar7 = *puVar1 & 0xefffffff;
LAB_82971660:
        *puVar1 = uVar7;
      }
      if ((puVar1[0x15] == 0xffffffff) && (puVar1[0x12] == 0xffffffff)) {
        puVar1[0xc] = 0xffffffff;
      }
      else {
        puVar1[0xc] = uVar5;
        uVar5 = uVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  if (uVar5 == *(uint *)(param_1 + 8)) {
    return !bVar3;
  }
  fn_8296D7F0(param_1);
  uVar9 = 0;
  uVar5 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar6 = 0;
    iVar8 = 0;
    do {
      iVar2 = *(int *)(iVar8 + *(int *)(param_1 + 0x14));
      if ((*(int *)(iVar2 + 0x54) == -1) && (*(int *)(iVar2 + 0x48) == -1)) {
        fn_82BA02A8(iVar2);
        fn_82964180(iVar2);
      }
      else {
        *(int *)(iVar6 + *(int *)(param_1 + 0x14)) = iVar2;
        uVar9 = uVar9 + 1;
        iVar6 = iVar6 + 4;
      }
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar5 < *(uint *)(param_1 + 8));
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0((uVar9 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0x14),0,
               (*(uint *)(param_1 + 8) - uVar9 & 0x3fffffff) << 2);
}

