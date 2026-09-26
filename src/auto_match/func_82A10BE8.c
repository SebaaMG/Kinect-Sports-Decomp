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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_100;
extern unsigned int *auStack_98;
extern unsigned int *auStack_ac;
extern unsigned int *auStack_e4;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A0EED0();
extern int fn_82A10378();
extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A1E6A0();
extern int fn_82A29AC0();
extern int fn_82A29D80();
extern int fn_82A29DE8();
extern int fn_82A2A108();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern int fn_82F6F870();
extern unsigned int iStack_9c;
extern unsigned int iStack_b0;
extern unsigned int iStack_f4;
extern unsigned int iStack_f8;
extern unsigned int lbl_831BB8F0;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a4;
extern unsigned int uStack_d4;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;


/* WARNING: Removing unreachable block (ram,0x82a11278) */
/* WARNING: Removing unreachable block (ram,0x82a11280) */
/* WARNING: Removing unreachable block (ram,0x82a1133c) */
/* WARNING: Removing unreachable block (ram,0x82a112d4) */
/* WARNING: Removing unreachable block (ram,0x82a11328) */
/* WARNING: Type propagation algorithm not settling */

undefined8 fn_82A10BE8(int param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar5;
  undefined8 uVar2;
  uint uVar6;
  short *psVar7;
  ulonglong uVar3;
  int iVar8;
  undefined8 uVar4;
  int *piVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 auStack_100 [2];
  int iStack_f8;
  int iStack_f4;
  ulonglong uStack_f0;
  uint uStack_e8;
  undefined1 auStack_e4 [4];
  int aiStack_e0 [3];
  uint uStack_d4;
  int aiStack_d0 [8];
  int iStack_b0;
  undefined1 auStack_ac [8];
  undefined4 uStack_a4;
  int iStack_9c;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  
  piVar9 = aiStack_d0 + 4;
  psVar7 = (short *)0x0;
  aiStack_d0[4] = 0;
  lVar12 = 9;
  uStack_80 = lbl_831BB8F0;
  do {
    piVar9 = piVar9 + 1;
    *piVar9 = 0;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  uStack_90 = *(undefined4 *)(param_1 + 0x1e74);
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uVar11 = 0;
  iVar5 = fn_8265C940(0x10b212,0x249c0000);
  uVar10 = 0xffffffff8007000e;
  uVar4 = uVar10;
  if (iVar5 == 0) goto LAB_82a10da4;
  uVar11 = iVar5 + 0x10U & 0xfffffff0;
  uStack_f0 = CONCAT44(iVar5 + 0x10U,uVar11 + 0x40000) & 0xfffffff0ffffffff;
  *(int *)(uVar11 - 4) = iVar5;
  iStack_b0 = fn_82A1E6A0(0,0,0,0);
  iStack_9c = fn_82A1E6A0(0,0,0,0);
  if ((iStack_b0 == 0) || (iStack_9c == 0)) {
    uVar4 = 0xffffffff80004005;
    goto LAB_82a10da4;
  }
  uVar2 = fn_82A29DE8(param_2,0xffffffff80000000,1,0,3,0x60000000,0);
  if ((int)uVar2 == -1) {
    uVar4 = 0xffffffff80004005;
    goto LAB_82a10da4;
  }
  uVar6 = fn_82A29D80(uVar2,0);
  psVar7 = (short *)fn_82A0EED0(0xffff,0x10);
  if (psVar7 == (short *)0x0) goto LAB_82a10d9c;
  iVar5 = fn_82A2A108(uVar2,uVar11,0x40000,&uStack_e8,aiStack_d0 + 4);
  if (iVar5 == 0) {
    iStack_f8 = thunk_FUN_82a2b798();
    if ((iStack_f8 == 0x3e5) || (iStack_f8 == 0x26)) goto LAB_82a10e50;
LAB_82a10d94:
    uVar4 = 0xffffffff80004005;
  }
  else {
    iStack_f8 = 0;
LAB_82a10e50:
    iVar5 = iStack_f8;
    if (0x40000 < uVar6) {
      uStack_a4 = 0x40000;
      iVar8 = fn_82A2A108(uVar2,uVar11 + 0x40000,0x40000,auStack_e4,auStack_ac);
      if (iVar8 == 0) {
        iStack_f4 = thunk_FUN_82a2b798();
        if ((iStack_f4 != 0x3e5) && (iStack_f4 != 0x26)) goto LAB_82a10d94;
      }
      else {
        iStack_f4 = 0;
      }
    }
    if ((((iVar5 == 0x3e5) &&
         ((iVar5 = fn_82A1E650(iStack_b0,0xffffffffffffffff), iVar5 != 0 ||
          (iVar5 = fn_82A29AC0(uVar2,aiStack_d0 + 4,&uStack_e8,0), iVar5 == 0)))) ||
        (uStack_e8 < 0x4c)) ||
       (((fn_82F68CC0(psVar7,uVar11,0xffff), *psVar7 != 0x5c42 || ((psVar7[1] & 0x3fU) != 1)) ||
        ((psVar7[1] & 0xffc0U) != 0)))) goto LAB_82a10d94;
    *(uint *)(param_1 + 0x1bbc) = *(uint *)(psVar7 + 5) & 1;
    uVar3 = (ulonglong)*(uint *)(psVar7 + 3);
    lVar12 = 0x21ee48a - uVar3;
    if (0x21ee489 < uVar3) {
      lVar12 = 0;
    }
    iVar5 = fn_8265C940(lVar12 + uVar3,0xffffffffbc9c0002);
    *(int *)(param_1 + 0x1d2c) = iVar5;
    if (iVar5 != 0) {
      aiStack_d0[3] = 0;
      aiStack_e0[2] = *(int *)(psVar7 + 3);
      aiStack_d0[2] = 0x80000;
      aiStack_d0[0] = uVar6 - (ushort)psVar7[2];
      aiStack_d0[1] = 0x8000;
      uStack_d4 = (uint)(ushort)psVar7[2];
      aiStack_e0[1] = 0;
      aiStack_e0[0] = iVar5;
      iVar5 = LDICreateDecompression
                        (aiStack_d0 + 1,aiStack_d0 + 2,0,0,uVar11 + 0x88002,auStack_98,auStack_100);
      if (iVar5 != 0) goto LAB_82a10d94;
      do {
        uVar4 = fn_82A10378(param_1,uVar2,auStack_100[0],aiStack_e0,aiStack_e0 + 2,aiStack_d0,
                              aiStack_e0 + 1,&uStack_d4);
      } while ((int)uVar4 == -0x7ffffff6);
      LDIDestroyDecompression(auStack_100[0]);
    }
  }
LAB_82a10d9c:
  fn_82A1E658(uVar2);
LAB_82a10da4:
  if (iStack_b0 != 0) {
    fn_82A1E658();
  }
  if (iStack_9c != 0) {
    fn_82A1E658();
  }
  if (uVar11 != 0) {
    fn_8265C990(*(undefined4 *)(uVar11 - 4),0x249c0000);
  }
  if (-1 < (int)uVar4) {
    *(uint *)(param_1 + 0x1d34) = (uint)*(byte *)((int)psVar7 + 0x4b);
    *(uint *)(param_1 + 0x1d74) = (uint)(ushort)psVar7[7];
    *(uint *)(param_1 + 0x1d78) = (uint)(ushort)psVar7[8];
    bVar1 = *(byte *)((int)psVar7 + 0x4b);
    *(uint *)(param_1 + 0x1d34) = (uint)bVar1;
    uStack_f0 = (ulonglong)(1 << (*(byte *)(psVar7 + 0x25) & 0x3f));
    *(float *)(param_1 + 0x1d38) = (float)(longlong)uStack_f0;
    uVar3 = fn_82A0EED0((ulonglong)bVar1 << 3,0x10);
    *(int *)(param_1 + 0x1d30) = (int)uVar3;
    uVar4 = uVar10;
    if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3,0,*(int *)(param_1 + 0x1d34) << 3);
    }
  }
  if (psVar7 != (short *)0x0) {
    fn_8265C990(*(undefined4 *)(psVar7 + -2),0x249c0000);
  }
  if (-1 < (int)uVar4) {
    uVar11 = *(int *)(param_1 + 0x1d74) << 1;
    uVar6 = *(uint *)(param_1 + 0x1d78);
    if (*(uint *)(param_1 + 0x1d78) < uVar11) {
      uVar6 = uVar11;
    }
    *(undefined4 *)(param_1 + 0x1e70) = 5;
    uStack_88 = 5;
    *(int *)(param_1 + 0x1e6c) = 0x20 - (int)LZCOUNT(uVar6 - 1);
  }
  fn_82F6F870(uStack_80);
  return uVar4;
}

