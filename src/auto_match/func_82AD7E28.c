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
extern int fn_82AA66A8();
extern int fn_82AC9F80();
extern int fn_82ACA920();
extern int fn_82AD1270();
extern int fn_82AD12C8();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD3550();
extern int fn_82AD36D8();
extern int fn_82AD37F8();
extern int fn_82AD3918();
extern int fn_82AD6090();
extern int fn_82B8AC10();
extern unsigned int iStack_78;
extern unsigned int iStack_80;
extern unsigned int uStack_7c;


void fn_82AD7E28(int param_1,int param_2,int param_3,char param_4,int param_5,uint *param_6)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar6;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  ulonglong uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  int iStack_80;
  uint uStack_7c;
  int iStack_78;
  
  uVar16 = *(uint *)(param_3 + 8) >> 7 & 0x7f;
  if ((uVar16 < 0x15) || (bVar1 = true, 0x18 < uVar16)) {
    bVar1 = false;
  }
  iStack_78 = 0;
  uStack_7c = -(uint)((*(uint *)(param_2 + 4) & 1) == 0) & *(uint *)(param_2 + 4);
  iVar4 = *(int *)((0xc - (uint)!bVar1) * 4 + param_3);
  iStack_80 = param_2;
  do {
    if ((uStack_7c == 0) || (bVar1 = false, iStack_78 == *(int *)(uStack_7c + 8))) {
      bVar1 = true;
    }
    if (bVar1) {
      return;
    }
    puVar7 = (undefined4 *)fn_82AD3550(&iStack_80);
    puVar8 = (uint *)fn_82ACA920(param_1,iVar4,*(undefined4 *)(iVar4 + 0xc));
    uVar5 = (ulonglong)*puVar8 & 0xfffffffff1ffffff;
    uVar15 = uVar5 >> 5 & 3;
    *puVar8 = (uint)((((uVar5 >> 3 & 0xc | uVar15) << 2 | uVar15) << 2 | uVar15) << 5) |
              (puVar7[4] & 7) << 0x19 | *puVar8 & 0xf1ffe01f;
    uVar16 = puVar7[4];
    uVar18 = puVar7[2];
    puVar9 = (uint *)fn_82AD17B0(param_1,*puVar7);
    *puVar9 = (uVar16 & 7) << 0x19 | *puVar9 & 0xf1ffffff;
    fn_82AD1270(puVar9,0);
    *puVar9 = (uVar18 & 0xff) << 5 | *puVar9 & 0xffffe01f;
    uVar16 = puVar7[4];
    uVar18 = puVar7[3];
    puVar10 = (uint *)fn_82AD17B0(param_1,puVar7[1]);
    *puVar10 = (uVar16 & 7) << 0x19 | *puVar10 & 0xf1ffffff;
    fn_82AD1270(puVar10,0);
    *puVar10 = (uVar18 & 0xff) << 5 | *puVar10 & 0xffffe01f;
    puVar14 = puVar9;
    if (param_4 == '\0') {
      puVar14 = puVar10;
      puVar10 = puVar9;
    }
    puVar9 = puVar10;
    if ((puVar7[4] & 8) == 0) {
      puVar9 = puVar14;
      puVar14 = puVar10;
    }
    uVar16 = *(uint *)(param_3 + 8) >> 7 & 0x7f;
    if (uVar16 < 0x3c) {
      puVar10 = puVar14;
      puVar13 = puVar9;
      if (((uVar16 == 0x3b) || (uVar16 == 0x15)) ||
         (puVar10 = puVar9, puVar13 = puVar14, uVar16 == 0x16)) {
LAB_82ad8070:
        uVar16 = fn_82AD36D8(param_1,param_5,0,puVar8,puVar10,puVar13);
      }
      else {
        if (uVar16 != 0x17) {
          bVar1 = uVar16 == 0x18;
          goto LAB_82ad8028;
        }
LAB_82ad804c:
        uVar16 = fn_82AD3918(param_1,param_5,0,puVar8,puVar14,puVar9);
      }
    }
    else {
      puVar10 = puVar9;
      puVar13 = puVar14;
      if (uVar16 == 0x3c) goto LAB_82ad8070;
      if (uVar16 == 0x3d) goto LAB_82ad804c;
      bVar1 = uVar16 == 0x3e;
LAB_82ad8028:
      if (!bVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      uVar16 = fn_82AD37F8(param_1,param_5,0,puVar8,puVar14,puVar9);
    }
    uVar18 = uVar16 & 0xfffffffe;
    *(undefined4 *)(uVar18 + 0x28) = *(undefined4 *)(param_5 + 0x1c);
    *(uint *)((*(uint *)(param_5 + 0x1c) & 0xfffffffe) + 0x24) = uVar18 + 0x28;
    *(uint *)(uVar18 + 0x24) = param_5 + 0x1cU | 1;
    *(uint *)(param_5 + 0x1c) = uVar18;
    if (((*puVar8 & 8) != 0) && ((*(uint *)(param_1 + 0x28) & 0x4000) != 0)) {
      uVar6 = fn_82AD12C8(param_3);
      uVar6 = fn_82AC9F80(param_1,uVar6,0);
      fn_82AD1978(uVar16,uVar6);
    }
    if (param_6 != (uint *)0x0) {
      *(uint *)(uVar16 + 8) = *(uint *)(uVar16 + 8) | 0x800000;
      *(short *)(uVar16 + 0x12) = (short)*(undefined4 *)(puVar7[5] + 0x10);
      if ((param_6[1] & 1) == 0) {
        uVar18 = *param_6 & 0xfffffffe;
        iVar11 = uVar18 - 4;
        if ((iVar11 == 0) || (*(uint *)(uVar18 + 8) < *(int *)(uVar18 + 4) + 1U)) goto LAB_82ad814c;
      }
      else {
LAB_82ad814c:
        iVar11 = fn_82AD6090(param_6,1);
      }
      iVar2 = *(int *)(iVar11 + 8);
      *(int *)(iVar11 + 8) = iVar2 + 1;
      *(uint *)((iVar2 + 4) * 4 + iVar11) = uVar16;
    }
    uVar18 = 0;
    if ((puVar7[4] & 7) != 0) {
      piVar17 = puVar7 + 5;
      do {
        iVar11 = *piVar17;
        puVar14 = (uint *)(iVar11 + 4);
        while (puVar10 = (uint *)*puVar14, puVar10 != (uint *)0x0) {
          if (puVar10[4] != 0) {
            puVar9 = (uint *)(puVar10[3] + 4);
            for (puVar8 = (uint *)*puVar9; puVar8 != puVar10; puVar8 = (uint *)puVar8[2]) {
              puVar9 = puVar8 + 2;
            }
            uVar12 = uVar18 | 0xe4;
            *puVar9 = puVar10[2];
            puVar10[2] = *(uint *)(uVar16 + 4);
            *(uint **)(uVar16 + 4) = puVar10;
            uVar3 = *puVar10;
            puVar10[3] = uVar16;
            *puVar10 = ((((uVar12 >> (uVar3 >> 10 & 6) & 3) << 2 | uVar12 >> (uVar3 >> 8 & 6) & 3)
                         << 2 | uVar12 >> (uVar3 >> 6 & 6) & 3) << 2 |
                       uVar12 >> (uVar3 >> 4 & 6) & 3) << 5 | uVar3 & 0xffffe01f;
          }
          if ((uint *)*puVar14 == puVar10) {
            puVar14 = puVar10 + 2;
          }
        }
        fn_82B8AC10(param_1,iVar11,0,1);
        uVar18 = uVar18 + 1;
        piVar17 = piVar17 + 1;
      } while (uVar18 < (puVar7[4] & 7));
    }
  } while( true );
}

