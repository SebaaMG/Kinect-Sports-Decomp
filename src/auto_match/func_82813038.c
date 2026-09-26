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
extern int fn_8265CAA0();
extern int fn_82813538();
extern int fn_82813A10();
extern int fn_82813AE0();
extern int fn_828140F0();
extern int fn_82A1E2C0();
extern int fn_82A1E650();
extern unsigned int lbl_8201E080;
extern unsigned int lbl_821B4200;
extern unsigned int lbl_8320A3FC;
extern unsigned int lbl_8320A420;


void fn_82813038(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar3;
  int iVar2;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  
  *param_1 = &lbl_8201E080;
  fn_82813A10(0xffffffff8320a3fc);
  puStack_40 = (undefined4 *)&lbl_8320A3FC;
  puStack_3c = &lbl_8320A420;
  if (lbl_8320A420 == param_1) {
    lbl_8320A420 = (undefined4 *)param_1[0x32];
  }
  else {
    piVar4 = lbl_8320A420 + 0x32;
    iVar2 = *piVar4;
    while (iVar2 != 0) {
      puVar1 = (undefined4 *)*piVar4;
      if (puVar1 == param_1) {
        *piVar4 = param_1[0x32];
        break;
      }
      piVar4 = puVar1 + 0x32;
      iVar2 = puVar1[0x32];
    }
  }
  fn_82813538(&puStack_40);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    sync(0);
  }
  if (*(char *)(param_1 + 0x1e) == '\0') {
    *(undefined1 *)(param_1 + 0x1e) = 1;
    sync(0);
  }
  if (*(char *)(param_1 + 0x2e) == '\0') {
    *(undefined1 *)(param_1 + 0x2e) = 1;
    sync(0);
  }
  while (cVar3 = fn_82813AE0(param_1 + 2,&puStack_40), cVar3 != '\0') {
    if (*(char *)(puStack_40 + 5) != '\0') {
      (**(code **)*puStack_40)(puStack_40,1);
    }
  }
  while (cVar3 = fn_82813AE0(param_1 + 0x12,&puStack_40), cVar3 != '\0') {
    if (*(char *)(puStack_40 + 5) != '\0') {
      (**(code **)*puStack_40)(puStack_40,1);
    }
  }
  while (cVar3 = fn_82813AE0(param_1 + 0x22,&puStack_40), cVar3 != '\0') {
    *(undefined1 *)((int)puStack_40 + 0x15) = 0;
    if (*(char *)(puStack_40 + 5) != '\0') {
      (**(code **)*puStack_40)(puStack_40,1);
    }
  }
  iVar2 = param_1[0x33];
  if (iVar2 != 0) {
    if ((uint)param_1[0x35] < (uint)param_1[0x34]) {
      do {
        fn_82A1E2C0(*(undefined4 *)(param_1[0x35] * 0x30 + iVar2 + 4));
        iVar2 = param_1[0x33];
        do {
        } while (*(char *)(param_1[0x35] * 0x30 + iVar2 + 0x2c) == '\0');
        param_1[0x35] = param_1[0x35] + 1;
      } while ((uint)param_1[0x35] < (uint)param_1[0x34]);
    }
    lVar6 = (ulonglong)(uint)param_1[0x34] - 1;
    if (-1 < lVar6) {
      lVar5 = lVar6 * 0x30;
      do {
        do {
          iVar2 = fn_82A1E650(*(undefined4 *)((int)lVar5 + param_1[0x33] + 4),0xffffffffffffffff);
        } while (iVar2 != 0);
        lVar6 = lVar6 + -1;
        lVar5 = lVar5 + -0x30;
      } while (-1 < lVar6);
    }
    fn_8265CAA0(param_1[0x33]);
  }
  KeTlsFree(param_1[0x36]);
  fn_828140F0(param_1 + 0x22);
  fn_828140F0(param_1 + 0x12);
  fn_828140F0(param_1 + 2);
  *param_1 = &lbl_821B4200;
  return;
}

