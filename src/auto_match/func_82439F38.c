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
extern int fn_822315A0();
extern int fn_8232C8B8();
extern int fn_82446248();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82439F38(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  
  iVar5 = *(int *)(param_1 + 0x40);
  (**(code **)(*(int *)(iVar5 + 0x1dc) + 4))
            (iVar5 + 0x1dc,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x1d8) + 0x174) + 0x9c),
             lbl_821CA1A0,(ulonglong)lbl_821CA1A8 << 0x20);
  uVar4 = 0x10c;
  do {
    iVar5 = *(int *)(param_1 + 0x40);
    if (*(int *)(uVar4 + iVar5) != 0) {
      uVar1 = *(uint *)(*(int *)(iVar5 + 0x1d8) + 0x174);
      puVar3 = (undefined4 *)fn_8265C9E0(0x18);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &lbl_821AD588;
        puVar3[1] = 1;
        puVar3[2] = 1;
        if (puVar3 + 3 != (undefined4 *)0x0) {
          fn_82446248(puVar3 + 3,uVar4 + iVar5,(ulonglong)uVar1 + 4);
        }
      }
      puStack_4c = puVar3;
      puStack_50 = puStack_4c + 3;
      fn_8232C8B8((ulonglong)*(uint *)(param_1 + 0x40) + 0x350,&puStack_50);
      if (puStack_4c != (undefined4 *)0x0) {
        fn_822315A0();
      }
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 300);
  uVar4 = 0;
  if (*(int *)(*(int *)(param_1 + 0x40) + 0x354) - *(int *)(*(int *)(param_1 + 0x40) + 0x350) >> 3
      != 0) {
    iVar5 = 0;
    do {
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x40) + 0x350) + iVar5);
      (**(code **)(*piVar2 + 4))
                (piVar2,*(undefined4 *)
                         (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d8) + 0x174) + 0x9c),
                 lbl_821CA1A0,(ulonglong)lbl_821CA1A8 << 0x20);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 8;
    } while (uVar4 < (uint)(*(int *)(*(int *)(param_1 + 0x40) + 0x354) -
                            *(int *)(*(int *)(param_1 + 0x40) + 0x350) >> 3));
  }
  return;
}

