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


void fn_822FB5C0(int param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  char in_RESERVE;
  
  if ((*(int *)(param_1 + 0x7c) == 0) ||
     (bVar3 = false, *(int *)(*(int *)(param_1 + 0x7c) + 4) == 0)) {
    bVar3 = true;
  }
  bVar3 = !bVar3;
  if (bVar3) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x2fc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x4ac) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  piVar1 = *(int **)(param_1 + 0x7c);
  if (ZEXT48(piVar1) != 0) {
    lVar4 = ZEXT48(piVar1) + 8;
    do {
      puVar5 = (uint *)lVar4;
      lVar6 = (ulonglong)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar6,0,lVar4);
        *puVar5 = uVar2;
        bVar3 = true;
      }
    } while (!bVar3);
    if ((int)lVar6 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}

