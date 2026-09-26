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
extern int fn_82BA4058();
extern int fn_82BC5B38();


void fn_82BC4DC8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  piVar5 = (int *)fn_82BA4058(*(undefined4 *)(param_1 + 0x20));
  uVar6 = 1;
  if (*(int *)(param_1 + 0x1c) != 0) {
    do {
      piVar5 = piVar5 + 1;
      iVar1 = *piVar5;
      iVar9 = 0;
      iVar2 = *(int *)(iVar1 + 0x48);
      for (uVar7 = 1; uVar7 <= *(uint *)(*(int *)(iVar1 + 0x38) + 4); uVar7 = uVar7 + 1) {
        iVar4 = *(int *)(*(int *)(*(int *)(iVar1 + 0x38) + 8) + iVar9);
        if (*(int *)(*(int *)(iVar4 + 0x48) * 4 + *(int *)(param_1 + 8)) != iVar2) {
          fn_82BC5B38(iVar1,iVar4);
        }
        iVar9 = iVar9 + 4;
      }
      iVar9 = 0;
      for (uVar7 = 1; uVar7 <= *(uint *)(*(int *)(iVar1 + 0x58) + 4); uVar7 = uVar7 + 1) {
        iVar4 = *(int *)(*(int *)(*(int *)(iVar1 + 0x58) + 8) + iVar9);
        iVar10 = 0;
        for (uVar8 = 1; iVar3 = *(int *)(iVar4 + 0x5c), uVar8 <= *(uint *)(iVar3 + 4);
            uVar8 = uVar8 + 1) {
          iVar3 = *(int *)(*(int *)(iVar3 + 8) + iVar10);
          if (*(int *)(*(int *)(iVar3 + 0x48) * 4 + *(int *)(param_1 + 8)) != iVar2) {
            fn_82BC5B38(iVar1,iVar3);
          }
          iVar10 = iVar10 + 4;
        }
        iVar9 = iVar9 + 4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= *(uint *)(param_1 + 0x1c));
  }
  return;
}

