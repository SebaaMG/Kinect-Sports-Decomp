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
extern int fn_8263AC58();
extern int fn_8263B0F8();
extern unsigned int iStack_88;
extern unsigned int lbl_821CBFB1;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_82A940E8(uint *param_1,uint *param_2,uint *param_3,undefined4 *param_4,int param_5,
                  ulonglong param_6)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uStack_90;
  uint uStack_8c;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  int aiStack_7c [31];
  
  uVar2 = *(uint *)(param_5 + 0x20) & 0x3f;
  iVar5 = *(int *)(param_5 + 0x28) >> 0x1f;
  uVar8 = (ulonglong)(uint)-iVar5;
  uVar1 = (&lbl_821CBFB1)[(*(uint *)(param_5 + 0x20) & 0x3f) * 2];
  uVar4 = *(uint *)(param_5 + 0x30) >> 9 & 3;
  uVar3 = *(uint *)(param_5 + 0x1c) >> 0x1f;
  fn_8263B0F8(param_5,&uStack_84,&uStack_80,aiStack_7c);
  lVar7 = (uVar8 - LZCOUNT(uStack_84 + iVar5 * 2 + -1)) + 0x20;
  lVar6 = (uVar8 - LZCOUNT(uStack_80 + iVar5 * 2 + -1)) + 0x20;
  if ((param_6 & 0xffffffff) != 0) {
    lVar11 = (uVar8 - LZCOUNT(uStack_84 + iVar5 * 2 + -1)) + 0x20;
    lVar9 = (uVar8 - LZCOUNT(uStack_80 + iVar5 * 2 + -1)) + 0x20;
    if ((int)lVar9 <= (int)lVar11) {
      lVar11 = lVar9;
    }
    uVar10 = lVar11 - 4;
    uVar10 = (((uVar10 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(uVar10 == 0) & uVar10;
    if (((param_6 & 0xffffffff) < (uVar10 & 0xffffffff)) ||
       ((*(uint *)(param_5 + 0x30) & 0x800) == 0)) {
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
      param_6 = uVar10;
    }
    if (uVar4 == 2) {
      lVar11 = (uVar8 - LZCOUNT(aiStack_7c[0] + iVar5 * 2 + -1)) + 0x20;
    }
    else {
      lVar11 = 0;
    }
    uVar10 = lVar7 - param_6;
    uVar8 = lVar6 - param_6;
    uStack_90 = 1 << (-(uint)(uVar10 < 0xffffffff80000000) & (uint)uVar10 & 0x3f);
    uStack_8c = 1 << (-(uint)(uVar8 < 0xffffffff80000000) & (uint)uVar8 & 0x3f);
    iStack_88 = 1 << (-(uint)(lVar11 - param_6 < 0xffffffff80000000) & (uint)(lVar11 - param_6) &
                     0x3f);
    fn_8263AC58(&uStack_90,&uStack_8c,&iStack_88,uVar1,uVar2,uVar4,uVar3);
    goto LAB_82a94328;
  }
  uStack_90 = 1 << ((uint)lVar7 & 0x3f);
  uStack_8c = 1 << ((uint)lVar6 & 0x3f);
  if ((uStack_90 < 0x11) || (uStack_8c < 0x11)) {
    if ((*(uint *)(param_5 + 0x30) & 0x800) == 0) goto LAB_82a941cc;
    uVar12 = 1;
  }
  else {
LAB_82a941cc:
    uStack_90 = uStack_84;
    uVar12 = 0;
    uStack_8c = uStack_80;
  }
  iStack_88 = 1;
  fn_8263AC58(&uStack_90,&uStack_8c,&iStack_88,uVar1,uVar2,uVar4,uVar3);
  uStack_90 = *(uint *)(param_5 + 0x1c) >> 0x11 & 0x3fe0;
LAB_82a94328:
  if (param_1 != (uint *)0x0) {
    *param_1 = uStack_90;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uStack_8c;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar3;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar12;
  }
  return;
}

