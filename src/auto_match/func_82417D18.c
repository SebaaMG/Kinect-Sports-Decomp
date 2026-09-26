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
extern unsigned int *auStack_50;
extern int fn_82250A18();
extern int fn_823B65F8();
extern int fn_823B6A20();
extern int fn_8241B4E0();
extern int fn_8288B760();
extern int fn_82F622E0();
extern unsigned int lbl_821B9BC8;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_82417D18(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint auStack_50 [4];
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  iVar5 = *param_1;
  if (*(char *)(iVar4 + 4) == '\0') {
    if ((*(int *)(iVar5 + 0xcb8) == 0) && (param_3 != 0)) {
      fn_8241B4E0(param_1,param_3,1);
      return;
    }
    if (param_1[0x9f] == 0) {
      if ((param_2 == 0) && ((param_3 == 0 || (*(int *)(param_3 + 0x3c) == 0)))) {
        param_1[0x9a] = *(int *)(iVar5 + 0x9c0);
        param_1[0x9f] = 1;
      }
      else {
        if ((param_3 != 0) &&
           ((*(int *)(param_3 + 0x3c) != 0 && (param_1[0x9d] = 1, *(int *)(param_3 + 0x3c) == 2))))
        {
          fn_8241B4E0(param_1,param_3,0);
        }
        param_1[0x9f] = 2;
      }
    }
    param_1[0x9b] = param_2;
    return;
  }
  iVar4 = *(int *)(iVar5 + 0x8c);
  iVar5 = fn_823B6A20(iVar4);
  if (iVar5 == 0) {
    if (*(uint *)(iVar4 + 0xc) == 0) {
      return;
    }
    cVar6 = fn_8288B760((ulonglong)*(uint *)(iVar4 + 0xc) - 0x68);
    if (cVar6 != '\0') {
      return;
    }
    if (param_4 == 0) {
      return;
    }
  }
  if (param_1[0x9f] == 0) {
    param_1[0x9b] = param_2;
    param_1[0x9f] = 5;
    if ((*(uint *)(iVar4 + 0xc) != 0) &&
       (cVar6 = fn_8288B760((ulonglong)*(uint *)(iVar4 + 0xc) - 0x68), cVar6 != '\0')) {
      uVar8 = 0;
      auStack_50[0] = 0;
      uVar2 = param_1[0x23] - param_1[0x22] >> 2;
      if (uVar2 != 0) {
        uVar7 = 0;
        do {
          if (0x27 < uVar7) {
                    /* WARNING: Subroutine does not return */
            fn_82F622E0(0xffffffff821b5f00);
          }
          uVar1 = 1 << (uVar8 & 0x1f);
          if (*(int *)(*(int *)(param_1[0x22] + uVar7) + 0x30) == 1) {
            uVar3 = uVar8 >> 3 & 0x1ffffffc;
            *(uint *)((int)auStack_50 + uVar3) = uVar1 | *(uint *)((int)auStack_50 + uVar3);
          }
          else {
            uVar3 = uVar8 >> 3 & 0x1ffffffc;
            *(uint *)((int)auStack_50 + uVar3) = *(uint *)((int)auStack_50 + uVar3) & ~uVar1;
          }
          uVar8 = uVar8 + 1;
          uVar7 = uVar7 + 4;
        } while (uVar8 < uVar2);
      }
      uStack_38 = 0;
      if (param_2 == 0) {
        if (param_1[0x9c] != 0) {
          uStack_38 = 2;
        }
      }
      else {
        uStack_38 = 1;
      }
      uStack_3c = 1;
      ppuStack_40 = &lbl_821B9BC8;
      uStack_34 = 0;
      fn_823B65F8(iVar4,&ppuStack_40);
    }
  }
  return;
}

