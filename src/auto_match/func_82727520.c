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
extern unsigned int *auStack_110;
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern int fn_8267BF50();
extern int fn_8267C488();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_827266E8();
extern int fn_82726AB8();
extern int fn_8278B290();
extern int fn_8278BC18();
extern int fn_8278BD68();
extern int fn_8278C528();
extern int fn_8278D3F0();
extern int fn_8278DAD0();
extern int fn_82794C90();
extern int fn_82794D68();
extern unsigned int lbl_82010C6C;
extern unsigned int uStack_11a;
extern unsigned int uStack_11c;
extern unsigned int uStack_11e;
extern unsigned int uStack_120;
extern unsigned int uStack_122;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_13a;
extern unsigned int uStack_13c;
extern unsigned int uStack_13e;
extern unsigned int uStack_140;
extern unsigned int uStack_142;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;


void fn_82727520(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined2 uStack_144;
  undefined2 uStack_142;
  undefined2 uStack_140;
  undefined2 uStack_13e;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  undefined **ppuStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined2 uStack_124;
  undefined2 uStack_122;
  undefined2 uStack_120;
  undefined2 uStack_11e;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  undefined1 auStack_110 [48];
  undefined **appuStack_e0 [8];
  undefined **appuStack_c0 [8];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [112];
  
  uVar3 = fn_8267BF50();
  fn_826FDED0(auStack_110,uVar3);
  uStack_148 = 0;
  uStack_144 = 0;
  ppuStack_150 = &lbl_82010C6C;
  uStack_142 = 0;
  uStack_140 = 0;
  uStack_13e = 0;
  uStack_13c = 0;
  uStack_13a = 0;
  uStack_14c = 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + 8);
  iVar2 = *(int *)(iVar1 + 0x1c);
  iVar1 = *(int *)(iVar1 + 0x18);
  if ((*(ushort *)(*(int *)(param_1 + 0x9c) + 0x50) >> 0xb & 1) == 0) {
    fn_827266E8(param_1,auStack_110,&ppuStack_150);
    if (iVar2 != 0) {
      uVar3 = fn_8278D3F0(auStack_a0,iVar2,auStack_110);
      fn_82726AB8(auStack_110,uVar3);
      fn_826FDF58(auStack_a0);
    }
    if (iVar1 != 0) {
      uVar3 = fn_8278C528(appuStack_c0,iVar1,&ppuStack_150);
      fn_8278BD68(&ppuStack_150,uVar3);
      appuStack_c0[0] = &lbl_82010C6C;
      fn_8278B290(appuStack_c0);
      fn_8267C488(appuStack_c0);
    }
  }
  else {
    if (iVar2 != 0) {
      fn_82726AB8(auStack_110,iVar2);
    }
    if (iVar1 != 0) {
      fn_8278BD68(&ppuStack_150,iVar1);
    }
    uVar3 = fn_8267BF50(param_1);
    fn_826FDED0(auStack_a0,uVar3);
    ppuStack_130 = &lbl_82010C6C;
    uStack_12c = 1;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_122 = 0;
    uStack_120 = 0;
    uStack_11e = 0;
    uStack_11c = 0;
    uStack_11a = 0;
    fn_8278DAD0(auStack_a0);
    fn_8278BC18(&ppuStack_130);
    uVar3 = fn_8278D3F0(auStack_70,auStack_a0,auStack_110);
    fn_82726AB8(auStack_110,uVar3);
    fn_826FDF58(auStack_70);
    uVar3 = fn_8278C528(appuStack_e0,&ppuStack_130,&ppuStack_150);
    fn_8278BD68(&ppuStack_150,uVar3);
    appuStack_e0[0] = &lbl_82010C6C;
    fn_8278B290(appuStack_e0);
    fn_8267C488(appuStack_e0);
    ppuStack_130 = &lbl_82010C6C;
    fn_8278B290(&ppuStack_130);
    fn_8267C488(&ppuStack_130);
    fn_826FDF58(auStack_a0);
  }
  fn_82794C90(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 8),auStack_110);
  fn_82794D68(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 8),&ppuStack_150);
  ppuStack_150 = &lbl_82010C6C;
  fn_8278B290(&ppuStack_150);
  fn_8267C488(&ppuStack_150);
  fn_826FDF58(auStack_110);
  return;
}

