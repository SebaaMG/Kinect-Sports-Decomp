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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82522DF8();
extern int fn_8262FEC8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_826438C0();
extern int fn_82837D98();


undefined4 * fn_825B36E0(int param_1)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_30 [4];
  undefined4 auStack_2c [11];
  
  puVar2 = (undefined4 *)fn_82522DF8(0x30);
  fn_82520158(0xffffffff821c832c,auStack_30,0);
  fn_82520158(0xffffffff821c8340,auStack_2c,0);
  uVar1 = fn_8251F720(auStack_2c,0);
  uVar3 = fn_82631830();
  *puVar2 = uVar3;
  fn_8251FA58(uVar1);
  uVar1 = fn_8251F720(auStack_30,0);
  uVar3 = fn_82631488();
  puVar2[1] = uVar3;
  fn_8251FA58(uVar1);
  fn_82520158(0xffffffff821c8354,auStack_30,0);
  uVar1 = fn_8251F720(auStack_30,0);
  uVar3 = fn_82631488();
  puVar2[2] = uVar3;
  fn_8251FA58(uVar1);
  fn_82520158(0xffffffff821c836c,auStack_30,0);
  uVar1 = fn_8251F720(auStack_30,0);
  uVar3 = fn_82631488();
  puVar2[3] = uVar3;
  fn_8251FA58(uVar1);
  fn_82520158(0xffffffff821c838c,auStack_30,0);
  uVar1 = fn_8251F720(auStack_30,0);
  uVar3 = fn_82631488();
  puVar2[4] = uVar3;
  fn_8251FA58(uVar1);
  fn_82520158(0xffffffff821c83ac,auStack_30,0);
  uVar1 = fn_8251F720(auStack_30,0);
  uVar3 = fn_82631488();
  puVar2[5] = uVar3;
  fn_8251FA58(uVar1);
  auStack_2c[0] = 0x10;
  uVar1 = fn_82631BF8(0xffffffff831c0648);
  fn_826438C0(*puVar2,0,uVar1,auStack_2c,0);
  fn_8262FEC8(uVar1);
  fn_82520158(0xffffffff821c83d4,auStack_2c,0);
  iVar4 = fn_8251F720(auStack_2c,0);
  puVar2[7] = iVar4;
  fn_82837D98(*(undefined4 *)(iVar4 + 0x14),0,auStack_2c);
  puVar2[8] = auStack_2c[0];
  fn_82520158(0xffffffff821c83f4,auStack_2c,0);
  iVar4 = fn_8251F720(auStack_2c,0);
  puVar2[9] = iVar4;
  fn_82837D98(*(undefined4 *)(iVar4 + 0x14),0,auStack_2c);
  puVar2[10] = auStack_2c[0];
  puVar2[0xb] = *(undefined4 *)(param_1 + 0x828);
  *(undefined4 **)(param_1 + 0x938) = puVar2;
  return puVar2;
}

