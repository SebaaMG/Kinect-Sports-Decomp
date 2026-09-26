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
extern int fn_825354B8();
extern int fn_82536008();
extern int fn_82F63108();
extern unsigned int iStack0000001c;
extern unsigned int iStack_70;
extern unsigned int lbl_821AFB08;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_61;


void fn_82320BE0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iStack0000001c;
  int iStack_70;
  int aiStack_6c [2];
  undefined1 uStack_61;
  undefined **ppuStack_60;
  int *piStack_5c;
  int *piStack_58;
  undefined1 *puStack_54;
  undefined ***pppuStack_50;
  
  iVar2 = *(int *)(param_1[8] + 0x1d0);
  if (iVar2 != param_2) {
    if (param_2 == 0) {
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = iVar2 + 1;
    }
    *(int *)(param_1[8] + 0x1d0) = iVar2;
    iStack0000001c = param_2;
    if (param_2 == 0) {
      if (*param_1 != 0) {
        aiStack_6c[0] = *param_1;
        iVar2 = fn_825354B8(aiStack_6c,(ulonglong)(uint)param_1[8] + 0x50,0,
                                  *(undefined4 *)(param_1[0xc] + 0x84c),0xffffffff83296bc0,
                                  0xffffffff83296bd0);
        param_1[9] = iVar2;
      }
    }
    else if (param_1[9] != 0) {
      fn_82536008();
      param_1[9] = 0;
    }
    iStack_70 = 0;
    do {
      pppuStack_50 = &ppuStack_60;
      ppuStack_60 = &lbl_821AFB08;
      uVar1 = *(uint *)(*(int *)(param_1[8] + 0x8c0) + 0x138);
      piStack_5c = param_1;
      piStack_58 = &iStack_70;
      puStack_54 = (undefined1 *)&stack0x0000001c;
      if (uVar1 == 0) {
LAB_82320d0c:
        iVar2 = (int)&ppuStack_60 + -(int)pppuStack_50;
        (*(code *)(*pppuStack_50)[3])
                  (pppuStack_50,iVar2 - (int)(&uStack_61 + (uint)(iVar2 == 0) + -(int)pppuStack_50))
        ;
      }
      else {
        uVar4 = 0;
        puVar3 = (undefined4 *)(*(int *)(*(int *)(param_1[8] + 0x8c0) + 0x130) + -4);
        do {
          if (pppuStack_50 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
            fn_82F63108();
          }
          puVar3 = puVar3 + 1;
          (*(code *)(*pppuStack_50)[1])(pppuStack_50,*puVar3);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
        if (pppuStack_50 != (undefined ***)0x0) goto LAB_82320d0c;
      }
      iStack_70 = iStack_70 + 1;
    } while (iStack_70 < 2);
  }
  return;
}

