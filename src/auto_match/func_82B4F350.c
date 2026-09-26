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
extern unsigned int *auStack_90;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AC6560();
extern int fn_82AC9F80();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82B47660();
extern int fn_82B479B0();
extern int fn_82B482B0();
extern int fn_82B48AF8();
extern int fn_82B4BAA8();
extern int fn_82B4CED0();
extern int fn_82B841E8();
extern int fn_82B843F0();
extern int fn_82B866A0();
extern int fn_82B89810();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;


undefined8
fn_82B4F350(int param_1,int param_2,undefined8 param_3,uint param_4,longlong param_5,
             longlong param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar5;
  undefined8 uVar4;
  uint *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uStack00000020;
  ulonglong auStack_90 [18];
  
  uVar14 = 0xffffffff;
  uVar23 = 0;
  uVar11 = 4;
  uVar22 = 0xffffffff;
  uVar20 = 0;
  uVar16 = 0;
  lVar21 = param_6;
  uVar10 = uVar23;
  uVar19 = uVar11;
  uStack00000020 = param_3;
  uVar15 = 0xffffffff;
  uVar17 = 0xffffffff;
  if (param_4 != 0) {
    do {
      uVar8 = *(undefined4 *)(param_2 + 4);
      uVar1 = *(undefined4 *)(param_2 + 8);
      fn_82B47660(param_2,lVar21);
      iVar5 = *(int *)(param_2 + 8);
      iVar2 = *(int *)(param_2 + 4);
      lVar21 = lVar21 + param_5;
      *(undefined4 *)(param_2 + 4) = uVar8;
      *(undefined4 *)(param_2 + 8) = uVar1;
      puVar6 = (uint *)((iVar5 + 2) * 8 + iVar2);
      uVar11 = puVar6[1];
      if ((uVar11 & 3) == 1) {
        uVar23 = *puVar6;
        uVar14 = 0;
        uVar11 = uVar11 >> 2 & 0x3fff;
      }
      else {
        if ((uVar11 & 3) != 2) {
          return 0;
        }
        uVar3 = *(uint *)*puVar6;
        uVar23 = ((uint *)*puVar6)[3];
        uVar14 = uVar3 & 0x1f;
        uVar11 = (uVar3 >> 5 & 0xff) >> (uVar11 >> 1 & 0x3e) & 3;
      }
      if ((uVar14 & 0x18) != 0) {
        return 0;
      }
      uVar3 = *(uint *)(uVar23 + 8) >> 7 & 0x7f;
      if (uVar3 == 0x7c) {
        uVar3 = *(uint *)(uVar23 + 8);
        iVar5 = fn_82ABDD90(param_1,uVar3 >> 7 & 0x7f,uVar3 >> 0x13 & 7,uVar3 >> 0xe & 7);
        puVar6 = (uint *)(iVar5 + (uVar23 - 8));
        if ((puVar6[1] & 0x100000) == 0) {
          return 0;
        }
        uVar3 = *puVar6;
      }
      else {
        if (uVar3 != 0x61) {
          return 0;
        }
        uVar3 = *(uint *)(uVar23 + 8);
        iVar5 = fn_82ABDD90(param_1,uVar3 >> 7 & 0x7f,uVar3 >> 0x13 & 7,uVar3 >> 0xe & 7);
        iVar5 = iVar5 + (uVar23 - 0x18);
        if ((*(uint *)(iVar5 + 0xc) & 0x20000) == 0) {
          return 0;
        }
        uVar3 = *(uint *)(iVar5 + 0x10);
      }
      uVar18 = uVar3 & 0x7fff;
      uVar13 = uVar3 >> 0xf & 0x3fff;
      uVar3 = uVar13;
      if (uVar16 != 0) {
        if (uVar16 == 1) {
          if (uVar13 <= uVar22) {
            return 0;
          }
          uVar20 = uVar13 - uVar22;
        }
        if ((((uVar17 != uVar18) || (uVar15 != uVar14)) || (uVar19 != uVar11)) ||
           (uVar23 = uVar10, uVar11 = uVar19, uVar3 = uVar22, uVar14 = uVar15, uVar18 = uVar17,
           uVar16 * uVar20 + uVar22 != uVar13)) {
          return 0;
        }
      }
      uVar22 = uVar3;
      uVar16 = uVar16 + 1;
      uVar10 = uVar23;
      uVar19 = uVar11;
      uVar15 = uVar14;
      uVar17 = uVar18;
    } while (uVar16 < param_4);
  }
  uVar4 = fn_82B4BAA8(param_1,&stack0x00000020);
  uVar4 = fn_82B482B0(param_1,uVar4);
  puVar6 = (uint *)fn_82AD17B0(param_1,uVar4);
  if (uVar20 != 1) {
    auStack_90[0] = (ulonglong)uVar20;
    puVar7 = (undefined8 *)
             fn_82B866A0((double)auStack_90[0],(double)lbl_821AAD20,(double)lbl_821AAD20,
                               auStack_90,param_1,1);
    uVar4 = fn_82B4CED0(param_1,puVar6,*puVar7);
    puVar6 = (uint *)fn_82AD17B0(param_1,uVar4);
  }
  uVar10 = *(uint *)(uVar23 + 8) >> 7 & 0x7f;
  if (uVar10 == 0x7c) {
    *puVar6 = *puVar6 & 0xf1ffe01f | 0x4000000;
    uVar4 = fn_82B48AF8(param_1,puVar6);
    puVar6 = (uint *)fn_82AD17B0(param_1,uVar23);
    *puVar6 = (uVar11 & 0x1b) << 5 | 0x2001c80 | *puVar6 & 0xf3fffc9f;
    iVar5 = fn_82B841E8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                              (ulonglong)*(uint *)(param_1 + 0x234) + 0x18,0x76,2,1);
    uVar8 = fn_82AD1978(iVar5,puVar6);
    *(undefined4 *)(iVar5 + 0x2c) = uVar8;
    uVar4 = fn_82AC9F80(param_1,uVar4,0);
    uVar8 = fn_82AD1978(iVar5,uVar4);
    *(undefined4 *)(iVar5 + 0x30) = uVar8;
    puVar9 = (undefined4 *)fn_82AC6560(param_1,0xc,0x16);
    *puVar9 = 0;
    puVar9[2] = puVar9[2] & 0xf0000000 | (uVar20 & 0x3fff) << 0xe | param_4 & 0x3fff;
    puVar9[1] = *(undefined4 *)(iVar5 + 0x10);
    *(undefined4 **)(iVar5 + 0x10) = puVar9;
    puVar6 = (uint *)fn_82AD17B0(param_1,iVar5);
    *puVar6 = *puVar6 & 0xffffffe0 | 8;
    fn_82B89810(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                      (ulonglong)*(uint *)(param_1 + 0x234) + 0x18 | 3,puVar6);
  }
  else {
    if (uVar10 != 0x61) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    uVar4 = fn_82B479B0(param_1,puVar6,*(undefined4 *)(uVar23 + 0x30));
    uVar10 = fn_82B843F0(param_1,uVar23);
    uVar11 = uVar10 & 0xfffffffe;
    *(undefined4 *)(uVar10 + 0x1c) = *(undefined4 *)(param_1 + 0x234);
    iVar5 = *(int *)(param_1 + 0x234);
    puVar6 = (uint *)(iVar5 + 0x18);
    *(uint *)(uVar11 + 0x24) = *puVar6;
    *(uint *)(*puVar6 & 0xfffffffe) = uVar11;
    *(uint *)(uVar11 + 0x28) = iVar5 - 0xcU | 1;
    *puVar6 = uVar11 + 0x28;
    uVar8 = fn_82AD1978(uVar10,*(undefined4 *)(uVar23 + 0x2c));
    *(undefined4 *)(uVar10 + 0x2c) = uVar8;
    uVar4 = fn_82AD18C0(param_1,uVar4,0);
    uVar8 = fn_82AD1978(uVar10,uVar4);
    *(undefined4 *)(uVar10 + 0x30) = uVar8;
    if ((*(uint *)(*(int *)(*(int *)(uVar10 + 0x2c) + 0xc) + 8) & 0x3f80) == 0x3c00) {
      uVar11 = fn_82B843F0(param_1);
      uVar23 = uVar11 & 0xfffffffe;
      *(undefined4 *)(uVar11 + 0x1c) = *(undefined4 *)(param_1 + 0x234);
      iVar5 = *(int *)(param_1 + 0x234);
      puVar6 = (uint *)(iVar5 + 0x10);
      *(uint *)(uVar23 + 0x24) = *puVar6;
      *(uint *)(*puVar6 & 0xfffffffe) = uVar23;
      *(uint *)(uVar23 + 0x28) = iVar5 - 0x14U | 1;
      *puVar6 = uVar23 + 0x28;
      iVar5 = *(int *)(uVar10 + 0x2c);
      piVar12 = (int *)(*(int *)(iVar5 + 0xc) + 4);
      for (iVar2 = *piVar12; iVar2 != iVar5; iVar2 = *(int *)(iVar2 + 8)) {
        piVar12 = (int *)(iVar2 + 8);
      }
      *piVar12 = *(int *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(uVar11 + 4);
      *(int *)(uVar11 + 4) = iVar5;
      *(uint *)(iVar5 + 0xc) = uVar11;
    }
    puVar6 = (uint *)fn_82AD17B0(param_1,uVar10);
  }
  *puVar6 = uVar14 & 0x1f | *puVar6 & 0xffffffe0;
  uVar8 = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 4);
  fn_82B47660(param_2,param_6);
  iVar5 = *(int *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar8;
  iVar2 = *(int *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  puVar9 = (undefined4 *)((iVar5 + 2) * 8 + iVar2);
  *puVar9 = puVar6;
  puVar9[1] = puVar9[1] & 0x10000 | 2;
  return 1;
}

