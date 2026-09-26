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
extern unsigned int *auStack_70;
extern int fn_82230218();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822C7078();
extern int fn_822C7578();
extern int fn_822FB670();
extern int fn_82326670();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_824060E8();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern U64 storeWordConditionalIndexed();


void fn_82326290(int param_1,undefined8 param_2,undefined8 param_3,uint *param_4,uint *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar4;
  int iVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  ulonglong uVar12;
  char in_RESERVE;
  byte bVar13;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined1 auStack_70 [4];
  int *piStack_6c;
  
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  fn_824060E8(&puStack_80,param_1 + 0x34);
  fn_822C7078(auStack_70,&puStack_80,uVar2,uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  puVar5 = (undefined4 *)fn_8265C9E0(0x88);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
    bVar13 = 2;
  }
  else {
    puVar6 = puVar5 + 3;
    bVar13 = (puVar6 == (undefined4 *)0x0) << 1;
    puVar5[1] = 1;
    *puVar5 = &lbl_821AD588;
    puVar5[2] = 1;
    if (puVar6 != (undefined4 *)0x0) {
      fn_822FB670(puVar6,param_2,auStack_70,uVar1,param_3,param_7);
    }
  }
  uVar12 = (ulonglong)*param_4;
  uVar3 = param_4[1];
  if (uVar12 != uVar3) {
    do {
      uVar4 = fn_822C7578(puVar5 + 0x13,uVar12);
      fn_82230218(uVar4,uVar12 + 0x1c,0,0xffffffffffffffff);
      uVar12 = uVar12 + 0x38;
    } while ((uVar12 & 0xffffffff) != (ulonglong)uVar3);
  }
  if (*param_5 != 0) {
    uVar4 = fn_822C7578(puVar5 + 0x13,(ulonglong)*param_5 + 4);
    fn_82230218(uVar4,param_6,0,0xffffffffffffffff);
    iVar7 = fn_82365BD8(&puStack_80,param_5);
    fn_82376640(puVar5 + 0xf,iVar7);
    if (*(int *)(iVar7 + 4) != 0) {
      fn_822315A0();
    }
  }
  puStack_80 = (undefined4 *)0x0;
  puStack_7c = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    cVar8 = fn_8223AAC0(puVar5);
    bVar13 = (cVar8 == '\0') << 1;
    if (cVar8 != '\0') {
      puStack_80 = puVar5 + 3;
      puStack_7c = puVar5;
    }
  }
  fn_82326670(param_1,&puStack_80,param_8);
  if (puStack_7c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puVar5 != (undefined4 *)0x0) {
    fn_822315A0(puVar5);
  }
  if (ZEXT48(piStack_6c) != 0) {
    lVar10 = ZEXT48(piStack_6c) + 8;
    do {
      puVar11 = (uint *)lVar10;
      lVar9 = (ulonglong)*puVar11 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar9,0,lVar10);
        *puVar11 = uVar3;
        bVar13 = 2;
      }
    } while (!(bool)(bVar13 >> 1 & 1));
    if ((int)lVar9 == 0) {
      (**(code **)(*piStack_6c + 4))();
    }
  }
  return;
}

