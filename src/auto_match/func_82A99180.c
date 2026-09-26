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
extern unsigned int *auStack_1f0;
extern unsigned int *auStack_21c;
extern unsigned int *auStack_280;
extern unsigned int *auStack_f0;
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
extern unsigned int iStack_188;
extern unsigned int iStack_1a4;
extern unsigned int iStack_1a8;
extern unsigned int iStack_1cc;
extern unsigned int iStack_1dc;
extern unsigned int iStack_264;
extern unsigned int iStack_e4;
extern unsigned int iStack_e8;
extern unsigned int lbl_821A7F10;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_196;
extern unsigned int uStack_198;
extern unsigned int uStack_1b2;
extern unsigned int uStack_220;
extern unsigned int uStack_224;
extern unsigned int uStack_228;
extern unsigned int uStack_230;
extern unsigned int uStack_234;
extern unsigned int uStack_238;
extern unsigned int uStack_250;
extern unsigned int uStack_254;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;
extern unsigned int uStack_260;
extern unsigned int uStack_de;


undefined8
fn_82A99180(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 auStack_280 [2];
  int aiStack_278 [5];
  int iStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 auStack_21c [11];
  undefined1 auStack_1f0 [8];
  short sStack_1e8;
  int iStack_1dc;
  int iStack_1cc;
  ushort uStack_1b2;
  int iStack_1a8;
  int iStack_1a4;
  undefined2 uStack_198;
  ushort uStack_196;
  short sStack_194;
  int iStack_188;
  undefined4 *puStack_110;
  undefined1 *puStack_10c;
  undefined1 *puStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [8];
  int iStack_e8;
  int iStack_e4;
  short sStack_e0;
  ushort uStack_de;
  
  uVar5 = 0;
  if (param_6 == (int *)0x0) {
    aiStack_278[0] = 0;
    param_6 = aiStack_278;
    aiStack_278[1] = 0;
  }
  uStack_260 = 0;
  uStack_25c = 0;
  puStack_110 = &uStack_260;
  uStack_254 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_230 = 0;
  puStack_108 = auStack_100;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  auStack_21c[0] = 0;
  uStack_238 = 4;
  uStack_234 = 7;
  iVar1 = fn_82AA8998(param_7,param_8,auStack_1f0);
  if (iVar1 != 0) {
    return 0xffffffff80004005;
  }
  iVar1 = fn_82AA89B8(auStack_1f0);
  if (iVar1 != 0) {
    return 0xffffffff80004005;
  }
  if (sStack_1e8 != 0x19a) {
    return 0xffffffff80004005;
  }
  if (iStack_1dc != 1) {
    return 0xffffffff80004005;
  }
  if (iStack_1cc != 0) {
    iVar1 = fn_8265C940(iStack_1cc,0x24870000);
    if (iVar1 == 0) {
      return 0xffffffff8007000e;
    }
    iVar2 = fn_82AA8A98(auStack_1f0,iVar1);
    if (iVar2 != 0) {
      return 0xffffffff80004005;
    }
    *(undefined1 *)(iVar1 + iStack_1cc + -1) = 0;
    fn_8265C990(iVar1,0x24870000);
  }
  auStack_280[0] = 0;
  iVar1 = fn_82AA8B50(auStack_1f0,auStack_280);
  if (iVar1 != 0) {
    return 0xffffffff80004005;
  }
  iVar1 = fn_82AA8BD0(auStack_1f0,0);
  if (iVar1 != 0) {
    return 0xffffffff80004005;
  }
  if (iStack_188 != 0) {
    iVar1 = fn_8265C940(iStack_188,0x24870000);
    if (iVar1 == 0) {
      return 0xffffffff8007000e;
    }
    iVar2 = fn_82AA8D50(auStack_1f0,iVar1,0);
    if (iVar2 != 0) {
      return 0xffffffff80004005;
    }
    *(undefined1 *)(iVar1 + iStack_188 + -1) = 0;
    fn_8265C990(iVar1,0x24870000);
  }
  if (sStack_194 == 1) {
    if (uStack_196 < 9) {
      uVar6 = 0x28000002;
    }
    else {
      uVar6 = 0x28000058;
    }
    goto LAB_82a993c0;
  }
  if (sStack_194 == 2) {
    if (uStack_196 < 9) {
      uVar6 = 0x800004a;
    }
    else {
      uVar6 = 0x2d200099;
    }
    goto LAB_82a993c0;
  }
  if (sStack_194 == 3) {
    if (8 < uStack_196) {
LAB_82a993b8:
      uVar6 = 0x1a20005a;
      goto LAB_82a993c0;
    }
    uVar6 = 0x2a200000;
  }
  else {
    if (8 < uStack_196) goto LAB_82a993b8;
    uVar6 = 0x1a200000;
  }
  uVar6 = uVar6 | 0x86;
LAB_82a993c0:
  if ((uint)param_5 == uVar6) {
    lVar8 = (longlong)param_6[1] * (longlong)(int)param_2 +
            (longlong)*param_6 * (longlong)(int)(uint)((byte)(&lbl_821A7F10)[uVar6 & 0x3f] >> 3) +
            param_1;
    lVar7 = param_2;
  }
  else {
    lVar7 = (longlong)(int)(uint)((byte)(&lbl_821A7F10)[uVar6 & 0x3f] >> 3) * (longlong)iStack_1a4;
    lVar8 = fn_8265C940((longlong)(int)lVar7 * (longlong)iStack_1a8,0x24870000);
    if (lVar8 == 0) {
      return 0xffffffff8007000e;
    }
  }
  puStack_10c = auStack_f0;
  uStack_de = uStack_1b2 >> 0xd & 1;
  iStack_e4 = iStack_1a8;
  iStack_e8 = iStack_1a4;
  puVar3 = auStack_21c;
  puVar4 = auStack_f0;
  lVar9 = 5;
  sStack_e0 = sStack_194;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = puVar4;
    puVar4 = puVar4 + 0x18;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar1 = fn_82AAC0C8(lVar8,lVar7,auStack_f0,uStack_198);
  if ((iVar1 == 0) && (iVar1 = fn_82AABB18(auStack_1f0), iVar1 == 0)) {
    iVar1 = fn_82AAB5D8(auStack_1f0);
    fn_82AABFE0(auStack_1f0);
    iVar2 = fn_82D7E470(auStack_1f0);
    if (iVar2 != 0) {
      uVar5 = 0xffffffff80004005;
    }
    if (iVar1 < 0) {
      uVar5 = 0xffffffff80004005;
    }
    if ((uint)param_5 != uVar6) {
      aiStack_278[4] = iStack_1a4;
      iStack_264 = iStack_1a8;
      aiStack_278[3] = 0;
      aiStack_278[2] = 0;
      uVar5 = fn_82A976B8((double)lbl_821AAD20,param_1,param_2,param_3,param_4,param_5,param_6
                                ,lVar8,lVar7);
      fn_8265C990(lVar8,0x24870000);
      return uVar5;
    }
    return uVar5;
  }
  return 0xffffffff80004005;
}

