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
extern int fn_82F691F0();


void fn_82850DC0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    iVar3 = *(int *)(param_1 + 0x17c);
    uVar4 = 0;
    iVar6 = 0;
    do {
      uVar5 = 0;
      if (*(int *)(iVar6 + iVar3) != 0) {
        iVar2 = *(int *)(iVar6 + iVar3 + 4);
        iVar7 = 0;
        do {
          iVar1 = iVar7 + iVar2;
          uVar8 = 0;
          if (*(int *)(iVar1 + 8) != 0) {
            iVar9 = 0;
            do {
              fn_82811500(*(undefined4 *)((param_3 + 2) * 4 + param_2),
                           *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xc) + iVar9) + 8));
              iVar3 = *(int *)(param_1 + 0x17c);
              uVar8 = uVar8 + 1;
              iVar9 = iVar9 + 4;
              iVar2 = *(int *)(iVar6 + iVar3 + 4);
              iVar1 = iVar2 + iVar7;
            } while (uVar8 < *(uint *)(iVar1 + 8));
          }
          uVar5 = uVar5 + 1;
          iVar7 = iVar7 + 0x10;
        } while (uVar5 < *(uint *)(iVar6 + iVar3));
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 0x14;
    } while (uVar4 < *(uint *)(param_1 + 0x178));
    uVar4 = 0;
    if (*(uint *)(param_1 + 0x178) != 0) {
      iVar3 = 0;
      do {
        uVar4 = uVar4 + 1;
        *(undefined4 *)(*(int *)((param_3 + 0x10) * 4 + param_2) + iVar3) = 0xffffffff;
        iVar3 = iVar3 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0x178));
    }
    if ((*(int **)(param_1 + 0x2c) != (int *)0x0) && (**(int **)(param_1 + 0x2c) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)((param_3 + 4) * 4 + param_2),0);
    }
  }
  return;
}

