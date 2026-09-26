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
extern unsigned int *auStack_e0;


undefined8 fn_82AC5F38(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  int iVar20;
  int aiStack_f0 [4];
  uint auStack_e0 [24];
  uint auStack_80 [32];
  
  auStack_e0[0] = *(uint *)(param_1 + 0x44);
  if ((*(uint *)(param_1 + 0x4c) < *(int *)(param_1 + 0x48) + auStack_e0[0]) &&
     (auStack_e0[0] < *(int *)(param_1 + 0x50) + *(uint *)(param_1 + 0x4c))) {
LAB_82ac5f68:
    uVar10 = 0xffffffff80004005;
  }
  else {
    aiStack_f0[1] = param_2;
    aiStack_f0[0] = param_1;
    auStack_80[0] = 0x24;
    uVar13 = 1;
    uVar19 = (ulonglong)(param_3 == 0) ^ 1;
    uVar12 = 0;
    if (uVar19 != 0xffffffffffffffff) {
      puVar15 = auStack_80;
      piVar11 = aiStack_f0;
      puVar17 = auStack_e0;
      do {
        puVar3 = (uint *)*piVar11;
        cVar2 = *(char *)(puVar3 + 10);
        if (0x14 < (uVar13 & 0xffffffff)) goto LAB_82ac5f68;
        uVar4 = *puVar3;
        uVar14 = uVar13 + 1;
        bVar1 = 0x14 < (uVar14 & 0xffffffff);
        puVar17[1] = uVar4;
        puVar18 = puVar17 + 1;
        if (cVar2 == '\0') {
          puVar15[1] = 0x24;
          if (bVar1) goto LAB_82ac5f68;
          iVar20 = *(int *)(uVar4 + 0x18);
          puVar17[2] = puVar3[3];
          puVar15[2] = iVar20 << 2;
          if (0x14 < (uVar13 + 2 & 0xffffffff)) goto LAB_82ac5f68;
          iVar20 = *(int *)(uVar4 + 0x1c);
          puVar17[3] = puVar3[4];
          puVar15[3] = iVar20 << 2;
          if (0x14 < (uVar13 + 3 & 0xffffffff)) goto LAB_82ac5f68;
          uVar14 = uVar13 + 4;
          uVar5 = puVar3[7];
          puVar17[4] = puVar3[5];
          puVar18 = puVar17 + 4;
          puVar15[4] = uVar5 >> 3 & 0x7c;
          puVar16 = puVar15 + 4;
          if (0x14 < (uVar14 & 0xffffffff)) goto LAB_82ac5f68;
          iVar20 = *(int *)(uVar4 + 0x20);
          puVar17[5] = puVar3[6];
          puVar15[5] = iVar20 << 2;
        }
        else {
          puVar15[1] = 0x20;
          puVar16 = puVar15 + 1;
          if (bVar1) goto LAB_82ac5f68;
          uVar4 = puVar3[7];
          puVar17[2] = puVar3[3];
          puVar15[2] = uVar4 >> 3 & 0x7c;
        }
        uVar4 = puVar3[2];
        puVar15 = puVar16 + 1;
        puVar17 = puVar18 + 1;
        uVar13 = uVar14 + 1;
        if (uVar4 != 0) {
          if (0x14 < (uVar13 & 0xffffffff)) goto LAB_82ac5f68;
          uVar13 = uVar14 + 2;
          puVar18[2] = uVar4;
          puVar17 = puVar18 + 2;
          puVar16[2] = *(uint *)(uVar4 + 0x10);
          puVar15 = puVar16 + 2;
        }
        if (0x14 < (uVar13 & 0xffffffff)) goto LAB_82ac5f68;
        uVar12 = uVar12 + 1;
        uVar4 = puVar3[9];
        uVar13 = uVar13 + 1;
        piVar11 = piVar11 + 1;
        puVar17 = puVar17 + 1;
        *puVar17 = puVar3[1];
        puVar15 = puVar15 + 1;
        *puVar15 = uVar4;
      } while ((uVar12 & 0xffffffff) < uVar19 + 1);
    }
    puVar6 = *(undefined4 **)(param_1 + 0x2c);
    if (puVar6 != (undefined4 *)0x0) {
      if (0x14 < (uVar13 & 0xffffffff)) goto LAB_82ac5f68;
      iVar20 = (int)((uVar13 & 0xffffffff) << 2);
      uVar13 = uVar13 + 1;
      uVar7 = *puVar6;
      *(undefined4 **)((int)auStack_e0 + iVar20) = puVar6;
      *(undefined4 *)((int)auStack_80 + iVar20) = uVar7;
    }
    iVar20 = *(int *)(param_1 + 0x30);
    if (iVar20 != 0) {
      if (0x14 < (uVar13 & 0xffffffff)) goto LAB_82ac5f68;
      iVar9 = (int)((uVar13 & 0xffffffff) << 2);
      uVar13 = uVar13 + 1;
      iVar8 = *(int *)(iVar20 + 4);
      *(int *)((int)auStack_e0 + iVar9) = iVar20;
      *(uint *)((int)auStack_80 + iVar9) = (iVar8 + 3U & 0xfffffffc) + 8;
    }
    uVar12 = 0;
    if (uVar13 - 1 != 0) {
      iVar20 = 0;
      do {
        uVar12 = uVar12 + 1;
        uVar19 = uVar12;
        iVar8 = iVar20;
        if ((uVar12 & 0xffffffff) < (uVar13 & 0xffffffff)) {
          do {
            uVar4 = *(uint *)((int)auStack_e0 + iVar8 + 4);
            if ((*(uint *)((int)auStack_e0 + iVar20) < *(int *)((int)auStack_80 + iVar8 + 4) + uVar4
                ) && (uVar4 < *(int *)((int)auStack_80 + iVar20) +
                              *(uint *)((int)auStack_e0 + iVar20))) goto LAB_82ac5f68;
            uVar19 = uVar19 + 1;
            iVar8 = iVar8 + 4;
          } while ((uVar19 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        iVar20 = iVar20 + 4;
      } while ((uVar12 & 0xffffffff) < (uVar13 - 1 & 0xffffffff));
    }
    uVar10 = 0;
  }
  return uVar10;
}

