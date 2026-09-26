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
extern int fn_82230040();
extern int fn_82536690();
extern int fn_8255BFC0();
extern int fn_8255C068();
extern int fn_8255C1D0();
extern int fn_8255CB48();
extern int fn_8265C9E0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_a4;
extern V16 loadVectorLeftIndexed128();
extern V16 loadVectorRightIndexed128();


void fn_822B37C8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined8 in_r0;
  int iVar6;
  int iVar7;
  ulonglong uVar4;
  longlong lVar5;
  int iVar8;
  char *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint in_register_00010000;
  uint in_ACC;
  uint in_register_00010008;
  uint in_vr0;
  uint in_register_000100d0;
  uint in_register_000100d4;
  uint in_register_000100d8;
  uint in_vr13;
  uint in_register_00010430;
  uint uVar14;
  uint in_register_00010434;
  uint uVar15;
  uint in_register_00010438;
  uint uVar16;
  uint in_vr67;
  uint uVar17;
  uint in_register_000104d0;
  uint uVar18;
  uint in_register_000104d4;
  uint uVar19;
  uint in_register_000104d8;
  uint uVar20;
  uint in_vr77;
  uint uVar21;
  char *apcStack_b0 [2];
  undefined **ppuStack_a8;
  undefined4 uStack_a4;
  
  iVar6 = fn_82F6A548();
  *(undefined4 *)(iVar6 + 8) = 0;
  iVar7 = fn_8265C9E0(0x60);
  if (iVar7 == 0) {
    uStack_a4 = 0;
    ppuStack_a8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_a8);
  }
  *(int *)(iVar6 + 4) = iVar7;
  *(int *)iVar7 = iVar7;
  *(int *)(*(int *)(iVar6 + 4) + 4) = *(int *)(iVar6 + 4);
  *(int *)(*(int *)(iVar6 + 4) + 8) = *(int *)(iVar6 + 4);
  *(undefined1 *)(*(int *)(iVar6 + 4) + 0x50) = 1;
  *(undefined1 *)(*(int *)(iVar6 + 4) + 0x51) = 1;
  *(undefined4 *)(iVar6 + 0x10) = 0;
  *(undefined4 *)(iVar6 + 0x14) = 0;
  *(undefined4 *)(iVar6 + 0x18) = 0;
  *(int *)(iVar6 + 0x20) = (int)param_3;
  uVar4 = fn_8255C068(param_2);
  do {
    if ((uVar4 & 0xffff) == 0) {
      fn_82F6A594(iVar6);
      return;
    }
    lVar5 = fn_8255BFC0(param_2,uVar4);
    iVar7 = (int)lVar5;
    loadVectorLeftIndexed128(in_r0,lVar5 + 0x14);
    loadVectorRightIndexed128(0xc,lVar5 + 0x14);
    dVar13 = (double)*(float *)(iVar7 + 0x24);
    dVar12 = (double)*(float *)(iVar7 + 0x3c);
    dVar11 = (double)*(float *)(iVar7 + 0x38);
    dVar10 = (double)*(float *)(iVar7 + 0x34);
    in_vr0 = in_vr13 | in_vr0;
    in_register_00010008 = in_register_000100d8 | in_register_00010008;
    in_ACC = in_register_000100d4 | in_ACC;
    in_register_00010000 = in_register_000100d0 | in_register_00010000;
    uVar21 = in_vr77;
    uVar20 = in_register_000104d8;
    uVar19 = in_register_000104d4;
    uVar18 = in_register_000104d0;
    uVar17 = in_vr67;
    uVar16 = in_register_00010438;
    uVar15 = in_register_00010434;
    uVar14 = in_register_00010430;
    iVar8 = fn_8255CB48(param_3,1,*(undefined2 *)(iVar7 + 6),
                              1 << (*(uint *)(iVar7 + 0x40) & 0x3f),*(undefined2 *)(iVar7 + 6),0,0,0
                             );
    in_vr0 = in_vr0 & ~in_vr67 | in_vr77 & in_vr67;
    in_register_00010008 =
         in_register_00010008 & ~in_register_00010438 | in_register_000104d8 & in_register_00010438;
    in_ACC = in_ACC & ~in_register_00010434 | in_register_000104d4 & in_register_00010434;
    in_register_00010000 =
         in_register_00010000 & ~in_register_00010430 | in_register_000104d0 & in_register_00010430;
    *(float *)(iVar8 + 0x30) = (float)dVar10;
    *(float *)(iVar8 + 0x34) = (float)dVar11;
    *(float *)(iVar8 + 0x38) = (float)dVar12;
    *(float *)(iVar8 + 0x3c) = (float)dVar13;
    puVar3 = (uint *)(iVar8 + 0x20U & 0xfffffff0);
    *puVar3 = in_register_00010000;
    puVar3[1] = in_ACC;
    puVar3[2] = in_register_00010008;
    puVar3[3] = in_vr0;
    apcStack_b0[0] = (char *)fn_8265C9E0(0x28);
    if (apcStack_b0[0] == (char *)0x0) {
      apcStack_b0[0] = (char *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar7 + 0x40);
      *(uint *)(apcStack_b0[0] + 0x24) = (uint)*(ushort *)(iVar7 + 6);
      *(undefined4 *)(apcStack_b0[0] + 0x20) = uVar2;
      pcVar9 = apcStack_b0[0];
      do {
        if (apcStack_b0[0] + 0x20 <= pcVar9) break;
        cVar1 = pcVar9[(iVar7 - (int)apcStack_b0[0]) + 0x44];
        *pcVar9 = cVar1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (pcVar9 == apcStack_b0[0] + 0x20) {
        pcVar9[-1] = '\0';
      }
    }
    fn_82536690(iVar6 + 0x10,apcStack_b0);
    uVar4 = fn_8255C1D0(param_2,uVar4);
    in_vr77 = uVar21;
    in_register_000104d8 = uVar20;
    in_register_000104d4 = uVar19;
    in_register_000104d0 = uVar18;
    in_vr67 = uVar17;
    in_register_00010438 = uVar16;
    in_register_00010434 = uVar15;
    in_register_00010430 = uVar14;
  } while( true );
}

