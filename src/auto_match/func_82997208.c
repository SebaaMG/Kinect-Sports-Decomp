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


undefined8 fn_82997208(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (((**(uint **)(param_1 + 0x104) & 0xfff00000) == 0x10000000) &&
     (*(ushort *)(param_1 + 0xca) < 0x104)) {
    puVar1 = *(uint **)(param_1 + 0x104);
    uVar8 = (ulonglong)*puVar1 & 0xfffff;
    iVar6 = *(int *)(*(int *)puVar1[2] * 4 + *(int *)(param_1 + 0x14));
    iVar4 = *(int *)(*(int *)puVar1[4] * 4 + *(int *)(param_1 + 0x14));
    if ((*(int *)(iVar6 + 0x3c) == 0) &&
       ((((*(uint *)(iVar4 + 0x3c) & 0x200) != 0 && (*(char *)(iVar6 + 0x6f) == '\x03')) &&
        (*(int *)(iVar4 + 4) == *(int *)(param_1 + 0x88))))) {
      if ((*puVar1 & 0xfffff) != 0) {
        iVar6 = 0;
        do {
          iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar6) * 4 +
                          *(int *)(param_1 + 0x14));
          *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) | 0x200;
          uVar3 = *(uint *)(param_1 + 0x100);
          if (uVar3 < *(uint *)(param_1 + 0xc)) {
            iVar4 = uVar3 << 2;
            do {
              uVar5 = 0;
              iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0x18));
              if (*(int *)(iVar2 + 4) != 0) {
                iVar7 = 0;
                do {
                  if (*(int *)(*(int *)(iVar2 + 8) + iVar7) ==
                      *(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar6)) {
                    *(undefined4 *)(*(int *)(iVar2 + 8) + iVar7) =
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar6);
                  }
                  uVar5 = uVar5 + 1;
                  iVar7 = iVar7 + 4;
                } while (uVar5 < *(uint *)(iVar2 + 4));
              }
              uVar3 = uVar3 + 1;
              iVar4 = iVar4 + 4;
            } while (uVar3 < *(uint *)(param_1 + 0xc));
          }
          iVar6 = iVar6 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      **(undefined4 **)(param_1 + 0x104) = 0;
    }
  }
  return 0;
}

