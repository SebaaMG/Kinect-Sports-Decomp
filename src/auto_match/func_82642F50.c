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
extern int fn_826415D0();
extern int fn_82642B68();
extern int fn_82642CC8();
extern int fn_82642E10();
extern int fn_82645110();
extern unsigned int iStack_b4;
extern unsigned int uRam832978b0;
extern unsigned int uRam832978b4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


ulonglong fn_82642F50(int param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar10;
  uint *puVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  bool bVar19;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  int iStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  
  uVar6 = 0;
  uStack_bc = 0xffffffff;
  uStack_b8 = 0xffffffff;
  uStack_ac = 0xffffffff;
  uStack_a8 = 0xffffffff;
  iStack_b4 = -1;
  uVar11 = 0xffffffffffffffff;
  uStack_b0 = 0;
  if ((param_2 & 0x20000) != 0) {
    param_2 = fn_826415D0();
  }
  iVar1 = *(int *)(param_1 + 0x3248);
  iVar5 = *(int *)(param_1 + 0x2ed8);
  iVar4 = *(int *)(param_1 + 0x3244);
  if (iVar1 == 0) {
    return param_2;
  }
  uVar14 = 0;
  iVar15 = *(int *)(iVar1 + 0x380) + iVar1 + 0x368;
  if (iVar4 != 0) goto LAB_826430b8;
  if ((*(byte *)(param_1 + 0x2abf) & 2) != 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x38) < uVar2) {
      uVar2 = fn_82645110(param_1);
    }
    *(undefined4 *)(uVar2 + 4) = 0x5c8;
    *(undefined4 *)(uVar2 + 8) = 0x20000;
    *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar2 + 8);
    *(byte *)(param_1 + 0x2abf) = *(byte *)(param_1 + 0x2abf) & 0xfc;
  }
  iVar16 = 0;
  bVar19 = (*(uint *)(iVar1 + 0x368) & 0x20) != 0;
  uVar2 = 0;
  if (bVar19) {
    iVar15 = *(int *)(iVar1 + 0x388) + iVar1 + 0x368;
  }
  uVar14 = (ulonglong)bVar19;
  uVar12 = param_2;
  if ((*(uint *)(param_1 + 0x2954) & 7) != 5) {
    *(uint *)(param_1 + 0x2954) = *(uint *)(param_1 + 0x2954) & 0xfffffff8 | 5;
    uVar12 = param_2 | 0x80008;
    if ((*(byte *)(param_1 + 0x2abf) & 8) != 0) {
      uVar12 = param_2 | 0x100000000080008;
      *(uint *)(param_1 + 0x2884) = *(uint *)(param_1 + 0x2884) & 0xfff0ffff;
    }
  }
  bVar19 = (*(uint *)(iVar15 + 0x14) & 0x1f) != 0;
  do {
    if ((*(int *)(param_1 + 0x3590) != 0) || ((*(uint *)(iVar1 + 0x368) & 0x10) == 0))
    goto LAB_8264324c;
    KeBugCheck(0xf5);
    param_2 = uVar12;
LAB_826430b8:
    iVar7 = *(int *)(iVar4 + 0x40) + iVar4;
    iVar16 = iVar7 + 0x28;
    uVar2 = *(uint *)(iVar7 + 0x30);
    uVar6 = *(uint *)(iVar7 + 0x34);
    uVar12 = -(ulonglong)(0x10000000 < (uVar2 & 0x70000000));
    *(byte *)(param_1 + 0x2abe) =
         (byte)((uVar12 & 1) << 3) | *(byte *)(param_1 + 0x2abe) & 8 |
         *(byte *)(param_1 + 0x2abe) & 0xf7;
    *(byte *)(param_1 + 0x2abf) =
         (byte)((uVar12 & 1) << 1) | *(byte *)(param_1 + 0x2abf) & 2 |
         *(byte *)(param_1 + 0x2abf) & 0xfd;
    uVar12 = param_2;
    if ((param_2 & 0x100000) != 0) {
      fn_82642CC8(param_1,iVar4 + 0x28,*(undefined4 *)(iVar4 + 0x18));
      uVar3 = *(uint *)(param_1 + 0x30);
      if (*(uint *)(param_1 + 0x38) < uVar3) {
        uVar3 = fn_82645110(param_1);
      }
      *(undefined4 *)(uVar3 + 4) = 0xc0012700;
      uVar12 = param_2 | 0x4000;
      uVar8 = *(int *)(*(int *)(iVar4 + 0x40) + iVar4 + 0x28) + *(int *)(iVar4 + 0x18);
      *(uint *)(uVar3 + 8) = ((uVar8 >> 0x14) + 0x200 & 0x1000) + (uVar8 & 0x1ffffffe) | 1;
      *(uint *)(uVar3 + 0xc) = *(uint *)(*(int *)(iVar4 + 0x40) + iVar4 + 0x2c) >> 2;
      *(uint **)(param_1 + 0x30) = (uint *)(uVar3 + 0xc);
      *(undefined4 *)(param_1 + 0x2928) = *(undefined4 *)(iVar7 + 0x40);
      if ((*(uint *)(param_1 + 0x2954) & 7) != 4) {
        uVar12 = param_2 | 0x84008;
        *(uint *)(param_1 + 0x2954) = *(uint *)(param_1 + 0x2954) & 0xfffffff8 | 4;
        if ((*(byte *)(param_1 + 0x2abf) & 8) != 0) {
          uVar12 = param_2 | 0x100000000084008;
          *(undefined4 *)(param_1 + 0x2884) = *(undefined4 *)(*(int *)(param_1 + 0x3148) + 0x1c);
        }
      }
    }
    if ((uRam832978b4 & 1) == 0) {
      uRam832978b4 = uRam832978b4 | 1;
      uRam832978b0 = 0x603ff;
    }
    bVar19 = (*(uint *)(iVar7 + 0x3c) & uRam832978b0) != (*(uint *)(iVar15 + 0x14) & uRam832978b0);
  } while ((*(int *)(param_1 + 0x3590) != 0) || ((*(uint *)(iVar4 + 0x28) & 0x10) == 0));
  KeBugCheck(0xf5);
