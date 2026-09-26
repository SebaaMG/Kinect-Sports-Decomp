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
extern int fn_82645110();
extern int fn_82647258();
extern int fn_8264F660();


void fn_82648F90(int *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *param_1;
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) != 0) {
      iVar5 = param_1[1];
      if (iVar5 != 8) {
        if (iVar5 == 9) {
          iVar5 = param_1[param_1[0x25] + 6];
          if ((param_1[6] == 0) || ((*(byte *)(param_1 + 5) & 0x80) != 0)) {
            *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x7f;
            *(undefined4 *)(iVar5 + 0x10) = 0xfffffeed;
            *(undefined4 *)(iVar5 + 0x14) = 0xfffffeed;
          }
          else {
            uVar2 = *(uint *)(iVar1 + 0x30);
            if (*(uint *)(iVar1 + 0x38) < uVar2) {
              uVar2 = fn_82645110(iVar1);
            }
            *(undefined4 *)(uVar2 + 4) = 0xc0013d00;
            uVar3 = ((iVar5 + 0x10U >> 0x14) + 0x200 & 0x1000) + (iVar5 + 0x10U & 0x1fffffff) | 2;
            *(uint *)(uVar2 + 8) = uVar3;
            *(undefined4 *)(uVar2 + 0xc) = 0xfffffeed;
            uVar4 = ((iVar5 + 0x14U >> 0x14) + 0x200 & 0x1000) + (iVar5 + 0x14U & 0x1fffffff) | 2;
            *(undefined4 *)(uVar2 + 0x10) = 0xc0013d00;
            *(uint *)(uVar2 + 0x14) = uVar4;
            *(undefined4 *)(uVar2 + 0x18) = 0xfffffeed;
            *(undefined4 *)(uVar2 + 0x1c) = 0xc0043c00;
            *(undefined4 *)(uVar2 + 0x20) = 0x13;
            *(uint *)(uVar2 + 0x24) = uVar3;
            *(undefined4 *)(uVar2 + 0x28) = 0xfffffeed;
            *(undefined4 *)(uVar2 + 0x2c) = 0xffffffff;
            *(undefined4 *)(uVar2 + 0x30) = 0x100;
            *(undefined4 *)(uVar2 + 0x34) = 0xc0043c00;
            *(undefined4 *)(uVar2 + 0x38) = 0x13;
            *(uint *)(uVar2 + 0x3c) = uVar4;
            *(undefined4 *)(uVar2 + 0x40) = 0xfffffeed;
            *(undefined4 *)(uVar2 + 0x44) = 0xffffffff;
            *(undefined4 *)(uVar2 + 0x48) = 0x100;
            *(undefined4 **)(iVar1 + 0x30) = (undefined4 *)(uVar2 + 0x48);
          }
          fn_8264F660(iVar1,param_1,0);
        }
        else if (iVar5 == 10) {
          if ((*(byte *)(iVar1 + 0x2ac0) & 0x80) != 0) {
            fn_82647258(iVar1);
          }
          uVar2 = *(uint *)(iVar1 + 0x30);
          if (*(uint *)(iVar1 + 0x38) < uVar2) {
            uVar2 = fn_82645110(iVar1);
          }
          *(undefined4 *)(uVar2 + 4) = 0xc0015a00;
          *(undefined4 *)(uVar2 + 8) = 0x1a;
          *(uint *)(uVar2 + 0xc) =
               (((uint)param_1[7] >> 0x14) + 0x200 & 0x1000) + (param_1[7] & 0x1ffffffeU) | 1;
          *(uint **)(iVar1 + 0x30) = (uint *)(uVar2 + 0xc);
          *(byte *)(iVar1 + 0x2abf) = *(byte *)(iVar1 + 0x2abf) & 0x7f;
        }
        *(undefined1 *)(param_1 + 4) = 1;
      }
      param_1[6] = *(int *)(iVar1 + 0x2a9c);
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x40;
    }
  }
  else {
    if ((*(byte *)(iVar1 + 0x2abc) & 0x20) == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(iVar1 + 0x327c);
    }
    param_1[0x25] = iVar5;
    if (param_1[1] == 9) {
      fn_8264F660(iVar1,param_1,1);
    }
    else if (param_1[1] == 10) {
      if ((*(byte *)(iVar1 + 0x2ac0) & 0x80) != 0) {
        fn_82647258(iVar1);
      }
      uVar2 = *(uint *)(iVar1 + 0x30);
      if (*(uint *)(iVar1 + 0x38) < uVar2) {
        uVar2 = fn_82645110(iVar1);
      }
      *(undefined4 *)(uVar2 + 4) = 0xc0004600;
      *(undefined4 *)(uVar2 + 8) = 0x19;
      *(undefined4 **)(iVar1 + 0x30) = (undefined4 *)(uVar2 + 8);
      *(byte *)(iVar1 + 0x2abf) = *(byte *)(iVar1 + 0x2abf) | 0x80;
    }
    *(undefined1 *)(param_1 + 4) = 2;
  }
  return;
}

