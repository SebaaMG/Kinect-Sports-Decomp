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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_160;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8253B050();
extern int fn_825443D8();
extern int fn_82544528();
extern int fn_82544F40();
extern int fn_825473C0();
extern int fn_825C8CA8();
extern int fn_82631C78();
extern int fn_82639EA8();
extern int fn_82639F28();
extern int fn_8263FB38();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_128;
extern unsigned int uStack_130;
extern unsigned int uStack_138;
extern unsigned int uStack_140;


void fn_82577848(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_r0;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_160 [32];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 auStack_110 [2];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [12];
  int aiStack_c4 [9];
  undefined1 auStack_a0 [160];
  
  iVar6 = lbl_8320A898;
  if (((-1 < param_2) && (*(int *)((param_2 + 0xb) * 4 + param_1) == 0)) &&
     (lVar14 = 0, 0 < *(int *)(param_1 + 8))) {
    bVar1 = *(byte *)(lbl_8320A898 + 0x2903);
    bVar2 = *(byte *)(lbl_8320A898 + 0x2901);
    *(uint *)(lbl_8320A898 + 0x2934) = *(uint *)(lbl_8320A898 + 0x2934) & 0xfffe3fff | 0x8000;
    *(ulonglong *)(iVar6 + 0x10) = *(ulonglong *)(iVar6 + 0x10) | 0x800;
    *(uint *)(iVar6 + 0x2934) = *(uint *)(iVar6 + 0x2934) | 0x700;
    *(ulonglong *)(iVar6 + 0x10) = *(ulonglong *)(iVar6 + 0x10) | 0x800;
    *(undefined4 *)(iVar6 + 0x2f18) = 1;
    *(uint *)(iVar6 + 0x2934) =
         *(uint *)(iVar6 + 0x2934) & 0xfffffffe | -(uint)(*(int *)(iVar6 + 0x3158) != 0) & 1;
    *(ulonglong *)(iVar6 + 0x10) = *(ulonglong *)(iVar6 + 0x10) | 0x20800;
    *(byte *)(iVar6 + 0x2903) = bVar1 | 0x40;
    *(ulonglong *)(iVar6 + 0x10) = *(ulonglong *)(iVar6 + 0x10) | 0x10000000;
    *(byte *)(iVar6 + 0x2901) = bVar2 & 0x3b | 0x40;
    *(ulonglong *)(iVar6 + 0x10) = *(ulonglong *)(iVar6 + 0x10) | 0x10000000;
    fn_82631C78(iVar6,0,0x24,0x5c);
    fn_82639F28(iVar6,auStack_160);
    uVar7 = fn_825443D8(param_2);
    uVar8 = fn_82544528();
    fn_82639EA8(iVar6,auStack_160);
    if (lbl_8329618C == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(lbl_8329618C + 4);
    }
    if (((iVar9 == 0) || (*(int *)(iVar9 + 0x1a8) == 0)) ||
       (*(float *)(*(int *)(iVar9 + 0x1a8) + 0x1f0) <= lbl_821CC160)) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
    piVar12 = (int *)(param_1 + 0xc);
    lVar15 = 8;
    piVar13 = piVar12;
    do {
      if ((*piVar13 != 0) && (lbl_821CC160 < *(float *)(*(int *)(*piVar13 + 0x54) + 0x194))) {
        iVar9 = 0;
      }
      piVar13 = piVar13 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    fn_825473C0(param_2,auStack_160,uVar8);
    dVar16 = (double)lbl_821CA460;
    if (iVar9 == 0) {
      fn_8263FB38(dVar16,iVar6,0,auStack_160,uVar7,0,0,0,0);
    }
    fn_8263FB38(dVar16,iVar6,0x14,auStack_160,uVar8,0,0,0,0);
    puVar10 = &lbl_83296890;
    iVar3 = (&lbl_83296C80)[param_2 * 0x2c];
    if (iVar3 != 0) {
      puVar10 = &lbl_83296C20 + param_2 * 0x16;
    }
    puVar4 = (undefined4 *)(in_r0 + (int)puVar10 & 0xfffffff0);
    uVar17 = puVar4[1];
    uVar18 = puVar4[2];
    uVar19 = puVar4[3];
    puVar5 = (undefined4 *)((int)&uStack_140 + in_r0 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar17;
    puVar5[2] = uVar18;
    puVar5[3] = uVar19;
    uVar17 = *(undefined4 *)((int)puVar10 + 0x14);
    uVar18 = *(undefined4 *)(puVar10 + 3);
    uVar19 = *(undefined4 *)((int)puVar10 + 0x1c);
    puVar4 = (undefined4 *)((int)&uStack_130 + in_r0 & 0xfffffff0);
    *puVar4 = *(undefined4 *)(puVar10 + 2);
    puVar4[1] = uVar17;
    puVar4[2] = uVar18;
    puVar4[3] = uVar19;
    uVar17 = *(undefined4 *)((int)puVar10 + 0x24);
    uVar18 = *(undefined4 *)(puVar10 + 5);
    uVar19 = *(undefined4 *)((int)puVar10 + 0x2c);
    puVar4 = (undefined4 *)((int)&uStack_120 + in_r0 & 0xfffffff0);
    *puVar4 = *(undefined4 *)(puVar10 + 4);
    puVar4[1] = uVar17;
    puVar4[2] = uVar18;
    puVar4[3] = uVar19;
    uVar17 = *(undefined4 *)((int)puVar10 + 0x34);
    uVar18 = *(undefined4 *)(puVar10 + 7);
    uVar19 = *(undefined4 *)((int)puVar10 + 0x3c);
    puVar11 = (undefined8 *)(&lbl_83296BE0 + param_2 * 0x2c);
    puVar4 = (undefined4 *)((int)auStack_110 + in_r0 & 0xfffffff0);
    *puVar4 = *(undefined4 *)(puVar10 + 6);
    puVar4[1] = uVar17;
    puVar4[2] = uVar18;
    puVar4[3] = uVar19;
    if (iVar3 == 0) {
      puVar11 = &lbl_832968D0;
    }
    puVar4 = (undefined4 *)(in_r0 + (int)puVar11 & 0xfffffff0);
    uVar17 = puVar4[1];
    uVar18 = puVar4[2];
    uVar19 = puVar4[3];
    puVar5 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar17;
    puVar5[2] = uVar18;
    puVar5[3] = uVar19;
    piVar13 = aiStack_c4;
    uVar17 = *(undefined4 *)((int)puVar11 + 0x14);
    uVar18 = *(undefined4 *)(puVar11 + 3);
    uVar19 = *(undefined4 *)((int)puVar11 + 0x1c);
    puVar4 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
    *puVar4 = *(undefined4 *)(puVar11 + 2);
    puVar4[1] = uVar17;
    puVar4[2] = uVar18;
    puVar4[3] = uVar19;
    uVar17 = *(undefined4 *)((int)puVar11 + 0x24);
    uVar18 = *(undefined4 *)(puVar11 + 5);
    uVar19 = *(undefined4 *)((int)puVar11 + 0x2c);
    lVar15 = 8;
    puVar4 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
    *puVar4 = *(undefined4 *)(puVar11 + 4);
    puVar4[1] = uVar17;
    puVar4[2] = uVar18;
    puVar4[3] = uVar19;
    uVar17 = *(undefined4 *)((int)puVar11 + 0x34);
    uVar18 = *(undefined4 *)(puVar11 + 7);
    uVar19 = *(undefined4 *)((int)puVar11 + 0x3c);
    puVar4 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
    *puVar4 = *(undefined4 *)(puVar11 + 6);
    puVar4[1] = uVar17;
    puVar4[2] = uVar18;
    puVar4[3] = uVar19;
    do {
      if (*piVar12 != 0) {
        piVar13 = piVar13 + 1;
        *piVar13 = *piVar12;
        lVar14 = lVar14 + 1;
      }
      piVar12 = piVar12 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    if (0 < (int)lVar14) {
      fn_8253B050(auStack_a0,uStack_140,uStack_138,uStack_130,uStack_128,uStack_120,uStack_118,
                   auStack_110[0]);
      fn_82639F28(iVar6,auStack_160);
      *(uint *)(iVar6 + 0x29c0) = *(uint *)(iVar6 + 0x29c0) | 1;
      *(ulonglong *)(iVar6 + 0x20) = *(ulonglong *)(iVar6 + 0x20) | 0x800000000;
      if (0 < (int)lVar14) {
        piVar13 = aiStack_c4;
        do {
          piVar13 = piVar13 + 1;
          fn_825C8CA8(*piVar13,iVar6,&uStack_140,auStack_100,iVar9);
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      *(uint *)(iVar6 + 0x29c0) = *(uint *)(iVar6 + 0x29c0) & 0xfffffffe;
      *(ulonglong *)(iVar6 + 0x20) = *(ulonglong *)(iVar6 + 0x20) | 0x800000000;
      fn_82544F40();
    }
    *(byte *)(iVar6 + 0x2903) = bVar1 & 0xbf;
    *(ulonglong *)(iVar6 + 0x10) = *(ulonglong *)(iVar6 + 0x10) | 0x10000000;
  }
  return;
}

