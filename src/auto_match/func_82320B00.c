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
extern int fn_82F63108();
extern unsigned int iStack_3c;
extern unsigned int lbl_821AFAF0;
extern unsigned int uStack_41;


void fn_82320B00(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 uStack_41;
  undefined **ppuStack_40;
  int iStack_3c;
  undefined ***pppuStack_30;
  
  if ((param_2 != 0) || (uVar2 = 0, *(int *)(*(int *)(param_1 + 0x20) + 0x1d0) != 0)) {
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  if (*(int *)(param_1 + 0x28) != 2) {
    pppuStack_30 = &ppuStack_40;
    ppuStack_40 = &lbl_821AFAF0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0x8c0);
    uVar1 = *(uint *)(iVar3 + 0x138);
    iStack_3c = param_1;
    if (uVar1 != 0) {
      uVar5 = 0;
      puVar4 = (undefined4 *)(*(int *)(iVar3 + 0x130) + -4);
      do {
        if (pppuStack_30 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        puVar4 = puVar4 + 1;
        (*(code *)(*pppuStack_30)[1])(pppuStack_30,*puVar4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
      if (pppuStack_30 == (undefined ***)0x0) {
        return;
      }
    }
    iVar3 = (int)&ppuStack_40 + -(int)pppuStack_30;
    (*(code *)(*pppuStack_30)[3])
              (pppuStack_30,iVar3 - (int)(&uStack_41 + (uint)(iVar3 == 0) + -(int)pppuStack_30));
  }
  return;
}

