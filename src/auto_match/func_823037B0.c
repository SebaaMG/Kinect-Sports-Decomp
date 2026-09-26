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
extern U64 storeWordConditionalIndexed();


void fn_823037B0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  char in_RESERVE;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(iVar1 + 0x10c) = *(undefined4 *)(param_1 + 0x108);
  if (*(char *)(param_1 + 0xc4) != '\0') {
    return;
  }
  if ((*(int *)(param_1 + 0x88) == 0) ||
     (bVar4 = false, *(int *)(*(int *)(param_1 + 0x88) + 4) == 0)) {
    bVar4 = true;
  }
  bVar4 = !bVar4;
  if (bVar4) {
    *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x2fc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x4ac) = 0;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  piVar2 = *(int **)(param_1 + 0x88);
  if (ZEXT48(piVar2) != 0) {
    lVar5 = ZEXT48(piVar2) + 8;
    do {
      puVar6 = (uint *)lVar5;
      lVar7 = (ulonglong)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar7,0,lVar5);
        *puVar6 = uVar3;
        bVar4 = true;
      }
    } while (!bVar4);
    if ((int)lVar7 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}

