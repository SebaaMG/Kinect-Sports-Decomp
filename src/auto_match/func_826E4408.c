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
extern unsigned int *auStack_48;
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8268BA10();
extern int fn_8268C590();
extern int fn_826E3FB0();
extern int fn_826F34B0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern U64 storeWordConditionalIndexed();


longlong fn_826E4408(undefined8 param_1,ulonglong param_2,undefined8 param_3,int *param_4,
                      undefined4 *param_5,undefined8 param_6)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar7;
  longlong lVar6;
  ulonglong uVar8;
  undefined4 uVar9;
  char in_RESERVE;
  byte bVar10;
  uint uStack_50;
  uint uStack_4c;
  uint auStack_48 [18];
  
  lVar3 = fn_826F34B0(param_3,param_1,param_2);
  bVar10 = (lVar3 == 0) << 1;
  if (lVar3 == 0) {
    uVar4 = fn_8268C590(&uStack_50,0xffffffff8200d31c,param_1,0xffffffff8200d338);
    fn_8268BA10(param_6,uVar4);
    lVar3 = ((ulonglong)uStack_50 & 0xfffffffc) + 4;
    do {
      puVar7 = (uint *)lVar3;
      uVar8 = (ulonglong)*puVar7;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar8 - 1,0,lVar3);
        *puVar7 = uVar1;
        bVar10 = 2;
      }
    } while (!(bool)(bVar10 >> 1 & 1));
    if (uVar8 == 1) {
      fn_8267BE38();
    }
    return 0;
  }
  iVar5 = fn_826E3FB0(lVar3);
  *param_4 = iVar5;
  if (iVar5 == 2) {
    bVar2 = (param_2 & 0x80000) == 0;
    bVar10 = bVar2 << 1;
    if (!bVar2) {
      uVar4 = fn_8268C590(auStack_48,0xffffffff8200d2c0,param_1,0xffffffff8200d2dc);
      fn_8268BA10(param_6,uVar4);
      lVar6 = ((ulonglong)auStack_48[0] & 0xfffffffc) + 4;
      do {
        puVar7 = (uint *)lVar6;
        uVar8 = (ulonglong)*puVar7;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar8 - 1,0,lVar6);
          *puVar7 = uVar1;
          bVar10 = 2;
        }
      } while (!(bool)(bVar10 >> 1 & 1));
      if (uVar8 == 1) {
        fn_8267BE38();
      }
      fn_8267C4F0(lVar3);
      return 0;
    }
LAB_826e45ec:
    uVar9 = 1;
  }
  else {
    if (iVar5 == 3) goto LAB_826e45ec;
    if ((iVar5 < 10) ||
       (((0xb < iVar5 && ((iVar5 < 0xd || (0xe < iVar5)))) ||
        (bVar2 = (param_2 & 0x10000) == 0, bVar10 = bVar2 << 1, bVar2)))) {
      uVar4 = fn_8268C590(&uStack_4c,0xffffffff8200d2fc,param_1,0xffffffff8200d338);
      fn_8268BA10(param_6,uVar4);
      lVar6 = ((ulonglong)uStack_4c & 0xfffffffc) + 4;
      do {
        puVar7 = (uint *)lVar6;
        uVar8 = (ulonglong)*puVar7;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar8 - 1,0,lVar6);
          *puVar7 = uVar1;
          bVar10 = 2;
        }
      } while (!(bool)(bVar10 >> 1 & 1));
      if (uVar8 == 1) {
        fn_8267BE38();
      }
      lVar6 = 0;
      goto LAB_826e4564;
    }
    uVar9 = 2;
  }
  *param_5 = uVar9;
  fn_8267C4C8(lVar3);
  lVar6 = lVar3;
LAB_826e4564:
  fn_8267C4F0(lVar3);
  return lVar6;
}

