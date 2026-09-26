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
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_8268B330();
extern int fn_8268B610();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_8269A190();
extern int fn_827450A8();
extern unsigned int uStack_80;
extern U64 storeWordConditionalIndexed();


void fn_82745760(int param_1)

{
  uint uVar1;
  char cVar3;
  ulonglong uVar2;
  undefined4 **ppuVar5;
  uint *puVar6;
  longlong lVar4;
  int *piVar7;
  undefined1 *puVar8;
  char in_RESERVE;
  byte bVar9;
  longlong lVar10;
  uint uStack_80;
  int aiStack_7c [3];
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  int aiStack_60 [4];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [8];
  
  cVar3 = fn_82695468(param_1,0x11);
  if (cVar3 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eef4,0,0);
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar2 = 0;
    }
    if ((uVar2 & 0xffffffff) != 0) {
      ppuVar5 = &puStack_70;
      lVar10 = 4;
      do {
        ppuVar5 = ppuVar5 + 4;
        *(undefined1 *)ppuVar5 = 0;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      fn_827450A8(uVar2,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,aiStack_60);
      fn_82696D38(&puStack_70,aiStack_60,*(undefined4 *)(param_1 + 0x18),6,0);
      fn_82696D38(&puStack_6c,auStack_50,*(undefined4 *)(param_1 + 0x18),6,0);
      fn_82696D38(&puStack_68,auStack_40,*(undefined4 *)(param_1 + 0x18),6,0);
      fn_82696D38(&puStack_64,auStack_30,*(undefined4 *)(param_1 + 0x18),6,0);
      fn_8268B330(&uStack_80);
      fn_8268B610(&uStack_80,0xffffffff820127b8,0xffffffffffffffff);
      fn_8268B610(&uStack_80,*puStack_70,0xffffffffffffffff);
      fn_8268B610(&uStack_80,0xffffffff820127b0,0xffffffffffffffff);
      fn_8268B610(&uStack_80,*puStack_6c,0xffffffffffffffff);
      fn_8268B610(&uStack_80,0xffffffff820129f0,0xffffffffffffffff);
      fn_8268B610(&uStack_80,*puStack_68,0xffffffffffffffff);
      fn_8268B610(&uStack_80,0xffffffff820129e4,0xffffffffffffffff);
      fn_8268B610(&uStack_80,*puStack_64,0xffffffffffffffff);
      fn_8268B610(&uStack_80,0xffffffff821c24f0,0xffffffffffffffff);
      fn_8269A190(aiStack_7c,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                        &uStack_80);
      fn_82681838(*(undefined4 *)(param_1 + 4),aiStack_7c);
      lVar10 = (ulonglong)*(uint *)(aiStack_7c[0] + 8) - 1;
      bVar9 = (lVar10 == 0) << 1;
      *(int *)(aiStack_7c[0] + 8) = (int)lVar10;
      if (lVar10 == 0) {
        fn_826944C8();
      }
      lVar10 = ((ulonglong)uStack_80 & 0xfffffffc) + 4;
      do {
        puVar6 = (uint *)lVar10;
        uVar2 = (ulonglong)*puVar6;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar2 - 1,0,lVar10);
          *puVar6 = uVar1;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      if (uVar2 == 1) {
        fn_8267BE38();
      }
      piVar7 = aiStack_60;
      lVar10 = 3;
      do {
        piVar7 = piVar7 + -1;
        lVar4 = (ulonglong)*(uint *)(*piVar7 + 8) - 1;
        *(int *)(*piVar7 + 8) = (int)lVar4;
        if (lVar4 == 0) {
          fn_826944C8();
        }
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
      puVar8 = auStack_20;
      lVar10 = 3;
      do {
        puVar8 = puVar8 + -0x10;
        fn_82696330(puVar8);
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
    }
  }
  return;
}

