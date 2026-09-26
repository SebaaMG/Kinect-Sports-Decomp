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
extern unsigned int *auStack_110;
extern unsigned int *auStack_200;
extern unsigned int *auStack_290;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A976B8();
extern int fn_82AA8998();
extern int fn_82AA89B8();
extern int fn_82AA8A98();
extern int fn_82AA8B50();
extern int fn_82AA8BD0();
extern int fn_82AA8D50();
extern int fn_82AAB5D8();
extern int fn_82AABB18();
extern int fn_82AABFE0();
extern int fn_82AAC0C8();
extern int fn_82D7E470();
extern unsigned int iStack_198;
extern unsigned int iStack_1b4;
extern unsigned int iStack_1b8;
extern unsigned int iStack_1dc;
extern unsigned int iStack_1ec;
extern unsigned int iStack_260;
extern unsigned int iStack_264;
extern unsigned int iStack_268;
extern unsigned int iStack_26c;
extern unsigned int iStack_274;
extern unsigned int iStack_f4;
extern unsigned int iStack_f8;
extern unsigned int lbl_821A7F10;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1a6;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1c2;
extern unsigned int uStack_240;
extern unsigned int uStack_244;
extern unsigned int uStack_248;
extern unsigned int uStack_270;
extern unsigned int uStack_ee;


