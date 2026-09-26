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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_82233428();
extern int fn_823BBA98();
extern int fn_8265C9E0();
extern int fn_828E2680();
extern int fn_828E2688();
extern int fn_828E3508();
extern int fn_828E3AE0();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82196C78;
extern unsigned int lbl_821982A0;
extern unsigned int lbl_821982D0;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B5DEC;
extern unsigned int lbl_821B5E04;


undefined4 * fn_823BB8A0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  fn_82233428();
  *param_1 = &lbl_821982D0;
  puVar6 = param_1 + 0xc;
  param_1[10] = &lbl_821968A4;
  fn_823BBA98(puVar6);
  puVar4 = param_1 + 0x2a;
  param_1[0xc] = &lbl_821982A0;
  fn_828E3508(puVar4);
  param_1[0x3c] = 0;
  param_1[0x42] = 0;
  param_1[0x2a] = &lbl_82196C78;
  fn_82230110(auStack_80,0xffffffff821b5d7c);
  fn_828E3AE0(puVar6,auStack_80);
  fn_82230300(auStack_80,1,0);
  puVar2 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AD588;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[4] = 0;
      puVar2[3] = &lbl_821B5E04;
    }
  }
  puVar5 = puVar2 + 3;
  cVar3 = fn_828E2688(puVar6);
  if (cVar3 == '\0') {
    iVar1 = param_1[0x27];
    param_1[0x27] = puVar2;
    puVar2 = (undefined4 *)0x0;
    param_1[0x26] = puVar5;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_823bb9b4;
    }
  }
  else {
LAB_823bb9b4:
    if (puVar2 != (undefined4 *)0x0) {
      fn_822315A0(puVar2);
    }
  }
  puVar2 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AD588;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[4] = 0;
      puVar2[3] = &lbl_821B5DEC;
    }
  }
  puVar5 = puVar2 + 3;
  cVar3 = fn_828E2688(puVar6);
  if (cVar3 == '\0') {
    iVar1 = param_1[0x29];
    param_1[0x29] = puVar2;
    puVar2 = (undefined4 *)0x0;
    param_1[0x28] = puVar5;
    if (iVar1 == 0) goto LAB_823bba50;
    fn_822315A0();
  }
  if (puVar2 != (undefined4 *)0x0) {
    fn_822315A0(puVar2);
  }
LAB_823bba50:
  fn_82230110(auStack_60,0xffffffff821b5d8c);
  fn_828E3AE0(puVar4,auStack_60);
  fn_82230300(auStack_60,1,0);
  fn_828E2680(puVar4,1);
  return param_1;
}

