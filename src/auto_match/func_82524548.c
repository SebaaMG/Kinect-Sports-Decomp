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
extern int fn_82526260();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1F198();
extern int fn_82A1F238();
extern int fn_82A81CC0();
extern int fn_82A82160();
extern int fn_82F691F0();
extern unsigned int uStack_40;


undefined8 fn_82524548(int param_1)

{
  uint uVar1;
  int iVar3;
  char cVar5;
  undefined8 uVar2;
  undefined4 uVar4;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  int aiStack_3c [15];
  
  if (*(int *)(param_1 + 0xb10) == 0) {
    if (*(int *)(param_1 + 0xb04) != 0) {
      fn_8265C990(*(int *)(param_1 + 0xb04),0x21006000);
      *(undefined4 *)(param_1 + 0xb04) = 0;
    }
    if (*(int *)(param_1 + 0xb08) != 0) {
      fn_82A1F238();
      *(undefined4 *)(param_1 + 0xb08) = 0;
    }
  }
  else if ((*(int *)(param_1 + 0xb04) != 0) && (*(int *)(param_1 + 0xb08) != 0)) {
    iVar3 = param_1 + 0x1e0;
    if (*(int *)(param_1 + 0x9b4) != 1) {
      iVar3 = param_1 + 0x5c8;
    }
    fn_82526260(iVar3);
  }
  puVar7 = (undefined4 *)(param_1 + 0xa18);
  *(undefined4 *)(param_1 + 0xb0c) = 2;
  *(undefined4 *)(param_1 + 0xb04) = *(undefined4 *)(param_1 + 0xa18);
  *(undefined4 *)(param_1 + 0xb08) = *(undefined4 *)(param_1 + 0xa1c);
  *(undefined4 *)(param_1 + 0xb10) = *(undefined4 *)(param_1 + 0xa20);
  if (*(int *)(param_1 + 0x9c8) == 0) {
    iVar3 = param_1 + 0x1e0;
    if (*(int *)(param_1 + 0x9b4) != 1) {
      iVar3 = param_1 + 0x5c8;
    }
    iVar3 = fn_825260E0(iVar3,puVar7,(undefined4 *)(param_1 + 0xa1c));
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xa20) = 1;
      fn_82524770(param_1);
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x1c0) = 2;
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
  uVar2 = fn_82A82160(uVar6 & 0xffff,&uStack_40,aiStack_3c);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar4 = fn_8265C940(uStack_40,0x21006000);
  *puVar7 = uVar4;
  uVar4 = fn_82A1F198(aiStack_3c[0] + 0xfffU & 0xfffff000,0xffffffffffffffff,0x1000,4);
  *(undefined4 *)(param_1 + 0xa1c) = uVar4;
  *(undefined4 *)(param_1 + 0xa20) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*puVar7,0,uStack_40);
}

