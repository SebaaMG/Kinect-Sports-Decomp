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
extern unsigned int *auStack_48;
extern int fn_82230040();
extern int fn_82273600();
extern int fn_822ABA88();
extern int fn_8244F3B0();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


void fn_82448550(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [72];
  
  fn_8244F3B0();
  if (*(int *)(param_1 + 0x14) == 10) {
    iVar5 = 0;
    iVar1 = **(int **)(param_1 + 0x40);
    if (0 < *(int *)(*(int *)(iVar1 + 0x174) + 0xbc)) {
      iVar6 = 0;
      do {
        piVar2 = *(int **)(**(int **)(iVar1 + 8) + iVar6);
        iVar3 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),0);
        iVar1 = *(int *)(param_1 + 0x48);
        if (*(int *)(*(int *)(iVar3 + 0x1a0) + 0x40) == *(int *)(iVar1 + 0x1c)) {
          puVar4 = (undefined4 *)fn_8265C9E0(0x14);
          if (puVar4 == (undefined4 *)0x0) {
            uStack_4c = 0;
            ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
            fn_82230040(&ppuStack_50);
          }
          *puVar4 = *(undefined4 *)(iVar1 + 0x34);
          puVar4[1] = *(undefined4 *)(iVar1 + 0x34);
          puVar4[2] = *(undefined4 *)(iVar1 + 0x34);
          *(undefined1 *)(puVar4 + 4) = 0;
          *(undefined1 *)((int)puVar4 + 0x11) = 0;
          if (puVar4 + 3 != (int *)0x0) {
            puVar4[3] = iVar3;
          }
          fn_82273600(auStack_48,iVar1 + 0x30);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
        iVar1 = **(int **)(param_1 + 0x40);
      } while (iVar5 < *(int *)(*(int *)(iVar1 + 0x174) + 0xbc));
    }
  }
  return;
}

