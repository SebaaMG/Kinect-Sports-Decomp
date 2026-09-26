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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern int fn_8265C9E0();
extern int fn_828252D0();
extern int fn_828252D8();
extern int fn_82826568();
extern int fn_828277F0();
extern int fn_82827980();
extern int fn_82828B78();
extern int fn_82829758();
extern int fn_82829A80();
extern int fn_8282BBD0();
extern int fn_82830268();
extern int fn_828302D8();
extern int fn_828311B0();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_bc;
extern unsigned int uStack_8e;
extern unsigned int uStack_8f;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;


void fn_828308B8(int param_1,int param_2)

{
  int iVar2;
  int iVar3;
  longlong lVar1;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_c0 [4];
  int iStack_bc;
  undefined4 auStack_b8 [2];
  undefined1 auStack_b0 [16];
  int iStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined2 uStack_8e;
  
  iVar3 = 0;
  iVar2 = fn_828302D8();
  if (*(int *)(iVar2 + 0x28) != 0) {
    iVar3 = fn_828252D0(*(int *)(iVar2 + 0x28) << 2);
  }
  *(undefined1 *)(param_2 + 0x3f1) = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar14 = 0;
    iVar2 = iVar3;
    do {
      piVar5 = (int *)(iVar14 + *(int *)(param_1 + 0xe8));
      lVar1 = -0x7dfe0fbc;
      if ((ulonglong)*(uint *)(param_1 + 0xe4) != 0) {
        lVar1 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xe0) + *piVar5 * 4 + -4) +
                (ulonglong)*(uint *)(param_1 + 0xe4);
      }
      iVar10 = 1 << (*(byte *)(iVar14 + *(int *)(param_1 + 0xe8) + 0xd) & 0x3f);
      fn_82829A80(param_2,lVar1,
                        (ulonglong)
                        *(uint *)((uint)*(byte *)(piVar5 + 3) * 0x21 + *(int *)(param_1 + 0x114) +
                                 -0x21) + (ulonglong)*(uint *)(param_1 + 200),auStack_b8,iVar10);
      if (*(int *)(iVar14 + *(int *)(param_1 + 0xe8) + 8) != 0) {
        iVar6 = iVar14 + *(int *)(param_1 + 0xe8);
        fn_82829758(auStack_b8[0],iVar2,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8),
                          iVar10,1);
      }
      uVar9 = uVar9 + 1;
      iVar14 = iVar14 + 0xe;
      iVar2 = iVar2 + 4;
    } while (uVar9 < *(uint *)(param_1 + 0x28));
  }
  iVar2 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar14 = *(int *)(param_1 + 0xec);
    iVar10 = 0;
    do {
      uVar15 = 0;
      if (*(int *)(iVar10 + iVar14 + 4) != 0) {
        iVar6 = iVar2 << 2;
        do {
          piVar5 = (int *)(iVar10 + *(int *)(param_1 + 0xec));
          uVar4 = (ulonglong)*(uint *)(iVar6 + *(int *)(param_1 + 0xf0));
          fn_8282BBD0(param_2,*(uint *)(*piVar5 * 4 + iVar3 + -4) + uVar4,uVar4,*piVar5,
                          piVar5[3],piVar5[2],piVar5[4]);
          iVar14 = *(int *)(param_1 + 0xec);
          uVar15 = uVar15 + 1;
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar15 < *(uint *)(iVar10 + iVar14 + 4));
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 0x14;
    } while (uVar9 < *(uint *)(param_1 + 0x2c));
  }
  iVar2 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar14 = *(int *)(param_1 + 0xfc);
    iVar10 = 0;
    do {
      uVar15 = 0;
      if (*(int *)(iVar10 + iVar14 + 8) != 0) {
        iVar6 = iVar2 << 2;
        do {
          puVar7 = (undefined4 *)(iVar10 + *(int *)(param_1 + 0xfc));
          fn_82830268(param_2,*(undefined4 *)(iVar6 + *(int *)(param_1 + 0x100)),*puVar7,puVar7[1]
                       );
          iVar14 = *(int *)(param_1 + 0xfc);
          uVar15 = uVar15 + 1;
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar15 < *(uint *)(iVar10 + iVar14 + 8));
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 0xc;
    } while (uVar9 < *(uint *)(param_1 + 0x34));
  }
  *(undefined4 *)(param_2 + 0x3e4) = 0;
  iVar2 = 0;
  uVar9 = 0;
  if (*(char *)(param_1 + 0x51) != '\0') {
    iVar14 = 0;
    do {
      puVar8 = (uint *)(*(int *)(param_1 + 0x114) + iVar14);
      iVar10 = *(int *)((int)puVar8 + 5);
      lVar12 = (ulonglong)*puVar8 + (ulonglong)*(uint *)(param_1 + 200);
      fn_82827980(param_2,lVar12,&iStack_bc);
      lVar1 = fn_8265C9E0(0x10);
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        fn_82828B78(lVar1,auStack_c0,auStack_c0);
      }
      *(int *)(iStack_bc + 0x28) = (int)lVar1;
      if (iVar10 == 0) {
        fn_828277F0(param_2,0xffffffff8201f048,lVar12,iStack_bc + 0x24,
                        1 << (*(byte *)(*(int *)(param_1 + 0x114) + iVar14 + 4) & 0x3f));
      }
      else {
        *(undefined4 *)(param_2 + 0x3e4) =
             *(undefined4 *)(*(int *)(param_1 + 0xe8) + iVar10 * 0xe + -0xe);
        fn_82826568(param_2,iVar10,iStack_bc + 0x24);
        uVar15 = 0;
        if (*(char *)(param_1 + 0x53) != '\0') {
          iVar6 = *(int *)(param_1 + 0x118);
          iVar11 = 0;
          do {
            if ((*(int *)(iVar6 + iVar11) == iVar10) &&
               (uVar13 = 0, *(int *)(iVar6 + iVar11 + 4) != 0)) {
              iVar16 = iVar2 << 4;
              do {
                puVar7 = (undefined4 *)(iVar16 + *(int *)(param_1 + 0x11c));
                iStack_9c = puVar7[1];
                uStack_8f = *(undefined1 *)((int)puVar7 + 0xd);
                uStack_90 = *(undefined1 *)(puVar7 + 3);
                uStack_8e = *(undefined2 *)((int)puVar7 + 0xe);
                uStack_98 = *puVar7;
                uStack_94 = puVar7[2];
                iStack_a0 = *(int *)(*(int *)(iStack_bc + 0x24) + 0x44) + iStack_9c;
                fn_828311B0(auStack_b0,*(undefined4 *)(iStack_bc + 0x28),&iStack_a0);
                iVar6 = *(int *)(param_1 + 0x118);
                uVar13 = uVar13 + 1;
                iVar2 = iVar2 + 1;
                iVar16 = iVar16 + 0x10;
              } while (uVar13 < *(uint *)(iVar6 + iVar11 + 4));
            }
            uVar15 = uVar15 + 1;
            iVar11 = iVar11 + 8;
          } while (uVar15 < *(byte *)(param_1 + 0x53));
        }
      }
      uVar9 = uVar9 + 1;
      iVar14 = iVar14 + 0x21;
    } while (uVar9 < *(byte *)(param_1 + 0x51));
  }
  fn_828252D8(iVar3);
  *(undefined1 *)(param_2 + 0x3f1) = 1;
  return;
}

