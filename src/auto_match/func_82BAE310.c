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
extern int fn_82BA05E8();
extern int fn_82BA92B0();
extern int fn_82BABEF0();
extern int fn_82BAC8F8();
extern int fn_82BC24F0();
extern int fn_82BC34D8();
extern int fn_82BC5538();
extern unsigned int lbl_820540D0;
extern unsigned int lbl_820DF0C4;
extern unsigned int lbl_820DF0D0;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BAE310(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if ((**(char **)(param_1 + 0x10) == '\0') && (*(char *)(*(int *)(param_1 + 0x88) + 0x8d) != '\0'))
  {
    iVar3 = fn_82BA92B0(param_2);
    uVar1 = *(undefined4 *)(iVar3 + 0x38);
    if (*(char *)(*(int *)(param_1 + 0x88) + 0x8c) == '\0') {
      iVar3 = fn_82BC24F0(0x53,*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(iVar3 + 0x38) = uVar1;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      dVar5 = (double)lbl_821AAD20;
      *(undefined4 *)(iVar3 + 0x80) = lbl_820DF0C4;
      fn_82BC34D8(dVar5,dVar5,dVar5,iVar3,*(undefined4 *)(param_1 + 0x10),1);
      *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) & 0xfffffffb;
    }
    else {
      iVar4 = fn_82BC24F0(0x28,*(undefined4 *)(param_1 + 0xc));
      fn_82BA05E8(iVar4,1,iVar3);
      dVar5 = (double)lbl_820540D0;
      fn_82BC34D8(dVar5,dVar5,dVar5,iVar4,*(undefined4 *)(param_1 + 0x10),2);
      *(undefined4 *)(iVar4 + 0x38) = uVar1;
      *(undefined4 *)(iVar4 + 0x50) = 0;
      *(undefined4 *)(iVar4 + 0x80) = lbl_820DF0C4;
      *(uint *)(iVar4 + 0xe4) = *(uint *)(iVar4 + 0xe4) & 0xfffffffb;
      fn_82BC5538(param_1,iVar4);
      iVar3 = fn_82BC24F0(0x5a,*(undefined4 *)(param_1 + 0xc));
      uVar2 = lbl_820DF0C4;
      *(undefined4 *)(iVar3 + 0x38) = uVar1;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      *(undefined4 *)(iVar3 + 0x80) = uVar2;
      fn_82BA05E8(iVar3,1,iVar4);
      *(undefined4 *)(iVar3 + 0x84) = lbl_820DF0D0;
      *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) & 0xfffffffb;
    }
    fn_82BC5538(param_1,iVar3);
  }
  fn_82BABEF0(param_2,param_1 + 0x14,*(undefined1 *)(param_1 + 0x7c));
  fn_82BAC8F8(param_2,*(undefined4 *)(*(int *)(param_1 + 0x88) + 0x88));
  return;
}

