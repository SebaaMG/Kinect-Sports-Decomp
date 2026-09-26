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
extern int fn_82811500();
extern int fn_82F68B60();
extern int fn_82F691F0();


void fn_825B54D8(int param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  iVar2 = (*(undefined4 **)(param_1 + 8))[1];
  iVar1 = fn_82F68B60(**(undefined4 **)(param_1 + 8));
  if (*(int *)(iVar1 + 0x178) != 0) {
    iVar5 = *(int *)(iVar1 + 0x17c);
    uVar6 = 0;
    iVar8 = 0;
    do {
      uVar7 = 0;
      if (*(int *)(iVar8 + iVar5) != 0) {
        iVar4 = *(int *)(iVar8 + iVar5 + 4);
        iVar9 = 0;
        do {
          iVar3 = iVar9 + iVar4;
          uVar10 = 0;
          if (*(int *)(iVar3 + 8) != 0) {
            iVar11 = 0;
            do {
              fn_82811500(*(undefined4 *)((int)((param_2 + 2U & 0xffffffff) << 2) + iVar2),
                           *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0xc) + iVar11) + 8));
              iVar5 = *(int *)(iVar1 + 0x17c);
              uVar10 = uVar10 + 1;
              iVar11 = iVar11 + 4;
              iVar4 = *(int *)(iVar8 + iVar5 + 4);
              iVar3 = iVar4 + iVar9;
            } while (uVar10 < *(uint *)(iVar3 + 8));
          }
          uVar7 = uVar7 + 1;
          iVar9 = iVar9 + 0x10;
        } while (uVar7 < *(uint *)(iVar8 + iVar5));
      }
      uVar6 = uVar6 + 1;
      iVar8 = iVar8 + 0x14;
    } while (uVar6 < *(uint *)(iVar1 + 0x178));
    uVar6 = 0;
    if (*(uint *)(iVar1 + 0x178) != 0) {
      iVar5 = 0;
      do {
        uVar6 = uVar6 + 1;
        *(undefined4 *)(*(int *)((int)((param_2 + 0x10U & 0xffffffff) << 2) + iVar2) + iVar5) =
             0xffffffff;
        iVar5 = iVar5 + 4;
      } while (uVar6 < *(uint *)(iVar1 + 0x178));
    }
    if ((*(int **)(iVar1 + 0x2c) != (int *)0x0) && (**(int **)(iVar1 + 0x2c) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)((int)((param_2 + 4U & 0xffffffff) << 2) + iVar2),0);
    }
  }
  return;
}

