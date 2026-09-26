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
extern int fn_822F0958();
extern int fn_82365BD8();
extern int fn_82511668();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821ADF3C;
extern unsigned int lbl_821AE4C4;
extern unsigned int lbl_821AE4E4;
extern unsigned int lbl_821C2424;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;


undefined4 *
fn_822EFC50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcStack_70;
  undefined4 uStack_6c;
  undefined **ppuStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  undefined4 *puStack_50;
  
  iVar1 = fn_82365BD8(&pcStack_70,param_6);
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[1] = 4;
  *param_1 = &lbl_821ADF3C;
  param_1[5] = param_5;
  fn_82365BD8(param_1 + 6,iVar1);
  param_1[8] = param_7;
  if (*(int *)(iVar1 + 4) != 0) {
    fn_822315A0();
  }
  *param_1 = &lbl_821AE4C4;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = &lbl_821C2424;
  param_1[0x12] = 0;
  pcStack_70 = fn_822F0958;
  uStack_6c = 0;
  uStack_60 = 0x822f095800000000;
  puStack_58 = param_1;
  puVar2 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821AE4E4;
    fn_82F68CC0(puVar2 + 2,&uStack_60,0x18);
    puStack_50 = puVar2;
    fn_82511668(param_1 + 0xc,&uStack_60);
    if (*(int *)(param_6 + 4) != 0) {
      fn_822315A0();
    }
    return param_1;
  }
  uStack_64 = 0;
  ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_68);
}

