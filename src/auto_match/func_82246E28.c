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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82359C18();
extern int fn_82511928();
extern int fn_82513A80();
extern int fn_82517DC8();
extern int fn_8265C9E0();
extern int fn_8289C940();
extern int fn_82F565A0();
extern int fn_82F68CC0();
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_82197950;
extern unsigned int lbl_82197990;
extern unsigned int lbl_82197AB4;
extern unsigned int lbl_83297810;
extern unsigned int uStack_60;
extern unsigned int uStack_ac;


undefined4 * fn_82246E28(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iStack_b8;
  int iStack_b4;
  undefined **ppuStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a0 [16];
  undefined4 *puStack_90;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined4 *puStack_58;
  
  fn_82517DC8();
  *param_1 = &lbl_82197950;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1a] = &lbl_82197990;
  param_1[0x21] = 0;
  uVar3 = (ulonglong)lbl_83297810;
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x50);
  if (uVar3 == 0) {
    uVar3 = fn_82511928();
  }
  fn_82513A80(&iStack_b8,uVar3,uVar1);
  if (iStack_b8 != 0) {
    *(undefined4 **)(iStack_b8 + 0x38) = param_1;
  }
  uStack_60 = 0x8224891000000000;
  puStack_58 = param_1;
  puVar2 = (undefined4 *)fn_8265C9E0(0x40);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_82197AB4;
    fn_82F68CC0(puVar2 + 2,&uStack_60,0x38);
    puStack_90 = puVar2;
    fn_82F565A0(auStack_80,auStack_a0);
    fn_8289C940((ulonglong)(uint)param_1[0xd] + 0x144,auStack_80);
    fn_82359C18(auStack_a0);
    if (iStack_b4 != 0) {
      fn_822315A0();
    }
    return param_1;
  }
  uStack_ac = 0;
  ppuStack_b0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_b0);
}