undefined8
fn_82A99540(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int *in_stack_00000054;
  int in_stack_0000005c;
  undefined4 auStack_290 [2];
  int aiStack_288 [5];
  int iStack_274;
  uint uStack_270;
  int iStack_26c;
  int iStack_268;
  int iStack_264;
  int iStack_260;
  undefined4 uStack_248;
  undefined4 uStack_244;
  uint uStack_240;
  int aiStack_23c [15];
  undefined1 auStack_200 [8];
  short sStack_1f8;
  int iStack_1ec;
  int iStack_1dc;
  ushort uStack_1c2;
  int iStack_1b8;
  int iStack_1b4;
  undefined2 uStack_1a8;
  ushort uStack_1a6;
  short sStack_1a4;
  int iStack_198;
  uint *puStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [8];
  int iStack_f8;
  int iStack_f4;
  short sStack_f0;
  ushort uStack_ee;
  
  uVar8 = 0;
  if (param_6 == (int *)0x0) {
    aiStack_288[0] = 0;
    param_6 = aiStack_288;
    aiStack_288[1] = 0;
  }
  iStack_26c = 0;
  iStack_264 = 0;
  iStack_268 = 0;
  iStack_260 = 0;
  puStack_120 = &uStack_270;
  aiStack_23c[1] = 0;
  aiStack_23c[2] = 0;
  aiStack_23c[3] = 0;
  aiStack_23c[4] = 0;
  uStack_248 = 4;
  uStack_244 = 7;
  aiStack_23c[in_stack_0000005c] = 1;
  uStack_240 = (uint)(in_stack_0000005c != 0);
  if (in_stack_00000054 != (int *)0x0) {
    iStack_268 = *in_stack_00000054;
    iStack_26c = in_stack_00000054[1];
    iStack_264 = in_stack_00000054[2] - iStack_268;
    iStack_260 = in_stack_00000054[3] - iStack_26c;
  }
  uStack_270 = (uint)(in_stack_00000054 != (int *)0x0);
  puStack_118 = auStack_110;
  iVar1 = fn_82AA8998(param_7,param_8,auStack_200);
  if (iVar1 != 0) {
    return 0xffffffff80004005;
  }
  iVar1 = fn_82AA89B8(auStack_200);
  if (iVar1 != 0) {
    return 0xffffffff80004005;
  }
  if (sStack_1f8 != 0x19a) {
    return 0xffffffff80004005;
  }
  if (iStack_1ec != 1) {
    return 0xffffffff80004005;
  }
  if (iStack_1dc != 0) {
    iVar1 = fn_8265C940(iStack_1dc,0x24870000);
    if (iVar1 == 0) {
      return 0xffffffff8007000e;
    }
    iVar2 = fn_82AA8A98(auStack_200,iVar1);
    if (iVar2 != 0) {
      return 0xffffffff80004005;
    }
    *(undefined1 *)(iVar1 + iStack_1dc + -1) = 0;
    fn_8265C990(iVar1,0x24870000);
  }
  auStack_290[0] = 0;
  iVar1 = fn_82AA8B50(auStack_200,auStack_290);
  if (iVar1 != 0) {
    return 0xffffffff80004005;
  }
  iVar1 = fn_82AA8BD0(auStack_200,0);
  if (iVar1 != 0) {
    return 0xffffffff80004005;
  }
  if (iStack_198 != 0) {
    iVar1 = fn_8265C940(iStack_198,0x24870000);
    if (iVar1 == 0) {
      return 0xffffffff8007000e;
    }
    iVar2 = fn_82AA8D50(auStack_200,iVar1,0);
    if (iVar2 != 0) {
      return 0xffffffff80004005;
    }
    *(undefined1 *)(iVar1 + iStack_198 + -1) = 0;
    fn_8265C990(iVar1,0x24870000);
  }
  iVar1 = fn_82AABB18(auStack_200);
  if (iVar1 != 0) {
    return 0xffffffff80004005;
  }
  if (sStack_1a4 == 1) {
    if (uStack_1a6 < 9) {
      uVar9 = 0x28000002;
    }
    else {
      uVar9 = 0x28000058;
    }
    goto LAB_82a997e4;
  }
  if (sStack_1a4 == 2) {
    if (uStack_1a6 < 9) {
      uVar9 = 0x800004a;
    }
    else {
      uVar9 = 0x2d200099;
    }
    goto LAB_82a997e4;
  }
  if (sStack_1a4 == 3) {
    if (8 < uStack_1a6) {
LAB_82a997dc:
      uVar9 = 0x1a20005a;
      goto LAB_82a997e4;
    }
    uVar9 = 0x2a200000;
  }
  else {
    if (8 < uStack_1a6) goto LAB_82a997dc;
    uVar9 = 0x1a200000;
  }
  uVar9 = uVar9 | 0x86;
LAB_82a997e4:
  puStack_11c = auStack_100;
  piVar5 = aiStack_23c + 4;
  puVar6 = auStack_100;
  lVar11 = 5;
  do {
    piVar5 = piVar5 + 1;
    *piVar5 = (int)puVar6;
    puVar6 = puVar6 + 0x18;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  iVar2 = iStack_1b4;
  iVar1 = iStack_1b8;
  if (uStack_240 == 0) {
    uStack_ee = uStack_1c2 >> 0xd & 1;
    iStack_f4 = iStack_1b8;
    iStack_f8 = iStack_1b4;
    sStack_f0 = sStack_1a4;
  }
  else {
    piVar5 = aiStack_23c;
    piVar7 = &iStack_f8;
    lVar11 = 5;
    do {
      iVar3 = *piVar5;
      piVar7[1] = iStack_1b8;
      *piVar7 = iStack_1b4;
      *(short *)(piVar7 + 2) = sStack_1a4;
      *(ushort *)((int)piVar7 + 10) = uStack_1c2 >> 0xd & 1;
      if (iVar3 != 0) {
        iVar1 = iStack_1b8;
        iVar2 = iStack_1b4;
      }
      iStack_1b8 = iStack_1b8 >> 1;
      if (iStack_1b8 < 1) {
        iStack_1b8 = 1;
      }
      iStack_1b4 = iStack_1b4 >> 1;
      if (iStack_1b4 < 1) {
        iStack_1b4 = 1;
      }
      piVar7 = piVar7 + 6;
      piVar5 = piVar5 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if ((uint)param_5 == uVar9) {
    lVar10 = (longlong)param_6[1] * (longlong)(int)param_2 +
             (longlong)*param_6 * (longlong)(int)(uint)((byte)(&lbl_821A7F10)[uVar9 & 0x3f] >> 3) +
             param_1;
    lVar11 = param_2;
  }
  else {
    lVar11 = (longlong)(int)(uint)((byte)(&lbl_821A7F10)[uVar9 & 0x3f] >> 3) * (longlong)iVar2;
    lVar10 = fn_8265C940((longlong)(int)lVar11 * (longlong)iVar1,0x24870000);
    if (lVar10 == 0) {
      return 0xffffffff8007000e;
    }
  }
  iVar3 = fn_82AAC0C8(lVar10,lVar11,auStack_100 + in_stack_0000005c * 0x18,uStack_1a8);
  if (iVar3 != 0) {
    return 0xffffffff80004005;
  }
  iVar3 = fn_82AAB5D8(auStack_200);
  fn_82AABFE0(auStack_200);
  iVar4 = fn_82D7E470(auStack_200);
  if (iVar4 != 0) {
    uVar8 = 0xffffffff80004005;
  }
  if (iVar3 < 0) {
    uVar8 = 0xffffffff80004005;
  }
  if ((uint)param_5 != uVar9) {
    aiStack_288[3] = 0;
    aiStack_288[2] = 0;
    aiStack_288[4] = iVar2;
    iStack_274 = iVar1;
    uVar8 = fn_82A976B8((double)lbl_821AAD20,param_1,param_2,param_3,param_4,param_5,param_6,
                              lVar10,lVar11);
    fn_8265C990(lVar10,0x24870000);
    return uVar8;
  }
  return uVar8;
}

