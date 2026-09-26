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
extern unsigned int *auStack_60;
extern int fn_822B70F0();
extern int fn_822B9440();
extern int fn_82491E88();
extern int fn_82492818();
extern int fn_82499730();
extern int fn_8252CC80();
extern unsigned int lbl_821BEBB0;
extern unsigned int lbl_821BEBB8;
extern unsigned int lbl_821CA460;


void fn_824995F8(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  undefined **appuStack_b0 [20];
  undefined1 auStack_60 [96];
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xc0) + 0x118);
  uVar1 = fn_82492818(appuStack_b0,iVar3 + 0x36c,0xffffffffffffffff,iVar3 + 0x160,iVar3 + 0x1e0,
                        *(undefined4 *)(iVar3 + 0xb4),*(undefined4 *)(iVar3 + 0x2ec));
  fn_82499730(param_1 + 0x10,uVar1);
  appuStack_b0[0] = &lbl_821BEBB8;
  fn_82491E88(auStack_60);
  appuStack_b0[0] = &lbl_821BEBB0;
  fn_822B9440(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x11c));
  lVar4 = 0;
  iVar5 = 0x130;
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x14) + 0x8c0);
  uVar2 = *(undefined4 *)(iVar3 + 0x90);
  *(undefined4 *)(iVar3 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  dVar7 = (double)lbl_821CA460;
  do {
    *(undefined4 *)(param_1 + -0x68 + iVar5) = *(undefined4 *)(iVar5 + *(int *)(param_1 + 0xc0));
    fn_822B70F0(dVar7,*(undefined4 *)(param_1 + 0xc0));
    lVar6 = 2;
    uVar2 = 0;
    iVar3 = 0;
    do {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x14) + 0x930 + iVar3) != '\0') {
        uVar2 = 1;
      }
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
    fn_8252CC80(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x14),0,lVar4);
    iVar5 = iVar5 + 4;
    lVar4 = lVar4 + 1;
  } while (iVar5 < 0x138);
  return;
}

