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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82364DF0();
extern int fn_82536690();
extern int fn_825521F0();
extern int fn_8288B760();
extern int fn_82F63108();
extern unsigned int iStack_5c;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821BA994;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_82456678;
extern unsigned int uStack_4c;


void fn_82364988(int param_1,undefined *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  undefined *puStack_60;
  int iStack_5c;
  undefined **ppuStack_50;
  undefined8 uStack_4c;
  undefined ***pppuStack_40;
  
  puStack_60 = param_2;
  fn_82536690(param_1 + 0x83c,&puStack_60);
  if (*(int *)(param_1 + 0x84c) == 0) {
    *(undefined4 *)(param_1 + 0x850) = 0;
    pppuStack_40 = &ppuStack_50;
    ppuStack_50 = &lbl_821BA994;
    puStack_60 = &lbl_82456678;
    uStack_4c = CONCAT44(&lbl_82456678,param_1 + 0x820);
    iStack_5c = param_1 + 0x820;
    fn_825521F0((double)lbl_821CA460,(double)lbl_8218E8E8);
    *(undefined4 *)(param_1 + 0x828) = 0;
    *(undefined4 *)(param_1 + 0x84c) = 1;
    *(undefined4 *)(param_1 + 0x854) = lbl_821CC160;
  }
  (**(code **)(**(int **)(param_1 + 0x3ec) + 0x1c))(*(int **)(param_1 + 0x3ec),param_2);
  iVar1 = fn_82364DF0(param_1,param_2);
  if (*(int *)(*(int *)(iVar1 * 0x44 + param_1 + 0x18c) + 0x24) != 0) {
    iVar1 = fn_82364DF0(param_1);
    iVar1 = *(int *)(iVar1 * 0x44 + param_1 + 0x18c);
    if (*(int *)(iVar1 + 0x168) == 0) {
      uVar2 = *(uint *)(iVar1 + 0x16c);
    }
    else {
      uVar2 = fn_8288B760();
      uVar2 = uVar2 & 0xff;
    }
    if (uVar2 != 0) {
      piVar3 = (int *)(param_1 + 0x7b0);
      if (piVar3 == (int *)0x0) {
        bVar4 = false;
      }
      else {
        bVar4 = *piVar3 != 0;
      }
      if ((bVar4) && (*(int *)(param_1 + 2000) == 0)) {
        if (*(int *)(param_1 + 0x7c8) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        (**(code **)(**(int **)(param_1 + 0x7c8) + 4))(*(int **)(param_1 + 0x7c8),piVar3);
        *(undefined4 *)(param_1 + 2000) = 1;
      }
    }
  }
  return;
}

