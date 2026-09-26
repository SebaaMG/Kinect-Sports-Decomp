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
extern unsigned int *auStack_90;
extern int fn_82526C70();
extern int fn_82531F18();
extern int fn_82573530();
extern int fn_82590DB8();
extern int fn_82A1DD38();
extern unsigned int lbl_821CA460;


void fn_82266990(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 in_r0;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  undefined4 uVar11;
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
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  iVar1 = (*(int *)(*(int *)(param_1 + 0x100) + 0x44) + 0x20) * 4;
  piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 0xe4) + 0x8c0) + iVar1);
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xdc) + 0x8c0) + iVar1) + 4);
  iVar9 = *piVar4;
  if ((iVar1 != 0) && (iVar9 != 0)) {
    fn_82A1DD38(iVar9,iVar1,(ulonglong)*(ushort *)(piVar4 + 2) << 6);
    uVar8 = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0xe4) + 0x8c0);
    if (*(int *)(iVar1 + 0x138) != 0) {
      iVar9 = param_1 + 0x544;
      dVar10 = (double)lbl_821CA460;
      do {
        uVar8 = uVar8 + 1;
        fn_82526C70(auStack_80,0x20,0xffffffff821a7cc4,uVar8);
        iVar6 = fn_82573530((ulonglong)*(uint *)(*(int *)(param_1 + 0xe4) + 0x8c0) + 0x128,
                                  auStack_80);
        if (iVar6 != 0) {
          iVar7 = *(int *)(param_1 + 0x100);
          iVar2 = *(int *)(param_1 + 0xe4);
          if (iVar7 == 0) {
            iVar7 = *(int *)(iVar2 + 0x4c);
          }
          uVar3 = *(undefined4 *)(iVar6 + 0x1b0);
          puVar5 = (undefined4 *)((int)in_r0 + iVar2 + 0xf0 & 0xfffffff0);
          uVar11 = *puVar5;
          uVar12 = puVar5[1];
          uVar13 = puVar5[2];
          uVar14 = puVar5[3];
          puVar5 = (undefined4 *)(iVar2 + 0x100U & 0xfffffff0);
          uVar23 = *puVar5;
          uVar24 = puVar5[1];
          uVar25 = puVar5[2];
          uVar26 = puVar5[3];
          puVar5 = (undefined4 *)(iVar2 + 0x110U & 0xfffffff0);
          uVar19 = *puVar5;
          uVar20 = puVar5[1];
          uVar21 = puVar5[2];
          uVar22 = puVar5[3];
          puVar5 = (undefined4 *)(iVar2 + 0x120U & 0xfffffff0);
          uVar15 = *puVar5;
          uVar16 = puVar5[1];
          uVar17 = puVar5[2];
          uVar18 = puVar5[3];
          *(undefined1 *)(iVar6 + 0xe3) = 1;
          puVar5 = (undefined4 *)((int)in_r0 + iVar6 + 0x60 & 0xfffffff0);
          *puVar5 = uVar11;
          puVar5[1] = uVar12;
          puVar5[2] = uVar13;
          puVar5[3] = uVar14;
          puVar5 = (undefined4 *)(iVar6 + 0x70U & 0xfffffff0);
          *puVar5 = uVar23;
          puVar5[1] = uVar24;
          puVar5[2] = uVar25;
          puVar5[3] = uVar26;
          puVar5 = (undefined4 *)(iVar6 + 0x80U & 0xfffffff0);
          *puVar5 = uVar19;
          puVar5[1] = uVar20;
          puVar5[2] = uVar21;
          puVar5[3] = uVar22;
          puVar5 = (undefined4 *)(iVar6 + 0x90U & 0xfffffff0);
          *puVar5 = uVar15;
          puVar5[1] = uVar16;
          puVar5[2] = uVar17;
          puVar5[3] = uVar18;
          fn_82590DB8(uVar3,iVar7,1);
          fn_82531F18(dVar10,dVar10,iVar6 + 0xa0,iVar9,auStack_90);
        }
        iVar9 = iVar9 + 8;
      } while ((uVar8 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 0x138));
    }
  }
  return;
}

