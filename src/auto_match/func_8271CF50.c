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
extern unsigned int *auStack_24;
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_8271BF18();
extern int fn_827AE240();
extern unsigned int uStack_2c;
extern U64 storeWordConditionalIndexed();


void fn_8271CF50(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar4;
  undefined8 uVar3;
  uint *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  char in_RESERVE;
  byte bVar8;
  undefined4 *puStack_30;
  uint uStack_2c;
  undefined4 *puStack_28;
  uint auStack_24 [9];
  
  cVar4 = fn_82695468(param_1,0x1b);
  if (cVar4 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee50,0,0);
  }
  else {
    uVar7 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar7 = 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    fn_82696D38(&puStack_30,uVar3,uVar1,0xffffffffffffffff,0);
    fn_8268C510(auStack_24,*puStack_30);
    lVar6 = (ulonglong)(uint)puStack_30[2] - 1;
    bVar8 = (lVar6 == 0) << 1;
    puStack_30[2] = (int)lVar6;
    if (lVar6 == 0) {
      fn_826944C8(puStack_30);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    fn_82696D38(&puStack_28,uVar3,uVar1,0xffffffffffffffff,0);
    fn_8268C510(&uStack_2c,*puStack_28);
    lVar6 = uVar7 + 0x10;
    if ((uVar7 & 0xffffffff) == 0) {
      lVar6 = 0;
    }
    uVar3 = fn_8271BF18(*(undefined4 *)(param_1 + 0x18),lVar6,&uStack_2c);
    fn_827AE240(uVar7,*(undefined4 *)(param_1 + 0x18),uVar3);
    lVar6 = ((ulonglong)uStack_2c & 0xfffffffc) + 4;
    do {
      puVar5 = (uint *)lVar6;
      uVar7 = (ulonglong)*puVar5;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar6);
        *puVar5 = uVar2;
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
    if (uVar7 == 1) {
      fn_8267BE38();
    }
    lVar6 = (ulonglong)(uint)puStack_28[2] - 1;
    bVar8 = (lVar6 == 0) << 1;
    puStack_28[2] = (int)lVar6;
    if (lVar6 == 0) {
      fn_826944C8(puStack_28);
    }
    lVar6 = ((ulonglong)auStack_24[0] & 0xfffffffc) + 4;
    do {
      puVar5 = (uint *)lVar6;
      uVar7 = (ulonglong)*puVar5;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar6);
        *puVar5 = uVar2;
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
    if (uVar7 == 1) {
      fn_8267BE38();
    }
  }
  return;
}

