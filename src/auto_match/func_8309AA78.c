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
extern unsigned int stack0x00000000;


int fn_8309AA78(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    lVar3 = ZEXT48(&stack0x00000000) - 0x34;
    iVar2 = *(int *)(param_3 + 0xc);
    do {
      iVar1 = iVar2;
      lVar3 = lVar3 + 4;
      *(int *)lVar3 = param_3;
      iVar2 = *(int *)(iVar1 + 0xc);
      uVar5 = uVar5 + 1;
      param_3 = iVar1;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  if (0 < (int)uVar5) {
    puVar4 = (undefined4 *)(param_1 + -4);
    lVar3 = (uVar5 & 0x3fffffff) * 4 + (ZEXT48(&stack0x00000000) - 0x30);
    do {
      if (param_2 + -1 <= iVar2) break;
      lVar3 = lVar3 + -4;
      uVar5 = uVar5 - 1;
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *(undefined4 *)(*(int *)lVar3 + 4);
    } while (0 < (longlong)uVar5);
  }
  *(undefined4 *)(iVar2 * 4 + param_1) = 0xffffffff;
  return iVar2 + 1;
}

