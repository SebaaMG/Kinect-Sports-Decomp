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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_8253B050();
extern int fn_825E5218();
extern int fn_825E52F8();
extern int fn_825E5678();
extern int fn_825E57E8();
extern int fn_82A1EFC0();
extern unsigned int lbl_831BFAA4;
extern unsigned int lbl_83296908;
extern unsigned int lbl_83296910;
extern unsigned int lbl_83296918;
extern unsigned int lbl_83296920;
extern unsigned int lbl_83296928;
extern unsigned int lbl_83296930;
extern unsigned int lbl_83296938;
extern unsigned int lbl_83296940;
extern unsigned int lbl_83296948;
extern unsigned int uStack_b8;


void fn_825EB010(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  iVar6 = 0;
  iVar5 = *(int *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
  if (0 < iVar5) {
    iVar9 = 0;
    do {
      piVar11 = *(int **)(*(int *)((int)(((ulonglong)*(uint *)(param_1 + 0x10) + 3 & 0xffffffff) <<
                                        2) + *(int *)(param_1 + 8)) + iVar9);
      if ((*(uint *)((int)piVar11 +
                    (int)(((ulonglong)*(uint *)(param_1 + 0x10) + 0x1e & 0xffffffff) << 2)) & 0x4000
          ) != 0) {
        iVar5 = *(int *)(param_1 + 0x30);
        iVar6 = *piVar11;
        if ((*(int *)(iVar5 + 0x4a0) != iVar6) || (lbl_831BFAA4 != 0)) {
          fn_825E5678(iVar5,iVar6);
          fn_825E57E8(iVar5,iVar6);
          *(int *)(iVar5 + 0x4a0) = iVar6;
          lbl_831BFAA4 = 0;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 0x18;
    } while (iVar6 < iVar5);
  }
  lVar10 = 3;
  piVar11 = (int *)(*(int *)(param_1 + 0x30) + 0x4a4);
  do {
    iVar5 = *(int *)(*piVar11 + 0x50);
    if (iVar5 != 0) {
      fn_82A1EFC0(iVar5,0,*(int *)(*piVar11 + 0x54) << 2);
    }
    iVar5 = (int)in_r0;
    lVar10 = lVar10 + -1;
    piVar11 = piVar11 + 1;
  } while (lVar10 != 0);
  puVar3 = (undefined4 *)
           (*(int *)(param_1 + 0x10) * 0x200 + *(int *)(param_1 + 4) + 0x40U & 0xfffffff0);
  uVar12 = puVar3[1];
  uVar13 = puVar3[2];
  uVar14 = puVar3[3];
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x30) + 0x40U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar12;
  puVar4[2] = uVar13;
  puVar4[3] = uVar14;
  fn_825E5218(*(undefined4 *)(param_1 + 0x30),0,
                    (ulonglong)*(uint *)(param_1 + 0x10) * 0x280 + (ulonglong)*(uint *)(param_1 + 4)
                    + 0x528);
  fn_825E5218(*(undefined4 *)(param_1 + 0x30),1,
                    (ulonglong)*(uint *)(param_1 + 0x10) * 0x280 + (ulonglong)*(uint *)(param_1 + 4)
                    + 0x668);
  fn_825E5218(*(undefined4 *)(param_1 + 0x30),2,
                    ((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                    (ulonglong)*(uint *)(param_1 + 4) + 0x18c);
  if (*(int *)(*(int *)(param_1 + 4) + 0xca0) != 0) {
    fn_825E5218(*(undefined4 *)(param_1 + 0x30),3,*(int *)(param_1 + 4) + 0xd3c);
  }
  puVar8 = &uStack_b8;
  puVar7 = (undefined8 *)&lbl_83296908;
  lVar10 = 8;
  do {
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
    *puVar8 = *puVar7;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  uStack_b8 = lbl_83296948;
  iVar6 = fn_8253B050(auStack_70,lbl_83296910,lbl_83296918,lbl_83296920,lbl_83296928,lbl_83296930,
                        lbl_83296938,lbl_83296940);
  puVar3 = (undefined4 *)(iVar5 + iVar6 & 0xfffffff0);
  uVar13 = puVar3[1];
  uVar14 = puVar3[2];
  uVar15 = puVar3[3];
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 4);
  uVar12 = *(undefined4 *)(param_1 + 0x30);
  puVar4 = (undefined4 *)(iVar6 + 0x10U & 0xfffffff0);
  uVar24 = *puVar4;
  uVar25 = puVar4[1];
  uVar26 = puVar4[2];
  uVar27 = puVar4[3];
  puVar4 = (undefined4 *)(iVar6 + 0x20U & 0xfffffff0);
  uVar20 = *puVar4;
  uVar21 = puVar4[1];
  uVar22 = puVar4[2];
  uVar23 = puVar4[3];
  puVar4 = (undefined4 *)(iVar6 + 0x30U & 0xfffffff0);
  uVar16 = *puVar4;
  uVar17 = puVar4[1];
  uVar18 = puVar4[2];
  uVar19 = puVar4[3];
  puVar4 = (undefined4 *)((uint)(auStack_b0 + iVar5) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar13;
  puVar4[2] = uVar14;
  puVar4[3] = uVar15;
  puVar3 = (undefined4 *)((uint)(auStack_a0 + iVar5) & 0xfffffff0);
  *puVar3 = uVar24;
  puVar3[1] = uVar25;
  puVar3[2] = uVar26;
  puVar3[3] = uVar27;
  lVar10 = ((ulonglong)uVar1 & 0x7fffff) * 0x200 + (ulonglong)uVar2;
  puVar3 = (undefined4 *)((uint)(auStack_80 + iVar5) & 0xfffffff0);
  *puVar3 = uVar16;
  puVar3[1] = uVar17;
  puVar3[2] = uVar18;
  puVar3[3] = uVar19;
  puVar3 = (undefined4 *)((uint)(auStack_90 + iVar5) & 0xfffffff0);
  *puVar3 = uVar20;
  puVar3[1] = uVar21;
  puVar3[2] = uVar22;
  puVar3[3] = uVar23;
  fn_825E52F8(uVar12,auStack_b0,lVar10 + 0x90,lVar10 + 0x40);
  return;
}

