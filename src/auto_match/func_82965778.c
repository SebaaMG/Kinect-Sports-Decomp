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


undefined8 fn_82965778(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0x14)) + 0x30);
  iVar4 = *(int *)(*(int *)(param_3 * 4 + *(int *)(param_1 + 0x14)) + 0x30);
  if (iVar5 == iVar4) {
LAB_829657ac:
    uVar2 = 1;
  }
  else {
    iVar3 = *(int *)(iVar4 * 4 + *(int *)(param_1 + 0x14));
    if ((*(uint *)(*(int *)(*(int *)(iVar3 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 2) != 0) {
      puVar1 = *(uint **)(*(int *)(iVar3 + 0x48) * 4 + *(int *)(param_1 + 0x18));
      if ((*puVar1 & 0xfff00000) == 0x10000000) {
        uVar6 = 0;
        if (puVar1[3] != 0) {
          iVar3 = 0;
          do {
            if (*(int *)(iVar3 + puVar1[4]) == iVar4) break;
            uVar6 = uVar6 + 1;
            iVar3 = iVar3 + 4;
          } while (uVar6 < puVar1[3]);
        }
        iVar3 = fn_82965778(param_1,iVar5,*(undefined4 *)(uVar6 * 4 + puVar1[2]));
        if (iVar3 != 0) goto LAB_829657ac;
      }
      if ((*puVar1 & 0xfff00000) == 0x20500000) {
        uVar6 = 0;
        if (puVar1[3] != 0) {
          iVar3 = 0;
          do {
            if (*(int *)(iVar3 + puVar1[4]) == iVar4) break;
            uVar6 = uVar6 + 1;
            iVar3 = iVar3 + 4;
          } while (uVar6 < puVar1[3]);
        }
        iVar4 = fn_82965778(param_1,iVar5,*(undefined4 *)(uVar6 * 4 + puVar1[2]));
        if (iVar4 != 0) goto LAB_829657ac;
        iVar5 = fn_82965778(param_1,iVar5,*(undefined4 *)((uVar6 + puVar1[3]) * 4 + puVar1[2]));
        if (iVar5 != 0) {
          return 1;
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

