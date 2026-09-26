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
extern int fn_822315A0();
extern int fn_8223B688();
extern int fn_822C70F0();
extern int fn_82365BD8();
extern int fn_82511668();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821ADB5C;
extern unsigned int lbl_821ADB70;
extern unsigned int lbl_821C2424;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


undefined4 *
fn_822DD8B0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,int param_7)

{
  undefined4 *puVar1;
  undefined **ppuStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 *puStack_48;
  undefined4 *puStack_40;
  
  fn_822C70F0();
  param_1[0x15] = param_4;
  param_1[0x16] = param_5;
  *param_1 = &lbl_821ADB5C;
  fn_8223B688(param_1 + 0x17,param_6);
  fn_82365BD8(param_1 + 0x1e,param_7);
  param_1[0x20] = &lbl_821C2424;
  param_1[0x26] = 0;
  param_1[0x14] = 1;
  uStack_50 = 0x822ddcb000000000;
  puStack_48 = param_1;
  puVar1 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_821ADB70;
    fn_82F68CC0(puVar1 + 2,&uStack_50,0x18);
    puStack_40 = puVar1;
    fn_82511668(param_1 + 0x20,&uStack_50);
    if (*(int *)(param_7 + 4) != 0) {
      fn_822315A0();
    }
    return param_1;
  }
  uStack_54 = 0;
  ppuStack_58 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_58);
}

