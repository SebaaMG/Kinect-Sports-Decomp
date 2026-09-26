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
extern unsigned int *auStack_f30;
extern int fn_8225C590();
extern int fn_8225DB68();
extern int fn_8225F160();
extern int fn_82292AE8();
extern int fn_82A1BFB0();
extern int fn_82CE3C88();
extern unsigned int iStack_f5c;
extern unsigned int iStack_f60;
extern unsigned int lbl_82005748;
extern unsigned int lbl_821985F4;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832760A8;
extern unsigned int lbl_832760A9;
extern unsigned int uStack_f58;


bool fn_8224DEC8(int *param_1,int *param_2)

{
  int iVar3;
  undefined8 uVar1;
  int iVar4;
  longlong lVar2;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  int iStack_f60;
  int iStack_f5c;
  undefined8 uStack_f58;
  undefined **ppuStack_f50;
  int *piStack_f4c;
  undefined ***pppuStack_f40;
  uint auStack_f30 [2];
  longlong alStack_f28 [485];
  
  iVar3 = fn_8225F160();
  iStack_f60 = *(int *)(iVar3 + 0x38);
  piStack_f4c = &iStack_f60;
  pppuStack_f40 = &ppuStack_f50;
  ppuStack_f50 = &lbl_821985F4;
  uVar1 = fn_8225C590();
  fn_8225DB68(uVar1,&ppuStack_f50);
  iVar3 = iStack_f60;
  iVar4 = fn_8225F160();
  if (*(int *)(iVar4 + 0x3c) <= iVar3) {
    iVar3 = *(int *)(iVar4 + 0x3c);
  }
  if (iVar3 == 0) {
LAB_8224df30:
    iVar3 = fn_82292AE8();
    if (*(float *)(iVar3 + 0x5c) == lbl_821CC160) {
      *(float *)(iVar3 + 0x5c) = lbl_82005748;
    }
    bVar5 = false;
  }
  else {
    if (iVar3 == 1) {
      uStack_f58 = (**(code **)(*param_2 + 0x48))(param_2);
      iStack_f5c = 0;
      uVar1 = (**(code **)(*param_1 + 0x44))(param_1);
      fn_82A1BFB0(uVar1,&uStack_f58,1,&iStack_f5c,0);
      if (iStack_f5c == 0) goto LAB_8224df30;
    }
    fn_82CE3C88(auStack_f30);
    uVar7 = 0;
    if (auStack_f30[0] != 0) {
      plVar8 = alStack_f28;
      do {
        lVar6 = *plVar8;
        lVar2 = (**(code **)(*param_1 + 0x48))(param_1);
        if ((lVar6 == lVar2) && ((*(uint *)((int)plVar8 + 0x24) & 2) != 0)) goto LAB_8224df30;
        uVar7 = uVar7 + 1;
        plVar8 = plVar8 + 0xf;
      } while (uVar7 < auStack_f30[0]);
    }
    iVar3 = fn_82292AE8();
    if (*(float *)(iVar3 + 0x5c) == lbl_82005748) {
      *(float *)(iVar3 + 0x5c) = lbl_821CC160;
    }
    if ((lbl_832760A8 != '\0') || (bVar5 = false, lbl_832760A9 != '\0')) {
      bVar5 = true;
    }
    bVar5 = !bVar5;
  }
  return bVar5;
}

