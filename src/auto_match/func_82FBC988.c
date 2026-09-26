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
extern int fn_82F691F0();
extern int fn_82FC9CF8();
extern int fn_82FCA280();
extern unsigned int lbl_821AAD20;


undefined8 fn_82FBC988(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_82FCA280();
    }
  }
  else {
    fn_82FC9CF8();
  }
  uVar2 = lbl_821AAD20;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x100) != 0) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      if (*(int *)(param_1 + 0x2c) != 0) {
        iVar3 = iVar6 + *(int *)(param_1 + 0x2c);
        iVar1 = *(int *)(iVar3 + 0x18);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(iVar1,0,*(int *)(iVar3 + 0x14) << 2);
        }
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        piVar4 = (int *)(iVar7 + *(int *)(param_1 + 0x28));
        iVar1 = piVar4[1];
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(iVar1,0,*piVar4 << 2);
        }
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        piVar4 = (int *)(iVar7 + *(int *)(param_1 + 0x24));
        iVar1 = piVar4[1];
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(iVar1,0,*piVar4 << 2);
        }
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x3c;
      iVar7 = iVar7 + 0x10;
    } while (uVar5 < *(uint *)(param_1 + 0x100));
  }
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x18) = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (*(int *)(param_1 + 0x104) != 0) {
    iVar6 = 0;
    do {
      uVar5 = uVar5 + 1;
      iVar7 = *(int *)(param_1 + 0x10) + iVar6;
      iVar6 = iVar6 + 0x10;
      *(undefined4 *)(iVar7 + 4) = uVar2;
    } while (uVar5 < *(uint *)(param_1 + 0x104));
  }
  return 1;
}

