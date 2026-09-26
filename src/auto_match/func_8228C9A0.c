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
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279768();
extern int fn_82279C58();
extern int fn_82279D28();
extern int fn_8228D478();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_8248F4B8();
extern int fn_82672C20();
extern int fn_82BA02A8();
extern unsigned int iStack_8c;
extern unsigned int lbl_82195518;
extern unsigned int lbl_821A7FF4;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_821A998C;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


/* WARNING: Removing unreachable block (ram,0x8228c9dc) */

undefined4 *
fn_8228C9A0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,int param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  code *pcStack_6c;
  undefined ***pppuStack_60;
  
  pcStack_6c = fn_8248F4B8;
  pppuStack_60 = &ppuStack_70;
  ppuStack_70 = &lbl_821A7FF4;
  fn_82279768(param_1,param_2,0,1,1,&ppuStack_70,0,1);
  *param_1 = &lbl_821A998C;
  param_1[0x4c] = &lbl_821A8C90;
  param_1[0x51] = 0;
  fn_822C5B18(param_1 + 0x52,param_8);
  param_1[0x5c] = param_3;
  param_1[0x5d] = param_4;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 1;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = param_5;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 1;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x60] = *param_7;
  param_1[0x4d] = param_1;
  param_1[0x4e] = fn_8228D478;
  param_1[0x4f] = fn_82BA02A8;
  param_1[0x50] = fn_82BA02A8;
  uStack_80 = 0;
  uStack_7c = 0;
  param_1[0x29] = param_1 + 0x4c;
  fn_82273CD8(&uStack_80,3);
  uStack_78 = lbl_82195518;
  puVar1 = (undefined4 *)fn_82279C58(auStack_90,param_1);
  fn_82672C20(*puVar1,0xffffffff821a9834,&uStack_80,1);
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  fn_82273C88(&uStack_80);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  *(undefined4 *)(iVar2 + 0x60) = 1;
  if ((param_6 != 0) && (param_1[99] == 0)) {
    fn_82279D28(param_1,1,1);
    param_1[99] = 1;
  }
  fn_82359C18(param_8);
  return param_1;
}

