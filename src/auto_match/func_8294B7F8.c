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


undefined8 fn_8294B7F8(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  
  do {
    bVar4 = false;
    uVar8 = 0;
    if (*(int *)(param_1 + 0xc) == 0) break;
    iVar9 = 0;
    do {
      bVar3 = false;
      uVar5 = 0;
      iVar2 = *(int *)(iVar9 + *(int *)(param_1 + 0x18));
      if (*(uint *)(iVar2 + 4) != 0) {
        iVar6 = 0;
        do {
          puVar7 = *(uint **)(*(int *)(iVar6 + *(int *)(iVar2 + 8)) * 4 + *(int *)(param_1 + 0x14));
          if ((*puVar7 & 0x1000000) != 0) {
            bVar3 = true;
          }
          if (puVar7[0xe] != 0xffffffff) {
            puVar7 = *(uint **)(puVar7[0xe] * 4 + *(int *)(param_1 + 0x14));
          }
          if ((*puVar7 & 0x1000000) != 0) {
            bVar3 = true;
          }
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar5 < *(uint *)(iVar2 + 4));
        if ((bVar3) && (uVar5 = 0, *(int *)(iVar2 + 0xc) != 0)) {
          iVar6 = 0;
          do {
            puVar7 = *(uint **)(*(int *)(iVar6 + *(int *)(iVar2 + 0x10)) * 4 +
                               *(int *)(param_1 + 0x14));
            uVar1 = *puVar7;
            if ((uVar1 & 0x1000000) == 0) {
              bVar4 = true;
              *puVar7 = uVar1 | 0x1000000;
            }
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + 4;
          } while (uVar5 < *(uint *)(iVar2 + 0xc));
        }
      }
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + 4;
    } while (uVar8 < *(uint *)(param_1 + 0xc));
  } while (bVar4);
  uVar8 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar9 = 0;
    do {
      puVar7 = *(uint **)(iVar9 + *(int *)(param_1 + 0x14));
      if ((puVar7[0xe] != 0xffffffff) &&
         ((**(uint **)(puVar7[0xe] * 4 + *(int *)(param_1 + 0x14)) & 0x1000000) != 0)) {
        *puVar7 = *puVar7 | 0x1000000;
      }
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + 4;
    } while (uVar8 < *(uint *)(param_1 + 8));
  }
  return 0;
}