LAB_8264324c:
  uStack_c0 = *(uint *)(iVar15 + 8);
  uVar3 = *(uint *)(param_1 + 0x2954);
  uVar8 = *(uint *)(iVar15 + 0xc);
  uVar13 = uVar2;
  uVar18 = uVar3;
  if ((*(byte *)(param_1 + 0x2abc) & 0x40) != 0) {
    if (iVar16 == 0) {
LAB_826432b0:
      uVar18 = uVar3 & 0xfffffff8 | 5;
    }
    else if ((((*(uint *)(param_1 + 0x293c) & 8) == 0) && ((*(uint *)(iVar16 + 0x1c) & 0x10) == 0))
            && ((*(uint *)(iVar16 + 0x1c) & 0x20) == 0)) {
      uVar13 = 0;
      uStack_b0 = *(byte *)(param_1 + 0x2abf) & 1;
      *(byte *)(param_1 + 0x2abf) = *(byte *)(param_1 + 0x2abf) & 0xfe;
      goto LAB_826432b0;
    }
    if ((uVar12 & 0x40000) != 0) {
      uStack_bc = uStack_c0 | uVar13;
      uStack_b8 = uVar8 | uVar6;
    }
    if ((uVar18 != *(uint *)(param_1 + 0x324c)) || ((uVar12 & 8) != 0)) {
      uVar12 = uVar12 | 8;
      *(uint *)(param_1 + 0x324c) = uVar18;
      uStack_ac = uVar18;
      if (((*(byte *)(param_1 + 0x2abf) & 8) != 0) &&
         (uStack_a8 = *(uint *)(param_1 + 0x2884), (uVar18 & 7) == 5)) {
        uStack_a8 = uStack_a8 & 0xfff0ffff;
      }
    }
  }
  *(byte *)(param_1 + 0x2abf) =
       *(byte *)(param_1 + 0x2abf) & 0xfe |
       -(0x10000000 < (uVar13 & 0x70000000)) & 1U | *(byte *)(param_1 + 0x2abf) & 1;
  if (((*(byte *)(param_1 + 0x2abe) & 0x80) == 0) && (bVar19 == false)) {
    if ((uVar12 & 0x80000) == 0) goto LAB_826434a0;
    puVar17 = (uint *)(iVar1 + 0x368);
    fn_82642CC8(param_1,puVar17,*(undefined4 *)(iVar1 + 0x20));
    bVar10 = *(byte *)(param_1 + 0x2abe) & 0xbf;
    *(byte *)(param_1 + 0x2abe) = bVar10;
    if ((iVar5 == 0) || ((*puVar17 & 0x40) != 0)) {
      uVar11 = uVar14;
      if ((((uVar18 ^ uVar3) & 7) == 0) || ((*puVar17 & 0x20) == 0)) goto LAB_826434a0;
    }
    else {
      if ((*(byte *)(param_1 + 0x2abc) & 0x80) != 0) {
        bVar19 = false;
        goto LAB_82643484;
      }
      iVar4 = fn_82642E10(param_1,iVar1,iVar5,uVar14);
      if (iVar4 == 0) {
        fn_82642B68(param_1,0,iVar1,&uStack_c0,iVar5,iVar15,iVar16,uVar14);
        uVar14 = uVar11;
      }
      uVar11 = uVar14;
      if (((((uVar18 ^ uVar3) & 7) == 0) || ((*puVar17 & 0x20) == 0)) ||
         (iVar5 = fn_82642E10(param_1,iVar1,iVar5,1), iVar5 == 0)) goto LAB_826434a0;
      bVar10 = *(byte *)(param_1 + 0x2abe);
    }
    iStack_b4 = 1;
    *(byte *)(param_1 + 0x2abe) = bVar10 | 0x40;
    uVar11 = uVar14;
  }
  else {
    if ((uVar12 & 0x180000) == 0) goto LAB_826434a0;
    *(byte *)(param_1 + 0x2abe) = *(byte *)(param_1 + 0x2abe) & 0xbf;
    fn_82642CC8(param_1,iVar1 + 0x368,*(undefined4 *)(iVar1 + 0x20));
LAB_82643484:
    fn_82642B68(param_1,bVar19,iVar1,&uStack_c0,iVar5,iVar15,iVar16,uVar14);
  }
