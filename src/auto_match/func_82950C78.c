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
extern int fn_82F68CC0();


undefined8 fn_82950C78(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = 0;
  uVar1 = **(uint **)(param_1 + 0x104);
  uVar5 = uVar1 & 0xfffff;
  if ((uVar1 & 0xfffff) != 0) {
    iVar8 = 0;
    iVar7 = (uVar1 & 0xfffff) << 2;
    iVar2 = *(int *)(*(int *)(param_1 + 0x104) + 8);
    do {
      iVar3 = *(int *)(*(int *)(iVar8 + iVar2) * 4 + *(int *)(param_1 + 0x14));
      iVar4 = *(int *)(*(int *)(iVar7 + iVar2) * 4 + *(int *)(param_1 + 0x14));
      if ((((*(int *)(iVar3 + 4) != *(int *)(iVar4 + 4)) ||
           (*(int *)(iVar3 + 8) != *(int *)(iVar4 + 8))) ||
          (*(int *)(iVar3 + 0xc) != *(int *)(iVar4 + 0xc))) ||
         ((*(int *)(iVar3 + 0x10) != *(int *)(iVar4 + 0x10) ||
          ((*(uint *)(iVar4 + 0x3c) ^ *(uint *)(iVar3 + 0x3c)) != 0x80000)))) {
        return 1;
      }
      uVar6 = uVar6 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 4;
    } while (uVar6 < uVar5);
  }
  **(uint **)(param_1 + 0x104) = uVar5 | 0x70000000;
  *(uint *)(*(int *)(param_1 + 0x104) + 4) = uVar5;
  if (((uVar1 & 0xfffff) != 0) &&
     ((*(uint *)(*(int *)(**(int **)(*(int *)(param_1 + 0x104) + 8) * 4 + *(int *)(param_1 + 0x14))
                + 0x3c) & 0x80000) != 0)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x104) + 8);
    fn_82F68CC0(iVar2,iVar2 + (uVar1 & 0xfffff) * 4);
  }
  return 0;
}

