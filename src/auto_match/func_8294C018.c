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


void fn_8294C018(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar1 = *param_1;
  uVar4 = (ulonglong)uVar1 & 0xfffff;
  uVar6 = param_1[1] / uVar4;
  trapWord(6,uVar4,0);
  if ((int)uVar6 != 0) {
    lVar7 = (param_2 & 0x3fffffff) << 2;
    do {
      iVar5 = (int)lVar7;
      puVar3 = (undefined4 *)(param_1[2] + iVar5);
      uVar2 = *puVar3;
      *puVar3 = puVar3[1];
      lVar7 = ((ulonglong)uVar1 & 0xfffff) * 4 + lVar7;
      *(undefined4 *)(param_1[2] + iVar5 + 4) = uVar2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  iVar5 = (int)((param_2 & 0x3fffffff) << 2);
  puVar3 = (undefined4 *)(param_1[4] + iVar5);
  uVar2 = *puVar3;
  *puVar3 = puVar3[1];
  *(undefined4 *)(param_1[4] + iVar5 + 4) = uVar2;
  return;
}

