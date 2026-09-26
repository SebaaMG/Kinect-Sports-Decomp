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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_8268B330();
extern int fn_8268B610();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_826979D0();
extern int fn_8269A190();
extern int fn_827418A8();
extern U64 storeWordConditionalIndexed();


void fn_82741E88(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar5;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 **ppuVar7;
  uint *puVar8;
  longlong lVar6;
  int *piVar9;
  undefined1 *puVar10;
  char in_RESERVE;
  byte bVar11;
  longlong lVar12;
  uint auStack_d0 [4];
  undefined1 auStack_c0 [16];
  int aiStack_b0 [4];
  undefined4 *puStack_a0;
  undefined4 *puStack_9c;
  undefined4 *puStack_98;
  undefined4 *puStack_94;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  int aiStack_88 [2];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [8];
  
  cVar5 = fn_82695468(param_1,0xf);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef08,0,0);
  }
  else {
    uVar3 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar3 = 0;
    }
    if ((uVar3 & 0xffffffff) != 0) {
      ppuVar7 = &puStack_90;
      lVar12 = 6;
      do {
        ppuVar7 = ppuVar7 + 4;
        *(undefined1 *)ppuVar7 = 0;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fn_827418A8(uVar3,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,auStack_80);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826979D0(auStack_c0,auStack_80,uVar1,0);
      fn_82696D38(&puStack_a0,uVar4,uVar1,6,0);
      fn_82696330(auStack_c0);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826979D0(auStack_c0,auStack_70,uVar1,0);
      fn_82696D38(&puStack_9c,uVar4,uVar1,6,0);
      fn_82696330(auStack_c0);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826979D0(auStack_c0,auStack_60,uVar1,0);
      fn_82696D38(&puStack_98,uVar4,uVar1,6,0);
      fn_82696330(auStack_c0);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826979D0(auStack_c0,auStack_50,uVar1,0);
      fn_82696D38(&puStack_94,uVar4,uVar1,6,0);
      fn_82696330(auStack_c0);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826979D0(auStack_c0,auStack_40,uVar1,0);
      fn_82696D38(&puStack_90,uVar4,uVar1,6,0);
      fn_82696330(auStack_c0);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826979D0(auStack_c0,auStack_30,uVar1,0);
      fn_82696D38(&puStack_8c,uVar4,uVar1,6,0);
      fn_82696330(auStack_c0);
      fn_8268B330(auStack_d0);
      fn_8268B610(auStack_d0,0xffffffff82012648,0xffffffffffffffff);
      fn_8268B610(auStack_d0,*puStack_a0,0xffffffffffffffff);
      fn_8268B610(auStack_d0,0xffffffff82012640,0xffffffffffffffff);
      fn_8268B610(auStack_d0,*puStack_9c,0xffffffffffffffff);
      fn_8268B610(auStack_d0,0xffffffff82012638,0xffffffffffffffff);
      fn_8268B610(auStack_d0,*puStack_98,0xffffffffffffffff);
      fn_8268B610(auStack_d0,0xffffffff82012630,0xffffffffffffffff);
      fn_8268B610(auStack_d0,*puStack_94,0xffffffffffffffff);
      fn_8268B610(auStack_d0,0xffffffff82012628,0xffffffffffffffff);
      fn_8268B610(auStack_d0,*puStack_90,0xffffffffffffffff);
      fn_8268B610(auStack_d0,0xffffffff82012620,0xffffffffffffffff);
      fn_8268B610(auStack_d0,*puStack_8c,0xffffffffffffffff);
      fn_8268B610(auStack_d0,0xffffffff821c24f0,0xffffffffffffffff);
      fn_8269A190(aiStack_b0,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                        auStack_d0);
      fn_82681838(*(undefined4 *)(param_1 + 4),aiStack_b0);
      lVar12 = (ulonglong)*(uint *)(aiStack_b0[0] + 8) - 1;
      bVar11 = (lVar12 == 0) << 1;
      *(int *)(aiStack_b0[0] + 8) = (int)lVar12;
      if (lVar12 == 0) {
        fn_826944C8();
      }
      lVar12 = ((ulonglong)auStack_d0[0] & 0xfffffffc) + 4;
      do {
        puVar8 = (uint *)lVar12;
        uVar3 = (ulonglong)*puVar8;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar3 - 1,0,lVar12);
          *puVar8 = uVar2;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
      if (uVar3 == 1) {
        fn_8267BE38();
      }
      piVar9 = aiStack_88;
      lVar12 = 5;
      do {
        piVar9 = piVar9 + -1;
        lVar6 = (ulonglong)*(uint *)(*piVar9 + 8) - 1;
        *(int *)(*piVar9 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8();
        }
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
      puVar10 = auStack_20;
      lVar12 = 5;
      do {
        puVar10 = puVar10 + -0x10;
        fn_82696330(puVar10);
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
    }
  }
  return;
}

