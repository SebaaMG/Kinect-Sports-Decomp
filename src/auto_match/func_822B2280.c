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
extern unsigned int *auStack_40;
extern int fn_822B1D80();
extern int fn_822B2618();
extern int fn_822B26F8();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_8288B760();
extern int fn_828AB870();
extern int fn_82F63108();
extern unsigned int lbl_821AC94C;
extern unsigned int lbl_821AC964;
extern unsigned int uStack_5c;
extern unsigned int uStack_7c;


ulonglong fn_822B2280(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char cVar6;
  undefined8 uVar2;
  int iVar5;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar7;
  int *piVar8;
  undefined **ppuStack_80;
  undefined8 uStack_7c;
  undefined ***pppuStack_70;
  undefined **ppuStack_60;
  undefined8 uStack_5c;
  undefined ***pppuStack_50;
  undefined1 auStack_40 [64];
  
  piVar8 = (int *)(param_1 + 0x30);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x30) + 0x3c))(piVar8);
  cVar6 = fn_8288B760(*(undefined4 *)(param_1 + 0x10));
  if (cVar6 != '\0') {
    pppuStack_50 = &ppuStack_60;
    uStack_5c = CONCAT44((int)uVar1,param_1);
    ppuStack_60 = &lbl_821AC94C;
    uVar2 = fn_822C5B18(auStack_40,&ppuStack_60);
    cVar6 = fn_822B1D80(param_1,uVar2,1);
    if (cVar6 != '\0') {
      fn_828AB870(piVar8,param_2);
    }
    pppuStack_70 = &ppuStack_80;
    ppuStack_80 = &lbl_821AC964;
    uStack_7c = CONCAT44((int)param_2,param_1);
    uVar2 = fn_822C5B18(auStack_40,&ppuStack_80);
    cVar6 = fn_822B1D80(param_1,uVar2,0);
    uVar1 = param_2;
    if (cVar6 == '\0') {
      if (*(int *)(param_1 + 0x28) == 0) {
        uVar1 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 4))();
      }
    }
    fn_82359C18(&ppuStack_80);
    fn_82359C18(&ppuStack_60);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    iVar5 = (**(code **)(**(int **)(param_1 + 0x28) + 4))();
  }
  for (piVar7 = *(int **)(param_1 + 300);
      (piVar7 != *(int **)(param_1 + 0x130) && (*piVar7 != iVar5)); piVar7 = piVar7 + 1) {
  }
  if (piVar7 != *(int **)(param_1 + 0x130)) {
    return param_2;
  }
  if (*(char *)(param_1 + 0x13c) != '\0') {
    iVar5 = (**(code **)(*piVar8 + 0x3c))(piVar8);
    if (iVar5 == *(int *)(param_1 + 0x140)) {
      if (*(int *)(param_1 + 0x28) == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 4))();
        return uVar1;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    *(undefined1 *)(param_1 + 0x13c) = 0;
  }
  iVar5 = param_1 + 0x84;
  fn_822B26F8(iVar5,0,0);
  lVar3 = fn_822B26F8(iVar5,1,0);
  fn_822B26F8(iVar5,2,0);
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar4 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      uVar4 = (**(code **)(**(int **)(param_1 + 0x28) + 4))();
    }
    uVar2 = 1;
    if ((uVar4 & 0xffffffff) == (uVar1 & 0xffffffff)) goto LAB_822b252c;
  }
  uVar2 = 0;
LAB_822b252c:
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(code **)(**(int **)(param_1 + 0x28) + 4))();
  }
  fn_822B2618(iVar5,uVar1,0);
  fn_822B2618(iVar5,uVar2,1);
  fn_822B2618(iVar5,1,2);
  return uVar1;
}

