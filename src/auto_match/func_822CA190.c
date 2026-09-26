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


int fn_822CA190(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  char in_RESERVE;
  byte in_cr0;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 8) != 0) {
    fn_8265CA20();
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  piVar1 = *(int **)(iVar2 + 4);
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
  fn_8265CA20(iVar2);
  return iVar2;
}

