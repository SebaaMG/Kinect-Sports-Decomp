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
extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82279AF0();
extern int fn_82279C58();
extern int fn_82279CA0();
extern int fn_822848B8();
extern int fn_8229E090();
extern int fn_82359C18();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int iStack_1c;
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int lbl_821A998C;
extern unsigned int lbl_832975B0;


void fn_8228CBC8(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar2;
  int iVar5;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  *param_1 = &lbl_821A998C;
  piVar3 = (int *)fn_82279C58(auStack_30,param_1);
  iVar5 = *piVar3;
  if (iStack_2c != 0) {
    fn_822315A0(iStack_2c);
  }
  if (iVar5 != 0) {
    puVar4 = (undefined4 *)fn_82279C58(auStack_28,param_1);
    uVar1 = *puVar4;
    uVar2 = fn_8266F6B8();
    fn_826728E8(uVar1,0xffffffff821a9828,uVar2);
    if (iStack_24 != 0) {
      fn_822315A0();
    }
    puVar4 = (undefined4 *)fn_82279C58(auStack_20,param_1);
    uVar1 = *puVar4;
    uVar2 = fn_8266F6B8();
    fn_826728E8(uVar1,0xffffffff821a84fc,uVar2);
    if (iStack_1c != 0) {
      fn_822315A0();
    }
  }
  if (param_1[0x5e] != 0) {
    fn_8229E090(param_1[0x5e],0,1);
    param_1[0x5e] = 0;
  }
  param_1[0x62] = 0;
  param_1[100] = 0;
  fn_82279CA0(param_1,1);
  if (param_1[0x51] != 0) {
    fn_822848B8();
    param_1[0x51] = 0;
  }
  if (param_1[0x5e] != 0) {
    fn_8229E090(param_1[0x5e],0,0);
    param_1[0x5e] = 0;
  }
  if (param_1[0x5f] != 0) {
    fn_8229E090(param_1[0x5f],0,0);
    param_1[0x5f] = 0;
  }
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  *(undefined4 *)(iVar5 + 0x60) = 0;
  fn_82359C18(param_1 + 0x52);
  fn_82279AF0(param_1);
  return;
}

