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
extern int fn_822315A0();
extern int fn_8227AD00();
extern int fn_823F2E20();
extern int fn_82416D20();
extern int fn_8241F610();
extern int fn_82536590();
extern int fn_82573D30();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821CC160;


void fn_8235C0A8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  
  if (*(int *)(param_1 + 0x174) == 0) {
    iVar1 = *(int *)(param_1 + 0x2b20);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x34);
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x28);
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(int *)(iVar3 + 0x7d4) = *(int *)(iVar3 + 0x7d4) + 1;
        *(int *)(iVar3 + 0x7d8) = *(int *)(iVar3 + 0x7d8) + -1;
        fn_82573D30(*(undefined4 *)(iVar2 + 0x28));
        fn_82416D20(iVar1 + 0x110,*(undefined4 *)(iVar1 + 0x34));
        *(undefined4 *)(iVar1 + 0x34) = 0;
      }
      fn_8241F610(*(undefined4 *)(param_1 + 0x2b20));
    }
    *(undefined4 *)(param_1 + 0x174) = 1;
    *(uint *)(param_1 + 0x2cc4) = *(uint *)(param_1 + 0x2cc4) | 0x10;
    if ((*(int *)(param_1 + 0xc38) != 0) && (*(int *)(param_1 + 0xc0c) != 0)) {
      fn_82536590(param_1 + 0xe24,0);
    }
  }
  if (((*(uint *)(param_1 + 0x15cc) != 0 && (*(uint *)(param_1 + 0x15cc) & 0xff000000) < 0x7a000000)
      && (*(int *)(param_1 + 0x17c) == 0)) &&
     ((iVar1 = *(int *)(param_1 + 0xa0), iVar1 == 0 ||
      ((*(int *)(iVar1 + 0x40) != 1 && ((iVar1 == 0 || (*(int *)(iVar1 + 0x40) != 2)))))))) {
    uVar4 = *(undefined4 *)(param_1 + 0x9c);
    uVar5 = *(undefined4 *)(param_1 + 0x98);
    puStack_4c = (undefined4 *)fn_8265C9E0(0x1198);
    if (puStack_4c == (undefined4 *)0x0) {
      puStack_4c = (undefined4 *)0x0;
    }
    else {
      puStack_4c[1] = 1;
      puStack_4c[2] = 1;
      *puStack_4c = &lbl_821A8D8C;
      if (puStack_4c + 4 != (undefined4 *)0x0) {
        fn_8227AD00(puStack_4c + 4,param_1 + 0x15cc,uVar5,uVar4,0xffffffff821b20d4,0,0,0);
      }
    }
    puStack_50 = puStack_4c + 4;
    fn_823F2E20((int *)(param_1 + 0x17c),&puStack_50);
    if (puStack_4c != (undefined4 *)0x0) {
      fn_822315A0();
    }
    uVar4 = lbl_821CC160;
    iVar1 = *(int *)(param_1 + 0x17c);
    *(undefined4 *)(iVar1 + 0xa84) = 0xf;
    *(undefined4 *)(iVar1 + 0xa4c) = uVar4;
    *(undefined4 *)(iVar1 + 0xa48) = 0;
  }
  return;
}

