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
extern int fn_82670230();
extern int fn_827B7F00();


void fn_827B8A98(int param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  bool bVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  if (param_3 == 1) {
    iVar4 = *(int *)(param_1 + 8);
    bVar11 = false;
    iVar5 = *(int *)(param_1 + 4);
  }
  else {
    if (param_3 != 2) {
      return;
    }
    iVar4 = *(int *)(param_1 + 8);
    bVar11 = true;
    iVar5 = *(int *)(param_1 + 4);
  }
  fn_827B7F00(iVar5 + 0x710);
  uVar14 = 0;
  uVar12 = 0;
  if (*(int *)(iVar5 + 0x1c) != 0) {
    do {
      uVar7 = (uint)((uVar12 & 0xffffffff) >> 4) & 0xffffffc;
      iVar15 = ((uint)uVar12 & 0x3f) * 0x1c;
      if (*(int *)(*(int *)(*(int *)(iVar5 + 0x28) + uVar7) + iVar15 + 0x18) != iVar4) {
        uVar8 = uVar14 >> 4;
        uVar10 = uVar14 & 0x3f;
        uVar14 = uVar14 + 1;
        iVar13 = uVar10 * 0x1c;
        iVar6 = *(int *)((uVar8 & 0xffffffc) + *(int *)(iVar5 + 0x28));
        puVar9 = (undefined4 *)(*(int *)(*(int *)(iVar5 + 0x28) + uVar7) + iVar15);
        iVar15 = iVar6 + iVar13;
        uVar1 = *puVar9;
        *(undefined4 *)(iVar15 + 4) = puVar9[1];
        *(undefined4 *)(iVar6 + iVar13) = uVar1;
        uVar1 = puVar9[5];
        uVar2 = puVar9[4];
        uVar3 = puVar9[3];
        *(undefined4 *)(iVar15 + 8) = puVar9[2];
        *(undefined4 *)(iVar15 + 0xc) = uVar3;
        *(undefined4 *)(iVar15 + 0x10) = uVar2;
        *(undefined4 *)(iVar15 + 0x14) = uVar1;
        *(undefined4 *)(iVar15 + 0x18) = puVar9[6];
      }
      uVar12 = uVar12 + 1;
    } while ((uVar12 & 0xffffffff) < (ulonglong)*(uint *)(iVar5 + 0x1c));
  }
  if (uVar14 < *(uint *)(iVar5 + 0x1c)) {
    *(uint *)(iVar5 + 0x1c) = uVar14;
  }
  iVar15 = iVar4 * 0x14 + iVar5;
  *(undefined4 *)(iVar15 + 0x48) = 0;
  if (bVar11) {
    (**(code **)(**(int **)(iVar15 + 0x38) + 0x30))
              (*(int **)(iVar15 + 0x38),(iVar4 + 3) * 0x14 + iVar5);
    fn_82670230(*(undefined4 *)(iVar15 + 0x38));
    *(undefined4 *)(iVar15 + 0x38) = 0;
  }
  return;
}

