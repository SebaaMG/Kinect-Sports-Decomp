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
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern int fn_82230040();
extern int fn_822CA8E0();
extern int fn_82329730();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B0560;
extern unsigned int lbl_821B0578;
extern unsigned int lbl_821B0590;
extern unsigned int uStack_104;
extern unsigned int uStack_70;
extern unsigned int uStack_d0;
extern unsigned int uStack_f4;
extern unsigned int uStack_fc;


void fn_82327408(int *param_1)

{
  undefined4 *puVar2;
  longlong lVar1;
  undefined **ppuStack_108;
  undefined4 uStack_104;
  undefined **ppuStack_100;
  undefined4 uStack_fc;
  undefined **ppuStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined4 *puStack_e0;
  undefined8 uStack_d0;
  int *piStack_c8;
  undefined1 auStack_b0 [16];
  undefined4 *puStack_a0;
  undefined1 auStack_90 [16];
  undefined4 *puStack_80;
  undefined8 uStack_70;
  int *piStack_68;
  
  fn_822CA8E0();
  uStack_70 = 0x823277f000000000;
  piStack_68 = param_1;
  puVar2 = (undefined4 *)fn_8265C9E0(0x50);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_f4 = 0;
    ppuStack_f8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_f8);
  }
  *puVar2 = &lbl_821B0560;
  fn_82F68CC0(puVar2 + 2,&uStack_70,0x48);
  puStack_e0 = puVar2;
  lVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  fn_82329730(lVar1 + 0x30,auStack_f0);
  fn_82359C18(auStack_f0);
  uStack_70 = 0x8232789800000000;
  piStack_68 = param_1;
  puVar2 = (undefined4 *)fn_8265C9E0(0x58);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821B0578;
    fn_82F68CC0(puVar2 + 2,&uStack_70,0x50);
    puStack_80 = puVar2;
    lVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    fn_82329730(lVar1 + 0xd0,auStack_90);
    fn_82359C18(auStack_90);
    uStack_d0 = 0x823279c800000000;
    piStack_c8 = param_1;
    puVar2 = (undefined4 *)fn_8265C9E0(0x20);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &lbl_821B0590;
      fn_82F68CC0(puVar2 + 2,&uStack_d0,0x18);
      puStack_a0 = puVar2;
      lVar1 = (**(code **)(*param_1 + 0x50))(param_1);
      fn_82329730(lVar1 + 0x178,auStack_b0);
      fn_82359C18(auStack_b0);
      return;
    }
    uStack_104 = 0;
    ppuStack_108 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_108);
  }
  uStack_fc = 0;
  ppuStack_100 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_100);
}

