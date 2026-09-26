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
extern int fn_8223AAC0();
extern int fn_8232B708();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B0684;
extern unsigned int lbl_821B069C;
extern unsigned int lbl_821B06B8;
extern U64 storeWordConditionalIndexed();


int * fn_822BE6D0(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  uint *puVar8;
  longlong lVar7;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  char in_RESERVE;
  byte bVar13;
  
  uVar4 = fn_8251F720(param_2 + 0x254,0);
  uVar5 = fn_8265C9E0(100);
  if (uVar5 == 0) {
    uVar5 = 0;
    bVar13 = 2;
  }
  else {
    lVar11 = uVar5 + 0xc;
    bVar13 = (lVar11 == 0) << 1;
    puVar3 = (undefined4 *)uVar5;
    puVar3[1] = 1;
    *puVar3 = &lbl_821AD588;
    puVar3[2] = 1;
    if (lVar11 != 0) {
      fn_8232B708(lVar11,param_2,uVar4);
      puVar3[0x18] = &lbl_821B0684;
      *(undefined4 *)lVar11 = &lbl_821B069C;
      puVar3[0x18] = &lbl_821B06B8;
    }
  }
  uVar12 = 0;
  uVar10 = 0;
  if ((uVar5 & 0xffffffff) != 0) {
    cVar6 = fn_8223AAC0(uVar5);
    bVar13 = (cVar6 == '\0') << 1;
    if (cVar6 != '\0') {
      uVar12 = uVar5;
      uVar10 = (int)(uVar5 + 0xc);
    }
  }
  iVar9 = *(int *)(param_2 + 0x5ac);
  *(int *)(param_2 + 0x5ac) = (int)uVar12;
  *(undefined4 *)(param_2 + 0x5a8) = uVar10;
  if (iVar9 != 0) {
    fn_822315A0();
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((uVar5 & 0xffffffff) != 0) {
    do {
      puVar8 = (uint *)(uVar5 + 8);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)*puVar8 + 1,0,uVar5 + 8);
        *puVar8 = uVar2;
        bVar13 = 2;
      }
    } while (!(bool)(bVar13 >> 1 & 1));
  }
  piVar1 = (int *)param_1[1];
  if (ZEXT48(piVar1) != 0) {
    lVar11 = ZEXT48(piVar1) + 8;
    do {
      puVar8 = (uint *)lVar11;
      lVar7 = (ulonglong)*puVar8 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar7,0,lVar11);
        *puVar8 = uVar2;
        bVar13 = 2;
      }
    } while (!(bool)(bVar13 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  param_1[1] = (int)uVar5;
  iVar9 = (int)uVar5 + 0x60;
  if ((uVar5 + 0xc & 0xffffffff) == 0) {
    iVar9 = 0;
  }
  *param_1 = iVar9;
  if ((uVar5 & 0xffffffff) != 0) {
    fn_822315A0(uVar5);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_8251FA58(uVar4);
  }
  return param_1;
}

