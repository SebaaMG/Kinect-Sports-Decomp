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
extern int fn_825A4090();
extern int fn_82A1DD38();


void fn_825A8530(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  
  iVar1 = *(int *)(param_1 + 0x7c0);
  uVar2 = *(uint *)(param_1 + 0x744);
  uVar3 = *(uint *)(param_1 + 0x748);
  if (iVar1 != 0) {
    iVar5 = 0;
    if (0 < *(int *)(iVar1 + 0x7c)) {
      iVar6 = 0;
      do {
        if (*(int *)(iVar6 + *(int *)(iVar1 + 0x78)) == 0x2002) {
          bVar4 = true;
          goto LAB_825a858c;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar5 < *(int *)(iVar1 + 0x7c));
    }
    bVar4 = false;
LAB_825a858c:
    if (bVar4) {
      fn_825A4090(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x208),*(int *)(param_1 + 0x4c));
      iVar1 = *(int *)(*(int *)(param_1 + 0x7c0) + 0x10);
      if (*(int *)(iVar1 + 0xc) == 10) {
        iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x890) + 8) + 0x14);
        fn_82A1DD38(*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x20),
                          *(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x24));
      }
    }
  }
  if (uVar2 < uVar3) {
    piVar8 = (int *)(uVar2 + 4);
    lVar7 = (ulonglong)((uVar3 - uVar2) - 1 >> 4) + 1;
    do {
      iVar1 = *piVar8;
      if (iVar1 != 0) {
        iVar5 = 0;
        if (0 < *(int *)(iVar1 + 0x7c)) {
          iVar6 = 0;
          do {
            if (*(int *)(iVar6 + *(int *)(iVar1 + 0x78)) == 0x2002) {
              bVar4 = true;
              goto LAB_825a8638;
            }
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 0x10;
          } while (iVar5 < *(int *)(iVar1 + 0x7c));
        }
        bVar4 = false;
LAB_825a8638:
        if (bVar4) {
          fn_825A4090(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x208),*(int *)(param_1 + 0x4c));
          if (*(int *)(*(int *)(*piVar8 + 0x10) + 0xc) == 10) {
            iVar1 = *(int *)(*(int *)(piVar8[-1] + 8) + 0x14);
            fn_82A1DD38(*(undefined4 *)(*(int *)(*(int *)(*piVar8 + 0x10) + 0x14) + 0x20),
                              *(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24));
          }
        }
      }
      lVar7 = lVar7 + -1;
      piVar8 = piVar8 + 4;
    } while (lVar7 != 0);
  }
  return;
}

