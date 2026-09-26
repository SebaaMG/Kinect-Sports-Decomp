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
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_8263CBB0();
extern unsigned int lbl_8320A898;


void fn_822A7B50(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x558) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x554) != 0) {
      iVar5 = 0;
      do {
        piVar1 = *(int **)(iVar5 + *(int *)(param_1 + 0x558));
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))();
          puVar2 = *(undefined4 **)(iVar5 + *(int *)(param_1 + 0x558));
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x558)) = 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0x554));
    }
    fn_82522ED8(*(undefined4 *)(param_1 + 0x558));
    *(undefined4 *)(param_1 + 0x558) = 0;
  }
  if (*(int *)(param_1 + 0x55c) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x554) != 0) {
      iVar5 = 0;
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x55c) + iVar5);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))();
          puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x55c) + iVar5);
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          *(undefined4 *)(*(int *)(param_1 + 0x55c) + iVar5) = 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0x554));
    }
    fn_82522ED8(*(undefined4 *)(param_1 + 0x55c));
    *(undefined4 *)(param_1 + 0x55c) = 0;
  }
  if (*(int *)(param_1 + 0x560) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x554) != 0) {
      iVar5 = 0;
      do {
        uVar3 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x560) + iVar5 + 4);
        if (uVar3 != 0) {
          fn_8251FA58(uVar3 - 4);
          *(undefined4 *)(*(int *)(param_1 + 0x560) + iVar5 + 4) = 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 8;
      } while (uVar4 < *(uint *)(param_1 + 0x554));
    }
    fn_82522ED8(*(undefined4 *)(param_1 + 0x560));
    *(undefined4 *)(param_1 + 0x560) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(lbl_8320A898,0xb,0,0x100000);
}

