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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_69c;
extern unsigned int fStack_6a4;
extern unsigned int fStack_6a8;
extern unsigned int fStack_6ac;
extern unsigned int fStack_6b0;
extern int fn_826310E0();
extern int fn_82631290();
extern int fn_82631578();
extern int fn_82631920();
extern unsigned int lbl_82192734;
extern float lbl_821958F8;
extern unsigned int lbl_82195C08;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_6b4;
extern unsigned int uStack_6b8;
extern unsigned int uStack_6bc;
extern unsigned int uStack_6c0;
extern unsigned int uStack_6c4;
extern unsigned int uStack_6c8;
extern unsigned int uStack_6d0;
extern unsigned int uStack_6d4;
extern unsigned int uStack_6d8;
extern unsigned int uStack_6dc;
extern unsigned int uStack_6e0;
extern unsigned int uStack_6e8;
extern unsigned int uStack_6f0;


void fn_825D7C08(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  int *piVar22;
  int iVar23;
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  uint uStack_6f0;
  uint uStack_6e8;
  uint uStack_6e0;
  uint uStack_6dc;
  uint uStack_6d8;
  uint uStack_6d4;
  undefined8 uStack_6d0;
  uint uStack_6c8;
  uint uStack_6c4;
  uint uStack_6c0;
  undefined4 uStack_6bc;
  uint uStack_6b8;
  uint uStack_6b4;
  struct { float first; float second; } stack_pair_6b0;

  float fStack_6a8;
  float fStack_6a4;
  undefined4 auStack_69c [407];
  
  puVar17 = lbl_8320A898;
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    uVar11 = *(uint *)(param_1 + 0x20);
    if (uVar11 == 0) {
      iVar26 = 0x1c;
      iVar25 = 7;
      uVar20 = (ulonglong)*(uint *)(param_1 + 0x28) * 5;
    }
    else if (uVar11 == 1) {
      iVar26 = 0x20;
      iVar25 = 8;
      uVar20 = ((ulonglong)*(uint *)(param_1 + 0x28) & 0x3fffffff) << 2;
    }
    else if (uVar11 < 3) {
      iVar26 = 0x28;
      iVar25 = 10;
      uVar20 = ((ulonglong)*(uint *)(param_1 + 0x28) & 0x3fffffff) << 2;
    }
    else {
      uVar20 = 0;
      iVar26 = 0x20;
      iVar25 = 8;
    }
    uVar18 = (uint)uVar20;
    if (uVar11 < 2) {
      uVar11 = *(uint *)(param_1 + 0x138);
      uStack_6e0 = ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      *(uint *)(lbl_8320A898 + 0x1f0) = uStack_6e0;
      uStack_6b4 = uVar18 & 0x7fffff | 0x4b000000;
      uStack_6d8 = uStack_6d8 & 0xc0f8 | 0x4b072502;
      uStack_6b8 = uStack_6b8 & 0xc0f8 | 0x4b072002;
      uStack_6c0 = ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      *(uint *)((int)puVar17 + 0xf8c) = uStack_6b4;
      uVar21 = (uint)((uVar20 & 0xffffffff) << 1) & 0x7ffffe | 0x4b000000;
      *(undefined4 *)((int)puVar17 + 0xf84) = 0x4b000000;
      *(uint *)(puVar17 + 0x1f1) = uStack_6d8;
      uVar18 = uStack_6c8 & 0xc0f8 | 0x4b072402;
      uStack_6f0 = ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      uStack_6d0 = CONCAT44(((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2,
                            0x4b000000) | 0x4000000000000000;
      *puVar17 = *puVar17 | 0x80000000;
      puVar17 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x1f2) = uStack_6c0;
      *(undefined4 *)((int)puVar17 + 0xf94) = 0x4b000000;
      *(uint *)(puVar17 + 499) = uStack_6b8;
      *(uint *)((int)puVar17 + 0xf9c) = uStack_6b4;
      *puVar17 = *puVar17 | 0x80000000;
      puVar17 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 500) = uStack_6f0;
      *(undefined4 *)((int)puVar17 + 0xfa4) = 0x4b000000;
      *(uint *)(puVar17 + 0x1f5) = uStack_6e8 & 0xc0f8 | 0x4b020602;
      *(uint *)((int)puVar17 + 0xfac) = uVar21;
      *puVar17 = *puVar17 | 0x80000000;
      puVar17 = lbl_8320A898;
      *(float *)(lbl_8320A898 + 0x1f6) = (((U64)(uStack_6d0) >> 0) & 0xFFFFFFFF);
      *(undefined4 *)((int)puVar17 + 0xfb4) = 0x4b000000;
      uStack_6c8 = uVar18;
      uStack_6c4 = uVar21;
    }
    else {
      uVar11 = *(uint *)(param_1 + 0x138);
      uVar19 = ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      uStack_6c8 = uStack_6c8 & 0xc0f8 | 0x4b072002;
      uStack_6d0 = CONCAT44(uVar19,0x4b000000);
      *(uint *)(lbl_8320A898 + 0x1f0) =
           ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      *(uint *)(puVar17 + 0x1f1) = uStack_6e8 & 0xc0f8 | 0x4b072602;
      uVar21 = (uint)((uVar20 & 0xffffffff) << 1) & 0x7ffffe | 0x4b000000;
      uStack_6c4 = uVar18 & 0x7fffff | 0x4b000000;
      uStack_6c0 = ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      *(undefined4 *)((int)puVar17 + 0xf84) = 0x4b000000;
      uStack_6b8 = uStack_6b8 & 0xc0f8 | 0x4b020602;
      *(uint *)((int)puVar17 + 0xf8c) = uVar18 >> 1 & 0x7fffff | 0x4b000000;
      uStack_6e0 = ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      uVar18 = uStack_6d8 & 0xc0f8 | 0x4b072402;
      *puVar17 = *puVar17 | 0x80000000;
      puVar17 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x1f2) = uVar19;
      *(undefined4 *)((int)puVar17 + 0xf94) = 0x4b000000;
      *(uint *)(puVar17 + 499) = uStack_6c8;
      *(uint *)((int)puVar17 + 0xf9c) = uStack_6c4;
      *puVar17 = *puVar17 | 0x80000000;
      puVar17 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 500) = uStack_6c0;
      *(undefined4 *)((int)puVar17 + 0xfa4) = 0x4b000000;
      *(uint *)(puVar17 + 0x1f5) = uStack_6b8;
      *(uint *)((int)puVar17 + 0xfac) = uVar21;
      *puVar17 = *puVar17 | 0x80000000;
      puVar17 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x1f6) = uStack_6e0;
      *(undefined4 *)((int)puVar17 + 0xfb4) = 0x4b000000;
      uStack_6d8 = uVar18;
      uStack_6b4 = uVar21;
    }
    puVar17 = lbl_8320A898;
    uStack_6bc = 0x4b000000;
    uStack_6dc = 0x4b000000;
    *(uint *)(lbl_8320A898 + 0x1f7) = uVar18;
    *(uint *)((int)puVar17 + 0xfbc) = uVar21;
    *puVar17 = *puVar17 | 0x80000000;
    fVar16 = lbl_821CA460;
    fVar15 = lbl_82192734;
    iVar23 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lbl_83265A28 = iVar23 * 0x19660d + 0x3c6ef35f;
    uVar20 = CONCAT44(iVar23,(((U64)(uStack_6d0) >> 32) & 0xFFFFFFFF)) & 0x7fffffffffffff;
    uStack_6d0 = ((((U64)(uStack_6d0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)((uint)(uVar20 >> 0x20) | 0x3f800000))) & ((U64)0xFFFFFFFF)) << 0));
    uVar11 = *(uint *)(param_1 + 0x170);
    fVar14 = (((U64)(uStack_6d0) >> 0) & 0xFFFFFFFF) - lbl_821CA460;
    uStack_6d0 = ((((U64)(uStack_6d0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((undefined4)uVar20)) & ((U64)0xFFFFFFFF)) << 32));
    uStack_6d0 = CONCAT44(lbl_83265A28,(((U64)(uStack_6d0) >> 32) & 0xFFFFFFFF)) & 0x7fffffffffffff | 0x3f80000000000000;
    uVar18 = 0;
    stack_pair_6b0.first = fVar14 * lbl_82195C08 + lbl_821CA460;
    stack_pair_6b0.second = ((((U64)(uStack_6d0) >> 0) & 0xFFFFFFFF) - lbl_821CA460) * lbl_821958F8;
    fStack_6a4 = (float)*(uint *)(param_1 + 0x28);
    fStack_6a8 = (float)*(uint *)(param_1 + 0x2c);
    if (uVar11 != 0) {
      iVar23 = *(int *)(param_1 + 0x20);
      piVar22 = (int *)(param_1 + 0x148);
      puVar24 = auStack_69c;
      do {
        iVar12 = *piVar22;
        iVar13 = *(int *)(iVar12 + 0x160);
        uVar2 = *(undefined4 *)(iVar12 + 0x7c);
        uVar3 = *(undefined4 *)(iVar12 + 0x80);
        uVar4 = *(undefined4 *)(iVar12 + 200);
        uVar5 = *(undefined4 *)(iVar12 + 0x84);
        uVar6 = *(undefined4 *)(iVar12 + 0x88);
        uVar7 = *(undefined4 *)(iVar12 + 0x8c);
        puVar24[-1] = *(undefined4 *)(iVar12 + 0x78);
        *puVar24 = uVar2;
        puVar24[1] = uVar3;
        puVar24[2] = uVar4;
        puVar24[3] = uVar5;
        puVar24[4] = uVar6;
        puVar24[5] = uVar7;
        fVar14 = fVar15;
        if (iVar13 != 0) {
          fVar14 = fVar16;
        }
        iVar12 = *piVar22;
        puVar24[6] = fVar14;
        uVar2 = *(undefined4 *)(iVar12 + 0xd0);
        uVar3 = *(undefined4 *)(iVar12 + 0xd4);
        uVar4 = *(undefined4 *)(iVar12 + 0xd8);
        uVar5 = *(undefined4 *)(iVar12 + 0x98);
        uVar6 = *(undefined4 *)(iVar12 + 0x9c);
        uVar7 = *(undefined4 *)(iVar12 + 0xa4);
        uVar8 = *(undefined4 *)(iVar12 + 0xa8);
        uVar9 = *(undefined4 *)(iVar12 + 0xb8);
        uVar10 = *(undefined4 *)(iVar12 + 0xbc);
        puVar24[7] = *(undefined4 *)(iVar12 + 0xcc);
        puVar24[8] = uVar2;
        puVar24[9] = uVar3;
        puVar24[10] = uVar4;
        puVar24[0xb] = uVar5;
        puVar24[0xc] = uVar6;
        puVar24[0xd] = uVar7;
        puVar24[0xe] = uVar8;
        puVar24[0xf] = uVar9;
        puVar24[0x10] = uVar10;
        if (iVar23 == 0) {
          iVar13 = *(int *)(iVar12 + 0x160);
          uVar2 = *(undefined4 *)(iVar12 + 0x13c);
          puVar24[0x11] = *(undefined4 *)(iVar12 + 0x138);
          puVar24[0x12] = uVar2;
          if (iVar13 != 0) {
            uVar2 = *(undefined4 *)(iVar12 + 0x16c);
            uVar3 = *(undefined4 *)(iVar12 + 0x170);
            uVar4 = *(undefined4 *)(iVar12 + 0x174);
            puVar24[0x13] = *(undefined4 *)(iVar12 + 0x168);
            puVar24[0x14] = uVar2;
            puVar24[0x15] = uVar3;
            puVar24[0x16] = uVar4;
          }
          uVar2 = *(undefined4 *)(*piVar22 + 0x178);
          puVar24[0x17] = *(undefined4 *)(*piVar22 + 0x130);
          puVar24[0x18] = uVar2;
        }
        else {
          cVar1 = *(char *)(param_1 + 0xfe);
          uVar2 = *(undefined4 *)(iVar12 + 0xc4);
          uVar3 = *(undefined4 *)(iVar12 + 0x138);
          uVar4 = *(undefined4 *)(iVar12 + 0x13c);
          uVar5 = *(undefined4 *)(iVar12 + 0x178);
          puVar24[0x11] = *(undefined4 *)(iVar12 + 0xc0);
          puVar24[0x12] = uVar2;
          puVar24[0x13] = uVar3;
          puVar24[0x14] = uVar4;
          puVar24[0x15] = uVar5;
          if (cVar1 != '\0') {
            puVar24[0x16] = *(undefined4 *)(*piVar22 + 0x1a0);
          }
          if (*(int *)(*piVar22 + 0x160) != 0) {
            iVar12 = *piVar22;
            uVar2 = *(undefined4 *)(iVar12 + 0x16c);
            uVar3 = *(undefined4 *)(iVar12 + 0x170);
            uVar4 = *(undefined4 *)(iVar12 + 0x174);
            puVar24[0x17] = *(undefined4 *)(iVar12 + 0x168);
            puVar24[0x18] = uVar2;
            puVar24[0x19] = uVar3;
            puVar24[0x1a] = uVar4;
          }
          iVar13 = *piVar22;
          uStack_6d0 = (ulonglong)*(int *)(iVar13 + 0x104);
          puVar24[0x1e] = *(undefined4 *)(iVar13 + 0x110);
          iVar12 = *(int *)(iVar13 + 0x108);
          puVar24[0x1d] = *(undefined4 *)(iVar13 + 0x10c);
          puVar24[0x1c] = (float)(longlong)iVar12;
          puVar24[0x1b] = (float)(longlong)uStack_6d0;
          if (iVar23 == 2) {
            iVar12 = *piVar22;
            uVar2 = *(undefined4 *)(iVar12 + 0x40);
            uVar3 = *(undefined4 *)(iVar12 + 0x44);
            uVar4 = *(undefined4 *)(iVar12 + 0x48);
            uVar5 = *(undefined4 *)(iVar12 + 0x4c);
            uVar6 = *(undefined4 *)(iVar12 + 0x50);
            uVar7 = *(undefined4 *)(iVar12 + 0x54);
            puVar24[0x1f] = *(undefined4 *)(iVar12 + 0x3c);
            puVar24[0x20] = uVar2;
            puVar24[0x21] = uVar3;
            puVar24[0x23] = uVar4;
            puVar24[0x24] = uVar5;
            puVar24[0x25] = uVar6;
            puVar24[0x26] = uVar7;
          }
        }
        uVar18 = uVar18 + 1;
        piVar22 = piVar22 + 1;
        puVar24 = puVar24 + iVar26;
      } while (uVar18 < uVar11);
    }
    uStack_6d4 = uStack_6b4;
    fn_826310E0(lbl_8320A898,0x84,&stack_pair_6b0.first,(longlong)(int)uVar11 * (longlong)iVar25 + 1,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((longlong)(int)uVar11 * (longlong)iVar25 + 0x84U & 0xffffffff) >> 2) - 0x21 &
                 0x7f)) >> 0x21);
    uStack_6e0 = (uint)*(byte *)(param_1 + 0xfc);
    uStack_6dc = (uint)*(byte *)(param_1 + 0xfd);
    if ((*(byte *)(param_1 + 0xfc) == 0) && (uStack_6dc == 0)) {
      uStack_6d8 = 1;
    }
    else {
      uStack_6d8 = 0;
    }
    uStack_6d4 = (uint)*(byte *)(param_1 + 0xfe);
    fn_82631290(lbl_8320A898,0,&uStack_6e0,4);
    puVar17 = lbl_8320A898;
    *(undefined4 *)(lbl_8320A898 + 0x5db) = 0;
    puVar17[2] = puVar17[2] | 0x80000;
    fn_82631920(lbl_8320A898,*(undefined4 *)(param_1 + 0x174));
                    /* WARNING: Subroutine does not return */
    fn_82631578(lbl_8320A898,*(undefined4 *)(param_1 + 0x178));
  }
  return;
}

