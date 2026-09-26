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
extern unsigned int lbl_821C0D24;
extern unsigned int lbl_821C0DB8;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_824D3760(undefined4 *param_1,undefined8 param_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar6;
  ulonglong uVar5;
  longlong lVar7;
  uint *puVar9;
  longlong lVar8;
  char in_RESERVE;
  byte bVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar6 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &lbl_821C0D24;
  }
  uVar5 = fn_8265C9E0(0x10);
  bVar1 = (uVar5 & 0xffffffff) == 0;
  bVar10 = bVar1 << 1;
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    puVar4 = (undefined4 *)uVar5;
    puVar4[3] = puVar6;
    puVar4[1] = 1;
    *puVar4 = &lbl_821C0DB8;
    puVar4[2] = 1;
  }
  uStack_40 = 0;
  uStack_3c = 0;
  fn_82517978(&uStack_40,puVar6,uVar5,0);
  fn_82F541C8(param_2,&uStack_40);
  *param_1 = 0;
  param_1[1] = 0;
  if ((uVar5 & 0xffffffff) != 0) {
    do {
      puVar9 = (uint *)(uVar5 + 8);
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar9 + 1,0,uVar5 + 8);
        *puVar9 = uVar3;
        bVar10 = 2;
      }
    } while (!(bool)(bVar10 >> 1 & 1));
  }
  piVar2 = (int *)param_1[1];
  if (ZEXT48(piVar2) != 0) {
    lVar7 = ZEXT48(piVar2) + 8;
    do {
      puVar9 = (uint *)lVar7;
      lVar8 = (ulonglong)*puVar9 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar8,0,lVar7);
        *puVar9 = uVar3;
        bVar10 = 2;
      }
    } while (!(bool)(bVar10 >> 1 & 1));
    if ((int)lVar8 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  param_1[1] = (int)uVar5;
  *param_1 = puVar6;
  if ((uVar5 & 0xffffffff) != 0) {
    fn_822315A0(uVar5);
  }
  return param_1;
}

