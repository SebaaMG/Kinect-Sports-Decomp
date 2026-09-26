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
extern int fn_82AB15D0();
extern int fn_82BA05E8();
extern int fn_82BA92B0();
extern int fn_82BABEF0();
extern int fn_82BAC818();
extern int fn_82BB1DA0();
extern int fn_82BC0088();
extern int fn_82BC24F0();
extern int fn_82BC34D8();
extern int fn_82BC43D8();
extern int fn_82BC5538();
extern unsigned int lbl_820DF0C0;
extern unsigned int lbl_820DF0C4;
extern unsigned int lbl_820DF0D0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_50;


void fn_82BAE0D8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  double dVar8;
  uint uStack_50;
  
  if ((*(char *)(param_1 + 0x8c) != '\0') || (*(char *)(param_1 + 0x8d) != '\0')) {
    iVar2 = fn_82BA92B0(param_2);
    iVar3 = *(int *)(param_2 + 100);
    uVar4 = *(uint *)(iVar2 + 0x38);
    uVar1 = *(uint *)(iVar3 + 4);
    if (uVar1 - 1 < uVar1) {
      piVar5 = (int *)((uVar1 - 1) * 4 + *(int *)(iVar3 + 8));
    }
    else {
      piVar5 = (int *)0x0;
    }
    if (*piVar5 == 0) {
      if (*(int *)(iVar3 + 4) != 1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df980,0xffffffff820df268,0x2a8);
      }
      if (**(char **)(param_1 + 0x10) == '\0') {
        iVar3 = fn_82BC24F0(0x53,*(undefined4 *)(param_1 + 0xc));
        *(uint *)(iVar3 + 0x38) = uVar4;
        *(undefined4 *)(iVar3 + 0x50) = 0;
        dVar8 = (double)lbl_821AAD20;
        *(undefined4 *)(iVar3 + 0x80) = lbl_820DF0C4;
        fn_82BC34D8(dVar8,dVar8,dVar8,iVar3,*(undefined4 *)(param_1 + 0x10),1);
        *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) & 0xfffffffb;
        fn_82BC5538(param_1,iVar3);
      }
    }
    else if (**(char **)(param_1 + 0x10) == '\0') {
      uVar1 = *(uint *)(*(int *)(param_2 + 0x68) + 4);
      uVar7 = (ulonglong)uVar1;
      if (2 < (int)uVar1) {
        if ((int)uVar1 < 7) {
          uVar4 = fn_82BB1DA0();
          uVar7 = uVar7 - 3;
        }
        else {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0x2bf);
          uVar7 = (ulonglong)uStack_50;
          uVar4 = uStack_50;
        }
      }
      piVar5 = (int *)fn_82BC43D8(0x66,*(undefined4 *)(param_1 + 0xc));
      piVar5[0xe] = uVar4;
      piVar5[0x14] = 0;
      piVar5[0x20] = lbl_820DF0C0;
      (**(code **)(*piVar5 + 0x54))(piVar5,0,uVar7,0);
      fn_82BA05E8(piVar5,1,iVar2);
      piVar5[0x21] = lbl_820DF0D0;
      piVar5[0x39] = piVar5[0x39] & 0xfffffffb;
      fn_82BC5538(param_1,piVar5);
      puVar6 = (undefined4 *)
               fn_82BC0088(*(int *)(param_2 + 0x68),
                                 *(undefined4 *)(*(int *)(param_2 + 0x68) + 4));
      *puVar6 = piVar5;
    }
    puVar6 = (undefined4 *)
             fn_82BC0088(*(int *)(param_2 + 100),*(undefined4 *)(*(int *)(param_2 + 100) + 4))
    ;
    *puVar6 = 3;
  }
  fn_82BABEF0(param_2,param_1 + 0x14,*(undefined1 *)(param_1 + 0x7c));
  fn_82BAC818(param_2,*(undefined4 *)(param_1 + 0x88));
  return;
}

