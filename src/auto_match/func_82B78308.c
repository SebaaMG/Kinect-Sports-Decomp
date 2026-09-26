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
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern int fn_82AB15D0();
extern int fn_82AB71F0();
extern int fn_82B6EA60();
extern int fn_82B6EB98();
extern int fn_82B6EF18();
extern int fn_82B6F100();
extern int fn_82B74738();
extern int fn_82B74A38();
extern int fn_82B74CD0();
extern int fn_82B9CE48();
extern int fn_82B9D720();
extern unsigned int iStack_bc;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_fc;
extern unsigned int uStack00000024;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;


undefined4 fn_82B78308(int param_1,int param_2,undefined4 param_3,uint *param_4)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  double dVar17;
  undefined4 uStack00000024;
  uint *puStack0000002c;
  int aiStack_118 [6];
  undefined1 auStack_100 [4];
  int iStack_fc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int iStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  bVar2 = *(byte *)(param_2 + 1);
  uVar16 = (uint)bVar2;
  uVar12 = 0;
  iVar4 = *(int *)(param_1 + 0x1c);
  aiStack_118[1] = 1;
  aiStack_118[2] = -1;
  iVar10 = 0;
  uStack00000024 = param_3;
  puStack0000002c = param_4;
  fn_82B9CE48(*(undefined4 *)(param_1 + 0x14),uVar16,auStack_100,0,0);
  dVar17 = (double)fn_82B6F100(*(undefined4 *)(param_1 + 0x14),0x10,uVar16);
  fStack_cc = (float)dVar17;
  dVar17 = (double)fn_82B6F100(*(undefined4 *)(param_1 + 0x14),0x11,uVar16);
  fStack_c8 = (float)dVar17;
  dVar17 = (double)fn_82B6F100(*(undefined4 *)(param_1 + 0x14),0x12,uVar16);
  fStack_c4 = (float)dVar17;
  dVar17 = (double)fn_82B6F100(*(undefined4 *)(param_1 + 0x14),0x13,uVar16);
  fStack_c0 = (float)dVar17;
  fn_82B9D720(*(undefined4 *)(param_1 + 0x14),uVar16,&iStack_d8,&iStack_d4,&iStack_d0,0,0);
  iStack_bc = fn_82AB71F0(*(undefined4 *)(param_1 + 0x14),0x4f,uVar16);
  uStack_b8 = fn_82AB71F0(*(undefined4 *)(param_1 + 0x14),0x46,uVar16);
  uStack_ac = 1;
  uStack_a8 = 0;
  if ((*(ushort *)(param_2 + 4) & 0x3f) != 4) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dac10,0xffffffff820da3b8,0x2360);
  }
  if (0x14 < uVar16) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dabfc,0xffffffff820da3b8,0x2363);
  }
  uVar3 = *(ushort *)(param_2 + 0x12);
  uVar13 = *(uint *)(param_2 + 4) & 0xffff;
  if (*(int *)(((*(uint *)(param_2 + 4) >> 10 & 0xfc0) + uVar13 + 0x1068) * 4 + iVar4) == -1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820daba8,0xffffffff820da3b8,0x236a);
  }
  uVar6 = *(undefined4 *)(((*(ushort *)(param_2 + 4) & 0x3f) * 0x40 + uVar13 + 0x1068) * 4 + iVar4);
  if (*(int *)(((*(ushort *)(param_2 + 0x10) & 0x3f) * 0x40 + (uint)uVar3 + 0x1068) * 4 + iVar4) ==
      -1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dab50,0xffffffff820da3b8,0x236f);
  }
  uVar11 = *(undefined4 *)
            (((*(ushort *)(param_2 + 0x10) & 0x3f) * 0x40 + (uint)uVar3 + 0x1068) * 4 + iVar4);
  if (*(short *)(param_2 + 2) == 0x5e) {
    uVar13 = *(uint *)(param_2 + 0x14) & 0xffff;
    if (*(int *)(((*(uint *)(param_2 + 0x14) >> 10 & 0xfc0) + uVar13 + 0x1068) * 4 + iVar4) == -1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820daaf8,0xffffffff820da3b8,0x2377);
    }
    uVar7 = *(undefined4 *)
             (((*(ushort *)(param_2 + 0x14) & 0x3f) * 0x40 + uVar13 + 0x1068) * 4 + iVar4);
  }
  else {
    uVar7 = 0;
  }
  if ((*(uint *)(param_2 + 4) & 0x400000) == 0) {
    uVar12 = 0x3210;
  }
  else {
    uVar13 = *(uint *)(param_2 + 8);
    uVar5 = uVar13 & 3;
    if ((uVar13 & 3) == 0) {
      uVar12 = 7;
    }
    else if (uVar5 != 1) {
      if (uVar5 < 3) {
        uVar12 = 4;
      }
      else if (uVar5 == 3) {
        uVar12 = 5;
      }
    }
    uVar5 = uVar13 >> 2 & 3;
    if (uVar5 == 0) {
      uVar12 = uVar12 | 0x70;
    }
    else if (uVar5 == 1) {
      uVar12 = uVar12 | 0x10;
    }
    else if (uVar5 < 3) {
      uVar12 = uVar12 | 0x40;
    }
    else if (uVar5 == 3) {
      uVar12 = uVar12 | 0x50;
    }
    uVar5 = uVar13 >> 4 & 3;
    if (uVar5 == 0) {
      uVar12 = uVar12 | 0x700;
    }
    else if (uVar5 == 1) {
      uVar12 = uVar12 | 0x200;
    }
    else if (uVar5 < 3) {
      uVar12 = uVar12 | 0x400;
    }
    else if (uVar5 == 3) {
      uVar12 = uVar12 | 0x500;
    }
    uVar13 = uVar13 >> 6 & 3;
    if (uVar13 == 0) {
      uVar12 = uVar12 | 0x7000;
    }
    else if (uVar13 == 1) {
      uVar12 = uVar12 | 0x3000;
    }
    else if (uVar13 < 3) {
      uVar12 = uVar12 | 0x4000;
    }
    else if (uVar13 == 3) {
      uVar12 = uVar12 | 0x5000;
    }
  }
  if ((*(uint *)(param_2 + 0x10) & 0x400000) == 0) {
    uVar13 = 0x210;
  }
  else {
    uVar13 = *(uint *)(param_2 + 0x1c) & 0x777;
  }
  if (*(short *)(param_2 + 2) == 0x5e) {
    if ((*(uint *)(param_2 + 0x14) & 0x400000) == 0) {
      uVar14 = 0x333;
    }
    else {
      uVar14 = (ulonglong)*(uint *)(param_2 + 0x1c) & 0x7000;
      uVar14 = (((ulonglong)(*(uint *)(param_2 + 0x1c) >> 4) & 0x700 | uVar14) >> 4 | uVar14) >> 4;
    }
  }
  else {
    uVar14 = 0;
  }
  uVar5 = *(uint *)((uint)bVar2 * 8 + iVar4 + 0x32c4);
  if ((ulonglong)uVar5 != 0) {
    lVar9 = (ulonglong)uVar5 - 1;
    iStack_fc = (int)lVar9 - ((uVar5 - 2) + (uint)(lVar9 == 0));
  }
  iVar8 = *(int *)((uVar16 + 0x658) * 8 + iVar4);
  if (iVar8 == 0) {
LAB_82b78774:
    if (iStack_bc != 3) goto LAB_82b787cc;
LAB_82b78780:
    uStack_b4 = fn_82B6EA60(param_1);
    fn_82B74738(param_1,auStack_100,param_2,uStack00000024);
    iVar10 = 4;
    lVar15 = (ulonglong)*(uint *)(iVar4 + 0xc) + (ulonglong)*puStack0000002c;
    lVar9 = lVar15 + 4;
    aiStack_118[0] = (int)lVar9;
    uVar11 = uStack_b4;
    if (aiStack_118[0] == -1) goto LAB_82b787cc;
  }
  else {
    if (iVar8 == 1) {
      iStack_bc = 0;
      goto LAB_82b78774;
    }
    if (iVar8 != 2) {
      if (iVar8 == 3) {
        iStack_bc = 2;
        goto LAB_82b787cc;
      }
      if (iVar8 != 4) {
        if (iVar8 != 5) goto LAB_82b78744;
        iStack_bc = 4;
        goto LAB_82b787cc;
      }
      iStack_bc = 3;
      goto LAB_82b78780;
    }
LAB_82b78744:
    iStack_bc = 1;
LAB_82b787cc:
    lVar15 = (ulonglong)*(uint *)(iVar4 + 0xc) + (ulonglong)*puStack0000002c;
    aiStack_118[0] = (int)lVar15;
    lVar9 = lVar15;
  }
  if (uStack_b8 < 0x102d) {
    if (uStack_b8 < 0x102b) {
      if (uStack_b8 < 0x1021) {
        if (uStack_b8 < 0x101d) {
          if (uStack_b8 < 0x1000) goto LAB_82b7885c;
          if (0x1003 < uStack_b8) {
            if (uStack_b8 < 0x100f) goto LAB_82b7885c;
            if ((0x1015 < uStack_b8) && (uStack_b8 != 0x1019)) {
              bVar1 = uStack_b8 == 0x101b;
              goto LAB_82b78830;
            }
          }
        }
      }
      else if (uStack_b8 != 0x1022) {
        if (uStack_b8 < 0x1024) goto LAB_82b7885c;
        if (0x1025 < uStack_b8) {
          bVar1 = uStack_b8 == 0x1029;
LAB_82b78830:
          if (!bVar1) goto LAB_82b7885c;
        }
      }
    }
LAB_82b78834:
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x248d);
LAB_82b78850:
    if (aiStack_118[2] != -1) goto LAB_82b78860;
  }
  else if (uStack_b8 < 0x104f) {
    if (0x104c < uStack_b8) {
      fn_82B74A38(param_1,param_2,uStack00000024);
      aiStack_118[2] = (int)lVar9 + 3;
      iVar10 = iVar10 + 3;
      goto LAB_82b78850;
    }
    if (((uStack_b8 == 0x102e) || (uStack_b8 == 0x1030)) || (uStack_b8 == 0x1037))
    goto LAB_82b78834;
    if (uStack_b8 == 0x103b) {
LAB_82b78a28:
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x2456);
    }
  }
  else if (0x104e < uStack_b8) {
    if (0x1059 < uStack_b8) {
      if (uStack_b8 < 0x105c) goto LAB_82b78a28;
      if (0x1064 < uStack_b8) goto LAB_82b7885c;
    }
    goto LAB_82b78834;
  }
