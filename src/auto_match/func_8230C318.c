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
extern int fn_82230040();
extern int fn_8230C750();
extern int fn_82511668();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821AF398;
extern unsigned int lbl_821AF3B8;
extern unsigned int lbl_821C2424;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;


undefined4 * fn_8230C318(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_40;
  undefined4 *puStack_38;
  undefined4 *puStack_30;
  
  uVar1 = *(undefined4 *)(param_2 + 0x114);
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[2] = uVar1;
  *param_1 = &lbl_821AF398;
  param_1[1] = 9;
  param_1[6] = &lbl_821C2424;
  uVar1 = lbl_821CC160;
  param_1[0xc] = 0;
  param_1[0xe] = uVar1;
  uStack_4c = 0;
  ppuStack_50 = (undefined **)fn_8230C750;
  uStack_40 = 0x8230c75000000000;
  puStack_38 = param_1;
  puVar2 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821AF3B8;
    fn_82F68CC0(puVar2 + 2,&uStack_40,0x18);
    puStack_30 = puVar2;
    fn_82511668(param_1 + 6,&uStack_40);
    return param_1;
  }
  uStack_4c = 0;
  ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_50);
}

