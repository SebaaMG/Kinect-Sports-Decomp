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
extern unsigned int *auStack_1a0;


void fn_8277D350(int param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint auStack_1a0 [104];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar14 = auStack_1a0;
  do {
    while( true ) {
      uVar11 = (uint)param_2;
      uVar10 = (uint)param_3;
      uVar13 = uVar10 - uVar11;
      if ((int)uVar13 < 10) break;
      uVar7 = (uint)(param_2 >> 8) & 0xfffffc;
      uVar16 = param_2 + 1;
      uVar12 = (longlong)((int)uVar13 >> 1) + (ulonglong)((int)uVar13 < 0 && (uVar13 & 1) != 0) +
               param_2;
      iVar1 = *(int *)(uVar7 + *(int *)(param_1 + 0xc));
      uVar13 = (uint)((uVar12 & 0xffffffff) << 2) & 0xffc;
      uVar15 = param_3 - 1;
      uVar8 = (uint)(uVar16 >> 8) & 0xfffffc;
      uVar9 = (uint)(uVar15 >> 8) & 0xfffffc;
      iVar2 = *(int *)(((uint)uVar12 >> 8 & 0xfffffc) + *(int *)(param_1 + 0xc));
      iVar6 = (int)((param_2 & 0x3ff) << 2);
      uVar3 = *(undefined4 *)(iVar1 + iVar6);
      *(undefined4 *)(iVar1 + iVar6) = *(undefined4 *)(iVar2 + uVar13);
      *(undefined4 *)(iVar2 + uVar13) = uVar3;
      iVar1 = (int)((uVar16 & 0x3ff) << 2);
      uVar13 = *(uint *)(*(int *)(uVar8 + *(int *)(param_1 + 0xc)) + iVar1);
      iVar2 = (int)((uVar15 & 0x3ff) << 2);
      uVar17 = *(uint *)(*(int *)(uVar9 + *(int *)(param_1 + 0xc)) + iVar2);
      if (*(float *)(*(int *)((uVar17 >> 8 & 0xfffffc) + *(int *)(param_4 + 0xc)) +
                     (uVar17 & 0x3ff) * 8 + 4) <
          *(float *)(*(int *)((uVar13 >> 8 & 0xfffffc) + *(int *)(param_4 + 0xc)) +
                     (uVar13 & 0x3ff) * 8 + 4)) {
        iVar4 = *(int *)(*(int *)(param_1 + 0xc) + uVar8);
        iVar5 = *(int *)(*(int *)(param_1 + 0xc) + uVar9);
        uVar3 = *(undefined4 *)(iVar5 + iVar2);
        *(undefined4 *)(iVar5 + iVar2) = *(undefined4 *)(iVar4 + iVar1);
        *(undefined4 *)(iVar4 + iVar1) = uVar3;
      }
      uVar13 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + uVar8) + iVar1);
      uVar17 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + uVar7) + iVar6);
      if (*(float *)(*(int *)((uVar17 >> 8 & 0xfffffc) + *(int *)(param_4 + 0xc)) +
                     (uVar17 & 0x3ff) * 8 + 4) <
          *(float *)(*(int *)((uVar13 >> 8 & 0xfffffc) + *(int *)(param_4 + 0xc)) +
                     (uVar13 & 0x3ff) * 8 + 4)) {
        iVar4 = *(int *)(*(int *)(param_1 + 0xc) + uVar8);
        iVar5 = *(int *)(*(int *)(param_1 + 0xc) + uVar7);
        uVar3 = *(undefined4 *)(iVar5 + iVar6);
        *(undefined4 *)(iVar5 + iVar6) = *(undefined4 *)(iVar4 + iVar1);
        *(undefined4 *)(iVar4 + iVar1) = uVar3;
      }
      uVar13 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + uVar7) + iVar6);
      uVar17 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + uVar9) + iVar2);
      if (*(float *)(*(int *)((uVar17 >> 8 & 0xfffffc) + *(int *)(param_4 + 0xc)) +
                     (uVar17 & 0x3ff) * 8 + 4) <
          *(float *)(*(int *)((uVar13 >> 8 & 0xfffffc) + *(int *)(param_4 + 0xc)) +
                     (uVar13 & 0x3ff) * 8 + 4)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0xc) + uVar7);
        iVar4 = *(int *)(*(int *)(param_1 + 0xc) + uVar9);
        uVar3 = *(undefined4 *)(iVar4 + iVar2);
        *(undefined4 *)(iVar4 + iVar2) = *(undefined4 *)(iVar1 + iVar6);
        *(undefined4 *)(iVar1 + iVar6) = uVar3;
      }
      while( true ) {
        do {
          uVar16 = uVar16 + 1;
          uVar8 = (uint)(uVar16 >> 8) & 0xfffffc;
          uVar13 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + uVar7) + iVar6);
          iVar1 = (int)((uVar16 & 0x3ff) << 2);
          uVar17 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + uVar8) + iVar1);
        } while (*(float *)(*(int *)((uVar17 >> 8 & 0xfffffc) + *(int *)(param_4 + 0xc)) +
                            (uVar17 & 0x3ff) * 8 + 4) <
                 *(float *)(*(int *)((uVar13 >> 8 & 0xfffffc) + *(int *)(param_4 + 0xc)) +
                            (uVar13 & 0x3ff) * 8 + 4));
        uVar13 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + uVar7) + iVar6);
        do {
          uVar15 = uVar15 - 1;
          uVar9 = (uint)(uVar15 >> 8) & 0xfffffc;
          iVar2 = (int)((uVar15 & 0x3ff) << 2);
          uVar17 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + uVar9) + iVar2);
        } while (*(float *)(*(int *)(*(int *)(param_4 + 0xc) + (uVar13 >> 8 & 0xfffffc)) +
                            (uVar13 & 0x3ff) * 8 + 4) <
                 *(float *)(*(int *)((uVar17 >> 8 & 0xfffffc) + *(int *)(param_4 + 0xc)) +
                            (uVar17 & 0x3ff) * 8 + 4));
        iVar4 = *(int *)(param_1 + 0xc);
        uVar13 = (uint)uVar15;
        uVar17 = (uint)uVar16;
        iVar5 = *(int *)(iVar4 + uVar9);
        if ((int)uVar13 < (int)uVar17) break;
        iVar4 = *(int *)(iVar4 + uVar8);
        uVar3 = *(undefined4 *)(iVar4 + iVar1);
        *(undefined4 *)(iVar4 + iVar1) = *(undefined4 *)(iVar5 + iVar2);
        *(undefined4 *)(iVar5 + iVar2) = uVar3;
      }
      uVar3 = *(undefined4 *)(*(int *)(iVar4 + uVar7) + iVar6);
      *(undefined4 *)(*(int *)(iVar4 + uVar7) + iVar6) = *(undefined4 *)(iVar5 + iVar2);
      *(undefined4 *)(iVar5 + iVar2) = uVar3;
      if ((int)(uVar10 - uVar17) < (int)(uVar13 - uVar11)) {
        *puVar14 = uVar11;
        puVar14[1] = uVar13;
        uVar15 = param_3;
        param_2 = uVar16;
      }
      else {
        puVar14[1] = uVar10;
        *puVar14 = uVar17;
      }
      param_3 = uVar15;
      puVar14 = puVar14 + 2;
    }
