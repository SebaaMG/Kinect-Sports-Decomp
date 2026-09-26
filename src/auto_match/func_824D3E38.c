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
extern int fn_82230300();
extern int fn_824CC9E8();
extern int fn_824D47E0();
extern int fn_8265CA20();
extern unsigned int lbl_821C0C34;
extern unsigned int lbl_821C0D90;
extern U64 storeWordConditionalIndexed();


void fn_824D3E38(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar8;
  longlong lVar7;
  char in_RESERVE;
  byte in_cr0;
  
  puVar1 = (undefined4 *)param_1[0x3d];
  *param_1 = &lbl_821C0D90;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x3d] = 0;
  }
  iVar2 = param_1[0x3c];
  if (iVar2 != 0) {
    fn_82230300(iVar2 + 0x410,1,0);
    iVar8 = *(int *)(iVar2 + 0x90);
    if (iVar8 != 0) {
      for (; iVar8 != *(int *)(iVar2 + 0x94); iVar8 = iVar8 + 0x20) {
      }
      fn_8265CA20();
    }
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined4 *)(iVar2 + 0x94) = 0;
    *(undefined4 *)(iVar2 + 0x98) = 0;
    fn_8265CA20(iVar2);
    param_1[0x3c] = 0;
  }
  piVar3 = (int *)param_1[0x60];
  if (ZEXT48(piVar3) != 0) {
    lVar5 = ZEXT48(piVar3) + 8;
    do {
      puVar6 = (uint *)lVar5;
      lVar7 = (ulonglong)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(lVar7,0,lVar5);
        *puVar6 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(code **)(*piVar3 + 4))();
    }
  }
  piVar3 = (int *)param_1[0x5e];
  if (ZEXT48(piVar3) != 0) {
    lVar5 = ZEXT48(piVar3) + 8;
    do {
      puVar6 = (uint *)lVar5;
      lVar7 = (ulonglong)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(lVar7,0,lVar5);
        *puVar6 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(code **)(*piVar3 + 4))();
    }
  }
  fn_824D47E0(param_1 + 0x44);
  *param_1 = &lbl_821C0C34;
  fn_824CC9E8(param_1);
  return;
}