LAB_826434a0:
  if ((uVar12 & 0x180000) != 0) {
    *(uint *)(param_1 + 0x2924) = uVar8 | uVar6;
    uVar12 = uVar12 | 0x18000;
    *(uint *)(param_1 + 0x2920) = uStack_c0 | uVar2;
    if ((*(byte *)(param_1 + 0x2abe) & 0x40) == 0) {
      if ((uVar13 == 0) && (uVar2 != 0)) {
        uStack_bc = uStack_c0;
        uStack_b8 = uVar8;
      }
    }
    else {
      iVar5 = *(int *)(iVar1 + 0x388) + iVar1;
      uStack_bc = *(uint *)(iVar5 + 0x370) | uVar13;
      uStack_b8 = *(uint *)(iVar5 + 0x374) | uVar6;
    }
  }
  iVar5 = (int)uVar11;
  if ((*(byte *)(param_1 + 0x2abc) & 0x40) == 0) {
    if (iVar5 != -1) {
      uVar6 = *(uint *)(param_1 + 0x30);
      if (*(uint *)(param_1 + 0x38) < uVar6) {
        uVar6 = fn_82645110(param_1);
      }
      *(undefined4 *)(uVar6 + 4) = 0xc0012700;
      iVar4 = (int)((uVar11 + 0x70 & 0xffffffff) << 3);
      uVar2 = *(int *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x368) + *(int *)(iVar1 + 0x20);
      *(uint *)(uVar6 + 8) = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff);
      *(uint *)(uVar6 + 0xc) = *(uint *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x36c) >> 2;
      *(undefined4 *)(iVar5 * 0x1a0 + iVar1 + 0x40) = *(undefined4 *)(param_1 + 0x2a9c);
      *(uint **)(param_1 + 0x30) = (uint *)(uVar6 + 0xc);
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x38) < uVar6) {
      uVar6 = fn_82645110(param_1);
    }
    *(undefined4 *)(uVar6 + 4) = 0xc0006000;
    *(undefined4 *)(uVar6 + 8) = 0x15555555;
    *(undefined4 *)(uVar6 + 0xc) = 0xc0006100;
    puVar17 = (uint *)(uVar6 + 0x10);
    *puVar17 = 0;
    if ((uVar12 & 8) != 0) {
      *(undefined4 *)(uVar6 + 0x14) = 0x2208;
      uVar12 = uVar12 & 0xfffffffffffffff7;
      puVar17 = (uint *)(uVar6 + 0x18);
      *puVar17 = *(uint *)(param_1 + 0x2954);
    }
    if (uStack_b0 != 0) {
      puVar17[1] = 0xc0002601;
      puVar17 = puVar17 + 2;
      *puVar17 = 0;
    }
    if (uStack_ac != 0xffffffff) {
      puVar17[1] = 0xc0012d01;
      puVar17[2] = 0x40208;
      puVar17 = puVar17 + 3;
      *puVar17 = uStack_ac;
    }
    if ((uVar12 & 0x100000000000000) != 0) {
      puVar17[1] = 0x2001;
      uVar12 = uVar12 & 0xfeffffffffffffff;
      puVar17 = puVar17 + 2;
      *puVar17 = *(uint *)(param_1 + 0x2884);
    }
    if (uStack_a8 != 0xffffffff) {
      puVar17[1] = 0xc0012d01;
      puVar17[2] = 0x40001;
      puVar17 = puVar17 + 3;
      *puVar17 = uStack_a8;
    }
    if ((uVar12 & 0x10000) != 0) {
      puVar17[1] = 0x12180;
      uVar12 = uVar12 & 0xfffffffffffe7fff;
      puVar17[2] = *(uint *)(param_1 + 0x2920);
      puVar17 = puVar17 + 3;
      *puVar17 = *(uint *)(param_1 + 0x2924);
    }
    if (uStack_bc != 0xffffffff) {
      puVar17[1] = 0xc0022d01;
      puVar17[2] = 0x40180;
      puVar17[3] = uStack_bc;
      puVar17 = puVar17 + 4;
      *puVar17 = uStack_b8;
    }
    if (iStack_b4 == -1) {
      puVar9 = puVar17;
      if (iVar5 != -1) {
        iVar4 = (int)((uVar11 + 0x70 & 0xffffffff) << 3);
        puVar17[1] = 0xc0012700;
        uVar6 = *(int *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x368) + *(int *)(iVar1 + 0x20);
        puVar17[2] = ((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff);
        puVar9 = puVar17 + 3;
        *puVar9 = *(uint *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x36c) >> 2;
        *(undefined4 *)(iVar5 * 0x1a0 + iVar1 + 0x40) = *(undefined4 *)(param_1 + 0x2a9c);
      }
    }
    else {
      iVar4 = (iStack_b4 + 0x70) * 8;
      puVar17[1] = 0xc0012701;
      uVar6 = *(int *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x368) + *(int *)(iVar1 + 0x20);
      puVar17[2] = ((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff);
      puVar17[3] = *(uint *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x36c) >> 2;
      *(undefined4 *)(iStack_b4 * 0x1a0 + iVar1 + 0x40) = *(undefined4 *)(param_1 + 0x2a9c);
      puVar9 = puVar17 + 3;
      if (iVar5 != -1) {
        puVar17[4] = 0xc0006000;
        iVar4 = (int)((uVar11 + 0x70 & 0xffffffff) << 3);
        puVar17[5] = 0x2aaaaaaa;
        puVar17[6] = 0xc0012701;
        uVar6 = *(int *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x368) + *(int *)(iVar1 + 0x20);
        puVar17[7] = ((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff);
        puVar9 = puVar17 + 8;
        *puVar9 = *(uint *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x36c) >> 2;
        *(undefined4 *)(iVar5 * 0x1a0 + iVar1 + 0x40) = *(undefined4 *)(param_1 + 0x2a9c);
      }
    }
    puVar9[1] = 0xc0006000;
    puVar9[2] = *(uint *)(param_1 + 0x3254);
    puVar9[3] = 0xc0006100;
    puVar9[4] = *(uint *)(param_1 + 0x3258);
    *(uint **)(param_1 + 0x30) = puVar9 + 4;
  }
  return uVar12;
}

