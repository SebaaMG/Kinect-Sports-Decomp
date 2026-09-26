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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_82F541C8();
extern int fn_82F54720();
extern unsigned int lbl_821C0D3C;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_824D3898(undefined4 *param_1,undefined8 param_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar7;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar8;
  uint *puVar10;
  longlong lVar9;
  char in_RESERVE;
  byte bVar11;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar7 = fn_8265C9E0(0x60);
  if (iVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_82F54720();
  }
  uVar6 = fn_8265C9E0(0x10);
  bVar1 = (uVar6 & 0xffffffff) == 0;
  bVar11 = bVar1 << 1;
  if (bVar1) {
    uVar6 = 0;
  }
  else {
    puVar4 = (undefined4 *)uVar6;
    puVar4[3] = (int)uVar5;
    puVar4[1] = 1;
    *puVar4 = &lbl_821C0D3C;
    puVar4[2] = 1;
  }
  uStack_40 = 0;
  uStack_3c = 0;
  fn_82517978(&uStack_40,uVar5,uVar6,0);
  fn_82F541C8(param_2,&uStack_40);
  *param_1 = 0;
  param_1[1] = 0;
  if ((uVar6 & 0xffffffff) != 0) {
    do {
      puVar10 = (uint *)(uVar6 + 8);
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar10 + 1,0,uVar6 + 8);
        *puVar10 = uVar3;
        bVar11 = 2;
      }
    } while (!(bool)(bVar11 >> 1 & 1));
  }
  piVar2 = (int *)param_1[1];
  if (ZEXT48(piVar2) != 0) {
    lVar8 = ZEXT48(piVar2) + 8;
    do {
      puVar10 = (uint *)lVar8;
      lVar9 = (ulonglong)*puVar10 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar9,0,lVar8);
        *puVar10 = uVar3;
        bVar11 = 2;
      }
    } while (!(bool)(bVar11 >> 1 & 1));
    if ((int)lVar9 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  param_1[1] = (int)uVar6;
  *param_1 = (int)uVar5;
  if ((uVar6 & 0xffffffff) != 0) {
    fn_822315A0(uVar6);
  }
  return param_1;
}

