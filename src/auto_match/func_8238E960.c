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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230040();
extern int fn_82329730();
extern int fn_82359C18();
extern int fn_8238EFD8();
extern int fn_8238F198();
extern int fn_8238F360();
extern int fn_8238F488();
extern int fn_8238F5A8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int iStack_cc;
extern unsigned int iStack_e8;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B4870;
extern unsigned int lbl_821B4888;
extern unsigned int lbl_821B48A0;
extern unsigned int lbl_821B48B8;
extern unsigned int lbl_821B48D0;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_10c;
extern unsigned int uStack_114;
extern unsigned int uStack_11c;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_e4;


int fn_8238E960(int param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined **ppuStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined **ppuStack_120;
  undefined4 uStack_11c;
  undefined **ppuStack_118;
  undefined4 uStack_114;
  undefined **ppuStack_110;
  undefined4 uStack_10c;
  undefined **ppuStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined **ppuStack_f0;
  code *pcStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined ***pppuStack_e0;
  code *pcStack_d0;
  int iStack_cc;
  undefined1 auStack_a0 [16];
  undefined4 *puStack_90;
  undefined1 auStack_80 [16];
  undefined4 *puStack_70;
  undefined1 auStack_60 [16];
  undefined4 *puStack_50;
  undefined1 auStack_40 [16];
  undefined4 *puStack_30;
  
  puVar2 = (undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  puVar1 = (undefined8 *)fn_8265C9E0(8);
  if (puVar1 == (undefined8 *)0x0) {
    uStack_104 = 0;
    ppuStack_108 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_108);
  }
  uStack_128 = 0;
  uStack_124 = 0;
  *puVar2 = puVar1;
  *puVar1 = 0;
  *(undefined4 **)*puVar2 = puVar2;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  pcStack_d0 = fn_8238F360;
  iStack_cc = param_1;
  puVar2 = (undefined4 *)fn_8265C9E0(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_10c = 0;
    ppuStack_110 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_110);
  }
  *puVar2 = &lbl_821B4870;
  fn_82F68CC0(puVar2 + 1,&pcStack_d0,0x20);
  puStack_30 = puVar2;
  fn_82329730((ulonglong)*(uint *)(param_1 + 0x78) + 0x28,auStack_40);
  fn_82359C18(auStack_40);
  pcStack_d0 = fn_8238F198;
  iStack_cc = param_1;
  puVar2 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_11c = 0;
    ppuStack_120 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_120);
  }
  *puVar2 = &lbl_821B4888;
  fn_82F68CC0(puVar2 + 1,&pcStack_d0,0x28);
  puStack_90 = puVar2;
  fn_82329730((ulonglong)*(uint *)(param_1 + 0x78) + 0xc0,auStack_a0);
  fn_82359C18(auStack_a0);
  pppuStack_e0 = &ppuStack_f0;
  uStack_e4 = uStack_100;
  ppuStack_f0 = &lbl_821B48A0;
  pcStack_ec = fn_8238EFD8;
  iStack_e8 = param_1;
  fn_82329730((ulonglong)*(uint *)(param_1 + 0x78) + 0x168,&ppuStack_f0);
  fn_82359C18(&ppuStack_f0);
  pcStack_d0 = fn_8238F488;
  iStack_cc = param_1;
  puVar2 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821B48B8;
    fn_82F68CC0(puVar2 + 1,&pcStack_d0,0x1c);
    puStack_50 = puVar2;
    fn_82329730((ulonglong)*(uint *)(param_1 + 0x78) + 0x1d8,auStack_60);
    fn_82359C18(auStack_60);
    pcStack_d0 = fn_8238F5A8;
    iStack_cc = param_1;
    puVar2 = (undefined4 *)fn_8265C9E0(0x30);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &lbl_821B48D0;
      fn_82F68CC0(puVar2 + 1,&pcStack_d0,0x2c);
      puStack_70 = puVar2;
      fn_82329730((ulonglong)*(uint *)(param_1 + 0x78) + 0x268,auStack_80);
      fn_82359C18(auStack_80);
      return param_1;
    }
    uStack_114 = 0;
    ppuStack_118 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_118);
  }
  uStack_12c = 0;
  ppuStack_130 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_130);
}