LAB_8277d70c:
    uVar15 = param_2;
    param_2 = uVar15 + 1;
    if ((int)param_2 < (int)uVar10) {
      while( true ) {
        uVar7 = (uint)(uVar15 >> 8) & 0xfffffc;
        uVar8 = (uint)(uVar15 + 1 >> 8) & 0xfffffc;
        iVar1 = (int)((uVar15 & 0x3ff) << 2);
        uVar13 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + uVar7) + iVar1);
        iVar2 = (int)((uVar15 + 1 & 0x3ff) << 2);
        uVar17 = *(uint *)(*(int *)(uVar8 + *(int *)(param_1 + 0xc)) + iVar2);
        if (*(float *)(*(int *)((uVar13 >> 8 & 0xfffffc) + *(int *)(param_4 + 0xc)) +
                       (uVar13 & 0x3ff) * 8 + 4) <=
            *(float *)(*(int *)((uVar17 >> 8 & 0xfffffc) + *(int *)(param_4 + 0xc)) +
                       (uVar17 & 0x3ff) * 8 + 4)) break;
        iVar6 = *(int *)(*(int *)(param_1 + 0xc) + uVar7);
        iVar4 = *(int *)(uVar8 + *(int *)(param_1 + 0xc));
        uVar3 = *(undefined4 *)(iVar4 + iVar2);
        *(undefined4 *)(iVar4 + iVar2) = *(undefined4 *)(iVar6 + iVar1);
        *(undefined4 *)(iVar6 + iVar1) = uVar3;
        if ((uint)uVar15 == uVar11) break;
        uVar15 = uVar15 - 1;
      }
      goto LAB_8277d70c;
    }
    if (puVar14 <= auStack_1a0) {
      return;
    }
    param_2 = (ulonglong)puVar14[-2];
    param_3 = (ulonglong)puVar14[-1];
    puVar14 = puVar14 + -2;
  } while( true );
}

