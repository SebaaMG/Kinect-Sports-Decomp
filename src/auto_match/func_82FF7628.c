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
extern int fn_82FF6128();
extern int fn_82FF7548();
extern int fn_82FF7DB0();


longlong fn_82FF7628(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                      ulonglong param_5)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar3;
  uint *puVar6;
  
  iVar4 = fn_82FF7548(param_1,param_3,param_2);
  if (iVar4 == 0) {
    uVar2 = -(ulonglong)((param_5 & 0xff) != 0);
    return ((uVar2 & 0x3f) << 0x20 | uVar2 & 0x33) + 1;
  }
  puVar1 = *(uint **)(iVar4 + 8);
  for (puVar6 = *(uint **)(iVar4 + 4);
      (puVar6 != puVar1 && ((ulonglong)*puVar6 != (param_4 & 0xffffffff))); puVar6 = puVar6 + 1) {
  }
  if (puVar6 == puVar1) {
    if ((param_5 & 0xff) != 0) {
      puVar5 = (undefined4 *)fn_82FF7DB0((int *)(iVar4 + 4));
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = (int)param_4;
      }
      goto LAB_82ff7710;
    }
  }
  else if ((param_5 & 0xff) == 0) {
    if (1 < (uint)((int)puVar1 - (int)*(uint **)(iVar4 + 4) >> 2)) {
      *puVar6 = puVar1[-1];
    }
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -4;
LAB_82ff7710:
    lVar3 = fn_82FF6128(iVar4,param_4,param_5);
    if ((int)lVar3 == 1) {
      return lVar3;
    }
    if (1 < (uint)(*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 2)) {
      *puVar6 = *(uint *)(*(int *)(iVar4 + 8) + -4);
    }
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -4;
    return lVar3;
  }
  return 1;
}

