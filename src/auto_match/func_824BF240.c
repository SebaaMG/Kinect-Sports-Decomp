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
extern int fn_8225F160();
extern int fn_82471140();
extern int fn_824BF410();
extern int fn_824BF5A0();
extern int fn_824BF690();
extern int fn_824BFC80();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_824BF240(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  iVar3 = fn_8225F160();
  iVar7 = param_1 + 0x14;
  uVar1 = *(uint *)(iVar3 + 0x68);
  fn_824BF690(iVar7);
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar3 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 8);
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    for (; iVar3 != iVar2; iVar3 = iVar3 + 0x28) {
      if ((*(int *)(iVar3 + 0x18) != 0) || (puVar4 = &uStack_60, *(int *)(iVar3 + 0x1c) != 0)) {
        puVar4 = &uStack_70;
      }
      fn_82471140(puVar4,iVar3);
    }
    lVar9 = 0;
    puVar5 = (uint *)(param_1 + 0x8c);
    lVar10 = 6;
    do {
      puVar5 = puVar5 + 1;
      lVar9 = (ulonglong)*puVar5 + lVar9;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    fn_824BF410(&uStack_70,&uStack_60,*(undefined4 *)(param_1 + 0xb8),iVar7,
                      *(undefined4 *)(param_1 + 0xa8),lVar9);
    fn_824BF5A0(&uStack_60);
    fn_824BF5A0(&uStack_70);
  }
  else {
    uVar8 = 0;
    do {
      iVar3 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 8);
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      for (; iVar3 != iVar2; iVar3 = iVar3 + 0x28) {
        if (*(uint *)(iVar3 + 0x20) == uVar8) {
          if ((*(int *)(iVar3 + 0x18) != 0) || (puVar4 = &uStack_70, *(int *)(iVar3 + 0x1c) != 0)) {
            puVar4 = &uStack_60;
          }
          fn_82471140(puVar4,iVar3);
        }
      }
      puVar5 = (uint *)(param_1 + 0x8c);
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      lVar9 = 6;
      uVar6 = 0;
      do {
        puVar5 = puVar5 + 1;
        uVar6 = *puVar5 + uVar6;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      fn_824BF410(&uStack_60,&uStack_70,
                        (ulonglong)*(uint *)(param_1 + 0xb8) / (ulonglong)uVar1,&uStack_80,
                        (ulonglong)*(uint *)(param_1 + 0xa8) / (ulonglong)uVar1,
                        (uVar6 & 0xffffffff) / (ulonglong)uVar1);
      fn_824BFC80(iVar7,*(undefined4 *)(param_1 + 0x18),uStack_80,uStack_7c);
      fn_824BF5A0(&uStack_80);
      fn_824BF5A0(&uStack_70);
      fn_824BF5A0(&uStack_60);
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
  }
  return;
}

