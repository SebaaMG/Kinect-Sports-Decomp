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
extern int fn_82230040();
extern int fn_8265C9E0();
extern int fn_828D5B78();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_82024D24;
extern unsigned int uStack_2c;


void fn_828E1FD8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  if (*(uint *)(param_1 + 8) <= *(int *)(param_1 + 0x10) + 1U) {
    fn_828D5B78(param_1,1);
  }
  uVar5 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(param_1 + 8);
  }
  iVar6 = uVar5 * 4;
  if (*(int *)(*(int *)(param_1 + 4) + iVar6) == 0) {
    iVar2 = fn_8265C9E0(0x34);
    if (iVar2 == 0) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    *(int *)(*(int *)(param_1 + 4) + iVar6) = iVar2;
  }
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + iVar6);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_82024D24;
    puVar4 = (undefined2 *)(param_2 + 6);
    puVar3 = (undefined2 *)((int)puVar1 + 6);
    puVar1[1] = *(undefined4 *)(param_2 + 4);
    lVar7 = 0x15;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

