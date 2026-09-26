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


void fn_827891F0(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  uVar8 = (ulonglong)*param_1 - 1;
  if ((longlong)uVar8 < 1) {
    return;
  }
  do {
    uVar4 = uVar7 >> 4;
    uVar5 = (uint)((uVar8 & 0xffffffff) << 2) & 0xfc;
    iVar6 = (uVar7 & 0x3f) * 4;
    uVar7 = uVar7 + 1;
    iVar1 = *(int *)(((uint)uVar8 >> 4 & 0xffffffc) + param_1[3]);
    uVar8 = uVar8 - 1;
    iVar2 = *(int *)((uVar4 & 0xffffffc) + param_1[3]);
    uVar3 = *(undefined4 *)(iVar2 + iVar6);
    *(undefined4 *)(iVar2 + iVar6) = *(undefined4 *)(iVar1 + uVar5);
    *(undefined4 *)(iVar1 + uVar5) = uVar3;
  } while ((int)uVar7 < (int)uVar8);
  return;
}

