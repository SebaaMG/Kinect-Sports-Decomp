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
extern int fn_82B7BD28();
extern int fn_82BBFD90();
extern int fn_82BC24F0();
extern int fn_82BC5758();
extern int fn_82BC5ED8();
extern unsigned int lbl_820E4D54;
extern unsigned int lbl_820E4D90;
extern unsigned int lbl_820E4E4C;


undefined4 * fn_82BC6450(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  fn_82BC5758(param_1,param_4);
  param_1[0x25] = param_3;
  param_1[0x22] = param_2;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *param_1 = &lbl_820E4E4C;
  *(undefined1 *)((int)param_1 + 0x8d) = 0;
  uVar1 = *(undefined4 *)(param_4 + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x90);
  puVar4 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    fn_82BC5758(puVar4,param_4);
    puVar2[0x23] = param_1;
    *puVar4 = &lbl_820E4D54;
  }
  param_1[0x26] = puVar4;
  uVar1 = *(undefined4 *)(param_4 + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x90);
  puVar4 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    fn_82BC5758(puVar4,param_4);
    puVar2[0x23] = param_1;
    *puVar4 = &lbl_820E4D90;
  }
  param_1[0x27] = puVar4;
  fn_82BC5ED8(param_1[0x26],param_1);
  iVar3 = fn_82BC24F0(0x7d,param_4);
  uVar1 = param_1[0x22];
  param_1[0x24] = iVar3;
  *(undefined4 *)(iVar3 + 0x50) = 0x27;
  *(undefined4 *)(iVar3 + 0x38) = uVar1;
  iVar3 = param_1[0x24];
  fn_82BBFD90(iVar3,param_1[0x1d]);
  *(undefined4 **)(iVar3 + 0x3b4) = param_1;
  return param_1;
}

