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
extern unsigned int *auStack_5c;
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82684998();
extern int fn_82685408();
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002B70;
extern unsigned int lbl_82002BD4;
extern unsigned int lbl_831E7E64;
extern unsigned int lbl_831E7E78;


void fn_8266E628(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  int aiStack_68 [3];
  undefined1 auStack_5c [92];
  
  iVar2 = fn_8267B890(lbl_831E7E64,0x10,0);
  if (iVar2 == 0) {
    aiStack_68[0] = 0;
  }
  else {
    aiStack_68[0] = fn_82685408();
  }
  puStack_6c = (undefined4 *)fn_8267B890(lbl_831E7E64,0xc,0);
  if (puStack_6c == (undefined4 *)0x0) {
    puStack_6c = (undefined4 *)0x0;
  }
  else {
    puStack_6c[1] = 1;
    puStack_6c[2] = 0x1e;
    *puStack_6c = &lbl_82002B70;
  }
  puVar3 = (undefined4 *)fn_8267B890(lbl_831E7E64,0xc,0);
  puStack_70 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 1;
    puVar3[2] = 10;
    lbl_831E7E78 = 0;
    *puVar3 = &lbl_82002BD4;
    puStack_70 = puVar3;
  }
  fn_82684998(param_1,&puStack_70,&puStack_6c,aiStack_68);
  if (puStack_70 != (undefined4 *)0x0) {
    fn_8267C4F0();
  }
  if (puStack_6c != (undefined4 *)0x0) {
    fn_8267C4F0();
  }
  if (aiStack_68[0] != 0) {
    fn_8267C4F0();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  lVar4 = 4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = lbl_82002AE0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  puVar3 = (undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  do {
    puVar3[0xf] = uVar1;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 1;
    puVar3[8] = 1;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0x10] = 0;
    puVar3 = puVar3 + 0xe;
    *puVar3 = uVar1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  puVar3 = (undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  lVar4 = 4;
  do {
    puVar3 = puVar3 + 0xe;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_5c,0,0x30);
}

