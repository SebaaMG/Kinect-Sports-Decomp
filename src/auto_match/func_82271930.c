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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_822315A0();
extern int fn_822794D0();
extern int fn_82279C58();
extern int fn_8228C2C8();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_8266F678();
extern int fn_8266F6A8();
extern int fn_82671E20();
extern int fn_82671F28();
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int lbl_821A89BC;
extern unsigned int lbl_821A8D8C;


void fn_82271930(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined1 auStack_78 [4];
  int iStack_74;
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined1 auStack_50 [4];
  int iStack_4c;
  
  puStack_7c = (undefined4 *)fn_8265C9E0(0x140);
  if (puStack_7c == (undefined4 *)0x0) {
    puStack_7c = (undefined4 *)0x0;
  }
  else {
    puVar4 = puStack_7c + 4;
    *puStack_7c = &lbl_821A8D8C;
    puStack_7c[1] = 1;
    puStack_7c[2] = 1;
    if (puVar4 != (undefined4 *)0x0) {
      fn_822794D0(puVar4,param_2,1,1,0);
      *puVar4 = &lbl_821A89BC;
    }
  }
  puStack_80 = puStack_7c + 4;
  puVar4 = (undefined4 *)(param_1 + 0x110);
  fn_823F2E20(puVar4,&puStack_80);
  if (puStack_7c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  puVar2 = (undefined4 *)fn_8265C9E0(0x140);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar2 + 4;
    *puVar2 = &lbl_821A8D8C;
    puVar2[1] = 1;
    puVar2[2] = 1;
    if (puVar3 != (undefined4 *)0x0) {
      fn_822794D0(puVar3,param_3,1,1,0);
      *puVar3 = &lbl_821A89BC;
    }
  }
  puStack_7c = puVar2;
  puStack_80 = puStack_7c + 4;
  puVar2 = (undefined4 *)(param_1 + 0x118);
  fn_823F2E20(puVar2,&puStack_80);
  if (puStack_7c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  puVar3 = (undefined4 *)fn_82279C58(auStack_78,*puVar4);
  fn_8266F6A8(*puVar3,0x20);
  if (iStack_74 != 0) {
    fn_822315A0();
  }
  puVar3 = (undefined4 *)fn_82279C58(auStack_70,*puVar4);
  fn_8266F678(*puVar3,1);
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  puVar3 = (undefined4 *)fn_82279C58(auStack_68,*puVar2);
  fn_8266F6A8(*puVar3,0x20);
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  puVar3 = (undefined4 *)fn_82279C58(auStack_60,*puVar2);
  fn_8266F678(*puVar3,1);
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  uVar1 = *(uint *)(param_1 + 4);
  if ((ulonglong)uVar1 != 0) {
    puVar3 = (undefined4 *)fn_82279C58(auStack_58,*puVar4);
    fn_82671E20(*puVar3,(ulonglong)uVar1 + 0x198);
    if (iStack_54 != 0) {
      fn_822315A0();
    }
    uVar1 = *(uint *)(param_1 + 4);
    puVar3 = (undefined4 *)fn_82279C58(auStack_50,*puVar2);
    fn_82671F28(*puVar3,(ulonglong)uVar1 + 0x198);
    if (iStack_4c != 0) {
      fn_822315A0();
    }
  }
  fn_8228C2C8(*puVar4,0xffffffff820e975c);
  fn_8228C2C8(*puVar2,0xffffffff820e975c);
  return;
}

