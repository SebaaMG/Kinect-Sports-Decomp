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
extern unsigned int *auStack_50;
extern unsigned int *auStack_54;
extern unsigned int *auStack_58;
extern unsigned int *auStack_5c;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8262FEC8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_8263C910();
extern int fn_826438C0();
extern int fn_82837D98();
extern unsigned int lbl_821C9048;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uStack_60;


undefined4 * fn_825C53E0(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_60;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined4 auStack_50 [4];
  int aiStack_40 [16];
  
  param_1[1] = param_2;
  param_1[2] = 0;
  *param_1 = &lbl_821C9048;
  fn_82520158(0xffffffff821c8f98,&uStack_60,0);
  fn_82520158(0xffffffff821c8fb4,auStack_5c,0);
  fn_82520158(0xffffffff821c8fd0,auStack_58,0);
  fn_82520158(0xffffffff821c8ff0,auStack_54,0);
  fn_82520158(0xffffffff821c900c,auStack_50,0);
  uVar1 = fn_8251F720(&uStack_60,0);
  uVar2 = fn_82631830();
  param_1[3] = uVar2;
  fn_8251FA58(uVar1);
  uVar1 = fn_8251F720(auStack_5c,0);
  uVar2 = fn_82631830();
  param_1[4] = uVar2;
  fn_8251FA58(uVar1);
  uVar1 = fn_8251F720(auStack_58,0);
  uVar2 = fn_82631488();
  param_1[5] = uVar2;
  fn_8251FA58(uVar1);
  uVar1 = fn_8251F720(auStack_54,0);
  uVar2 = fn_82631830();
  param_1[6] = uVar2;
  fn_8251FA58(uVar1);
  uVar1 = fn_8251F720(auStack_50,0);
  uVar2 = fn_82631488();
  param_1[7] = uVar2;
  fn_8251FA58(uVar1);
  uVar1 = fn_82631BF8(0xffffffff831c0310);
  uStack_60 = 0x20;
  fn_826438C0(param_1[3],0,uVar1,&uStack_60,0);
  fn_8262FEC8(uVar1);
  uVar1 = fn_82631BF8(0xffffffff831c0340);
  uStack_60 = 0x14;
  fn_826438C0(param_1[4],0,uVar1,&uStack_60,0);
  fn_8262FEC8(uVar1);
  uVar1 = fn_82631BF8(0xffffffff831c0364);
  uStack_60 = 8;
  fn_826438C0(param_1[6],0,uVar1,&uStack_60,0);
  fn_8262FEC8(uVar1);
  aiStack_40[1] = 0;
  aiStack_40[2] = 0;
  aiStack_40[3] = 0;
  aiStack_40[0] =
       0x800 - (int)((((longlong)(int)(lbl_8326B434 + 0xfU & 0xfffffff0) *
                       (longlong)(int)(((lbl_8326B430 + 0x4fU) / 0x50) * 0x50) & 0x3fffffffU) << 2)
                    / 0x1400);
  uVar2 = fn_8263C910(lbl_8326B430,lbl_8326B434,0x18280186,0,aiStack_40);
  param_1[10] = uVar2;
  fn_82520158(0xffffffff821c9028,auStack_50,0);
  iVar3 = fn_8251F720(auStack_50,0);
  param_1[8] = iVar3;
  fn_82837D98(*(undefined4 *)(iVar3 + 0x14),0,auStack_50);
  param_1[0xb] = lbl_821CC160;
  param_1[9] = auStack_50[0];
  return param_1;
}

