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
extern int fn_82230040();
extern int fn_82378100();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B374C;
extern unsigned int lbl_821B382C;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


undefined4 *
fn_82376CE0(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,int param_4,
             undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined4 *puStack_70;
  
  param_1[1] = 1;
  *param_1 = &lbl_821B374C;
  param_1[2] = 1;
  if (param_1 + 4 != (undefined4 *)0x0) {
    puVar3 = &uStack_88;
    puVar2 = (undefined8 *)(param_4 + -8);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar1 = (undefined4 *)fn_8265C9E0(0x30);
    if (puVar1 == (undefined4 *)0x0) {
      uStack_8c = 0;
      ppuStack_90 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_90);
    }
    *puVar1 = &lbl_821B382C;
    fn_82F68CC0(puVar1 + 2,auStack_80,0x28);
    puStack_70 = puVar1;
    fn_82378100(param_1 + 4,param_2,*param_3,auStack_80,*param_5,*param_6,*param_7,*param_8);
  }
  return param_1;
}

