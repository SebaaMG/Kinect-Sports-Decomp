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
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern int fn_822315A0();
extern int fn_82321370();
extern int fn_82359C18();
extern int fn_82458220();
extern int fn_82566018();
extern unsigned int iStack_8c;
extern unsigned int iStack_94;
extern unsigned int iStack_9c;
extern unsigned int lbl_821BAA3C;
extern unsigned int lbl_821BAA54;
extern unsigned int lbl_824583F0;
extern unsigned int lbl_82458428;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_78;
extern unsigned int uStack_88;


void fn_824580F0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined1 auStack_98 [4];
  int iStack_94;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined4 uStack_88;
  undefined **ppuStack_80;
  code *pcStack_7c;
  undefined4 uStack_78;
  undefined ***pppuStack_70;
  undefined **ppuStack_60;
  undefined *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined ***pppuStack_50;
  undefined **ppuStack_40;
  undefined *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined ***pppuStack_30;
  
  uVar1 = (undefined4)param_1;
  pppuStack_70 = &ppuStack_80;
  pcStack_7c = fn_82458220;
  ppuStack_80 = &lbl_821BAA3C;
  uStack_78 = uVar1;
  fn_82321370(auStack_90,param_2,&ppuStack_80);
  fn_82359C18(&ppuStack_80);
  fn_82566018(param_1 + 0xe0,auStack_90);
  pppuStack_50 = &ppuStack_60;
  ppuStack_60 = &lbl_821BAA54;
  puStack_5c = &lbl_824583F0;
  uStack_54 = uStack_88;
  uStack_58 = uVar1;
  fn_82321370(auStack_98,param_2 + 0x80,&ppuStack_60);
  fn_82359C18(&ppuStack_60);
  fn_82566018(param_1 + 0xf0,auStack_98);
  ppuStack_40 = &lbl_821BAA54;
  pppuStack_30 = &ppuStack_40;
  uStack_34 = uStack_88;
  puStack_3c = &lbl_82458428;
  uStack_38 = uVar1;
  fn_82321370(auStack_a0,param_2 + 0x20,&ppuStack_40);
  fn_82359C18(&ppuStack_40);
  fn_82566018(param_1 + 0x100,auStack_a0);
  if (iStack_9c != 0) {
    fn_822315A0();
  }
  if (iStack_94 != 0) {
    fn_822315A0();
  }
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  return;
}

