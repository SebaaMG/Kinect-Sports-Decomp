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
extern int fn_82230040();
extern int fn_822770B0();
extern int fn_82520158();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


int fn_822743D8(int param_1)

{
  undefined8 *puVar2;
  ulonglong uVar1;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar6;
  longlong lVar5;
  undefined4 auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined **ppuStack_38;
  undefined4 uStack_34;
  
  *(undefined4 *)(param_1 + 8) = 0;
  uVar3 = lbl_821CC160;
  puVar4 = (undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0xc) = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  puVar2 = (undefined8 *)fn_8265C9E0(8);
  if (puVar2 == (undefined8 *)0x0) {
    uStack_34 = 0;
    ppuStack_38 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_38);
  }
  uStack_48 = 0;
  puVar6 = (undefined4 *)(param_1 + 0x5c);
  uStack_44 = 0;
  *puVar4 = puVar2;
  *puVar2 = 0;
  *(undefined4 **)*puVar4 = puVar4;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  puVar2 = (undefined8 *)fn_8265C9E0(8);
  if (puVar2 != (undefined8 *)0x0) {
    uStack_44 = 0;
    uStack_48 = 0;
    *puVar6 = puVar2;
    *puVar2 = 0;
    *(undefined4 **)*puVar6 = puVar6;
    auStack_50[0] = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    fn_82520158(0xffffffff821a800c,auStack_50,0);
    lVar5 = 0;
    puVar4 = (undefined4 *)(param_1 + -4);
    do {
      uVar1 = fn_8265C9E0(0x5c);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_822770B0(uVar1,auStack_50,lVar5);
      }
      lVar5 = lVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = uVar3;
    } while ((int)lVar5 < 2);
    return param_1;
  }
  uStack_3c = 0;
  ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_40);
}

