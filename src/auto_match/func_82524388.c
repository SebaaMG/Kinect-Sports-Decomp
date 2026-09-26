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
extern int fn_82524770();
extern int fn_825260E0();
extern int fn_8265C940();
extern int fn_82A1F198();
extern int fn_82A81CC0();
extern int fn_82A82160();
extern int fn_82F691F0();
extern unsigned int lbl_832767EC;
extern unsigned int uStack_30;


undefined8 fn_82524388(int param_1)

{
  uint uVar1;
  int iVar3;
  char cVar5;
  undefined8 uVar2;
  undefined4 uVar4;
  uint uVar6;
  undefined4 uStack_30;
  int aiStack_2c [11];
  
  if (*(int *)(param_1 + 0x9c8) == 0) {
    iVar3 = param_1 + 0x1e0;
    if (*(int *)(param_1 + 0x9b4) != 1) {
      iVar3 = param_1 + 0x5c8;
    }
    iVar3 = fn_825260E0(iVar3,param_1 + 0xa18,param_1 + 0xa1c);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xa20) = 1;
      fn_82524770(param_1);
      return 0;
    }
  }
  if (((*(int *)(param_1 + 0x9b4) == 1) && (*(int *)(param_1 + 0x9cc) != 0)) &&
     (*(int *)(param_1 + 0x9f0) != 0)) {
    cVar5 = fn_82A81CC0(param_1 + 0x1e0);
    if (cVar5 == '\x01') {
      uVar1 = *(uint *)(param_1 + 0x9e8);
      uVar6 = *(uint *)(param_1 + 0x9ec);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xa0c);
      uVar6 = *(uint *)(param_1 + 0xa10);
    }
    uVar6 = ~uVar1 & 0x93f | uVar6;
  }
  else {
    uVar6 = 0xfff;
  }
  uVar2 = fn_82A82160(uVar6 & 0xffff,&uStack_30,aiStack_2c);
  if (-1 < (int)uVar2) {
    uVar4 = fn_8265C940(uStack_30,0x21006000);
    *(undefined4 *)(param_1 + 0xa18) = uVar4;
    iVar3 = fn_82A1F198(aiStack_2c[0] + 0xfffU & 0xfffff000,0xffffffffffffffff,0x1000,4);
    *(int *)(param_1 + 0xa1c) = iVar3;
    if (((lbl_832767EC != 0) && (*(int *)(param_1 + 0xa18) != 0)) && (iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(int *)(param_1 + 0xa18),0,uStack_30);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