LAB_82b7885c:
  aiStack_118[2] = (int)lVar9;
LAB_82b78860:
  if (*(short *)(param_2 + 2) == 0x5e) {
    fn_82B6EF18(param_1,auStack_100,0x18,uVar16,uVar7,uVar14,uVar6,uVar12);
    uStack_a8 = 2;
    uStack_ac = 0;
    aiStack_118[1] = 2;
  }
  fn_82B6EF18(param_1,auStack_100,1,uVar16,uVar11,uVar13,uVar6,uVar12);
  fn_82B6EB98(param_1,iVar4 + 0x3360,lVar15,2,aiStack_118);
  iVar8 = aiStack_118[2];
  aiStack_118[0] = -1;
  aiStack_118[2] = 0xffffffff;
  aiStack_118[1] = 1;
  if ((iStack_d8 < 4) || (bVar1 = true, 7 < iStack_d8)) {
    bVar1 = false;
  }
  if ((3 < iStack_d4) && (iStack_d4 < 8)) {
    bVar1 = true;
  }
  if ((3 < iStack_d0) && (iStack_d0 < 8)) {
    bVar1 = true;
  }
  if (bVar1) {
    uStack_b0 = fn_82B6EA60(param_1);
    fn_82B74CD0(param_1,auStack_100,param_2,uStack00000024);
    aiStack_118[2] = iVar8 + 1;
    aiStack_118[0] = iVar8;
    iVar10 = iVar10 + 1;
    fn_82B6EF18(param_1,auStack_100,0x10,uVar16,uVar11,uVar13,uStack_b0,0);
    fn_82B6EB98(param_1,iVar4 + 0x3360,iVar8,2,aiStack_118);
  }
  *(int *)(param_1 + 0x664) = *(int *)(param_1 + 0x664) + 1;
  *puStack0000002c = *puStack0000002c + iVar10;
  return uStack00000024;
}

