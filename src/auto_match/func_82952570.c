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
extern int fn_82963618();
extern int fn_82963678();


undefined8 fn_82952570(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  do {
    bVar5 = false;
    uVar11 = 0;
    if (*(int *)(param_1 + 0xc) == 0) {
      return 0;
    }
    iVar10 = 0;
    do {
      iVar6 = fn_82963618(*(undefined4 *)(iVar10 + *(int *)(param_1 + 0x18)));
      if (iVar6 != 0) {
        uVar9 = uVar11 + 1;
        bVar4 = true;
        iVar6 = iVar10;
        if (uVar9 < *(uint *)(param_1 + 0xc)) {
          do {
            puVar1 = *(uint **)(iVar6 + 4 + *(int *)(param_1 + 0x18));
            iVar7 = fn_82963678(puVar1);
            if (iVar7 != 0) break;
            if ((*puVar1 & 0xfff00000) != 0x10000000) {
              bVar4 = false;
              break;
            }
            uVar8 = 0;
            if (puVar1[3] != 0) {
              iVar7 = 0;
              do {
                iVar2 = *(int *)(*(int *)(iVar7 + puVar1[4]) * 4 + *(int *)(param_1 + 0x14));
                iVar3 = *(int *)(*(int *)(iVar7 + puVar1[2]) * 4 + *(int *)(param_1 + 0x14));
                if ((((*(int *)(iVar2 + 0x38) != *(int *)(iVar3 + 0x38)) ||
                     (*(int *)(iVar2 + 0x3c) != *(int *)(iVar3 + 0x3c))) ||
                    (*(int *)(iVar2 + 4) != *(int *)(iVar3 + 4))) ||
                   (((*(int *)(iVar2 + 0xc) != *(int *)(iVar3 + 0xc) ||
                     (*(int *)(iVar2 + 8) != *(int *)(iVar3 + 8))) ||
                    (*(int *)(iVar2 + 0x10) != *(int *)(iVar3 + 0x10))))) {
                  bVar4 = false;
                }
                uVar8 = uVar8 + 1;
                iVar7 = iVar7 + 4;
              } while (uVar8 < puVar1[3]);
            }
            uVar9 = uVar9 + 1;
            iVar6 = iVar6 + 4;
          } while (uVar9 < *(uint *)(param_1 + 0xc));
          if (!bVar4) goto LAB_82952714;
        }
        bVar5 = true;
        iVar6 = iVar10;
        uVar9 = uVar11;
        if (uVar11 < *(uint *)(param_1 + 0xc)) {
          do {
            iVar7 = fn_82963678(*(undefined4 *)(iVar6 + *(int *)(param_1 + 0x18)));
            if (iVar7 != 0) break;
            uVar9 = uVar9 + 1;
            **(undefined4 **)(iVar6 + *(int *)(param_1 + 0x18)) = 0;
            iVar6 = iVar6 + 4;
          } while (uVar9 < *(uint *)(param_1 + 0xc));
        }
      }
LAB_82952714:
      uVar11 = uVar11 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar11 < *(uint *)(param_1 + 0xc));
    if (!bVar5) {
      return 0;
    }
  } while( true );
}

