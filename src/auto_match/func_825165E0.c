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
extern int fn_82359C18();
extern int fn_825166A0();
extern int fn_82516790();
extern int fn_8265C9E0();
extern int fn_8289C940();
extern int fn_82F565A0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821C27E8;
extern unsigned int uStack_60;
extern unsigned int uStack_ac;


void fn_825165E0(int *param_1)

{
  undefined4 *puVar2;
  longlong lVar1;
  undefined **ppuStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a0 [16];
  undefined4 *puStack_90;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  int *piStack_58;
  
  uStack_ac = 0;
  ppuStack_b0 = (undefined **)fn_82516790;
  uStack_60 = 0x8251679000000000;
  piStack_58 = param_1;
  puVar2 = (undefined4 *)fn_8265C9E0(0x40);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821C27E8;
    fn_82F68CC0(puVar2 + 2,&uStack_60,0x38);
    puStack_90 = puVar2;
    fn_82F565A0(auStack_80,auStack_a0);
    lVar1 = (**(code **)(*param_1 + 8))(param_1);
    fn_8289C940(lVar1 + 0x48,auStack_80);
    fn_825166A0(param_1);
    fn_82359C18(auStack_a0);
    return;
  }
  uStack_ac = 0;
  ppuStack_b0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_b0);
}

