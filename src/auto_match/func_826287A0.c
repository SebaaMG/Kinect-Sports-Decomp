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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern int fn_8259BB38();
extern int fn_8259C040();
extern int fn_8265BD18();
extern int fn_8265BF48();
extern int fn_827D86F0();
extern int fn_827DE010();
extern int fn_827DE048();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6E2F0();
extern unsigned int iStack_d0;
extern unsigned int lbl_82192734;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_b8;
extern unsigned int uStack_cc;


void fn_826287A0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar5;
  ulonglong uVar4;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar11;
  ulonglong uVar10;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int iStack_d0;
  uint uStack_cc;
  uint auStack_c8 [2];
  uint auStack_c0 [2];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [160];
  
  piVar5 = (int *)fn_82F6A548();
  fn_827DE048(auStack_a0);
  iVar8 = *piVar5;
  iVar3 = iVar8 * 0x18 + 4;
  if (0 < iVar8) {
    piVar9 = piVar5 + 5;
    dVar14 = (double)lbl_82192734;
    dVar16 = (double)lbl_821CC160;
    dVar15 = (double)lbl_82193CC0;
    do {
      uStack_b8 = *(undefined8 *)piVar9;
      dVar17 = (double)(float)piVar9[-1];
      iVar1 = piVar9[-3];
      iVar11 = (int)piVar5 + piVar9[-4] + iVar3;
      uVar4 = fn_8265BF48(iVar11,0);
      if (uVar4 != 0 && (uVar4 & 0xff000000) < 0x7a000000) {
        uVar12 = (uint)uVar4;
        uStack_cc = uVar12;
        fn_827D86F0(param_3,&uStack_cc,iVar11);
        uVar10 = (uVar4 & 0xffffffff) >> 0x18;
        if ((uVar4 & 0xffffffff) == 0) {
          uVar10 = 0x7a;
        }
        dVar13 = (double)fn_8265BD18(uVar10);
        if ((dVar17 == dVar16) || (bVar2 = false, dVar17 == dVar14)) {
          bVar2 = true;
        }
        if (((uVar12 & 0xff000000) != 0x7a000000) &&
           ((dVar13 <= (double)(float)(dVar17 + dVar15) || (bVar2)))) {
          uStack_cc = (uint)uVar10;
          auStack_c8[0] = uVar12;
          fn_827DE010(param_2,auStack_c8,&uStack_b8,&uStack_cc);
          if ((param_4 & 0xffffffff) != 0) {
            auStack_c8[0] = uVar12;
            fn_8259BB38(&iStack_d0,param_4,auStack_c8);
            if (iStack_d0 == *(int *)((int)param_4 + 4)) {
              auStack_c0[1] = 0;
              auStack_c0[0] = uVar12;
              piVar6 = (int *)fn_8259C040(auStack_b0,param_4,auStack_c0);
              iStack_d0 = *piVar6;
            }
            iVar11 = iStack_d0;
            uVar7 = fn_82F6E2F0((int)piVar5 + iVar1 + iVar3);
            *(undefined4 *)(iVar11 + 0xc) = uVar7;
          }
        }
      }
      iVar8 = iVar8 + -1;
      piVar9 = piVar9 + 6;
    } while (iVar8 != 0);
  }
  fn_82F6A594(0);
  return;
}

