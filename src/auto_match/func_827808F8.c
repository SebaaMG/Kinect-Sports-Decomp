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
extern int fn_8277E9F8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_827808F8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  double dVar25;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  
  uVar21 = 1;
  uVar22 = 1;
  uStack_a0 = *(uint *)**(int **)(param_1 + 0x1a0);
  uStack_9c = *(uint *)(**(int **)(param_1 + 0x1b0) + 4);
  uStack_98 = ((uint *)**(int **)(param_1 + 0x1a0))[1];
  if (((uStack_a0 != uStack_9c) && (uStack_9c != uStack_98)) && (uStack_98 != uStack_a0)) {
    fn_8277E9F8(param_1 + 0x184,&uStack_a0);
  }
  iVar8 = *(int *)(param_1 + 0x194);
  uVar20 = 2;
  uVar19 = 2;
  uVar18 = *(int *)(param_1 + 0x1a4) - 1;
  dVar25 = (double)lbl_821AAD20;
  do {
    while (iVar8 - 1U <= uVar21) {
      if (uVar18 <= uVar22) {
        return;
      }
      uVar17 = uVar22 + 1;
      uVar20 = uVar20 + 1;
      uStack_9c = *(uint *)(*(int *)((uVar22 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                           (uVar22 & 0xff) * 4);
      uStack_98 = *(uint *)(*(int *)((uVar17 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                           (uVar17 * 4 & 0x3fc));
      uStack_a0 = *(uint *)(*(int *)((uVar21 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                           (uVar21 & 0xff) * 4);
      uVar22 = uVar17;
LAB_827809d4:
      if (((uStack_a0 != uStack_9c) && (uStack_9c != uStack_98)) && (uStack_98 != uStack_a0)) {
        fn_8277E9F8(param_1 + 0x184,&uStack_a0);
      }
    }
    iVar9 = *(int *)(param_1 + 0x1a0);
    iVar10 = *(int *)(param_1 + 0x1b0);
    iVar12 = *(int *)((uVar21 >> 6 & 0x3fffffc) + iVar9);
    if (uVar18 <= uVar22) {
      uVar17 = uVar21 + 1;
      uVar19 = uVar19 + 1;
      uStack_a0 = *(uint *)(iVar12 + (uVar21 & 0xff) * 4);
      uStack_9c = *(uint *)(*(int *)((uVar22 >> 6 & 0x3fffffc) + iVar10) + (uVar22 & 0xff) * 4);
      uStack_98 = *(uint *)(*(int *)((uVar17 >> 6 & 0x3fffffc) + iVar9) + (uVar17 * 4 & 0x3fc));
      uVar21 = uVar17;
      goto LAB_827809d4;
    }
    iVar11 = *(int *)(param_1 + 0x110);
    uStack_a0 = *(uint *)(iVar12 + (uVar21 & 0xff) * 4);
    uStack_9c = *(uint *)(*(int *)((uVar22 >> 6 & 0x3fffffc) + iVar10) + (uVar22 & 0xff) * 4);
    uStack_98 = *(uint *)(*(int *)((uVar19 >> 6 & 0x3fffffc) + iVar9) + (uVar19 & 0xff) * 4);
    iVar12 = (uStack_a0 & 0x3ff) * 8;
    uStack_88 = *(uint *)(*(int *)((uVar20 >> 6 & 0x3fffffc) + iVar10) + (uVar20 & 0xff) * 4);
    pfVar15 = (float *)(*(int *)((uStack_9c >> 8 & 0xfffffc) + iVar11) + (uStack_9c & 0x3ff) * 8);
    iVar9 = *(int *)((uStack_a0 >> 8 & 0xfffffc) + iVar11);
    pfVar16 = (float *)(*(int *)((uStack_98 >> 8 & 0xfffffc) + iVar11) + (uStack_98 & 0x3ff) * 8);
    fVar1 = *pfVar15;
    pfVar14 = (float *)(*(int *)((uStack_88 >> 8 & 0xfffffc) + iVar11) + (uStack_88 & 0x3ff) * 8);
    fVar7 = *(float *)(iVar9 + iVar12);
    fVar2 = pfVar16[1];
    fVar3 = *(float *)(iVar9 + iVar12 + 4);
    fVar4 = *pfVar16;
    fVar13 = fVar4 - fVar1;
    bVar23 = (double)((pfVar15[1] - fVar3) * fVar13 - (fVar2 - pfVar15[1]) * (fVar1 - fVar7)) <=
             dVar25;
    fVar5 = *pfVar14;
    fVar6 = pfVar14[1];
    bVar24 = (double)((pfVar15[1] - fVar3) * (fVar5 - fVar1) -
                     (fVar6 - pfVar15[1]) * (fVar1 - fVar7)) <= dVar25;
    if ((bVar23) && (bVar24)) {
      bVar23 = (double)((pfVar14[1] - pfVar15[1]) * (fVar4 - fVar5) -
                       (fVar2 - pfVar14[1]) * (fVar5 - fVar1)) <= dVar25;
      bVar24 = dVar25 <= (double)((pfVar16[1] - fVar3) * (fVar5 - fVar4) -
                                 (fVar6 - pfVar16[1]) * (fVar4 - fVar7));
    }
    uStack_90 = uStack_a0;
    uStack_8c = uStack_9c;
    if ((bVar23) && (bVar24)) {
      if ((fVar2 - pfVar15[1]) * (fVar2 - pfVar15[1]) + fVar13 * fVar13 <
          (fVar6 - fVar3) * (fVar6 - fVar3) + (fVar5 - fVar7) * (fVar5 - fVar7)) goto LAB_82780c14;
LAB_82780bdc:
      if (((uStack_a0 != uStack_9c) && (uStack_9c != uStack_88)) && (uStack_88 != uStack_a0)) {
        fn_8277E9F8(param_1 + 0x184,&uStack_90);
      }
      uVar22 = uVar22 + 1;
      uVar20 = uVar20 + 1;
    }
    else {
      if (!bVar23) goto LAB_82780bdc;
LAB_82780c14:
      if (((uStack_a0 != uStack_9c) && (uStack_9c != uStack_98)) && (uStack_98 != uStack_a0)) {
        fn_8277E9F8(param_1 + 0x184,&uStack_a0);
      }
      uVar21 = uVar21 + 1;
      uVar19 = uVar19 + 1;
    }
  } while( true );
}

