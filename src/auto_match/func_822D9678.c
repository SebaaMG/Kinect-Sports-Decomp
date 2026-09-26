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
extern int fn_8265CA20();
extern U64 storeWordConditionalIndexed();


void fn_822D9678(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  char in_RESERVE;
  byte in_cr0;
  
  piVar1 = (int *)param_1[7];
  if (ZEXT48(piVar1) != 0) {
    lVar4 = ZEXT48(piVar1) + 8;
    do {
      puVar5 = (uint *)lVar4;
      lVar6 = (ulonglong)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar6,0,lVar4);
        *puVar5 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar6 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar8 = *param_1;
  if (iVar8 != 0) {
    iVar2 = param_1[1];
    for (; iVar8 != iVar2; iVar8 = iVar8 + 0x20) {
      iVar7 = *(int *)(iVar8 + 0x10);
      if (iVar7 != 0) {
        for (; iVar7 != *(int *)(iVar8 + 0x14); iVar7 = iVar7 + 0x20) {
        }
        fn_8265CA20(*(undefined4 *)(iVar8 + 0x10));
      }
      *(undefined4 *)(iVar8 + 0x10) = 0;
      *(undefined4 *)(iVar8 + 0x14) = 0;
      *(undefined4 *)(iVar8 + 0x18) = 0;
    }
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

