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
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_8225C590();
extern int fn_8225DB68();
extern int fn_82359C18();
extern int fn_82479C00();
extern int fn_8247ACC8();
extern int fn_8247B0B8();
extern int fn_8247B210();
extern int fn_824C04E0();
extern int fn_825603C8();
extern int fn_8266F578();
extern int iRam832766fc;
extern unsigned int iStack_64;
extern unsigned int lbl_821BD3FC;
extern int (*lbl_8327677C)();
extern unsigned int uStack_30;


void fn_8247A5A8(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  int iVar4;
  uint auStack_70 [2];
  int *piStack_68;
  int iStack_64;
  undefined **ppuStack_60;
  uint *puStack_5c;
  undefined ***pppuStack_50;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  
  iVar4 = param_1 + 0x2088;
  fn_8247B0B8(iVar4);
  if (*(int *)(param_1 + 0x764) == 0) {
    *(undefined4 *)(param_1 + 0x760) = 1;
    fn_825603C8(0,param_1 + 0x5e0,1);
    *(undefined4 *)(param_1 + 0x764) = 1;
    *(undefined4 *)(param_1 + 0x64c) = 3;
    *(undefined4 *)(param_1 + 0x6b0) = 1;
  }
  fn_8247ACC8(param_1);
  if (*(int *)(param_1 + 0x20cc) == 0) {
    if (**(int **)(param_1 + 0x5c4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_8266F578();
    }
    if (iVar2 == 0) {
      return;
    }
    if (**(int **)(param_1 + 0x5c8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_8266F578();
    }
    if (iVar2 == 0) {
      return;
    }
    fn_82479C00(param_1);
  }
  fn_8247B210(&piStack_68,iVar4,*(undefined4 *)(param_1 + 0x209c));
  puStack_5c = auStack_70;
  pppuStack_50 = &ppuStack_60;
  ppuStack_60 = &lbl_821BD3FC;
  auStack_70[0] = -(uint)(3 < *(uint *)(param_1 + 0x209c)) & 1;
  uStack_30 = (*(code *)lbl_821BD3FC)(&ppuStack_60,auStack_40);
  uVar1 = fn_8225C590();
  fn_8225DB68(uVar1,auStack_40);
  fn_82359C18(&ppuStack_60);
  if ((*(int *)(param_1 + 0x768) != 0) &&
     ((*(int *)(param_1 + 0x20a0) == *(int *)(param_1 + 0x209c) || (*(int *)(param_1 + 0x20a0) == 0)
      ))) {
    if (lbl_8327677C != (code *)0x0) {
      (*lbl_8327677C)(0xffffffff821bd1b4,0xffffffff821bd0c8,0x207);
    }
    *(undefined4 *)(param_1 + 0x768) = 0;
  }
  iVar3 = (**(code **)(*piStack_68 + 0x20))();
  iVar2 = iRam832766fc;
  if (iRam832766fc != 0) {
    iRam832766fc = 0;
    iVar3 = iVar2;
  }
  if (iVar3 != 0) {
    fn_824C04E0(iVar4);
  }
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  return;
}

