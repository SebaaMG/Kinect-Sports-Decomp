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
extern int fn_822315A0();
extern int fn_82358058();
extern int fn_82417020();
extern int fn_82417870();
extern int fn_825117D8();
extern int fn_8251FA58();
extern int fn_82529320();
extern int fn_82536590();
extern int fn_82552B50();
extern int fn_825604A0();
extern int fn_825708F0();
extern int fn_82575DF0();
extern int fn_8265CA20();
extern int fn_8288B020();
extern unsigned int lbl_821B27B8;
extern unsigned int lbl_83297800;


void fn_8235B580(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  *param_1 = &lbl_821B27B8;
  if (param_1[0xb2e] != 0) {
    fn_8251FA58();
    param_1[0xb2e] = 0;
  }
  if (param_1[0xb00] != 0) {
    fn_82575DF0(*(undefined4 *)(param_1[0xb37] + 0x93c));
  }
  piVar4 = param_1 + 0xb0a;
  lVar3 = 0x18;
  do {
    if (*piVar4 != 0) {
      fn_82529320(*piVar4,0);
      *piVar4 = 0;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 1;
  } while (lVar3 != 0);
  piVar4 = param_1 + 0xaf1;
  lVar3 = 4;
  do {
    if (*piVar4 != 0) {
      fn_82529320(*piVar4,0);
      *piVar4 = 0;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 1;
  } while (lVar3 != 0);
  iVar2 = param_1[0xaf5];
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == 2)) {
    *(undefined4 *)(iVar2 + 0xc) = 3;
  }
  if (param_1[0xaf0] != 0) {
    fn_82529320(param_1[0xaf0],0);
    param_1[0xaf0] = 0;
  }
  if (param_1[0x6e7] != 0) {
    fn_8251FA58();
    param_1[0x6e7] = 0;
    param_1[0x6e8] = 0;
  }
  if (param_1[0x6e9] != 0) {
    fn_8251FA58();
    param_1[0x6e9] = 0;
    param_1[0x6ea] = 0;
  }
  if (param_1[0x6eb] != 0) {
    fn_8251FA58();
    param_1[0x6eb] = 0;
    param_1[0x6ec] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x6ee];
  for (puVar5 = (undefined4 *)param_1[0x6ed]; puVar5 != puVar1; puVar5 = puVar5 + 3) {
    fn_8251FA58(*puVar5);
  }
  puVar5 = (undefined4 *)param_1[0xaea];
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
    param_1[0xaea] = 0;
  }
  iVar2 = param_1[0x65];
  if (iVar2 != 0) {
    fn_825708F0(*(undefined4 *)(iVar2 + 0x2c0),*(undefined4 *)(iVar2 + 700));
    fn_825604A0(iVar2 + 0x10);
    fn_8265CA20(iVar2);
    param_1[0x65] = 0;
  }
  fn_82536590(param_1 + 0x534,0);
  fn_82536590(param_1 + 0x53c,0);
  fn_82552B50(param_1 + 0xad7,1);
  fn_82552B50(param_1 + 0xada,1);
  fn_82552B50(param_1 + 0xadd,1);
  iVar2 = 0;
  if (0 < (int)param_1[0x301]) {
    puVar5 = param_1 + 0x7b0;
    do {
      fn_82417870(puVar5,param_1[0xb36],param_1[0xb37]);
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 0x108;
    } while (iVar2 < (int)param_1[0x301]);
  }
  if (param_1[0xad4] != 0) {
    fn_8265CA20();
    param_1[0xad4] = 0;
  }
  iVar2 = lbl_83297800;
  if (lbl_83297800 == 0) {
    iVar2 = fn_825117D8();
  }
  if (*(char *)(iVar2 + 8) != '\0') {
    iVar2 = lbl_83297800;
    if (lbl_83297800 == 0) {
      iVar2 = fn_825117D8();
    }
    fn_8288B020(*(undefined4 *)(iVar2 + 4),0x1b,param_1[0xad5] == 1);
  }
  puVar5 = param_1 + 0xac8;
  lVar3 = 2;
  do {
    puVar5 = puVar5 + -0x108;
    fn_82417020(puVar5);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  iVar2 = param_1[0x6ed];
  if (iVar2 != 0) {
    for (; iVar2 != param_1[0x6ee]; iVar2 = iVar2 + 0xc) {
    }
    fn_8265CA20();
  }
  param_1[0x6ed] = 0;
  param_1[0x6ee] = 0;
  param_1[0x6ef] = 0;
  if (param_1[100] != 0) {
    fn_822315A0();
  }
  if (param_1[0x62] != 0) {
    fn_822315A0();
  }
  if (param_1[0x60] != 0) {
    fn_822315A0();
  }
  fn_82358058(param_1);
  return;
}

