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
#define ZEXT48(x) ((U64)((U32)(x)))
#define BADSPACEBASE char
extern int fn_82AA66A8();
extern int fn_82AC9F80();
extern int fn_82ACA920();
extern int fn_82AD1270();
extern int fn_82AD12C8();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82AD1B28();
extern int fn_82AEFCD8();
extern int fn_82AF5968();
extern int fn_82AF6E60();
extern int fn_82AF7710();
extern int fn_82AF7E20();
extern int fn_82AF7EE8();
extern int fn_82AF7FB0();
extern int fn_82AFA378();
extern int fn_82AFE7E0();
extern int fn_82B84350();
extern int fn_82B8A3A0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;
extern unsigned int uStack_110;


int fn_82B02370(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  char cVar16;
  uint uVar10;
  undefined8 uVar7;
  undefined4 uVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar15;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  undefined8 *puVar24;
  uint uVar25;
  undefined4 *puVar26;
  ulonglong uVar27;
  uint uVar28;
  double dVar29;
  uint uStack_110;
  
  lVar23 = ZEXT48(&stack0x00000000) - 0x160;
  iVar5 = (int)lVar23;
  *(BADSPACEBASE **)iVar5 = register0x0000000c;
  uVar1 = param_2[0x29];
  if (*(char *)((int)param_2 + 0xcd) != '\0') {
    puVar20 = param_2 + 8;
    fn_82F68CC0(ZEXT48(&stack0x00000000) - 0x100,puVar20,0x84);
    param_2[0x28] = 0;
    if (param_2[7] != 0) {
      *(undefined4 *)(iVar5 + 0x5c) = 0;
      do {
        uVar2 = param_2[7];
        param_2[7] = uVar2 - 1;
        uVar3 = param_2[0x28];
        *(uint *)(iVar5 + 0x50) = *param_2;
        *(uint *)(iVar5 + 0x58) = param_2[1];
        *(uint *)(iVar5 + 0x54) = param_2[uVar2 + 2];
        uVar2 = *(uint *)(iVar5 + 0x54);
        uVar10 = *(uint *)(iVar5 + 0x58);
        uVar21 = *(uint *)(iVar5 + 0x5c);
        puVar20[uVar3 * 4] = uStack_110;
        puVar20[uVar3 * 4 + 1] = uVar2;
        puVar20[uVar3 * 4 + 2] = uVar10;
        puVar20[uVar3 * 4 + 3] = uVar21;
        param_2[0x28] = param_2[0x28] + 1;
      } while (param_2[7] != 0);
    }
    uVar2 = *(uint *)(iVar5 + 0xe0);
    uVar27 = (ulonglong)uVar2;
    uVar17 = 0;
    if (uVar27 != 0) {
      lVar19 = ((ulonglong)uVar2 & 0xfffffff) * 0x10 + lVar23 + 0x50;
      uVar18 = uVar27;
      do {
        if (((uVar17 & 0xffffffff) < 4) &&
           (cVar16 = fn_82AF5968(*(undefined8 *)lVar19,((undefined8 *)lVar19)[1]), cVar16 != '\0'))
        {
          uVar17 = uVar17 + 1;
        }
        else {
          uVar3 = param_2[0x28];
          puVar12 = (uint *)lVar19;
          uVar10 = puVar12[1];
          uVar21 = puVar12[2];
          uVar22 = puVar12[3];
          puVar20[uVar3 * 4] = *puVar12;
          puVar20[uVar3 * 4 + 1] = uVar10;
          puVar20[uVar3 * 4 + 2] = uVar21;
          puVar20[uVar3 * 4 + 3] = uVar22;
          param_2[0x28] = param_2[0x28] + 1;
        }
        uVar18 = uVar18 - 1;
        lVar19 = lVar19 + -0x10;
      } while (uVar18 != 0);
    }
    uVar10 = fn_82B84350(param_1,*(undefined4 *)(uVar1 + 0x1c),0);
    uVar3 = uVar10 & 0xfffffffe;
    puVar20 = (uint *)((uVar1 & 0xfffffffe) + 0x24);
    uVar21 = 0;
    *(uint *)(uVar3 + 0x24) = *puVar20;
    *(uint *)(*puVar20 & 0xfffffffe) = uVar3;
    *(uint *)(uVar3 + 0x28) = uVar1 & 0xfffffffe;
    *puVar20 = uVar3 + 0x28;
    if (uVar27 != 0) {
      puVar26 = (undefined4 *)(uVar10 + 0x28);
      lVar23 = ((ulonglong)uVar2 & 0xfffffff) * 0x10 + lVar23 + 0x50;
      do {
        puVar24 = (undefined8 *)lVar23;
        uVar11 = *(undefined4 *)(puVar24 + 1);
        uVar4 = *(undefined4 *)((int)puVar24 + 0xc);
        *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)((int)puVar24 + 4);
        *(undefined4 *)(iVar5 + 0x58) = uVar11;
        *(undefined4 *)(iVar5 + 0x5c) = uVar4;
        if ((uVar21 < 4) && (cVar16 = fn_82AF5968(*puVar24,puVar24[1]), cVar16 != '\0')) {
          uVar7 = fn_82AD1918(param_1,*(undefined4 *)(iVar5 + 0x50),
                                    *(undefined4 *)(iVar5 + 0x54),*(undefined4 *)(iVar5 + 0x58));
          uVar11 = fn_82AD1978(uVar10,uVar7);
          puVar26 = puVar26 + 1;
          *puVar26 = uVar11;
          param_2[param_2[7] + 3] = uVar21;
          uVar21 = uVar21 + 1;
          param_2[7] = param_2[7] + 1;
        }
        uVar27 = uVar27 - 1;
        lVar23 = lVar23 + -0x10;
      } while (uVar27 != 0);
    }
    *param_2 = uVar10;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  uVar17 = 0;
  uVar2 = param_2[7];
  uVar3 = uVar2;
  while (uVar3 != 0) {
    uVar3 = param_2[7];
    param_2[7] = uVar3 - 1;
    uVar17 = (ulonglong)param_2[uVar3 + 2] | (uVar17 & 0x3fffffff) << 2;
    uVar3 = param_2[7];
  }
  dVar29 = (double)lbl_821AAD20;
  if (*(char *)(param_2 + 0x33) == '\0') {
    iVar14 = fn_82B8A3A0((double)lbl_82002AE0,dVar29,dVar29,dVar29,param_1,1);
    uVar3 = param_2[1];
    puVar20 = (uint *)fn_82AD17B0(param_1,*param_2);
    uVar10 = (uVar2 & 7) << 0x19;
    *puVar20 = *puVar20 & 0xf1ffffff | uVar10;
    fn_82AD1270(puVar20,uVar3);
    *puVar20 = (uint)(uVar17 << 5) & 0x1fe0 | *puVar20 & 0xffffe01f;
    puVar12 = (uint *)fn_82AD17B0(param_1,iVar14);
    *puVar12 = *puVar12 & 0xf1ffffff | uVar10;
    fn_82AD1270(puVar12,0);
    *puVar12 = *puVar12 & 0xffffe01f;
    fn_82AEFCD8(iVar14);
    *(uint *)(iVar14 + 8) = *(uint *)(iVar14 + 8) | 0x1000000;
  }
  else {
    puVar20 = (uint *)fn_82ACA920(param_1,*(int *)(*param_2 + 0x2c),
                                        *(undefined4 *)(*(int *)(*param_2 + 0x2c) + 0xc));
    uVar3 = (uint)uVar17;
    uVar25 = uVar3 >> 5 & 6;
    uVar22 = uVar3 >> 3 & 6;
    uVar10 = *puVar20 >> 5 & 0xff;
    uVar21 = uVar3 >> 1 & 6;
    uVar28 = (uint)(uVar17 << 1) & 6;
    uVar3 = (uVar2 & 7) << 0x19;
    *puVar20 = ((((uVar10 >> uVar25 & 3) << 2 | uVar10 >> uVar22 & 3) << 2 | uVar10 >> uVar21 & 3)
                << 2 | uVar10 >> uVar28 & 3) << 5 | *puVar20 & 0xf1ffe01f | uVar3;
    puVar12 = (uint *)fn_82ACA920(param_1,*(int *)(*param_2 + 0x30),
                                        *(undefined4 *)(*(int *)(*param_2 + 0x30) + 0xc));
    uVar10 = *puVar12 >> 5 & 0xff;
    *puVar12 = ((((uVar10 >> uVar25 & 3) << 2 | uVar10 >> uVar22 & 3) << 2 | uVar10 >> uVar21 & 3)
                << 2 | uVar10 >> uVar28 & 3) << 5 | *puVar12 & 0xf1ffe01f | uVar3;
    uVar3 = *puVar20;
    uVar10 = param_2[1];
    if ((((uVar3 & 0x18) == 0) || ((uVar10 & 0x18) == 0)) &&
       (((uVar3 & 2) == 0 || ((uVar10 & 1) == 0)))) {
      if (((uVar3 & 4) == 0) || (bVar6 = false, (uVar10 & 1) == 0)) {
        bVar6 = true;
      }
    }
    else {
      bVar6 = false;
    }
    puVar13 = puVar20;
    if (!bVar6) {
      puVar13 = puVar12;
    }
    fn_82AD1270(puVar13);
  }
  if (uVar2 == 2) {
    iVar15 = fn_82B8A3A0(dVar29,dVar29,dVar29,dVar29,param_1,1);
    uVar7 = fn_82AD18C0(param_1,iVar15,0);
    iVar14 = fn_82AF7FB0(param_1,0,uVar1,puVar20,puVar12,uVar7);
    fn_82AEFCD8(iVar15);
    *(uint *)(iVar15 + 8) = *(uint *)(iVar15 + 8) | 0x1000000;
  }
  else if (uVar2 == 3) {
    iVar14 = fn_82AF7EE8(param_1,0,uVar1,puVar20,puVar12);
  }
  else {
    if (uVar2 != 4) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    iVar14 = fn_82AF7E20(param_1,0,uVar1,puVar20,puVar12);
  }
  if (param_2[2] != 0) {
    uVar7 = fn_82AC9F80(param_1,param_2[2],0);
    fn_82AD1978(iVar14,uVar7);
  }
  fn_82AF6E60(param_1,iVar14);
  uVar2 = param_2[0x28];
  while (uVar2 != 0) {
    uVar10 = param_2[0x28] - 1;
    param_2[0x28] = uVar10;
    uVar2 = param_2[uVar10 * 4 + 0xb];
    uVar3 = param_2[uVar10 * 4 + 10];
    *(uint *)(iVar5 + 0x54) = param_2[uVar10 * 4 + 9];
    *(uint *)(iVar5 + 0x5c) = uVar2;
    *(uint *)(iVar5 + 0x58) = uVar3;
    uVar2 = *(uint *)(iVar5 + 0x58);
    uVar8 = fn_82AD1918(param_1,*(undefined4 *)(iVar5 + 0x50),*(undefined4 *)(iVar5 + 0x54),
                              uVar2);
    uVar9 = fn_82AD18C0(param_1,iVar14,0);
    uVar7 = uVar9;
    if ((*(uint *)(iVar14 + 8) & 0x3f80) == 0x80) {
      uVar7 = uVar8;
      uVar8 = uVar9;
    }
    iVar15 = fn_82AF7710(param_1,0,uVar1,uVar8,uVar7);
    if ((uVar2 & 8) != 0) {
      uVar7 = fn_82AD12C8(*(undefined4 *)(iVar5 + 0x5c));
      uVar7 = fn_82AC9F80(param_1,uVar7,0);
      fn_82AD1978(iVar15,uVar7);
    }
    fn_82AD1B28(iVar14);
    *(uint *)(iVar14 + 8) = *(uint *)(iVar14 + 8) | 0x1000000;
    fn_82AFA378(param_1,iVar14);
    iVar14 = iVar15;
    uVar2 = param_2[0x28];
  }
  if ((*(uint *)(uVar1 + 8) & 1) != 0) {
    *(uint *)(iVar14 + 8) = *(uint *)(iVar14 + 8) | 1;
  }
  fn_82AFE7E0(param_1,uVar1,param_3,iVar14);
  return iVar14;
}

