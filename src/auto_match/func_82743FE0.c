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
extern int fn_827437A0();
extern unsigned int iStack_4c;
extern unsigned int uStack_50;
extern U64 storeWordConditionalIndexed();


void fn_82743FE0(int param_1)

{
  uint uVar1;
  char cVar3;
  ulonglong uVar2;
  uint *puVar5;
  longlong lVar4;
  int *piVar6;
  undefined1 *puVar7;
  char in_RESERVE;
  byte bVar8;
  longlong lVar9;
  uint uStack_50;
  int iStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  int aiStack_40 [4];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [8];
  
  cVar3 = fn_82695468(param_1,0x10);
  if (cVar3 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef00,0,0);
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar2 = 0;
    }
    if ((uVar2 & 0xffffffff) != 0) {
      puVar5 = &uStack_50;
      lVar9 = 2;
      do {
        puVar5 = puVar5 + 4;
        *(undefined1 *)puVar5 = 0;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      fn_827437A0(uVar2,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,aiStack_40);
      fn_82696D38(&puStack_48,aiStack_40,*(undefined4 *)(param_1 + 0x18),6,0);
      fn_82696D38(&puStack_44,auStack_30,*(undefined4 *)(param_1 + 0x18),6,0);
      fn_8268B330(&uStack_50);
      fn_8268B610(&uStack_50,0xffffffff820127b8,0xffffffffffffffff);
      fn_8268B610(&uStack_50,*puStack_48,0xffffffffffffffff);
      fn_8268B610(&uStack_50,0xffffffff820127b0,0xffffffffffffffff);
      fn_8268B610(&uStack_50,*puStack_44,0xffffffffffffffff);
      fn_8268B610(&uStack_50,0xffffffff821c24f0,0xffffffffffffffff);
      fn_8269A190(&iStack_4c,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                        &uStack_50);
      fn_82681838(*(undefined4 *)(param_1 + 4),&iStack_4c);
      lVar9 = (ulonglong)*(uint *)(iStack_4c + 8) - 1;
      bVar8 = (lVar9 == 0) << 1;
      *(int *)(iStack_4c + 8) = (int)lVar9;
      if (lVar9 == 0) {
        fn_826944C8();
      }
      lVar9 = ((ulonglong)uStack_50 & 0xfffffffc) + 4;
      do {
        puVar5 = (uint *)lVar9;
        uVar2 = (ulonglong)*puVar5;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar2 - 1,0,lVar9);
          *puVar5 = uVar1;
          bVar8 = 2;
        }
      } while (!(bool)(bVar8 >> 1 & 1));
      if (uVar2 == 1) {
        fn_8267BE38();
      }
      piVar6 = aiStack_40;
      lVar9 = 1;
      do {
        piVar6 = piVar6 + -1;
        lVar4 = (ulonglong)*(uint *)(*piVar6 + 8) - 1;
        *(int *)(*piVar6 + 8) = (int)lVar4;
        if (lVar4 == 0) {
          fn_826944C8();
        }
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
      puVar7 = auStack_20;
      lVar9 = 1;
      do {
        puVar7 = puVar7 + -0x10;
        fn_82696330(puVar7);
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
  }
  return;
}

